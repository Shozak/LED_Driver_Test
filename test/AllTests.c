#include "C:\Users\Mazen\Desktop\unity\extras\fixture\src\unity_fixture.h"

static void RunAllTests(void){
    RUN_TEST_GROUP(LedDriver);
}
int main(int argc, char * argv[]){
    return UnityMain(argc, argv , RunAllTests);
}
