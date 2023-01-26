#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <string>
#include "doctest.h"
#include "vector.h"

TEST_CASE("size tests")
{
	MyVector<int> vec;
	CHECK(vec.size()==0);
	vec.push_back(2);
	CHECK(vec.size()==1);
}

TEST_CASE("capacity tests")
{
	MyVector<int> vec;
	CHECK(vec.capacity()==5);
	vec.push_back(0);
	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(3);
	vec.push_back(4);
	vec.push_back(5);
	CHECK(vec.capacity()==6);
}

TEST_CASE("empty tests")
{
	MyVector<int> vec;
	CHECK(vec.empty()==true);
	vec.push_back(1);
	CHECK(vec.empty()==false);
	vec.pop_back(1);
	CHECK(vec.empty()==true);
}

TEST_CASE("push_back tests")
{
	MyVector<int> vec;
	vec.push_back(3);
	vec.push_back(5);
	CHECK(vec[0]==3);
	CHECK(vec[1]==5);
}

TEST_CASE("pop_back tests")
{
	MyVector<int> vec;
	vec.push_back(2);
	vec.push_back(4);
	vec.push_back(6);
	vec.push_back(8);
	vec.pop_back(2);
	CHECK(vec.size()==2);
	MyVector<int> vec2;
	vec2.push_back(1);
	vec2.push_back(2);
	vec2.pop_back();
	CHECK(vec2.size()==1);
}

TEST_CASE("clear tests")
{
	MyVector<int> vec;
	vec.clear();
	CHECK(vec.empty()==true);
}
