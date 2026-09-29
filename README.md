# 成绩处理小程序

## 项目目的

用于程序设计实践课程，练习 Git 分支、Pull Request、
代码评审及合并流程。

## 当前功能

- 读取一个整数成绩。
- 检查成绩是否在 0～100 范围内。
- 根据成绩输出等级：
  - 90～100：Excellent（优秀）
  - 80～89：Good（良好）
  - 70～79：Average（中等）
  - 60～69：Pass（及格）
  - 0～59：Fail（不及格）
- 对无法解析为整数的输入给出错误提示。

## 编译与运行

在 Windows PowerShell 中执行：

```powershell
g++ main.cpp -o score.exe
.\score.exe
```

## 运行示例

输入 `85` 后，程序输出：

```text
Enter an integer score (0-100): 85
Your score: 85
Grade: Good
```

## 边界验证

| 输入 | 程序结果 |
|---|---|
| 59 | Grade: Fail |
| 60 | Grade: Pass |
| 89 | Grade: Good |
| 90 | Grade: Excellent |
| -1 | Error: score must be between 0 and 100. |
| 101 | Error: score must be between 0 and 100. |
| abc | Error: please enter an integer. |