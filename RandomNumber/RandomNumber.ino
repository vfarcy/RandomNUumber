void setup() {
  // put your setup code here, to run once:
  pinMode(A3, INPUT);
  Serial.begin(9600);
}

unsigned int RandomNumber() {
    unsigned int r = 0;
    for (int i = 0; i < 32; ++i)
        r = (r << 1) | ((analogRead(A3)) & 1); //Reads the analog value on pin A3 
    return r;
}

void loop() {
  Serial.print("A 32 bits random number coming from space, beyond and behind: ");
  Serial.println(RandomNumber());
}



 

 
