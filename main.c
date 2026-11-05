#include <stdio.h>

int main() {
  int ketqua;
  scanf("%d",&ketqua);
  switch(ketqua) {
    case 1:
      printf("XEP_LOAI_XUAT_SAC");
      break;
    case 2:
      printf("XEP_LOAI_GIOI");
      break;
    case 3:
      printf("XEP_LOAI_KHA");
      break;
    case 4:
      printf("XEP_LOAI_TRUNG_BINH");
      break;
    default("KHONG_HOP_LE");
  }
  return 0;
}