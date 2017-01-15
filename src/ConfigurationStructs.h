#ifndef CONFIG_STRUCTS
#define CONFIG_STRUCTS

enum SensorType {
  NO_SENSOR,
  DHT22_COMPATIBLE,
  SIMPLE_ANALOG,
  SIMPLE_DIGITAL
};

struct WiFiConfiguration {
  char ssid[32];
  char password[64];
};

struct MQTTConfiguration {
  char server[256];
  int port;
  bool useSSL;
  char user[64];
  char password[64];
  char boardName[256];
};

struct SensorConfiguration {
  int pin;
  SensorType sensorType;
};

struct ConfigurationStruct {
  int status;
  int sensorCount;
  WiFiConfiguration wifiConfig;
  MQTTConfiguration mqttConfig;
};
#endif