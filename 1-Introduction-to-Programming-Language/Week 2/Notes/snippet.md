# Create snippet for vscode

First create a sample code. <br>
For example: <br>

```c
#include<stdio.h>
int main() {
    return 0;
}
```
<br>
Copy the code. <br>
<br>
Now go to this link:

[Snippet Generator](https://snippet-generator.app/)

Paste the code and copy the vscode snippet from right. Now click the settings icon on vscode from bottom left corner. Click on ***User Snippets*** then click on ***c*** or ***c.json*** whichever option you see. Paste the snippet there. <br> <br>
Now paste a prefix in first line double quotation mark. For example: `"prefix": "csnippet",` <br>
Now go to where you would like to see the cursor after using the snippet. For me it was at the end of second line: `int main() {` which I replaced with `"int main() {$0",`. Like you would paste the ***$0 inside quotation mark*** and just where you would like it. <br>
Now just open a .c file, type your prefix, for my case it was `csnippet`. Type your prefix and press tab and see what happens.