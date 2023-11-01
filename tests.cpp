#include <gtest/gtest.h>
#include "mymap.h"

TEST(mymap, defaultConstructor) {
    mymap<int, int> map;
    EXPECT_EQ(map.Size(), 0);

}

TEST(mymap, put){
  mymap<int, int> map;
  int arr[] = {2, 1, 3};
  for (int i = 0; i < 3; i++) {
    map.put(arr[i], arr[i]);
  }
  EXPECT_EQ(map.Size(), 3);
}

TEST(mymap, contains){
  mymap<int, int> map;
  int arr[] = {2, 1, 3};
  for (int i = 0; i < 3; i++) {
    map.put(arr[i], arr[i]);
  }
  for (int i = 0; i < 3; i++) {
    EXPECT_TRUE(map.contains(arr[i]);
  }
}

TEST(mymap, get){
  mymap<int, int> map;
  int arr[] = {2, 1, 3};
  for (int i = 0; i < 3; i++) {
    map.put(arr[i], arr[i]);
  }
  for (int i = 0; i < 3; i++) {
    EXPECT_EQ(map.get(arr[i]), arr[i]);
  }
}

TEST(mymap, toString){
  mymap<int, int> map;
  int arr[] = {2, 1, 3};
  for (int i = 0; i < 3; i++) {
    map.put(arr[i], arr[i]);
  }
  string sol = "key: 1 value: 1\n key: 2 value: 2\n key:3 value: 3\n";
  EXPECT_EQ(map.toString(), sol);
}

TEST(mymap, bracketOperator){
  mymap<int, int> map;
  int arr[] = {2, 1, 3};
  for (int i = 0; i < 3; i++) {
    map.put(arr[i], arr[i]);
  }
  for (int i = 0; i < 3; i++) {
     EXPECT_EQ(map[arr[i]], arr[i]);
     EXPECT_EQ(map.Size(), 3);
  }
}

TEST(mymap, forLoopFunctionality){
  mymap<int, int> map;
  int arr[] = {2, 1, 3};
  int order[] = {1, 2, 3};
  for (int i = 0; i < 3; i++) {
     map.put(arr[i], arr[i]);
   }
  int i = 0;
  for (auto key : map) {
    EXPECT_EQ(order[i++], key);
  }
}
