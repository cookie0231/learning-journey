# C++ 每日练习

按四周学习计划的天数整理；Day 表示课程顺序，不代表实际完成日期。源码保留练习时的原始内容，每个 `.cpp` 都是独立程序，需要单独编译运行。

| 天数 | 内容 | 源码 |
| --- | --- | --- |
| Day 01 | Hello World、五科成绩统计 | [helloworl.cpp](day01/helloworl.cpp)、[score.cpp](day01/score.cpp) |
| Day 02 | 菜单式计算器 | [math.cpp](day02/math.cpp) |
| Day 03 | 三档难度猜数字游戏 | [guess_num.cpp](day03/guess_num.cpp) |
| Day 04 | 冒泡降序排序、第二高分、平均分、分数段统计 | [score_stats.cpp](day04/score_stats.cpp) |

## 编译运行

以 Day 04 为例，在本目录执行：

```powershell
g++ -std=c++17 -Wall -Wextra -pedantic day04/score_stats.cpp -o score_stats.exe
.\score_stats.exe
```

## 阶段说明

- Day 03：已实现基础游戏；复杂输入校验与总局数等统计待后续学习补充。
- Day 04：整数范围校验及成绩统计已完成；字母、小数等复杂输入校验暂缓。
- 当前练习运行时请按提示输入合法类型的数据。
