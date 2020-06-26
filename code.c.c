
int sensorValue = 0;

int outputValue = 0;

void setup()
{
  pinMode(A0, INPUT);
  pinMode(9, OUTPUT);
  Serial.begin(9600);

}

void loop()
{
  sensorValue = analogRead(A0);//读A0的输入的电压
  outputValue = map(sensorValue, 0, 1023, 0, 255);//将sensorValue映射到0~255之间
  analogWrite(9, outputValue);//将outputValue写给9引脚A0为高则灯亮，A0为低则灯灭
  Serial.print("sensor = ");
  Serial.print(sensorValue);
  Serial.print("\t output = ");
  Serial.println(outputValue);
 /*
 在串行监视器上输出sensorValue和outputValue的值
 */
  delay(2); 
}