

// errors
#define OPENAPI_ERR_GATEWAY                                         10
#define OPENAPI_ERR_NO_RESPONSE                                     11

// commands
#define OPENAPI_PONG                                                16
#define OPENAPI_PING                                                17

#define OPENAPI_LOGIN                                              10000
#define OPENAPI_LOGIN_WITH_TOKEN                                   10001
#define OPENAPI_LOGIN_RESPONSE                                     10002
#define OPENAPI_LOGIN_ERROR_RESPONSE                               10003
#define OPENAPI_TC_NOTIFICATION                                    10004
#define OPENAPI_TC_REQUEST                                         10005
#define OPENAPI_BALANCE_NOTIFICATION                               10006
#define OPENAPI_LOGOUT_REQUEST                                     10007
#define OPENAPI_LOGOUT_NOTIFICATION                                10008
#define OPENAPI_LOGOUT_RESPONSE                                    10009
#define OPENAPI_COLLECT_STATS_REQUEST                              10021
#define OPENAPI_USERINFO_NICKNAME_RESPONSE                         10022
#define OPENAPI_SERVER_TIME_REQUEST                                23512
#define OPENAPI_SERVER_TIME_RESPONSE                               23513
#define OPENAPI_BALANCE_REQUEST                                    31150
#define OPENAPI_BALANCE_RESPONSE                                   31151
#define OPENAPI_COMPPOINTS_REQUEST                                 35203
#define OPENAPI_COMPPOINTS_RESPONSE                                35204
#define OPENAPI_KILL_GAME_WINDOW_SESSION_REQUEST                   40294
// UMS
#define OPENAPI_TEMP_TOKEN_REQUEST                                 30001
#define OPENAPI_TEMP_TOKEN_RESPONSE                                30002
#define OPENAPI_TEMP_TOKEN_RESPONSE_ERROR                          30003
#define OPENAPI_IMS_LOGIN                                          31001
#define OPENAPI_IMS_LOGIN_RESPONSE                                 31002
#define OPENAPI_IMS_LOGIN_ERROR_RESPONSE                           31009
#define OPENAPI_IMS_ACCEPT_TC_NOTIFICATION                         31010
#define OPENAPI_IMS_ACCEPT_TC_REQUEST                              31011
#define OPENAPI_IMS_DYNAMIC_BALANCE_REQUEST                        31020
#define OPENAPI_IMS_DYNAMIC_BALANCE_RESPONSE                       31021
#define OPENAPI_SET_SESSION_PARAMETERS_REQUEST                     31140
#define OPENAPI_SET_SESSION_PARAMETERS_RESPONSE                    31141
#define OPENAPI_SET_SESSION_PARAMETERS_ERROR_RESPONSE              31142
#define OPENAPI_IMS_LOGIN_WITH_EXTERNAL_TOKEN                      33050
#define OPENAPI_IMS_LOGIN_WITH_SESSION_TOKEN                       33036

#define OPENAPI_IMS_LOGOUT_REQUEST                                 31013
#define OPENAPI_IMS_LOGOUT_RESPONSE                                31014
#define OPENAPI_IMS_LOGOUT_ERROR_RESPONSE                          31015
#define OPENAPI_IMS_LOGOUT_NOTIFICATION                            33004
#define OPENAPI_IMS_LOGIN_MESSAGE_NOTIFICATION                     31027
#define OPENAPI_IMS_BONUS_MESSAGE_ACCEPT_RESPONSE                  31024
#define OPENAPI_IMS_BONUS_MESSAGE_NOTIFICATION                     31026

#define OPENAPI_GET_URLS_REQUEST                                   31031
#define OPENAPI_GET_URLS_RESPONSE                                  31032
#define OPENAPI_GET_URLS_RESPONSE_ERROR                            31033

#define OPENAPI_GET_FEATURE_LIST_NOTIFICATION_RESPONCE             99999

#define OPENAPI_APPLY_SELF_EXCLUSION_REQUEST                       31052
#define OPENAPI_APPLY_SELF_EXCLUSION_RESPONCE                      31053
#define COMMANG_APPLY_SELF_EXCLUSUIN_ERROR                         31054

#define OPENAPI_GET_SELF_EXCLUSION_REQUEST                         31055
#define OPENAPI_GET_SELF_EXCLUSION_RESPONCE                        31056

