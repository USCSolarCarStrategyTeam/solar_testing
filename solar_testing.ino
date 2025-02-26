void setup() {
  // Initialize serial communication at 9600 baud rate
  Serial.begin(9600);
  
  // Set all the pins as OUTPUT
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);

  pinMode(A0, INPUT);
  pinMode(A5, INPUT);
}

void loop() {

  // Set pin states
  digitalWrite(0, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  
  // Print the current (analog value read from A5 value between 0 and 1023)
  Serial.println((analogRead(A5)-514.0)/21.0);
  Serial.println(analogRead(A0));
  
  // Add a small delay to make sure the serial output is visible
  delay(750); // Delay for 500 milliseconds

  // // Set pin states
  digitalWrite(0, LOW);

  
  // Print the current (analog value read from A5 value between 0 and 1023)
  Serial.println(analogRead(A5)*0.045870824-24.8466163);
  Serial.println(analogRead(A0));
  
  // Add a small delay to make sure the serial output is visible
  delay(750); // Delay for 500 milliseconds



  // Set pin states

  digitalWrite(1, LOW);

  
  // Print the current (analog value read from A5 value between 0 and 1023)
  Serial.println(analogRead(A5)*0.045870824-24.8466163);
  Serial.println(analogRead(A0));
  
  // Add a small delay to make sure the serial output is visible
  delay(750); // Delay for 500 milliseconds



  // Set pin states

  digitalWrite(2, LOW);

  
  // Print the current (analog value read from A5 value between 0 and 1023)
  Serial.println(analogRead(A5)*0.045870824-24.8466163);
  Serial.println(analogRead(A0));
  
  // Add a small delay to make sure the serial output is visible
  delay(750); // Delay for 500 milliseconds



  
  // Set pin states

  digitalWrite(3, LOW);

  
  // Print the current (analog value read from A5 value between 0 and 1023)
  Serial.println(analogRead(A5)*0.045870824-24.8466163);
  Serial.println(analogRead(A0));
  
  // Add a small delay to make sure the serial output is visible
  delay(750); // Delay for 500 milliseconds


  
  
  // Set pin states

  digitalWrite(4, LOW);

  
  // Print the current (analog value read from A5 value between 0 and 1023)
  Serial.println(analogRead(A5)*0.045870824-24.8466163);
  Serial.println(analogRead(A0));
  
  // Add a small delay to make sure the serial output is visible
  delay(750); // Delay for 500 milliseconds



  
  // Set pin states

  digitalWrite(5, LOW);

  
  // Print the current (analog value read from A5 value between 0 and 1023)
  Serial.println(analogRead(A5)*0.045870824-24.8466163);
  Serial.println(analogRead(A0));
  
  // Add a small delay to make sure the serial output is visible
  delay(750); // Delay for 500 milliseconds


  
  // Set pin states

  digitalWrite(6, LOW);

  
  // Print the current (analog value read from A5 value between 0 and 1023)
  Serial.println(analogRead(A5)*0.045870824-24.8466163);
  Serial.println(analogRead(A0));
  
  // Add a small delay to make sure the serial output is visible
  delay(750); // Delay for 500 milliseconds


  
  
  // Set pin states

  digitalWrite(7, LOW);
  
  // Print the current (analog value read from A5 value between 0 and 1023)
  Serial.println(analogRead(A5)*0.045870824-24.8466163);
  Serial.println(analogRead(A0));
  

  Serial.println("done");
  // Add a small delay to make sure the serial output is visible
  delay(750); // Delay for 500 milliseconds


}