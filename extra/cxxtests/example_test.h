/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#define _CXXTEST_HAVE_STD
#include <cxxtest/TestListener.h>
#include <cxxtest/TestTracker.h>
#include <cxxtest/TestRunner.h>
#include <cxxtest/RealDescriptions.h>
#include <cxxtest/TestMain.h>
#include <cxxtest/ErrorPrinter.h>

int main( int argc, char *argv[] ) {
 int status;
    CxxTest::ErrorPrinter tmp;
    CxxTest::RealWorldDescription::_worldName = "cxxtest";
    status = CxxTest::Main< CxxTest::ErrorPrinter >( tmp, argc, argv );
    return status;
}
bool suite_MatrixTestSuite_init = false;
#include "/home/danter/dev/vector/extra/cxxtests/example_test.h_bak"

static MatrixTestSuite suite_MatrixTestSuite;

static CxxTest::List Tests_MatrixTestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_MatrixTestSuite( "cxxtests/example_test.h_bak", 9, "MatrixTestSuite", suite_MatrixTestSuite, Tests_MatrixTestSuite );

static class TestDescription_suite_MatrixTestSuite_testIndexOperator : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MatrixTestSuite_testIndexOperator() : CxxTest::RealTestDescription( Tests_MatrixTestSuite, suiteDescription_MatrixTestSuite, 26, "testIndexOperator" ) {}
 void runTest() { suite_MatrixTestSuite.testIndexOperator(); }
} testDescription_suite_MatrixTestSuite_testIndexOperator;

static class TestDescription_suite_MatrixTestSuite_testAssignmentOperator : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MatrixTestSuite_testAssignmentOperator() : CxxTest::RealTestDescription( Tests_MatrixTestSuite, suiteDescription_MatrixTestSuite, 45, "testAssignmentOperator" ) {}
 void runTest() { suite_MatrixTestSuite.testAssignmentOperator(); }
} testDescription_suite_MatrixTestSuite_testAssignmentOperator;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