#define OPENAPI_GET_PLAYER_TIMEOUT_REQUEST                         89909
#define OPENAPI_GET_PLAYER_TIMEOUT_RESPONCE                        89911
// check why the same error id
//#define OPENAPI_GET_PLAYER_TIMEOUT_ERROR 89900

#define OPENAPI_GET_PLAYER_DEPOSIT_LIMITS_REQUEST                  89901
#define OPENAPI_GET_PLAYER_DEPOSIT_LIMITS_RESPONCE                 89905
#define OPENAPI_GET_PLAYER_DEPOSIT_LIMITS_ERROR                    89900

// Forgot & Change Password
#define OPENAPI_APPLY_FORGOT_PASSWORD_REQUEST                      31058
#define OPENAPI_APPLY_FORGOT_PASSWORD_RESPONCE                     31059
#define COMMANG_APPLY_FORGOT_PASSWORD_ERROR                        31060

#define OPENAPI_APPLY_FORGOT_USERNAME_REQUEST                      35520
#define OPENAPI_APPLY_FORGOT_USERNAME_RESPONCE                     35521
#define COMMANG_APPLY_FORGOT_USERNAME_ERROR                        35522


#define OPENAPI_GET_CHANGE_PASSWORD_NOTIFICATION_RESPONCE          31012

#define OPENAPI_APPLY_CHANGE_PASSWORD_REQUEST                      31028
#define OPENAPI_APPLY_CHANGE_PASSWORD_RESPONCE                     31029
#define COMMANG_APPLY_CHANGE_PASSWORD_ERROR                        31030

// Registration
#define OPENAPI_GET_PLAYER_INFO_REQUEST                            31082
#define OPENAPI_GET_PLAYER_INFO_RESPONSE                           31083
#define OPENAPI_GET_PLAYER_INFO_ERROR_RESPONSE                     31084

#define OPENAPI_ALERT                                              40073

#define OPENAPI_SESSION_TIMER_EXTEND_RESPONSE                      40075

#define OPENAPI_GAME_LIMITS_REQUEST                                40024
#define OPENAPI_GAME_LIMITS_RESPONSE                               40025

#define OPENAPI_GAME_LOGIN_REQUEST                                 40050
#define OPENAPI_GAME_LOGIN_RESPONSE                                40026
#define OPENAPI_GAME_LOGIN_ERROR_RESPONSE                          40027
#define OPENAPI_GAME_LOGOUT_REQUEST                                40028

//Accept Dialog

#define OPENAPI_ACCEPT_DIALOG_NOTIFICATION                         40033
#define OPENAPI_ACCEPT_DIALOG_REQUEST                              40034
#define OPENAPI_GET_BONUS_DETAILS_REQUEST                          40447
#define OPENAPI_GET_BONUS_DETAILS_RESPONSE                         40448
#define OPENAPI_DIALOG_NOTIFICATION                                47591
#define OPENAPI_DIALOG_SUBMIT_REQUEST                              47865
#define OPENAPI_DIALOG_SUBMIT_REQUEST_FAILURE                      47866
#define OPENAPI_TOASTER_NOTIFICATION_RESPONSE                      47868
#define OPENAPI_DIALOG_CLOSED_NOTIFICATION                         47594

// Enhanced engagement dialog

#define OPENAPI_ENHANCED_DIALOG_NOTIFICATION                       47867

// broken games
#define OPENAPI_RESERVE_BROKEN_GAMES_REQUEST                       40030
#define OPENAPI_RESERVE_BROKEN_GAMES_RESPONSE                      40031
#define OPENAPI_RESERVE_BROKEN_GAMES_ERROR_RESPONSE                40032
#define OPENAPI_BROKEN_GAMES_LIST_REQUEST                          40036
#define OPENAPI_BROKEN_GAMES_LIST_RESPONSE                         40037

// Server Cheats

#define OPENAPI_SERVER_CHAT_MESSAGE                                40039

// Jackpot updates
#define OPENAPI_JACKPOT_UPDATES_SUBSCRIBE_REQUEST                  40041
#define OPENAPI_JACKPOT_UPDATES_NOTIFICATION                       40042

//Marvel Jackpot
#define OPENAPI_MARVEL_JACKPOT_GAME_REQUEST                        40070
#define OPENAPI_MARVEL_JACKPOT_GAME_RESPONSE                       40071
#define OPENAPI_MARVEL_FINISH_ROUND_NOTIFICATION                   40072

