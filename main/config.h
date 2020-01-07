#ifndef CONFIG_HACK4U
#define CONFIG_HACK4U

char ssid[] = "Darwin";     // your network SSID (name)
char pass[] = "09131118";   // your network password
char gps_lat[] = "25.0716649";   // 你所在的緯度
char gps_lon[] = "121.5764358";  // 你所在的經度
const int lass_period = 60; // 幾秒想傳一次資料 建議實際上線是 60
uint8_t iota_node[4] = {140, 116, 246, 164};

#endif
