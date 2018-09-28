#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int tonghaiso(int a, int b) {
    return a + b;
}

int truhaiso(int a, int b) {
    int c = a - b;
    return c;
}

int nhanhaiso(int a, int b) {
    int c = a * b;
    return c;
}

float chiahaiso(int a, int b) {
    if (b == 0) {
        printf("Khong the chia cho 0");
        exit(1);
    }

    return (float) a / b;
}

int chiahaisolaydu(int a, int b) {
    if (b == 0) {
        printf("Khong the chia cho 0");
        exit(1);
    }
    return a % b;
}

void menu() {
    printf("------------- My Calculation ------------ \n");
    printf("1.phep cong. \n");
    printf("2.phep tru. \n");
    printf("3.phep nhan. \n");
    printf("4.phep chia. \n");
    printf("5.phep chia lay du. \n");
    printf("6.Thoat khoi chuong trinh.\n");

}
 void Chonpheptinh() {
    int a, b, ketqua ;
    char chon;
    float ketqua2;
    while (1==1){
        printf("Nhap so thu nhat :  \n");
        scanf("%d", &a);
        printf("Nhap so thu hai :  \n");
        scanf("%d", &b);
        getchar();
        printf(" Lua chon phep tinh (+,-,*,/). \n");
        printf("(CHU Y: neu muon dung lai hay nhap (1) ) \n");
        printf("Hay lua chon phep tinh : \n");
        scanf("%c", &chon);
        switch (chon) {
            case '+':
                ketqua = tonghaiso(a,b);
                printf("%d + %d = %d \n",a, b, ketqua);
                break;
            case '-':
                ketqua = truhaiso(a, b);
                printf("%d - %d = %d \n", a, b, ketqua);
                break;
            case '*':
                ketqua = nhanhaiso(a, b);
                printf("%d * %d = %d \n", a, b, ketqua);
            case '/':
                ketqua2 = chiahaiso(a, b);
                printf("%d / %d = %.2f \n", a, b, ketqua2);
            case '1':
                printf("Cam on ban da su dung. Tam biet !\n");
                exit(1);
            default:
               printf("Phep tinh ban lua chon khong co trong chuong trinh.Hay nhap lai!\n");
                break;
    }
    }
}

int maytinh() {
    int a, b, ketqua, chon;
    float ketqua2;
    while(1==1){
        menu();
        printf("Hay nhap lua chon cua ban (1|2|3|4|5|6): \n");
        printf("nhap lua chon: \n");
        printf("nhap so thu nhat: \n");scanf("%d",&a);
        printf("nhap so thu hai: \n");scanf("%d",&b);
        scanf("%d", &chon);
        switch (chon) {
            case 1:
                ketqua = tonghaiso(a, b);
                printf("%d + %d = %d \n",a,b, ketqua);
                break;
            case 2:
                ketqua = truhaiso(a, b);
                printf("%d - %d = %d \n",a,b, ketqua);
                break;
            case 3:
                ketqua = nhanhaiso(a, b);
                printf("%d * %d = %d \n",a,b, ketqua);
                break;
            case 4:
                ketqua2 = chiahaiso(a, b);
                printf("%d / %d = %d \n",a,b, ketqua2);
                break;
            case 5:
                 ketqua2 = chiahaisolaydu(a, b);
                printf("%d % %d = %d \n",a,b, ketqua2);
                break;
            case 6:
                printf("Goodbye");
                exit(1);
            default:
                printf("Lua chon cua ban khong co trong menu. Xin nhap lai ! \n");
                break;

        }
        printf("\n");
    }
}

int main(){
    Chonpheptinh();
}