// Regulation (Italy)
#define OPENAPI_ITALY_GAME_MODE_RESPONSE                           40381

#define OPENAPI_REGULATION_LOGIN_RESPONSE                          40079
#define OPENAPI_TABLE_BALANCE_RESPONSE                             40080
#define OPENAPI_TABLE_MONEY_TRANSACTION_REQUEST                    40082
#define OPENAPI_TABLE_MONEY_TRANSACTION_RESPONSE                   40081

#define OPENAPI_GET_FSB_BONUSES_REQUEST                            48465
#define OPENAPI_GET_FSB_BONUSES_RESPONSE                           48466

#define OPENAPI_GET_FSB_COINSIZE_REQUEST                           40095
#define OPENAPI_GET_FSB_COINSIZE_RESPONSE                          40096

#define OPENAPI_FSB_REQUEST                                        40092
#define OPENAPI_FSB_RESPONSE                                       40093

#define OPENAPI_GAME_MODE_REQUEST                                  40380

#define OPENAPI_GOLDEN_CHIP_RESPONSE                               10023
#define OPENAPI_GOLDEN_BONUSBALANCES_REQUEST                       10024
#define OPENAPI_GOLDEN_BONUSBALANCES_RESPONSE                      10025
#define OPENAPI_GAME_MODE_LIST_NOTIFICATION                        40382

#define OPENAPI_COOLDOWN_NOTIFICATION                              48576

#define OPENAPI_UPDATE_NICKNAME_REQUEST                            48578
#define OPENAPI_UPDATE_NICKNAME_RESPONSE                           21531
#define OPENAPI_UPDATE_NICKNAME_ERROR                              48577

// Regulation (ES)
#define OPENAPI_ES_SET_SESSION_LIMIT_REQUEST                       41111
#define OPENAPI_ES_SET_SESSION_LIMIT_RESPONSE                      41112
#define OPENAPI_ES_SET_SELF_EXCLUSION_REQUEST                      41114
#define OPENAPI_ES_SET_SELF_EXCLUSION_RESPONSE                     41115


// Regulation (UK)
// Reality check
#define OPENAPI_ACCEPT_REALITY_CHECK_REQUEST                       47596
#define OPENAPI_ACCEPT_REALITY_CHECK_NOTIFICATION                  47597
#define OPENAPI_ACCEPT_REALITY_CHECK_ERROR_NOTIFICATION            47598
#define OPENAPI_ACCEPT_REALITY_CHECK_GAME_CLOSE_NOTIFICATION       47599

// ???
#define OPENAPI_TABLE_MONEY_TRANSACTION_ERROR_RESPONSE             40084
#define OPENAPI_DYNAMIC_BALANCE_CHANGE_NOTIFICATION                40085
#define OPENAPI_DYNAMIC_BALANCE_CHANGE_NOTIFICATION_LOBBY          40083

// European Roulette
#define OPENAPI_RO_HISTORY_NOTIFICATION                            40059
#define OPENAPI_RO_ADD_COIN_REQUEST                                40060
#define OPENAPI_RO_REMOVE_COIN_REQUEST                             40061
#define OPENAPI_RO_CLEAR_BETS_REQUEST                              40065
#define OPENAPI_RO_DEAL_REQUEST                                    40110
#define OPENAPI_RO_DEAL_RESPONSE                                   40111
#define OPENAPI_RO_DEAL_ERROR_RESPONSE                             40112
#define OPENAPI_RO_REBET_REQUEST                                   40113
#define OPENAPI_RO_ADD_COIN_ERROR_RESPONSE                         40114
#define OPENAPI_RO_REMOVE_COIN_ERROR_RESPONSE                      40115

// Blackjack and Blackjack Switch
#define OPENAPI_BJ_CLIENT_STATE_NOTIFICATION                       40126
#define OPENAPI_BJ_BET_REQUEST                                     40116
#define OPENAPI_BJ_BET_ERROR_RESPONSE                              40127
#define OPENAPI_BJ_DEAL_REQUEST                                    40117
#define OPENAPI_BJ_DEAL_RESPONSE                                   40118
#define OPENAPI_BJ_DEAL_ERROR_RESPONSE                             40119
#define OPENAPI_BJ_INPUT_REQUEST_RESPONSE                          40120
#define OPENAPI_BJ_INPUT_NOTIFICATION_ERROR                        40121
#define OPENAPI_BJ_INPUT_REQUEST                                   40124
#define OPENAPI_BJ_INPUT_RESPONSE                                  40122
#define OPENAPI_BJ_INPUT_ERROR_RESPONSE                            40123
#define OPENAPI_BJ_FINISH_NOTIFICATION                             40125

