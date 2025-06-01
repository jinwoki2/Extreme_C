lldb로 메모리 확인하는 방법  
1. retrun문 직전으로 break point 설정
2. 메모리 레이아웃 확인하는 방법
	- memory read --format=char --count=7 &b
	- b객체의 메모리 레이아웃을 char형식으로 7개만큼만 출력한다.
	- dSYM 디렉터리가 생성되는데, 이게 있어야 디버깅이 가능하다.