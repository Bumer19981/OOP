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
			procedure* proc = new procedure;
			langtype* l = proc;
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
			procedure* proc = new procedure;
			langtype* l = proc;
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
			procedure* proc = new procedure;
			langtype* l = proc;
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
			objectoriented* object = new objectoriented;
			langtype* l = object;
			enum inheritance { once, multiple, interface };
			object->InData(infile);
			infile.close();
			Assert::IsTrue(object->GetInheritance() == multiple);
			Assert::IsTrue(object->GetYear() == 1998);
			Assert::IsTrue(l->GetMentions() == 2);
		}
		TEST_METHOD(ObjectorientedOutTest)
		{
			string outPath = "../../Text_files/objectoriented_out.txt";
			ofstream output(outPath);
			objectoriented* object = new objectoriented;
			langtype* l = object;
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
			functional* func = new functional;
			langtype* l = func;
			enum typification { strict, dynamic } typificationVar;
			func->InData(infile);
			infile.close();
			Assert::IsTrue(func->GetTypification() == strict);
			Assert::IsTrue(func->GetIsLazyCalculations() == 0);
			Assert::IsTrue(func->GetYear() == 2008);
			Assert::IsTrue(l->GetMentions() == 4);
		}
		TEST_METHOD(FunctionalOutTest)
		{
			string outPath = "../../Text_files/functional_out.txt";
			ofstream output(outPath);
			functional* func = new functional;
			langtype* l = func;
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
			langtype* l = langtype::In(infile);
			infile.close();
			ifstream infile1(inputPath);
			procedure* proc = new procedure;
			procedure* o = (procedure*)l;
			Assert::IsTrue(l->GetYear() == 2012);
			Assert::IsTrue(l->GetMentions() == 1);
			Assert::IsTrue(o->GetIsAbstract() == 0);
		}
		TEST_METHOD(LangtypeInDataTest)
		{
			string inputPath = "../../Text_files/langtype_inData.txt";
			ifstream infile(inputPath);
			langtype* l = new langtype;
			l->InData(infile);
			infile.close();
			Assert::IsTrue(l->GetMentions() == 2);
		}
		TEST_METHOD(LangtypeOutTest)
		{
			string outPath = "../../Text_files/langtype_Out.txt";
			ofstream output(outPath);
			langtype* l = new langtype;
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
			langtype* l = new langtype;
			l->SetYear(2019);
			Assert::IsTrue(l->AmountOfYears() == 1);
		}
		TEST_METHOD(LangtypeCompareTest)
		{
			langtype* l = new langtype;
			l->SetYear(2019);
			langtype* l1 = new langtype;
			l1->SetYear(2020);
			Assert::IsTrue(l->Compare(*l1) == false);
		}
		TEST_METHOD(LangtypeOutProcedureTest)
		{
			string outPath = "../../Text_files/langtype_OutProcedure.txt";
			ofstream output(outPath);
			langtype* l = new langtype;
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
			Assert::IsTrue(list->Head == NULL);
			Assert::IsTrue(list->Tail == NULL);
			Assert::IsTrue(list->size == 0);
		}
		TEST_METHOD(ListListDestructorTest)
		{
			langtype* l = new langtype;
			List* list = new List();
			Node* node = new Node;
			node->l = l;
			node->Next = NULL;
			node->Prev = NULL;
			list->Head = node;
			list->size = 1;
			list->~List();
			Assert::IsTrue(list->Head == NULL);
			Assert::IsTrue(list->Tail == NULL);
			Assert::IsTrue(list->size == 0);
		}
	};
	TEST_CLASS(ContainerTests)
	{
		TEST_METHOD(ContainerInTest)
		{
			string inPath = "../../Text_files/container_In.txt";
			container* c = new container;
			ifstream infile(inPath);
			c->In(infile);
			infile.close();
			Assert::IsTrue(c->list.size == 2);

			Assert::IsTrue(c->list.Head->l->GetMentions() == 1);
			Assert::IsTrue(c->list.Head->l->GetYear() == 2012);
			langtype* l = c->list.Head->l;
			procedure* proc = (procedure*)l;
			Assert::IsTrue(proc->GetIsAbstract() == 0);
			langtype* l1 = c->list.Head->Next->l;

			objectoriented* object = (objectoriented*)l1;
			enum inheritance { once, multiple, interface };
			Assert::IsTrue(c->list.Head->Next->l->GetMentions() == 2);
			Assert::IsTrue(c->list.Head->Next->l->GetYear() == 1998);
			Assert::IsTrue(object->GetInheritance() == multiple);

			Assert::IsTrue(c->list.Head->Next->Next->l == l);
			Assert::IsTrue(c->list.Head->Prev->l == l1);
		}
		TEST_METHOD(ContainerOutTest)
		{
			string inPath = "../../Text_files/container_In.txt";
			container* c = new container;
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
			container* c = new container;
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
			container* c = new container;
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
