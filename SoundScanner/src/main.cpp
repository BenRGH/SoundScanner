#include <Arduino.h>

// put function declarations here:
int myFunction(int, int);
// void task0(void *pvParameters);

// put global variables here:
int ldrSensorValue = 0; // 330ohm resistor works nicely at our distance
int infraredSensorValue = 0;

// define pins
int ldrSensorPin = 34;
int infraredSensorPin = 35;

void setup() {
  // put your setup code here, to run once:
  int result = myFunction(2, 3);

  Serial.begin(9600);

  // start thread task on thread 0
  // xTaskCreate(task0, "Task 0", 1000, NULL, 1, NULL);
}

void loop() {
  // ldrSensorValue = analogRead(ldrSensorPin); // read the value from the sensor
  // Serial.println(ldrSensorValue);

  infraredSensorValue = analogRead(infraredSensorPin);
  Serial.println(infraredSensorValue);

  delay(100);
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}

// create new thread task
// void task0(void *pvParameters) {
//   while (1) {
//     Serial.println("Hello from task0");
//     vTaskDelay(1000 / portTICK_PERIOD_MS);
//   }
// }
