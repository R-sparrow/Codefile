//展开头文件
#include <iostream>             /**********************************************/
using namespace std;            //使用一个名为std的命名空间 或 std::cout
int main(){}                    //主函数
std::cout << "helloworld/n"     //输出语句
g++ hello.cpp                   //在命令行中编译hello.cpp
./a.out                         //在命令行中执行
g++ hello.cpp -o hello          //编译后的文件名为hello
cin >> tip                      //接收信息存放到tip
int a = 0                       //定义变量,必须初始化
/ %                             //除号  求余数
char grade = 'A'                //字符类型
string name = "Sparrow"         //字符串类型
/*****************************************************************************/
//条件
/*****************************************************************************/
if(a == 10) {                    
    //code
}
else if(a == 11) {

}
else {

}

switch (grade) {
  case 9:
    std::cout << "Freshman\n";
    break;
  case 10:
    std::cout << "Sophomore\n";
    break;
}
/*************************************************************************/
//循环
/*************************************************************************/
while (password != 1234) {

  std::cout << "Try again: ";
  std::cin >> password;

}
for (int i = 0; i < 10; i++) {
  
  std::cout << i << "\n";
  
}
/************************************************************/
//向量
/************************************************************/
std::vector<double> order = {3.99, 12.99, 2.49};
#include <vector>
std::cout << order[0];                                       //输出3.99
order.size()                                                 //求order数组中的元素数
order.push_back("20.1")                                      //在order数组后加入一个元素20.1
order.pop_back()                                             //除去20.1
/***********************************************************/
 vector<int> twoSum(vector<int>& nums, int target) {}        //注意vector作函数参数的写法
 /************************************************************/
 //哈希表的使用
 #include<unordered_map>
unordered_map<int,string> unomap;                            //创建一个key为string类型，value为int类型的unordered_map
auto it = xxx                                                //auto根据后面的值推测变量类型,简化变量初始化
hashtable[nums[i]] = i                                       //将nums[i]插入哈希表,key为i
it->first                                                    //value
it->second                                                   //key
//h(key)=value h是哈希函数
 /*************************************************************/
 //.find()函数的使用
 string s("ashaduhasufk");                                      //在括号内直接写要查找的
 int a;
 a = s.find("af");                                              //在s中查找af,查找成功,返回第一个,查找失败,返回s.end()