// Blackjack Switch
#define OPENAPI_BJS_SUPERMATCH_BET_REQUEST                         40169

// Baccarat
#define OPENAPI_BACCARAT_GAME_LOGIN_RESPONSE                       40168
#define OPENAPI_BACCARAT_ADD_COIN_REQUEST                          40134
#define OPENAPI_BACCARAT_ADD_COIN_ERROR_RESPONSE                   40136
#define OPENAPI_BACCARAT_DEAL_REQUEST                              40131
#define OPENAPI_BACCARAT_DEAL_RESPONSE                             40132
#define OPENAPI_BACCARAT_DEAL_ERROR_RESPONSE                       40133

// Casino Holdem
#define OPENAPI_CASINO_HOLDEM_DEAL_REQUEST                         40160
#define OPENAPI_CASINO_HOLDEM_DEAL_RESPONSE                        40161
#define OPENAPI_CASINO_HOLDEM_DEAL_ERROR_RESPONSE                  40162
#define OPENAPI_CASINO_HOLDEM_CALL_REQUEST                         40163
#define OPENAPI_CASINO_HOLDEM_FOLD_REQUEST                         40164
#define OPENAPI_CASINO_HOLDEM_FINISH_NOTIFICATION                  40165
#define OPENAPI_CASINO_HOLDEM_FINISH_ERROR_NOTIFICATION            40166
#define OPENAPI_CASINO_HOLDEM_CLIENT_STATE_NOTIFICATION            40167
#define OPENAPI_CASINO_HOLDEM_CALL_ERROR_RESPONSE                  48200
#define OPENAPI_CASINO_HOLDEM_FOLD_ERROR_RESPONSE                  48201

// Video Poker (Jacks or Better, Deuces Wild)
#define OPENAPI_VP_CLIENT_STATE_NOTIFICATION                       40178
#define OPENAPI_VP_DEAL_REQUEST                                    40175
#define OPENAPI_VP_DEAL_RESPONSE                                   40176
#define OPENAPI_VP_DEAL_ERROR_RESPONSE                             40177
#define OPENAPI_VP_FINISH_REQUEST                                  40179
#define OPENAPI_VP_FINISH_RESPONSE                                 40180
#define OPENAPI_VP_FINISH_ERROR_RESPONSE                           40181
#define OPENAPI_VP_DOUBLE_REQUEST                                  40182
#define OPENAPI_VP_DOUBLE_RESPONSE                                 40183
#define OPENAPI_VP_DOUBLE_SELECT_REQUEST                           40186
#define OPENAPI_VP_DOUBLE_SELECT_RESPONSE                          40187
#define OPENAPI_VP_COLLECT_REQUEST                                 40185

// Jacks or Better multihand
#define OPENAPI_JOB_CLIENT_STATE_NOTIFICATION                      40387

#define OPENAPI_JOB_SELECT_HANDS_REQUEST                           40384
#define OPENAPI_JOB_SELECT_HANDS_RESPONSE                          40385

#define OPENAPI_JOB_START_DEAL_REQUEST                             40175
#define OPENAPI_JOB_START_DEAL_RESPONSE                            40176
#define OPENAPI_JOB_DEAL_ERROR_RESPONSE                            40177

#define OPENAPI_JOB_FINISH_DEAL_REQUEST                            40179
#define OPENAPI_JOB_FINISH_DEAL_REPONSE                            40180

#define OPENAPI_JOB_DOUBLE_UP_REQUEST                              40182
#define OPENAPI_JOB_DOUBLE_UP_RESPONSE                             40183

#define OPENAPI_JOB_FINISH_DOUBLE_UP_REQUEST                       40186
#define OPENAPI_JOB_FINISH_DOUBLE_UP_RESPONSE                      40187

#define OPENAPI_JOB_COLLECT_WIN_REQUEST                            40185



