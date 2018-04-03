#ifndef __WL_API_H__
#define __WL_API_H__

#define BATT_INFOR_LEN	10
//[jinyx][start]add-navi guide
#define WL_NAVI_INFO_LEN 256
//[jinyx][end]add-navi guide

#define WL_APL_DECODER_TYPE_JPEG 0x01	/**< Jpeg decoder  */
#define WL_APL_DECODER_TYPE_H264 0x02	/**< H.264 decoder */
#define WL_APL_DECODER_TYPE_JPEG_H264 0x03	/**< Both H.264 and Jpeg decoder */

    enum wl_apl_pctl_type_t{
	WL_PAGE_TYPE_SOURCE_OFF = 0,
	WL_PAGE_TYPE_QUIT,
	WL_PAGE_TYPE_CHARGING,
	WL_PAGE_TYPE_NONE,
	WL_PAGE_TYPE_WIFI_HOME,
	WL_PAGE_TYPE_WIFI_LAUNCHER_ERR,
	WL_PAGE_TYPE_WIFI_CONNECTING,
	WL_PAGE_TYPE_WIFI_GUIDE,
	WL_PAGE_TYPE_WIFI_GUIDE_PHONE,
	WL_PAGE_TYPE_WIFI_GUIDE_CAR,
	WL_PAGE_TYPE_WIFI_CONNECT_ERR,
	WL_PAGE_TYPE_NOT_AUTH,
	WL_PAGE_TYPE_USB_INFO,
	WL_PAGE_TYPE_DEVICE_READY,
	WL_PAGE_TYPE_DEVICE_READY_IOS,
	WL_PAGE_TYPE_TOS,
	WL_PAGE_TYPE_IOS_CONNECTING,
	WL_PAGE_TYPE_CONNECTING,
	WL_PAGE_TYPE_RECONNECTING,
	WL_PAGE_TYPE_INSTALLING,
	WL_PAGE_TYPE_AUTH,
	WL_PAGE_TYPE_SERVICE_ERR,
	WL_PAGE_TYPE_WIFI_SERVICE_ERR,
	WL_PAGE_TYPE_SDK_ERR,
	WL_PAGE_TYPE_CONNECT_ERR,
	WL_PAGE_TYPE_RECONNECT_ERR,
	WL_PAGE_TYPE_CONNECT_ERR_COMPLETELY,
	WL_PAGE_TYPE_INSTALL_ERR,
	WL_PAGE_TYPE_AUTH_ERR,
	WL_PAGE_TYPE_AUTH_OVERDUE,
	WL_PAGE_TYPE_AUTH_NO_NETWORK,
	WL_PAGE_TYPE_WIFI_AUTH_NO_NETWORK,
	WL_PAGE_TYPE_AUTH_DISPLAY,
	WL_PAGE_TYPE_HEARTBEAT_ERR,
	WL_PAGE_TYPE_HEARTBEAT_WIFI,
	WL_PAGE_TYPE_IOS_CONNECT_ERR,
	WL_PAGE_TYPE_IOS_HEARTBEAT_ERR,
	WL_PAGE_TYPE_INIT_GUIDE_DEBUG,
	WL_PAGE_TYPE_INIT_GUIDE_INSTALL,
	WL_PAGE_TYPE_AOA_NONE,
	WL_PAGE_TYPE_AOA_DEVICE_IN,
	WL_PAGE_TYPE_AOA_CONNECTING,
	WL_PAGE_TYPE_AOA_CONNECT_ERR,
	WL_PAGE_TYPE_AOA_SDK_ERR,
	WL_PAGE_TYPE_SCREEN_OFF,
	WL_PAGE_TYPE_WECHAT_LOGIN,
	WL_PAGE_TYPE_WECHAT_CONFIRM_LOGIN,
	WL_PAGE_TYPE_WECHAT_LOGGED_IN,
	WL_PAGE_TYPE_REC_PREPARE,
	WL_PAGE_TYPE_RECORDING,
	WL_PAGE_TYPE_REC_EXIT,
	WL_PAGE_TYPE_LIMIT,
	WL_PAGE_TYPE_LIMIT_IOS,
	WL_PAGE_TYPE_LIMIT_WIFI_IOS,
	WL_PAGE_TYPE_RUNNING,
	WL_PAGE_TYPE_NUM
};

    enum wl_apl_pctl_button_t{
	WL_PAGE_BTN_HOME = 1,
	WL_PAGE_BTN_LAUNCHER,
	WL_PAGE_BTN_NAVI,
	WL_PAGE_BTN_PHONE,
	WL_PAGE_BTN_MUSIC,
	WL_PAGE_BTN_MSG,
	WL_PAGE_BTN_MORE,
	WL_PAGE_BTN_MIC,
	WL_PAGE_BTN_DEV_READY_AND_LINK,
	WL_PAGE_BTN_DEV_READY_IOS_LINK,
	WL_PAGE_BTN_START_WELINK,
	WL_PAGE_BTN_TURNED_ON,
	WL_PAGE_BTN_LATER_ON,
	WL_PAGE_BTN_DEV_READY_AND_CHARGE,
	WL_PAGE_BTN_DEV_READY_TIP_CLICK,
	WL_PAGE_BTN_TOS_BTN_BACK,
	WL_PAGE_BTN_ENTER_USB_INFO,
	WL_PAGE_BTN_USB_INFO_BACK,
	WL_PAGE_BTN_BTN_GOT_IT,
	WL_PAGE_BTN_BTN_CONNECT_ERR_EXIT,
	WL_PAGE_BTN_IOS_EXIT,
	WL_PAGE_BTN_WECHAT_LOGIN_EXIT,
	WL_PAGE_BTN_INIT_EXIT,
	WL_PAGE_BTN_INIT_HELP,
	WL_PAGE_BTN_INIT_GUIDE_BTN_DEBUG,
	WL_PAGE_BTN_INIT_GUIDE_BTN_INSTALL,
	WL_PAGE_BTN_INIT_GUIDE_BACK,
	WL_PAGE_BTN_WECHAT_CANCEL_LOGIN,
	WL_PAGE_BTN_QUIT_OK,
	WL_PAGE_BTN_QUIT_CANCEL,
	WL_PAGE_BTN_AUTO_NORMAL,
	WL_PAGE_BTN_AUTO_SELECTED,
	WL_PAGE_BTN_DEV_READY_AND_EXIT,
	WL_PAGE_BTN_DEV_READY_IOS_EXIT,
	WL_PAGE_BTN_INSTALL_ERR_EXIT,
	WL_PAGE_BTN_INSTALL_ERR_HELP,
	WL_PAGE_BTN_AOA_DEV_IN_CLOSE,
	WL_PAGE_BTN_WIFI_GUIDE_MANUAL_SETUP,
	WL_PAGE_BTN_WIFI_HOME_CLOSE,
	WL_PAGE_BTN_WIFI_HOME_IOS,
	WL_PAGE_BTN_WIFI_LAUNCHER_ERR_BACK,
	WL_PAGE_BTN_WIFI_LAUNCHER_ERR_OPEND,
	WL_PAGE_BTN_WIFI_CONNECTING_CHANGE_DEV,
	WL_PAGE_BTN_WIFI_GUIDE_BACK,
	WL_PAGE_BTN_WIFI_GUIDE_CHANGE_LINK_MODE,
	WL_PAGE_BTN_WIFI_GUIDE_HELP_CAR,
	WL_PAGE_BTN_WIFI_GUIDE_HELP_LAUNCHER,
	WL_PAGE_BTN_WIFI_GUIDE_HELP_PHONE,
	WL_PAGE_BTN_WIFI_GUIDE_START_LINK,
	WL_PAGE_BTN_WIFI_GUIDE_ALERT_CLOSE,
	WL_PAGE_BTN_WIFI_CONNECT_ERR_LINK_BY_USB,
	WL_PAGE_BTN_WIFI_CONNECT_ERR_TRY_AGAIN,
	WL_PAGE_BTN_WIFI_HOME_AND,
	WL_PAGE_BTN_NAVI_GUIDE_CLOSE,
	WL_PAGE_BTN_LIMIT_BACK,
	WL_PAGE_BTN_MAX_NUM
};

    enum wl_apl_msg_type_t {
	WL_APL_MSG_TYPE_APL_REQ_SHOW = 1,
	WL_APL_MSG_TYPE_APL_REQ_HIDE,
	WL_APL_MSG_TYPE_APL_OPEN_BT,
	WL_APL_MSG_TYPE_APL_BT_STATUS,
	WL_APL_MSG_TYPE_APL_REQ_BT_ADDR,
	WL_APL_MSG_TYPE_APL_RECV_MSG,
	WL_APL_MSG_TYPE_APL_NAVI_GUIDE_START,
	WL_APL_MSG_TYPE_APL_NAVI_GUIDE_STOP,
	WL_APL_MSG_TYPE_APL_UPDATE_KEY,
	WL_APL_MSG_TYPE_APL_CONNECTING,
	WL_APL_MSG_TYPE_APL_CONNECTED,
	WL_APL_MSG_TYPE_APL_CONNECT_ERR,
	WL_APL_MSG_TYPE_APL_DISCONNECT,
	WL_APL_MSG_TYPE_APL_START_RECORD,
	WL_APL_MSG_TYPE_APL_STOP_RECORD,
	WL_APL_MSG_TYPE_APP_SHOW_WELINK,
	WL_APL_MSG_TYPE_APP_HIDE_WELINK,
	WL_APL_MSG_TYPE_APP_BT_ADDR,
	WL_APL_MSG_TYPE_APP_SER_NUM,
	WL_APL_MSG_TYPE_MAX_NUM
};

