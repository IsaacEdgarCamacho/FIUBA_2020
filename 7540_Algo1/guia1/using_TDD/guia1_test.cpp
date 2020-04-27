#include "guia1.h"
#include "gtest/gtest.h"

TEST(test1, factorial){
    
    EXPECT_EQ(factorial(3), 6);
    
}

TEST(test2, factorial){
    
    EXPECT_EQ(factorial(4), 24);
}


TEST(test3, factorial){
    
    EXPECT_EQ(factorial(9), 362880);
}

TEST(test4, factorial){
    
    EXPECT_EQ(factorial(0), 1);
}

TEST(test5, factorial){
    
    EXPECT_EQ(factorial(1), 1);
}


TEST(test6, factorial){
    
    EXPECT_EQ(factorial(-2), -1);
}