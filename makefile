main:
	gcc test\AllTests.c test\LedDriverTestRunner.c test\LedDriverTest.c unity\extras\fixture\src\unity.c unity\extras\fixture\src\unity_fixture.c -o LedDriverTest 
	LedDriverTest.exe
