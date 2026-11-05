#include <stdio.h>

int main() {
  float dtb;
  int drl;
  scanf("%f",&dtb);
  scanf("%d",&drl);
  if(dtb>=9.0&&drl>=90)
    printf("HOC_BONG_XUAT_SAC");
   else if((dtb>=8.0 && dtb<9.0 && drl>=80)||
     (dtb>=9.0 && drl>=80 && drl<90)){
    printf("HOC_BONG_GIOI");}
  else if((7.0<=dtb && dtb<8.0 && drl>=70)||
          (8.0<=dtb && dtb<9.0 && 70<=drl && drl<80)||
          (dtb>=9.0 && 70<=drl && drl<80)) {
    printf("HOC_BONG_KHA");}
  else
    printf("KHONG_DAT");
  rertun 0;
}