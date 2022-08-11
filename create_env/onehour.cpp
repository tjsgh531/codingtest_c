#include<iostream>
using namespace std;

int main(void){
    /*
    std::cout<<"hello c++" << std::endl;
    std::cout<<"wonderful c++ \n";

    int i;
    std::cin >> i;

    std::cout << i;
    */

    /*
    std::cout << "구매금액을 입력하세요"<< std::endl;
    int caltot, calpoint;
    std::cin >> caltot;
    calpoint = caltot * 0.1;
    std::cout <<"금회 발생 포인트 =" << calpoint << "점 입니다" <<std::endl;
    return 0;
    */

    char irum[100];
    cout <<  "성함과 전화번호를 입력하세요\n";
    //cin >> irum => 이러면 띄어 쓰기 하는 순간 입력을 거기 까지만 인식함.
    cin.getline(irum, sizeof(irum));
    cout << "구매금액을 입력하세요" << endl;
    int caltot, calpoint;
    cin >> caltot;
    calpoint = caltot * 0.1;
    cout << irum <<"님의 포인트는" << calpoint << "입니다\n"; 

    return 0;
}
/*
namesapce : 여러개의 전역적인 라이브러리, 함수 혹은 클래스 등이 중복되어 컴파일 상의 문제를 이야기 할 수 있으므로 이들을 구분하여 중복되지 않도록 하는 키워드를 의미
Namespace std{
    class ostream{

    }
    class istream{

    }
}

* using문
    : 함수나 클래스 작성시 소속된 네임스페이스를 일일이 기술하는 작업이 번거로우므로 이들 네임스페이스를 생략하기 위해 사용하는 것

    #include<iostream>
    using namespace std;
    int main(){
        cout << "구매액을 입력하세요"<<endl;
        int caltot, calpoint;
        cin >> caltot;

    }
*/