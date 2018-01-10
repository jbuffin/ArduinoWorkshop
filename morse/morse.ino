int LED_PIN = 8;
int ONE_UNIT_DURATION = 200;
int DAH_DURATION = 3;
int LETTER_SPACING = 3;
int WORD_SPACING = 7;

void a(); void b(); void c(); void d(); void e();void f(); void g(); void h(); void i(); void j();
void k(); void l(); void m(); void n(); void o(); void p(); void q(); void r(); void s(); void t();
void u(); void v(); void w(); void x(); void y(); void z(); void zero(); void one(); void two();
void three(); void four(); void five(); void six(); void seven(); void eight(); void nine();

void dit(); void dah();
void spell(char*);

void setup() {
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  char word_to_spell[] = {'c','o','d','e','m','a','s','h','\0'};
  spell(word_to_spell);
}

void dit() {
  digitalWrite(LED_PIN, LOW);
  delay(ONE_UNIT_DURATION);
  digitalWrite(LED_PIN, HIGH);
  delay(ONE_UNIT_DURATION);
}

void dah() {
  digitalWrite(LED_PIN, LOW);
  delay(DAH_DURATION * ONE_UNIT_DURATION);
  digitalWrite(LED_PIN, HIGH);
  delay(ONE_UNIT_DURATION);
}

void a() {
  dit();
  dah();
}

void b() {
  dah();
  dit();
  dit();
  dit();
}

void c() {
  dah();
  dit();
  dah();
  dit();
}

void d() {
  dah();
  dit();
  dit();
}

void e() {
  dit();
}

void f() {
  dit();
  dit();
  dah();
  dit();
}

void g() {
  dah();
  dah();
  dit();
}

void h() {
  dit();
  dit();
  dit();
  dit();
}

void i() {
  dit();
  dit();
}

void j() {
  dit();
  dah();
  dah();
  dah();
}

void k() {
  dah();
  dit();
  dah();
}

void l() {
  dit();
  dah();
  dit();
  dit();
}

void m() {
  dah();
  dah();
}

void n() {
  dah();
  dit();
}

void o() {
  dah();
  dah();
  dah();
}

void p() {
  dit();
  dah();
  dah();
  dit();
}

void q() {
  dah();
  dah();
  dit();
  dah();
}

void r() {
  dit();
  dah();
  dit();
}

void s() {
  dit();
  dit();
  dit();
}

void t() {
  dah();
}

void u() {
  dit();
  dit();
  dah();
}

void v() {
  dit();
  dit();
  dit();
  dah();
}

void w() {
  dit();
  dah();
  dah();
}

void x() {
  dah();
  dit();
  dit();
  dah();
}

void y() {
  dah();
  dit();
  dah();
  dah();
}

void z() {
  dah();
  dah();
  dit();
  dit();
}

void zero() {
  dah();
  dah();
  dah();
  dah();
  dah();
}
void one() {
  dit();
  dah();
  dah();
  dah();
  dah();
}
void two() {
  dit();
  dit();
  dah();
  dah();
  dah();
}
void three() {
  dit();
  dit();
  dit();
  dah();
  dah();
}
void four() {
  dit();
  dit();
  dit();
  dit();
  dah();
}
void five() {
  dit();
  dit();
  dit();
  dit();
  dit();
}
void six() {
  dah();
  dit();
  dit();
  dit();
  dit();
}
void seven() {
  dah();
  dah();
  dit();
  dit();
  dit();
}
void eight() {
  dah();
  dah();
  dah();
  dit();
  dit();
}
void nine() {
  dah();
  dah();
  dah();
  dah();
  dit();
}

void spell(char* word_to_spell) {
  char w_size = sizeof(word_to_spell);
  for(int index = 0; index < w_size; ++index) {
    switch(word_to_spell[index]) {
      case 'a':
        a();
        break;
      case 'b':
        b();
        break;
      case 'c':
        c();
        break;
      case 'd':
        d();
        break;
      case 'e':
        e();
        break;
      case 'f':
        f();
        break;
      case 'g':
        g();
        break;
      case 'h':
        h();
        break;
      case 'i':
        i();
        break;
      case 'j':
        j();
        break;
      case 'k':
        k();
        break;
      case 'l':
        l();
        break;
      case 'm':
        m();
        break;
      case 'n':
        n();
        break;
      case 'o':
        o();
        break;
      case 'p':
        p();
        break;
      case 'q':
        q();
        break;
      case 'r':
        r();
        break;
      case 's':
        s();
        break;
      case 't':
        t();
        break;
      case 'u':
        u();
        break;
      case 'v':
        v();
        break;
      case 'w':
        w();
        break;
      case 'x':
        x();
        break;
      case 'y':
        y();
        break;
      case 'z':
        z();
        break;
      case '0':
        zero();
        break;
      case '1':
        one();
        break;
      case '2':
        two();
        break;
      case '3':
        three();
        break;
      case '4':
        four();
        break;
      case '5':
        five();
        break;
      case '6':
        six();
        break;
      case '7':
        seven();
        break;
      case '8':
        eight();
        break;
      case '9':
        nine();
        break;
    }
    delay(LETTER_SPACING * ONE_UNIT_DURATION);
  }
  delay(WORD_SPACING * ONE_UNIT_DURATION);
}