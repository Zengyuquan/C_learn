#include "stdio.h"

int main()
{

    // 1.打开a.docx文件(数据源)
    FILE* file1 = fopen("C:\\Users\\Zengyuquan\\Desktop\\a.docx","rb");
    // 2.打开copy.docx(目的源)
    FILE* file2 = fopen("C:\\Users\\Zengyuquan\\Desktop\\b.docx","wb");

    // 3.利用循环读取数据源，读完之后，再写到目的地
    char arr[1024];
    int n;
    while ((n = fread(arr, 1, 1024, file1)) != 0)
    {
        // 就要读取到的数据，再写到目的地文件当中
        fwrite(arr, 1, n, file2);
    }

    // 4.关闭文件
    fclose(file1);
    fclose(file2);

    return 0;
}