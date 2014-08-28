#ifndef AT_COMMANDS_H
#define AT_COMMANDS_H

#define AT_RESET 			"AT+RST"
#define AT_WIFI_MODE 		"AT+CWMODE"
#define AT_JOIN_AP 			"AT+CWJAP"
#define AT_LIST_AP 			"AT+CWLAP"
#define AT_QUIT_AP 			"AT+CWQAP"
#define AT_SET_AP_PARAMS 	"AT+CWSAP"
#define AT_GET_CON_STATUS 	"AT+CIPSTATUS"
#define AT_START_CON 		"AT+CIPSTART"
#define AT_SEND 			"AT+CIPSEND"
#define AT_CLOSE 			"AT+CIPCLOSE"
#define AT_SET_MUL_CON 		"AT+CIPUX"
#define AT_SET_SERVER 		"AT+CIPSERVER"
#define AT_RECEIVED_DATA	"+IPD"

#endif /* AT_COMMANDS_H */

