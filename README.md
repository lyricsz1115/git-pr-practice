# 成绩处理小程序

## 项目目的

用于程序设计实践课程，练习 Git 分支、Pull Request、
代码评审及合并流程。

## 当前功能

- 读取一个整数成绩。
- 显示输入的成绩。
- 输入无法解析为整数时提示错误。

## 编译方法

使用支持 C++ 的编译器。以 g++ 为例：

```powershell
g++ main.cpp -o score.exe
```

## 运行方法

在 Windows PowerShell 中执行：

```powershell
.\score.exe
```

## 运行示例

输入：

```text
85
```

输出：

```text
Your score: 85
```

## 后续计划

- 增加成绩等级判断。
- 完善输入校验和边界验证。