typedef enum {
  WL_APL_IMAGE_FORMAT_RGB=0,	/**< RGB format  */
  WL_APL_IMAGE_FORMAT_BGR,		/**< BGR format  */
  WL_APL_IMAGE_FORMAT_RGBX,		/**< RGBX format  */
  WL_APL_IMAGE_FORMAT_BGRX,		/**< BGRX format  */
  WL_APL_IMAGE_FORMAT_XBGR,		/**< XBGR format  */
  WL_APL_IMAGE_FORMAT_XRGB,		/**< XRGB format  */
  WL_APL_IMAGE_FORMAT_GRAY,		/**< GRAY format  */
  WL_APL_IMAGE_FORMAT_RGBA,		/**< RGBA format  */
  WL_APL_IMAGE_FORMAT_BGRA,		/**< BGRA format  */
  WL_APL_IMAGE_FORMAT_ABGR,		/**< ABGR format  */
  WL_APL_IMAGE_FORMAT_ARGB,		/**< ARGB format  */
  WL_APL_IMAGE_FORMAT_CMYK		/**< CMYK format  */
}wl_apl_image_format_t;

typedef enum {
	WL_APL_IMAGE_TYPE_RGB = 0,	/**< RGB */
	WL_APL_IMAGE_TYPE_H264,		/**< H.264 */
	WL_APL_IMAGE_TYPE_JPG,		/**< JPG */
	WL_APL_IMAGE_TYPE_PNG,		/**< PNG */
	WL_APL_IMAGE_TYPE_BMP		/**< BMP */
}wl_apl_image_type_t;

