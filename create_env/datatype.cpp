int main(){
    // 자료형 (크기 단위, byte)
    // 정수형 : char(1) short(2) int(4) logn(4), long long(8)
    // 실수형 : float(4) double(8)

    //8bit = 1byte
    //1024byte => 1KB
    //2**20byte => 1204KB => 1MB
    //2**30byte => 1024MB => 1GB
    //2**40byte => 1024GB => 1TB
    
    int i = 0;

    // 256가지 -> 0 ~ 255
    unsigned char c = 0;
    c = 256; // 비트 표현시 1 0000 0000 으로 8bit 넘어감 => 맨 앞 잘려서 0으로 인식

    // MSB(Most Significant Bit)
    // 1000 0001 => -127
    // 0000 0001 => 1
    // 1111 1111 => -1
    char c1 = 0;
    c1 = -1;
    c1 = 255; // 1111 1111 => 맨 앞은 MSB이므로 -1로 인식

    return  0;
}