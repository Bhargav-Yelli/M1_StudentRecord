#include "unity.h"

#include "mainfunction.h"
#include "user.h"





/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}




/* Prototypes for all the test functions */


void test_unity(void){
        
       
        TEST_ASSERT_EQUAL(NULL,main());
        
      
}




int main(void)
{
UNITY_BEGIN();
RUN_TEST(test_unity);

return UNITY_END();
}
