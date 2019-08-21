// tests.cpp
#include "whattotest.cpp"
#include "gtest/gtest.h"

TEST(SquareRootTest, PositiveNos) { 
    b = 11;
    ASSERT_EQ(6, squareRoot(36.0));
    ASSERT_EQ(18.0, squareRoot(324.0));
    ASSERT_EQ(25.4, squareRoot(644.16));
    ASSERT_EQ(0, squareRoot(0.0));
}


void hello()
{
    int a;
    printf("sasdadad");   // comment
   
}



int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
