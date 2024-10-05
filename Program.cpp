// ativar LED com sensor PIR

const int rele = 8; //pino do relé
const int pir = 2; //pino do sensor PIR

void setup()
{
  pinMode(rele, OUTPUT); //define relé como output
  pinMode(pir, INPUT); //define PIR como input
}

void loop()
{
  if (digitalRead(pir)) // "lê" pino do sensor
  {
    digitalWrite(rele, LOW); //se movimento for detectado, ativa a lâmpada
  }
  else
  {
    digitalWrite(rele, HIGH); //caso contrário, a apaga
  }
}