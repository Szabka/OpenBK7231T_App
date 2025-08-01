#include "../new_common.h"
#include "../new_pins.h"
#include "../new_cfg.h"
// Commands register, execution API and cmd tokenizer
#include "../cmnds/cmd_public.h"
#include "../mqtt/new_mqtt.h"
#include "../logging/logging.h"
#include "drv_public.h"
#include "drv_local.h"
#include "../httpserver/new_http.h"
#include "../hal/hal_pins.h"
#include "../hal/hal_adc.h"

void DRV_NTC_Init(uint8_t pin) {

}
void DRV_NTC_OnEverySecond() {
    addLogAdv(LOG_INFO, LOG_FEATURE_GENERAL, "ADC -> button \r\n");
}
void DRV_NTC_AppendInformationToHTTPIndexPage(http_request_t* request) {
  hprintf255(request, "<h4>NTC driver is running!</h4>");
}
