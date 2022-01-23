#ifndef MY_ASSERT_H_
#define MY_ASSERT_H_
#include<assert.h>
#include<stdio.h>
#include<stdlib.h>

/*使用断言测试*/
#ifdef DEBUG
/*处理函数原型*/
void Assert(char * filename, unsigned int lineno);
#define ASSERT(condition)\
if(condition)\
    NULL; \
else\
    Assert(__FILE__ , __LINE__)
/*不使用断言测试*/
#else
#define ASSERT(condition) NULL
#endif
void Assert(char *filename, unsigned int lineno);

#endif
