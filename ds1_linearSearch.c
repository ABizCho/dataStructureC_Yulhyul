//1. 순차탐색 (Linear Search)구현
#include <stdio.h>

int Lsearch(int ar[],int len,int target)
{
  int i = 0;

  while ( i <= len-1 )
    {
      if( ar[i] == target )
      {
        return i ;
        
      }
      else 
        i++;
      }
  return -1 ;
}
  // 순차 탐색 알고리즘을 구현한 함수 
  // 찾은 대상의 인덱스값 반환
  // 찾지 못했음을 의미하는 값 반환


//메인함수
int main(void)
{
  int arr[] = {3,5,2,4,9}; // 탐색될 데이터의 자료의 구조는 배열이다. (자료구조에 따라 알고리즘 선택도 달라져야함)
  int idx;

  idx = Lsearch(arr, sizeof(arr)/sizeof(int),4); // 순차탐색을 함수를 이용하여 arr에서 4를 지닌 index 위치값을 저장
  if(idx == -1)
    printf("탐색 실패 \n");
  else
    printf("타겟 저장 인덱스 : %d \n",idx);

  idx = Lsearch(arr, sizeof(arr)/sizeof(int),7); // 순차탐색을 함수를 이용하여 arr에서 4를 지닌 index 위치값을 저장
  if(idx == -1)
    printf("탐색 실패 \n");
  else
    printf("타겟 저장 인덱스 : %d \n",idx);

  return 0; 
  
}

