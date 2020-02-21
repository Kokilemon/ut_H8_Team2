#define can_distance 5 //缶を収納したと判定する距離（単位はcm）

int count =0;//モードを示すカウンタ

void change_count(){//カウンタを更新する関数
  if(count == 1 && ultrasonic_sensor() < can_distance) count++;カウンタが1の時に缶を検知するとインクリメント
  if(pr1 > STOP || pr2 > STOP) count++;//銀テープを検知するとカウンタをインクリメント
  if(count == 9) count = 1;
}
