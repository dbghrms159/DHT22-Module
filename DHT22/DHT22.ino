#include <Adafruit_Sensor.h>
#include <DHT.h>

#define DHTPIN 2        //DHT 핀의 설정
#define DHTTYPE DHT22   //DHT22 센서 종류 설

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("DHT22 Test!!");

  dht.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  float h = dht.readHumidity();
  float t = dht.readTemperature();

  if(isnan(t) || isnan(h)){
    Serial.println("Failed");
  }else {
    Serial.print("Humidty");
    Serial.print(h);
    Serial.print("%\t");
    Serial.print("Teamperature");
    Serial.println(t);
  }
  delay(2000);
}
