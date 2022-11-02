int audioPin = 9;
char lectura=' ';

void setup() {
  pinMode(audioPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if(Serial.available()>0)
  {
    lectura=Serial.read();
  }
  if(lectura == 'a' || lectura == 'A')
  {
    punto();
    linea();
    lectura=' ';
  }
  if(lectura == 'b' || lectura == 'B')
  {
    linea();
    punto();
    punto();
    punto();
    lectura=' ';
  }
  if(lectura == 'c' || lectura == 'C')
  {
    linea();
    punto();
    linea();
    punto();
    lectura=' ';
  }
  if(lectura == 'd' || lectura == 'D')
  {
    linea();
    punto();
    punto();
    lectura=' ';
  }
  if(lectura == 'e' || lectura == 'E')
  {
    punto();
    lectura=' ';
  }
  if(lectura == 'f' || lectura == 'F')
  {
    punto();
    punto();
    linea();
    punto();
    lectura=' ';
  }
  if(lectura == 'g' || lectura == 'G')
  {
    linea();
    linea();
    punto();
    lectura=' ';
  }
  if(lectura == 'h' || lectura == 'H')
  {
    punto();
    punto();
    punto();
    punto();
    lectura=' ';
  }
  if(lectura == 'i' || lectura == 'I')
  {
    punto();
    punto();
    lectura=' ';
  }
  if(lectura == 'j' || lectura == 'J')
  {
    punto();
    linea();
    linea();
    linea();
    lectura=' ';
  }
  if(lectura == 'k' || lectura == 'K')
  {
    linea();
    punto();
    linea();
    lectura=' ';
  }
  if(lectura == 'l' || lectura == 'L')
  {
    punto();
    linea();
    punto();
    punto();
    lectura=' ';
  }
  if(lectura == 'm' || lectura == 'M')
  {
    linea();
    linea();
    lectura=' ';
  }
  if(lectura == 'n' || lectura == 'N')
  {
    linea();
    punto();
    lectura=' ';
  }
  if(lectura == 'o' || lectura == 'O')
  {
    linea();
    linea();
    linea();
    lectura=' ';
  }
  if(lectura == 'p' || lectura == 'P')
  {
    punto();
    linea();
    linea();
    punto();
    lectura=' ';
  }
  if(lectura == 'q' || lectura == 'Q')
  {
    linea();
    linea();
    punto();
    linea();
    lectura=' ';
  }
  if(lectura == 'r' || lectura == 'R')
  {
    punto();
    linea();
    punto();
    lectura=' ';
  }
  if(lectura == 's' || lectura == 'S')
  {
    punto();
    punto();
    punto();
    lectura=' ';
  }
  if(lectura == 't' || lectura == 'T')
  {
    linea();
    lectura=' ';
  }
  if(lectura == 'u' || lectura == 'U')
  {
    punto();
    punto();
    linea();
    lectura=' ';
  }
  if(lectura == 'v' || lectura == 'V')
  {
    punto();
    punto();
    punto();
    linea();
    lectura=' ';
  }
  if(lectura == 'w' || lectura == 'W')
  {
    punto();
    linea();
    linea();
    lectura=' ';
  }
  if(lectura == 'x' || lectura == 'X')
  {
    linea();
    punto();
    punto();
    linea();
    lectura=' ';
  }
  if(lectura == 'y' || lectura == 'Y')
  {
    linea();
    punto();
    linea();
    linea();
    lectura=' ';
  }
  if(lectura == 'z' || lectura == 'Z')
  {
    linea();
    linea();
    punto();
    punto();
    lectura=' ';
  }
}
void punto()
{
  Serial.print(" . ");
  tone(audioPin, 500, 200);
  delay(500);
  noTone(audioPin);
}
void linea()
{
  Serial.print(" - ");
  tone(audioPin, 500, 400);
  delay(500);
  noTone(audioPin);
}
