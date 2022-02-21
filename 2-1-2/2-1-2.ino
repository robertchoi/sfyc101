// 조도센서를 아날로그 0핀(A0)에 연결합니다.
int cds = A0;
// LED를 3번핀에 연결합니다.
int led = 3;

void setup() {
    pinMode(led, OUTPUT);

    Serial.begin(9600);
}

void loop() {
// 조도센서로 부터 측정된 밝기 값을 읽습니다.
// 조도센서로 부터 입력되어지는 전압의 크기 (0~5V)에 따라 0~1023 범위의 값으로 변환되어 반환합니다.
    int cdsValue = analogRead(cds);
    // 측정된 밝기 값를 시리얼 모니터에 출력합니다.
    Serial.print("cds =  ");
    Serial.println(cdsValue);

    // 조도센서로 부터 측정된 밝기 값이 220보다 크다면, 아래의 블록을 실행합니다.
    if (cdsValue > 500) {
            // LED가 연결된 핀의 로직레벨을 HIGH (5V)로 설정하여, LED가 켜지도록 합니다.
            digitalWrite(led, HIGH);

    // 조도센서로 부터 측정된 밝기 값이 50보다 작면, 아래의 블록을 실행합니다.
    } else {
            // LED가 연결된 핀의 로직레벨을 LOW (0V)로 설정하여, LED가 꺼지도록 합니다.
            digitalWrite(led, LOW);
    }
}