typedef enum {
	WL_APl_H264_FREAM_TYPE_SPS_IDR = 1,	/**< H264 Data SPS PPS IDR Frame */
	WL_APl_H264_FREAM_TYPE_IDR,			/**< H264 Data IDR Frame */
	WL_APl_H264_FREAM_TYPE_P,			/**< H264 Data P Frame */
	WL_APl_H264_FREAM_TYPE_ERR			/**< H264 Data Error Frame */
}wl_apl_h264_fream_type_t;
/**
 * @brief Define the RGB data info.
 */
typedef struct {
	int width;	/**< Image width */
	int height;	/**< Image height */
	int size;	/**< Image data size */
	void *data;	/**< Image data */
	wl_apl_image_format_t format;	/**< Image data format, defined in wl_image_format_t */
}wl_apl_rgb_info_t;

/**
 * @brief Define the H.264 data info.
 */
typedef struct {
	int spsppsDataSize;	/**< SPS & PPS data size */
	int width;			/**< Frame width */
	int height;			/**< Frame height */
	int size;			/**< Frame size */
	void *data;			/**< Frame data */
	wl_apl_h264_fream_type_t frameType;		/**< Frame type, defined in wl_h264_fream_type_t */
}wl_apl_h264_info_t;

/**
 * @brief Define the image info.
 */