//Slots (Burning Cherry)
#define OPENAPI_SL_GAME_LOGIN_REQUEST                              40020
#define OPENAPI_SL_CLIENT_STATE_NOTIFICATION                       40104
#define OPENAPI_SL_SPIN_REQUEST                                    40021
#define OPENAPI_SL_SPIN_RESPONSE                                   40022
#define OPENAPI_SL_SPIN_ERROR_RESPONSE                             40023
#define OPENAPI_SL_DOUBLE_CHECK_REQUEST                            40373
#define OPENAPI_SL_DOUBLE_CHECK_RESPONSE                           40372
#define OPENAPI_SL_DOUBLE_CHECK_ERROR_RESPONSE                     40371
#define OPENAPI_SL_DOUBLE_COLOR_SUIT_REQUEST                       40379
#define OPENAPI_SL_DOUBLE_COLOR_SUIT_RESPONSE                      40378
#define OPENAPI_SL_DOUBLE_COLLECT_REQUEST                          40376
#define OPENAPI_SL_DOUBLE_COLLECT_RESPONSE                         40375
#define OPENAPI_SL_DOUBLE_COLLECT_ERROR_RESPONSE                   40375
#define OPENAPI_SL_DOUBLE_HIGH_CARD_REQUEST                        40460
#define OPENAPI_SL_DOUBLE_HIGH_CARD_RESPONSE                       40461
#define OPENAPI_SL_DOUBLE_HIGH_CARD_ERROR_RESPONSE                 40462
#define OPENAPI_SL_DOUBLE_HIGH_CARD_PICK_REQUEST                   40463
#define OPENAPI_SL_DOUBLE_HIGH_CARD_PICK_RESPONSE                  40464
#define OPENAPI_SL_DOUBLE_HIGH_CARD_PICK_ERROR_RESPONSE            40465

#define OPENAPI_SL_CLOVERGOLD_BONUS_REQUEST                        40390
#define OPENAPI_SL_CLOVERGOLD_BONUS_NOTIFICATION                   40391
#define OPENAPI_SL_CLOVERGOLD_CLIENT_STATE_NOTIFICATION            40393

#define OPENAPI_SL_MAYA_START_BONUS_REQUEST                        40414
#define OPENAPI_SL_MAYA_BONUS_REQUEST                              40410
#define OPENAPI_SL_MAYA_BONUS_RESPONSE                             40411
#define OPENAPI_SL_MAYA_BONUS_ERROR_RESPONSE                       40412
#define OPENAPI_SL_MAYA_CLIENT_STATE_NOTIFICATION                  40413

#define OPENAPI_SL_IRONMAN2_CLIENT_STATE_NOTIFICATION              40105
#define OPENAPI_SL_IRONMAN2_FREE_SPIN_REQUEST                      40106

#define OPENAPI_SL_FRANKIE_DETTORI_BONUS_REQUEST                   40450
#define OPENAPI_SL_FRANKIE_DETTORI_BONUS_RESPONSE                  40451
#define OPENAPI_SL_FRANKIE_DETTORI_BONUS_ERROR_RESPONSE            40452
#define OPENAPI_SL_FRANKIE_DETTORI_CLIENT_STATE_NOTIFICATION       40453

#define OPENAPI_SL_BONUS_REQUEST                                   40029

#define OPENAPI_SL_BURNING_CHERRY_3D_CLIENT_STATE_NOTIFICATION     40880
#define OPENAPI_SL_BURNING_CHERRY_3D_SPIN_RESPONSE                 40881

//Slots (Hotel Of Horror)

#define OPENAPI_SL_HOTEL_OF_HORROR_SPIN_RESPONSE                   40891
#define OPENAPI_SL_HOTEL_OF_HORROR_CLIENT_STATE_NOTIFICATION       40890

//Slots (Gladiator JP)

#define OPENAPI_SL_GLADIATOR_JP_CLIENT_STATE_NOTIFICATION          40314
#define OPENAPI_SL_GLADIATOR_JP_COLISEUM_BONUS_REQUEST             40137
#define OPENAPI_SL_GLADIATOR_JP_COLISEUM_BONUS_RESPONSE            40138
#define OPENAPI_SL_GLADIATOR_JP_COLISEUM_BONUS_FINISH_RESPONSE     40140
#define OPENAPI_SL_GLADIATOR_JP_GLADIATOR_BONUS_REQUEST            40310
#define OPENAPI_SL_GLADIATOR_JP_GLADIATOR_BONUS_RESPONSE           40311
#define OPENAPI_SL_GLADIATOR_JP_GLADIATOR_BONUS_FINISH_RESPONSE    40312
#define OPENAPI_SL_GLADIATOR_JP_START_BONUS_GAME_REQUEST           40029

