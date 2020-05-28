#include "pch.h"
#include "CppUnitTest.h"
#include "../OOP/langtype_atd.h"
#include "../OOP/objectoriented_atd.h"
#include "../OOP/functional_atd.h"
#include "../OOP/procedure_atd.h"
#include "../OOP/container_atd.h"
using namespace simple_langtypes;

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace OOPTests
{
	TEST_CLASS(ProcedureTests)
	{
	public:
		TEST_METHOD(ProcedureInDataTest)
		{
			string inputPath = "../../Text_files/procedure_in.txt";
			ifstream infile(inputPath);
			Procedure* proc = new Procedure;
			Langtype* l = proc;
			proc->InData(infile);
			infile.close();
			Assert::IsTrue(proc->GetIsAbstract() == 0);
			Assert::IsTrue(proc->GetYear() == 2012);
			Assert::IsTrue(l->GetMentions() == 1);
		}
		TEST_METHOD(ProcedureOutTest)
		{
			string outPath = "../../Text_files/procedure_out.txt";
			ofstream output(outPath);
			Procedure* proc = new Procedure;
			Langtype* l = proc;
			proc->SetIsAbstract(0);
			proc->SetYear(1997);
			l->SetMentions(1);
			l->Out(output);
			output.close();
			ifstream infile(outPath);
			std::stringstream buffer;
			buffer << infile.rdbuf();
			string result = buffer.str();
			string ideal = "It is a procedure language: is abstract = 0, year = 1997\nmentions = 1\n";
			Assert::AreEqual(ideal, result);
		}
		TEST_METHOD(ProcedureOutProcedureTest)
		{
			string outPath = "../../Text_files/procedure_outProcedure.txt";
			ofstream output(outPath);
			Procedure* proc = new Procedure;
			Langtype* l = proc;
			proc->SetIsAbstract(0);
			proc->SetYear(1997);
			l->SetMentions(1);
			l->OutProcedure(output);
			output.close();
			ifstream infile(outPath);
			std::stringstream buffer;
			buffer << infile.rdbuf();
			string result = buffer.str();
			string ideal = "It is a procedure language: is abstract = 0, year = 1997\nmentions = 1\namount of years = 23\n";
			Assert::AreEqual(ideal, result);
		}
	};
	TEST_CLASS(ObjectorientedTests)
	{
		TEST_METHOD(ObjectorientedInDataTest)
		{
			string inputPath = "../../Text_files/objectoriented_in.txt";
			ifstream infile(inputPath);
			Objectoriented* object = new Objectoriented;
			Langtype* l = object;
			enum inheritance {
				ONCE,
				MULTIPLE,
				INTERFACE
			};
			object->InData(infile);
			infile.close();
			Assert::IsTrue(object->GetInheritance() == MULTIPLE);
			Assert::IsTrue(object->GetYear() == 1998);
			Assert::IsTrue(l->GetMentions() == 2);
		}
		TEST_METHOD(ObjectorientedOutTest)
		{
			string outPath = "../../Text_files/objectoriented_out.txt";
			ofstream output(outPath);
			Objectoriented* object = new Objectoriented;
			Langtype* l = object;
			object->SetInheritance("once");
			object->SetYear(1988);
			l->SetMentions(2);
			l->Out(output);
			output.close();
			ifstream infile(outPath);
			std::stringstream buffer;
			buffer << infile.rdbuf();
			string result = buffer.str();
			string ideal = "It is an object-oriented language: inheritance = once, year = 1988\nmentions = 2\n";
			Assert::AreEqual(ideal, result);
		}
	};
	TEST_CLASS(FunctionalTests)
	{
		TEST_METHOD(FunctionalInDataTest)
		{
			string inputPath = "../../Text_files/functional_in.txt";
			ifstream infile(inputPath);
			Functional* func = new Functional;
			Langtype* l = func;
			enum Typification {
				STRICT,
				DYNAMIC
			};
			func->InData(infile);
			infile.close();
			Assert::IsTrue(func->GetTypification() == STRICT);
			Assert::IsTrue(func->GetIsLazyCalculations() == 0);
			Assert::IsTrue(func->GetYear() == 2008);
			Assert::IsTrue(l->GetMentions() == 4);
		}
		TEST_METHOD(FunctionalOutTest)
		{
			string outPath = "../../Text_files/functional_out.txt";
			ofstream output(outPath);
			Functional* func = new Functional;
			Langtype* l = func;
			func->SetTypification("dinamic");
			func->SetYear(2019);
			func->SetIsLazyCalculations(1);
			l->SetMentions(3);
			l->Out(output);
			output.close();
			ifstream infile(outPath);
			std::stringstream buffer;
			buffer << infile.rdbuf();
			string result = buffer.str();
			string ideal = "It is a functional language: typification = dinamic, lazy calculations = 1, year = 2019\nmentions = 3\n";
			Assert::AreEqual(ideal, result);
		}
	};
	TEST_CLASS(LangtypeTests)
	{
		TEST_METHOD(LangtypeInTest)
		{
			string inputPath = "../../Text_files/langtype_in.txt";
			ifstream infile(inputPath);
			Langtype* l = Langtype::In(infile);
			infile.close();
			ifstream infile1(inputPath);
			Procedure* proc = new Procedure;
			Procedure* o = (Procedure*)l;
			Assert::IsTrue(l->GetYear() == 2012);
			Assert::IsTrue(l->GetMentions() == 1);
			Assert::IsTrue(o->GetIsAbstract() == 0);
		}
		TEST_METHOD(LangtypeInDataTest)
		{
			string inputPath = "../../Text_files/langtype_inData.txt";
			ifstream infile(inputPath);
			Langtype* l = new Langtype;
			l->InData(infile);
			infile.close();
			Assert::IsTrue(l->GetMentions() == 2);
		}
		TEST_METHOD(LangtypeOutTest)
		{
			string outPath = "../../Text_files/langtype_Out.txt";
			ofstream output(outPath);
			Langtype* l = new Langtype;
			l->SetMentions(5);
			l->Out(output);
			output.close();
			ifstream infile(outPath);
			std::stringstream buffer;
			buffer << infile.rdbuf();
			string result = buffer.str();
			string ideal = "mentions = 5";
			Assert::AreEqual(ideal, result);
		}
		TEST_METHOD(LangtypeAmountOfYearsTest)
		{
			Langtype* l = new Langtype;
			l->SetYear(2019);
			Assert::IsTrue(l->AmountOfYears() == 1);
		}
		TEST_METHOD(LangtypeCompareTest)
		{
			Langtype* l = new Langtype;
			l->SetYear(2019);
			Langtype* l1 = new Langtype;
			l1->SetYear(2020);
			Assert::IsTrue(l->Compare(*l1) == false);
		}
		TEST_METHOD(LangtypeOutProcedureTest)
		{
			string outPath = "../../Text_files/langtype_OutProcedure.txt";
			ofstream output(outPath);
			Langtype* l = new Langtype;
			l->OutProcedure(output);
			output.close();
			ifstream infile(outPath);
			std::stringstream buffer;
			buffer << infile.rdbuf();
			string result = buffer.str();
			string ideal = "\n";
			Assert::AreEqual(ideal, result);
		}
	};
	TEST_CLASS(ListTests)
	{
		TEST_METHOD(ListListTest)
		{
			List* list = new List();
			Assert::IsTrue(list->head == NULL);
			Assert::IsTrue(list->tail == NULL);
			Assert::IsTrue(list->size == 0);
		}
		TEST_METHOD(ListListDestructorTest)
		{
			Langtype* l = new Langtype;
			List* list = new List();
			Node* node = new Node;
			node->l = l;
			node->next = NULL;
			node->prev = NULL;
			list->head = node;
			list->size = 1;
			list->~List();
			Assert::IsTrue(list->head == NULL);
			Assert::IsTrue(list->tail == NULL);
			Assert::IsTrue(list->size == 0);
		}
	};
	TEST_CLASS(ContainerTests)
	{
		TEST_METHOD(ContainerInTest)
		{
			string inPath = "../../Text_files/container_In.txt";
			Container* c = new Container;
			ifstream infile(inPath);
			c->In(infile);
			infile.close();
			Assert::IsTrue(c->list.size == 2);

			Assert::IsTrue(c->list.head->l->GetMentions() == 1);
			Assert::IsTrue(c->list.head->l->GetYear() == 2012);
			Langtype* l = c->list.head->l;
			Procedure* proc = (Procedure*)l;
			Assert::IsTrue(proc->GetIsAbstract() == 0);
			Langtype* l1 = c->list.head->next->l;

			Objectoriented* object = (Objectoriented*)l1;
			enum inheritance { once, multiple, interface };
			Assert::IsTrue(c->list.head->next->l->GetMentions() == 2);
			Assert::IsTrue(c->list.head->next->l->GetYear() == 1998);
			Assert::IsTrue(object->GetInheritance() == multiple);

			Assert::IsTrue(c->list.head->next->next->l == l);
			Assert::IsTrue(c->list.head->prev->l == l1);
		}
		TEST_METHOD(ContainerOutTest)
		{
			string inPath = "../../Text_files/container_In.txt";
			Container* c = new Container;
			ifstream infile(inPath);
			c->In(infile);
			infile.close();
			string outPath = "../../Text_files/container_Out.txt";
			ofstream output(outPath);
			c->Out(output);
			output.close();

			ifstream infile1(outPath);
			std::stringstream buffer;
			buffer << infile1.rdbuf();
			string result = buffer.str();
			string ideal = "Container contents 2 elements.\nIt is a procedure language: is abstract = 0, year = 2012\nmentions = 1\namount of years = 8\nIt is an object-oriented language: inheritance = multiple, year = 1998\nmentions = 2\namount of years = 22\n";
			Assert::AreEqual(ideal, result);
		}
		TEST_METHOD(ContainerSortTest)
		{
			string inPath = "../../Text_files/container_In.txt";
			Container* c = new Container;
			ifstream infile(inPath);
			c->In(infile);
			infile.close();
			string outPath = "../../Text_files/container_SortedOut.txt";
			ofstream output(outPath);
			c->Sort();
			c->Out(output);
			output.close();

			ifstream infile1(outPath);
			std::stringstream buffer;
			buffer << infile1.rdbuf();
			string result = buffer.str();
			string ideal = "Container contents 2 elements.\nIt is an object-oriented language: inheritance = multiple, year = 1998\nmentions = 2\namount of years = 22\nIt is a procedure language: is abstract = 0, year = 2012\nmentions = 1\namount of years = 8\n";
			Assert::AreEqual(ideal, result);
		}
		TEST_METHOD(ContainerOutProcedureTest)
		{
			string inPath = "../../Text_files/container_In.txt";
			Container* c = new Container;
			ifstream infile(inPath);
			c->In(infile);
			infile.close();
			string outPath = "../../Text_files/container_OutProcedure.txt";
			ofstream output(outPath);
			c->Sort();
			c->OutProcedure(output);
			output.close();

			ifstream infile1(outPath);
			std::stringstream buffer;
			buffer << infile1.rdbuf();
			string result = buffer.str();
			string ideal = "Only procedure.\n0: \n1: It is a procedure language: is abstract = 0, year = 2012\nmentions = 1\namount of years = 8\n";
			Assert::AreEqual(ideal, result);
		}
	};
}