typedef struct {
	wl_apl_image_type_t type;				/**< Image data type,  defined in wl_sdk_image_type_t*/
	union{
		wl_apl_rgb_info_t	rgb_info;	/**< RGB data info */
		wl_apl_h264_info_t	h264_info;		/**< H.264  data info */
	}info;
}wl_apl_image_info_t;


typedef enum
{
	Battery_ChargeState_Quick,
	Battery_ChargeState_Normal,
	Battery_ChargeState_Trickle,
	Battery_ChargeState_Complete
}wl_apl_chargestate_t;

typedef struct {
	int iLevel;
	int iVoltage;
	int iChargeState;
	char cRemainVoltage[BATT_INFOR_LEN];
	char cRemainTime[BATT_INFOR_LEN];
	char cAvailTime[BATT_INFOR_LEN];
	char cTimeForNet[BATT_INFOR_LEN];
	char cTimeForMusic[BATT_INFOR_LEN];
	char cTimeForBluetooth[BATT_INFOR_LEN];	
	char cTimeForGPS[BATT_INFOR_LEN];
	char cLevel[BATT_INFOR_LEN];
}wl_apl_battery_t;

typedef int (*update_page)(int, void *);
typedef int (*recv_msg)(int, void *);
typedef int (*audio_data)(void *, int);

typedef struct {
	update_page func_update_page;
	recv_msg	func_msg_notice;
	audio_data	func_audio_data;
}wl_apl_cb_t;

typedef struct {
	int x;
	int y;
	int w;
	int h;
}wl_apl_screen_position_t;

typedef struct {
	const char 					*config_file_path;
	const char					*huVersion;
	wl_apl_cb_t					cb_func;
	wl_apl_image_format_t		fmt;
	wl_apl_screen_position_t	screen;
}wl_apl_config_t;

//[jinyx][start]add-navi guide
typedef struct  
{
	char	name[WL_NAVI_INFO_LEN];					
	char	nextName[WL_NAVI_INFO_LEN];				
	char	distanceToCurrPoint[WL_NAVI_INFO_LEN];	
	char	direction[WL_NAVI_INFO_LEN];			
	int		icon;									
	char	remainDistance[WL_NAVI_INFO_LEN];		
	char	remainTime[WL_NAVI_INFO_LEN];			
	int		limitSpeed;								
	char	currSpeed[WL_NAVI_INFO_LEN];			
	int		percentToCurrPoint;						
}wl_apl_navi_guide_t;
//[jinyx][end]add-navi guide

int wl_apl_set_config(wl_apl_config_t *config);
int wl_apl_init(void);
int wl_apl_deinit(void);
int wl_apl_point_down(int x, int y);
int wl_apl_point_up(int x, int y);
int wl_apl_point_move(int x, int y);
int wl_apl_send_record_data(char *data, int size);
int wl_apl_send_audio_data(int type, char *data, int size);
int wl_apl_send_button(int btn, int para);
int wl_apl_send_msg(int msg, void *para);
int wl_apl_get_battery(int *lev, int * vol);
int wl_apl_get_battery_info(wl_apl_battery_t *battInfo);
const char * wl_apl_get_version(void);

#endif
