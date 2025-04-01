#define FIRMWARE_VERSION "1.0.4"

void setup() {
  Serial.begin(9600);
  Serial.println("✅ ESP32 OTA 테스트용 펌웨어 실행됨!!!");
  Serial.print("📦 버전: ");
  Serial.println(FIRMWARE_VERSION);
}

void loop() {
  delay(1000);
}
