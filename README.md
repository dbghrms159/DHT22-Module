# DHT22-Module
아두이노 Uno를 이용하여 DHT22 모듈의 값(습도, 온도) 출력

# DHT22 Module이란
    
    온습도 센서로 정전식 습도 센서오 써미스터를 사용하여 대기중 온도를 측정하고, 측정값을 디지털 센서 신호로 출력할수 있다.
    정전식 습도 센서는 습도에 따라 저항값이 변한다.
    써미스터는 온도에 따라 저항값이 하는 소자이다.
    
# DHT22 Module 오차

![default](https://user-images.githubusercontent.com/38156821/45140539-0d673300-b1ee-11e8-96fa-8a57a686ead3.png)

# 동작 원리

    습도 측정원리
      습도를 측정할때, 상부 전극과 하부 전극 사이의 저항 변화를 측정함으로써 공기중의 습도 변화를 알아낼 수 있습니다.
      박막 폴리머(습도 흡착판)의 양쪽 표면에는 전극이 부착된 앏은 판이 공기중의 수분을 흡수하고 박막 폴리머의 표면에 부착된 수분 양에 의해
      두 전극의 전도도에 변화가 일어나게 되면 이를 감지하는 방식으로 습도를 출력한다.
      
    온도 측정 원리
      온도를 감지하는 부분은 반도체 셀믹으로 이루어져 온도에 따라 물질의 저항 값이 변하는 소재의 특성을 이용하여 값의 변화를 감지해 온도 측정

# 사용 라이브러리

    DHT22 Module을 사용하기 위해서는 두가지 라이브러리를 사용을 해야한다.
    필요하 라이브러리는 DHT-sensor-library와 Adafruit_Sensor이다.
    이 두 라이브러리들을 다운을 받고 아두이노 창에 스캐치 > 라이브러리 포함하기 > .zip 라이브러리 추가... 를 함으로서 추가를 하고 import해주면 된다.
    
# Arduino Uno connection

![kakaotalk_photo_2018-09-05-16-43-55](https://user-images.githubusercontent.com/38156821/45140552-135d1400-b1ee-11e8-95a2-4fc679a53b73.jpeg)<br>
DHT22 Module에 GND, NC, DAT, VCC순으로 있는데 GND는 GND로, NC는 사용안함, DAT는 digital pin, VCC 는 5V로 연결을 한다.

# 실행 결과

![2018-09-05 4 42 35](https://user-images.githubusercontent.com/38156821/45140532-06d8bb80-b1ee-11e8-8839-01a89f5791e5.png)
