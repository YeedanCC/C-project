#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    int a1,a2,a3;
    char op1,op2,op3;

    //Ϊ�˱�֤�ṹ�����ʼ����һ��0+
    a1 = 0;
    op1 = '+';
    while(op1!='=')
    {
        scanf("%d %c",&a2,&op2);    //������һ���ո������Կհ׷�
        //����˳�
        while(op2=='*' || op2=='/')
        {
            scanf("%d %c",&a3,&op3);
            if(op2=='*')
                a2 *= a3;
            else if(op2=='/')
                a2 /= a3;
            op2 = op3;    //�˴�ע��
        }
        //��������ӣ�����
        if(op1=='+')
            a1 += a2;
        else if(op1=='-')
            a1 -= a2;
        op1 = op2;    //�˴�ע��
    }

    printf("%d",a1);

	return 0;
}