//Slots Spamalot

#define OPENAPI_SL_SPAMALOT_BONUS_STATE_REQUEST                    40693
#define OPENAPI_SL_SPAMALOT_BONUS_STATE_RESPONCE                   40700

#define OPENAPI_SL_SPAMALOT_START_STROM_THE_CASTLE_REQUEST         40694
#define OPENAPI_SL_SPAMALOT_START_NONE_SHALL_PASS_REQUEST          40695
#define OPENAPI_SL_SPAMALOT_START_KNIGHTS_WHO_SAY_NI_REQUEST       40696
#define OPENAPI_SL_SPAMALOT_START_KILLER_RABBIT_REQUEST            40697
#define OPENAPI_SL_SPAMALOT_START_HOLLY_GRAIL_REQUEST              40698

#define OPENAPI_SL_SPAMALOT_BONUS_PICK_REQUEST                     40690
#define OPENAPI_SL_SPAMALOT_BONUS_COLLECT_REQUEST                  40691
#define OPENAPI_SL_SPAMALOT_BONUS_CONTINUE_REQUEST                 40692

#define OPENAPI_SL_SPAMALOT_CLIENT_STATE_NOTIFICATION              40702

#define CASINO_ERROR_NOTIFICATION                                  40744

//Slots Helloween
#define OPENAPI_SL_HELLOWEEN_BONUS_STATE_REQUEST                   40203
#define OPENAPI_SL_HELLOWEEN_BONUS_STATE_RESPONCE                  40204
#define OPENAPI_SL_HELLOWEEN_CLIENT_STATE_NOTIFICATION             40206

//Slots

#define OPENAPI_SL_PICK_BONUS_REQUEST                              40900
#define OPENAPI_SL_PICK_BONUS_RESPONSE                             40901
#define OPENAPI_SL_PICK_BONUS_ERROR_RESPONSE                       40902

//Slots (GTS EEG GAMES)
// Open Game
#define OPENAPI_CASINO_GTS_COMMON_OPEN_GAME_REQUEST                46090
#define OPENAPI_CASINO_GTS_COMMON_OPEN_GAME_ERROR_RESPONSE         46092
//Load Win Lines
#define OPENAPI_CASINO_GTS_COMMON_LOAD_WIN_LINES_REQUEST           46093
#define OPENAPI_CASINO_GTS_COMMON_LOAD_WIN_LINES_RESPONSE          46094
#define OPENAPI_CASINO_GTS_COMMON_LOAD_WIN_LINES_ERROR_RESPONSE    46095
//Load Odds
#define OPENAPI_CASINO_GTS_COMMON_LOAD_ODDS_REQUEST                46096
#define OPENAPI_CASINO_GTS_COMMON_LOAD_ODDS_RESPONSE               46097
#define OPENAPI_CASINO_GTS_COMMON_LOAD_ODDS_ERROR_RESPONSE         46098
//Close Game
#define OPENAPI_CASINO_GTS_COMMON_CLOSE_GAME_REQUEST               46099
#define OPENAPI_CASINO_GTS_COMMON_CLOSE_GAME_RESPONSE              46100
#define OPENAPI_CASINO_GTS_COMMON_CLOSE_GAME_ERROR_RESPONSE        46101
//Place Bets
#define OPENAPI_CASINO_GTS_COMMON_PLACE_BETS_REQUEST               46102
#define OPENAPI_CASINO_GTS_COMMON_PLACE_BETS_RESPONSE              46103
#define OPENAPI_CASINO_GTS_COMMON_PLACE_BETS_ERROR_RESPONSE        46104
//Load Results
#define OPENAPI_CASINO_GTS_COMMON_LOAD_RESULTS_REQUEST             46105
#define OPENAPI_CASINO_GTS_COMMON_LOAD_RESULTS_ERROR_RESPONSE      46107
//Action
#define OPENAPI_CASINO_GTS_COMMON_ACTION_REQUEST                   46108
#define OPENAPI_CASINO_GTS_COMMON_ERROR_RESPONSE                   46110
//Settle Bets
#define OPENAPI_CASINO_GTS_COMMON_SETTLE_BETS_REQUEST              46111
#define OPENAPI_CASINO_GTS_COMMON_SETTLE_BETS_RESPONSE             46112
#define OPENAPI_CASINO_GTS_COMMON_SETTLE_BETS_ERROR_RESPONSE       46113
//Load Reels
#define OPENAPI_CASINO_GTS_COMMON_LOAD_REELS_REQUEST                46114
#define OPENAPI_CASINO_GTS_COMMON_LOAD_REELS_RESPONSE               46115
#define OPENAPI_CASINO_GTS_COMMON_LOAD_REELS_ERROR_RESPONSE         46116
//Config
#define OPENAPI_CASINO_GTS_COMMON_CONFIG_REQUEST                    46117
#define OPENAPI_CASINO_GTS_COMMON_CONFIG_RESPONSE                   46118
#define OPENAPI_CASINO_GTS_COMMON_CONFIG_ERROR_RESPONSE             46119
//Save State
#define OPENAPI_CASINO_GTS_COMMON_SAVE_STATE_REQUEST                46120
#define OPENAPI_CASINO_GTS_COMMON_SAVE_STATE_RESPONSE               46121
#define OPENAPI_CASINO_GTS_COMMON_SAVE_STATE_ERROR_RESPONSE         46122

