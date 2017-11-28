#include "C:\Users\Mazen\Gitprojekt\LED_Driver_Test\unity\extras\fixture\src\unity_fixture.h"

static void RunAllTests(void){
    RUN_TEST_GROUP(LedDriver);
}
int main(int argc, char * argv[]){
    return UnityMain(argc, argv , RunAllTests);
}
