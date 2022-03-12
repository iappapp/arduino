#include <IRremote.h>  //导入红外线库
IRrecv irrecv_11(11); //定义IRrecv对象来接收红外线信号
//红外接收模块接11引脚(PWM引脚)
decode_results results_11; //解码结果放在decode_results构造的对象results_11里
unsigned long ir_item;
long i=0;

void setup() {
  Serial.begin(9600);
  irrecv_11.enableIRIn();  //启动红外解码

}

void loop() {
  if(irrecv_11.decode(&results_11)){    //解码成功，收到一组红外线信号
    ir_item=results_11.value;  //解码后的值赋值给ir_item
    //results_11.value是unsigned long型，头文件有介络
    Serial.print(i++);
    Serial.print("   ");
    Serial.println(ir_item,HEX);
    delay(50);
    irrecv_11.resume();//在解码一个红外线信号之后，要运行resume()函数，这样才会持续接收下一组信号
    
  }

}
