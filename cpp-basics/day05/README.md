# Day 05：函数、指针与分文件编写

## 文件分工

- `main.cpp`：创建人数变量和成绩数组，按顺序调用函数。
- `score_stats.h`：函数声明及头文件重复包含保护。
- `score_stats.cpp`：人数输入、成绩输入、排序、平均分、第二高分和分段统计的实现。

`people_num(int* num)` 通过解引用修改调用者的人数变量。`avg` 使用数组下标读取成绩，`avgbypointer` 使用 `*(score + p)` 读取成绩；数组形式和指针形式的函数参数本质等价。

## 编译

在此目录使用 GCC：

```powershell
g++ -std=c++17 -Wall -Wextra -pedantic main.cpp score_stats.cpp -o day05.exe
.\day05.exe
```

也可以在 Visual Studio 空项目中添加两个 `.cpp` 和一个 `.h`。头文件项类型设置为 C/C++ 标头；本次学习环境使用 UTF-8 源码、代码页 936 控制台，项目编译选项为 `/source-charset:utf-8 /execution-charset:.936`。

## 验收记录

- 三文件版本通过 Visual Studio 编译，测试覆盖最高分重复、单人、全部同分、分数段边界和整数越界重输。
- 新增指针平均分函数后，再次通过 Visual Studio 编译；输入两人成绩 `80、81`，两个平均分函数均输出 `80.5`。
- 上传时两个 `.cpp` 共同通过 GCC C++17 语法检查。
- 已解释数值副本与地址副本的区别，以及通过指针修改原变量的原因。
- 字母、小数等复杂输入校验按当前学习阶段暂缓。

上传保留本人练习源码，没有为了上传改写实现。