//Slot (Samba Brazil)
#define OPENAPI_CASINO_GTS_SAMBA_BRAZIL_LOAD_RESULTS_RESPONSE       46230
#define OPENAPI_CASINO_GTS_SAMBA_BRAZIL_OPEN_GAME_RESPONSE          46131

//Slot (Football carnival)
#define OPENAPI_CASINO_GTS_FOOTBALL_CARNIVAL_LOAD_RESULTS_RESPONSE  46160
#define OPENAPI_CASINO_GTS_FOOTBALL_CARNIVAL_OPEN_GAME_RESPONSE     46161

/*************  CASINO COMMON API  *******************/

#define OPENAPI_CASINO_DYNAMIC_BALANCE_UPDATE                       11590
#define OPENAPI_RESPONSIBLE_GAMING                                  11310
#define OPENAPI_RESPONSIBLE_GAMING_SESSIONTIMER                     11311
#define OPENAPI_REALITY_CHECK_ERROR                                 10284
#define OPENAPI_WAITING_MESSAGES_REQUEST                            48300
#define OPENAPI_WAITING_MESSAGES_RESPONSE                           48301

//Native Lobby commands
#define OPENAPI_START_WINDOW_SESSION_REQUEST                        31127
#define OPENAPI_START_WINDOW_SESSION_RESPONSE                       31128
#define OPENAPI_START_WINDOW_SESSION_RESPONSE_ERROR                 31129
#define OPENAPI_END_WINDOW_SESSION_REQUEST                          31130
#define OPENAPI_END_WINDOW_SESSION_RESPONSE                         31131
#define OPENAPI_END_WINDOW_SESSION_RESPONSE_ERROR                   31132
#define OPENAPI_BALANCE_CHANGE_WINDOW_NOTIFICATION                  32010
#define OPENAPI_GET_PLAYER_FAVORITES_REQUEST                        31103
#define OPENAPI_GET_PLAYER_FAVORITES_RESPONSE                       31104
#define OPENAPI_GET_PLAYER_FAVORITES_RESPONSE_ERROR                 31105
#define OPENAPI_CHANGE_PLAYER_FAVORITES_REQUEST                     31106
#define OPENAPI_CHANGE_PLAYER_FAVORITES_RESPONSE                    31107
#define OPENAPI_CHANGE_PLAYER_FAVORITES_RESPONSE_ERROR              31108
#define OPENAPI_GAME_ADVISOR_REQUEST                                40905
#define OPENAPI_GAME_ADVISOR_RESPONSE                               40906

//Transaction history

#define OPENAPI_GET_TRASACTION_HISTORY_REQUEST                      33026
#define OPENAPI_GET_TRASACTION_HISTORY_RESPONSE                     33027
#define OPENAPI_GET_TRASACTION_HISTORY_ERROR                        33028

// BET_LIMITS
#define ERR_SESSION_BET_LIMIT                                       40078

