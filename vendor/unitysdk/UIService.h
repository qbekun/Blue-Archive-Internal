#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Color; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Camera; }
class UISprite;
namespace FlatData { class Rarity; }
namespace FlatData { class BulletType; }
namespace FlatData { class ArmorType; }
namespace FlatData { class WeaponType; }
namespace FlatData { class TacticRole; }
class UILabel;
namespace UnityEngine { class Transform; }
namespace FlatData { class StatType; }
namespace FlatData { class EquipmentOptionType; }
namespace FlatData { class EmblemCategory; }
class UITexture;
namespace FlatData { class SquadType; }
namespace FlatData { class Difficulty; }
namespace FlatData { class WorldRaidDifficulty; }
namespace FlatData { class ParcelType; }
namespace FlatData { class CurrencyTypes; }
namespace FlatData { class EquipmentCategory; }
namespace UnityEngine { class GameObject; }
namespace MX::Data::Excel { class GoodsExcel; }
namespace FlatData { class ContentType; }
class CampaignMissionDisplay;
namespace MX::GameLogic::DBModel { class CampaignStageHistoryDB; }
namespace MX::GameLogic::DBModel { class CampaignMainStageSaveDB; }
class CharacterObject;
class UIWidget;
namespace MX::Data::Excel { class CostumeExcel; }
namespace FlatData { class School; }
namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::Data::Excel { class CharacterExcel; }
namespace MX::GameLogic::Parcel { class CurrencyTransaction; }
namespace MX::Logic::BattleEntities { class SkillSlot; }
namespace MX::Logic::Skills { class SkillType; }
namespace FlatData { class SkillSlotShowType; }
namespace MX::Data::Excel { class SkillExcel; }
namespace FlatData { class Club; }
namespace FlatData { class StageTopography; }
namespace FlatData { class TerrainAdaptationStat; }
namespace MX::Data::Excel { class ScenarioModeExcel; }
class ScenarioWatchConditionCheck;
namespace MX::Data { class LocalizeData; }
namespace MX::Logic::Skills::LogicEffects { class StatChangeEffect; }
namespace MX::Logic::BattleEntities { class DotAbility; }
namespace MX::Logic::Skills::LogicEffects { class LogicEffectHitSpecification; }
namespace UnityEngine { class Texture2D; }
namespace MX::Data::Excel { class WeekDungeonExcel; }
namespace MX::Data::Excel { class SchoolDungeonStageExcel; }
namespace FlatData { class StarGoalType; }
namespace MX::GameLogic::DBModel { class WeekDungeonStageHistoryDB; }
namespace MX::GameLogic::DBModel { class SchoolDungeonStageHistoryDB; }
namespace MX::Data::Excel { class ConquestUnitExcel; }
namespace MX::GameLogic::DBModel { class ConquestTileDB; }
namespace MX::Data::Excel { class EventContentStageExcel; }
namespace MX::Data { class MiniGameDefenseStageInfo; }
namespace MX::GameLogic::DBModel { class MiniGameDefenseStageHistoryDB; }
namespace MX::Data { class FieldContentStageInfo; }
namespace FlatData { class TacticRange; }
namespace UnityEngine { class Component; }
namespace MX::MinigameShooting { class MGSGameMode; }
namespace FlatData { class ScenarioModeTypes; }
namespace FlatData { class ScenarioModeSubTypes; }
namespace FlatData { class ScenarioModeReplayTypes; }
namespace MX::Data { class CampaignStageInfo; }
class AssetObjectBase;
namespace MX::GameLogic::Parcel { class ParcelInfo; }
namespace FlatData { class ShopCategoryType; }
namespace FlatData { class ProductDisplayTag; }
namespace MX::GameLogic::DBModel { class RaidTeamSettingDB; }
namespace MX::GameLogic::DBModel { class EchelonPresetDB; }
class EchelonObject;
namespace FlatData { class PotentialStatBonusRateType; }
class SortingRule;
class RaidDifficultyFilter;
namespace MX::Logic::Data { class TeamSetting; }
namespace FlatData { class ShopFilterType; }
class EventDelegate;
namespace MX::Data::Excel { class ShopCashExcel; }
namespace FlatData { class ProductCategory; }

#define UISERVICE_WORLDTOUIPOINT_OFFSET UNITYSDK_OFFSET(0x1FE1C30)
#define UISERVICE_SETCARDRARITYBGSPRITE_OFFSET UNITYSDK_OFFSET(0x1FE1DC0)
#define UISERVICE_SETCHARACTERBULLETTYPEBG_OFFSET UNITYSDK_OFFSET(0x1FE1FB0)
#define UISERVICE_SETCHARACTERARMORTYPEBG_OFFSET UNITYSDK_OFFSET(0x1FE2120)
#define UISERVICE_SETCARDRARITYICONSPRITE_OFFSET UNITYSDK_OFFSET(0x1FE2290)
#define UISERVICE_SETCHARACTERWEAPONTYPEBGSPRITE_OFFSET UNITYSDK_OFFSET(0x1FE23D0)
#define UISERVICE_SETCHARACTERWEAPONTYPESPRITE_OFFSET UNITYSDK_OFFSET(0x1FE2510)
#define UISERVICE_SETCHARACTERTACTICROLESPRITE_OFFSET UNITYSDK_OFFSET(0x1FE2650)
#define UISERVICE_GETREMAINTIMETEXT_OFFSET UNITYSDK_OFFSET(0x1FE27A0)
#define UISERVICE_SETREMAINTIMETEXT_OFFSET UNITYSDK_OFFSET(0x1FE29A0)
#define UISERVICE_SETUISPRITE_OFFSET UNITYSDK_OFFSET(0x1FE1F00)
#define UISERVICE_GETTRANSFORMPATHFROMROOT_OFFSET UNITYSDK_OFFSET(0x1FE2AA0)
#define UISERVICE_GETCHARACTERSTATTYPESTRING_OFFSET UNITYSDK_OFFSET(0x1FE2BD0)
#define UISERVICE_GETEQUIPMENTSTATTYPESTRING_OFFSET UNITYSDK_OFFSET(0x1FE2C90)
#define UISERVICE_GETEMBLEMCATEGORYFILTERNAME_OFFSET UNITYSDK_OFFSET(0x1FE2D50)
#define UISERVICE_LOADTEXTUREASYNC_OFFSET UNITYSDK_OFFSET(0x1FE2E10)
#define UISERVICE_SETUITEXTURE_OFFSET UNITYSDK_OFFSET(0x1FE2E90)
#define UISERVICE_SETCHARACTERPARCELTEXTURE_OFFSET UNITYSDK_OFFSET(0x1FE2F20)
#define UISERVICE_SETCOSTUMEPARCELTEXTURE_OFFSET UNITYSDK_OFFSET(0x1FE3080)
#define UISERVICE_SETSQUADTYPETEXTURE_OFFSET UNITYSDK_OFFSET(0x1FE31E0)
#define UISERVICE_SETRAIDBOSSPORTRAITTEXTURE_OFFSET UNITYSDK_OFFSET(0x1FE3310)
#define UISERVICE_SETRAIDBOSSBGTEXTURE_OFFSET UNITYSDK_OFFSET(0x1FE3420)
#define UISERVICE_SETRAIDBOSSDIFFICULTYLABEL_OFFSET UNITYSDK_OFFSET(0x1FE3530)
#define UISERVICE_SETRAIDRANKTIERTEXTURE_OFFSET UNITYSDK_OFFSET(0x1FE3770)
#define UISERVICE_SETRAIDRANK_OFFSET UNITYSDK_OFFSET(0x1FE38A0)
#define UISERVICE_SETRAIDRANKPOINT_OFFSET UNITYSDK_OFFSET(0x1FE39E0)
#define UISERVICE_SETRAIDRANKPOINT_OFFSET UNITYSDK_OFFSET(0x1FE3B20)
#define UISERVICE_GETRAIDDIFFICULTYTEXT_OFFSET UNITYSDK_OFFSET(0x1FE36A0)
#define UISERVICE_GETRAIDDIFFICULTYFILTERTEXT_OFFSET UNITYSDK_OFFSET(0x1FE3BB0)
#define UISERVICE_GETWORLDRAIDDIFFICULTY_OFFSET UNITYSDK_OFFSET(0x1FE3D80)
#define UISERVICE_GETINTERACTIVEWORLDRAIDDIFFICULTY_OFFSET UNITYSDK_OFFSET(0x1FE3E40)
#define UISERVICE_SETCHARACTERCOLLECTIONTEXTURE_OFFSET UNITYSDK_OFFSET(0x1FE3F00)
#define UISERVICE_SETCHARACTERDETAILBACKGROUNDTEXTURE_OFFSET UNITYSDK_OFFSET(0x1FE4010)
#define UISERVICE_SETSKILLCARDPARCELTEXTURE_OFFSET UNITYSDK_OFFSET(0x1FE4120)
#define UISERVICE_SETSKILLICONPARCELTEXTURE_OFFSET UNITYSDK_OFFSET(0x1FE4230)
#define UISERVICE_SETEQUIPMENTPARCELTEXTURE_OFFSET UNITYSDK_OFFSET(0x1FE4340)
#define UISERVICE_SETITEMPARCELTEXTURE_OFFSET UNITYSDK_OFFSET(0x1FE4450)
#define UISERVICE_SETIDCARDBGTEXTURE_OFFSET UNITYSDK_OFFSET(0x1FE4560)
#define UISERVICE_SETEMBLEMBGTEXTURE_OFFSET UNITYSDK_OFFSET(0x1FE4670)
#define UISERVICE_SETSTICKERTEXTURE_OFFSET UNITYSDK_OFFSET(0x1FE47A0)
#define UISERVICE_SETWEAPONTEXTURE_OFFSET UNITYSDK_OFFSET(0x1FE48B0)
#define UISERVICE_SETFURNITUREPARCELTEXTURE_OFFSET UNITYSDK_OFFSET(0x1FE49C0)
#define UISERVICE_SETCURRENCYPARCELTEXTURE_OFFSET UNITYSDK_OFFSET(0x1FE4AD0)
#define UISERVICE_SETCHAPTERTEXTURE_OFFSET UNITYSDK_OFFSET(0x1FE4BE0)
#define UISERVICE_SETARENAMAPTEXTURE_OFFSET UNITYSDK_OFFSET(0x1FE4CF0)
#define UISERVICE_SETARENARANKTEXTURE_OFFSET UNITYSDK_OFFSET(0x1FE4E00)
#define UISERVICE_SETEXPPARCELTEXTURE_OFFSET UNITYSDK_OFFSET(0x1FE4F10)
#define UISERVICE_SETCURRENCYSPRITE_OFFSET UNITYSDK_OFFSET(0x1FE5130)
#define UISERVICE_SETITEMSPRITE_OFFSET UNITYSDK_OFFSET(0x1FE5290)
#define UISERVICE_GETEQUIPMENTCATEGORYSTRING_OFFSET UNITYSDK_OFFSET(0x1FE5410)
#define UISERVICE_GETCOLORTAGFORSTAT_OFFSET UNITYSDK_OFFSET(0x1FE54E0)
#define UISERVICE_SETGOODSICONTEXTURE_OFFSET UNITYSDK_OFFSET(0x1FE5530)
#define UISERVICE_SETGOODSINTERACTIONFURNITURE_OFFSET UNITYSDK_OFFSET(0x1FE5700)
#define UISERVICE_SETSTAGESTARALL_OFFSET UNITYSDK_OFFSET(0x1FE58C0)
#define UISERVICE_SETSTAGESTARCLEAR_OFFSET UNITYSDK_OFFSET(0x1FE5BB0)
#define UISERVICE_SETSTAGESTARWINCOUNT_OFFSET UNITYSDK_OFFSET(0x1FE5CA0)
#define UISERVICE_SETSTAGESTARTURN_OFFSET UNITYSDK_OFFSET(0x1FE5FA0)
#define UISERVICE_LOADPORTRAITSPINEFORCHARACTERGROWTH_OFFSET UNITYSDK_OFFSET(0x1FE62C0)
#define UISERVICE_LOADPORTRAITSPINECHARACTERASYNC_OFFSET UNITYSDK_OFFSET(0x1FE6530)
#define UISERVICE_LOADPORTRAITSPINECHARACTERASYNC_OFFSET UNITYSDK_OFFSET(0x1FE6480)
#define UISERVICE_LOADPORTRAITSPINECHARACTERASYNCWITHCLIP_OFFSET UNITYSDK_OFFSET(0x1FE65D0)
#define UISERVICE_LOADPORTRAITSPINECHARACTERASYNCWITHCLIP_OFFSET UNITYSDK_OFFSET(0x1FE6790)
#define UISERVICE_LOADPORTRAITSPINECHARACTERASYNCWITHCLIP_OFFSET UNITYSDK_OFFSET(0x1FE6900)
#define UISERVICE_LOADSCHOOLICON_OFFSET UNITYSDK_OFFSET(0x1FE6A30)
#define UISERVICE_GETSCHOOLNAME_OFFSET UNITYSDK_OFFSET(0x1FE6C60)
#define UISERVICE_GETSCHOOLENNAME_OFFSET UNITYSDK_OFFSET(0x1FE6D20)
#define UISERVICE_GETSCHOOLNAMEINCOLLECTION_OFFSET UNITYSDK_OFFSET(0x1FE6DE0)
#define UISERVICE_SETMEMORYLOBBYPARCELTEXTURE_OFFSET UNITYSDK_OFFSET(0x1FE6EA0)
#define UISERVICE_ISCANGAINCHARACTERBYSECRETSTONE_OFFSET UNITYSDK_OFFSET(0x1FE7010)
#define UISERVICE_RESETFILTERSORTSCROLLVIEWSTATE_OFFSET UNITYSDK_OFFSET(0x1FE7210)
#define UISERVICE_SHOWREWARDUI_OFFSET UNITYSDK_OFFSET(0x1FE72F0)
#define UISERVICE_CONVERTCHARACTERSTOSTONES_OFFSET UNITYSDK_OFFSET(0x1FE7410)
#define UISERVICE_CO_SHOWREWARDUI_OFFSET UNITYSDK_OFFSET(0x1FE78C0)
#define UISERVICE_CO_SHOWREWARDCONFIRM_OFFSET UNITYSDK_OFFSET(0x1FE7970)
#define UISERVICE_GENERATEREWARDCONFIRMDATAS_OFFSET UNITYSDK_OFFSET(0x1FE7A10)
#define UISERVICE_GENERATEREWARDCONFIRMDATAS_OFFSET UNITYSDK_OFFSET(0x1FE7D20)
#define UISERVICE_COSHOWREWARDCONFIRM_OFFSET UNITYSDK_OFFSET(0x1FE83B0)
#define UISERVICE_COSHOWREWARDCONFIRMONBATTLE_OFFSET UNITYSDK_OFFSET(0x1FE8420)
#define UISERVICE_CONVERTDUPLICATEDCHARACTERS_OFFSET UNITYSDK_OFFSET(0x1FE8490)
#define UISERVICE_PRELOADRESOURCEUSECHARACTERDETAILUI_OFFSET UNITYSDK_OFFSET(0x1FE8840)
#define UISERVICE_CO_PRELOADRESOURCEUSECHARACTERDETAILUI_ALLSTYLES_OFFSET UNITYSDK_OFFSET(0x1FE8AD0)
#define UISERVICE_CO_PRELOADRESOURCEUSECHARACTERDETAILUI_OFFSET UNITYSDK_OFFSET(0x1FE8B60)
#define UISERVICE_COPRELOADRESOURCELIST_OFFSET UNITYSDK_OFFSET(0x000000)
#define UISERVICE_SHOWREWARDUI_OFFSET UNITYSDK_OFFSET(0x1FE8C00)
#define UISERVICE_CO_SHOWREWARDUI_OFFSET UNITYSDK_OFFSET(0x1FE8D00)
#define UISERVICE_PARCELRESULTDBTOPARCELINFOS_OFFSET UNITYSDK_OFFSET(0x1FE7A90)
#define UISERVICE_GETSKILLBGCOLOR_OFFSET UNITYSDK_OFFSET(0x1FE8DA0)
#define UISERVICE_GETSKILLCOSTBGCOLOR_OFFSET UNITYSDK_OFFSET(0x1FE8ED0)
#define UISERVICE_GETARMORTYPEBRIGHTBGCOLOR_OFFSET UNITYSDK_OFFSET(0x1FE9000)
#define UISERVICE_GETSKILLTYPETEXT_OFFSET UNITYSDK_OFFSET(0x1FE9130)
#define UISERVICE_GETSKILLTYPETEXT_OFFSET UNITYSDK_OFFSET(0x1FE9190)
#define UISERVICE_GETSKILLTYPETEXT_OFFSET UNITYSDK_OFFSET(0x1FE9340)
#define UISERVICE_GETSKILLCOSTSTRING_OFFSET UNITYSDK_OFFSET(0x1FE94E0)
#define UISERVICE_GETADDITIONALSKILLCOSTSTRING_OFFSET UNITYSDK_OFFSET(0x1FE9650)
#define UISERVICE_GETCLUBNAME_OFFSET UNITYSDK_OFFSET(0x1FE96E0)
#define UISERVICE_GETSTAGETOPOGRAPHYICONSPRITENAME_OFFSET UNITYSDK_OFFSET(0x1FE97A0)
#define UISERVICE_GETTERRAINADAPTATIONSTATSPRITENAME_OFFSET UNITYSDK_OFFSET(0x1FE9820)
#define UISERVICE_GETSCENARIOMODEOPENCONDITIONS_OFFSET UNITYSDK_OFFSET(0x1FE98F0)
#define UISERVICE_GETSCENARIOMODEOPENCONDITIONS_OFFSET UNITYSDK_OFFSET(0x1FE9A00)
#define UISERVICE_GETCLEARMODEEPISODETEXT_OFFSET UNITYSDK_OFFSET(0x1FEA0F0)
#define UISERVICE_SCENARIOMODECONDITIONSETUP_OFFSET UNITYSDK_OFFSET(0x1FEB6B0)
#define UISERVICE_SCENARIOMODECONDITIONSETUP_OFFSET UNITYSDK_OFFSET(0x1FEB860)
#define UISERVICE_GETBULLETTYPEUILOCALIZEDATAKEY_OFFSET UNITYSDK_OFFSET(0x1FEBF10)
#define UISERVICE_GETBULLETTYPENAME_OFFSET UNITYSDK_OFFSET(0x1FEBF80)
#define UISERVICE_GETBULLETTYPECOLORANDNAME_OFFSET UNITYSDK_OFFSET(0x1FEC090)
#define UISERVICE_GETARMORTYPECOLORANDNAME_OFFSET UNITYSDK_OFFSET(0x1FEC220)
#define UISERVICE_SHOWSKILLSLOTBUFFICON_OFFSET UNITYSDK_OFFSET(0x1FEC480)
#define UISERVICE_SHOWSKILLSLOTBUFFICON_OFFSET UNITYSDK_OFFSET(0x1FEC9A0)
#define UISERVICE_SHOWBUFFICONBYCONSTCOMBAT_OFFSET UNITYSDK_OFFSET(0x1FEC560)
#define UISERVICE_SHOWBUFFICONBYOPTION_OFFSET UNITYSDK_OFFSET(0x1FEC650)
#define UISERVICE_DATETIMESTRINGLONGDATE_OFFSET UNITYSDK_OFFSET(0x1FECA50)
#define UISERVICE_DATETIMESTRINGCUSTOMDATE_OFFSET UNITYSDK_OFFSET(0x1FECB30)
#define UISERVICE_DATETIMESTRINGSHORTDATE_OFFSET UNITYSDK_OFFSET(0x1FECBF0)
#define UISERVICE_DATETIMESTRINGSEASONPERIOD_OFFSET UNITYSDK_OFFSET(0x1FECCD0)
#define UISERVICE_DATETIMESTRINGSEASONPERIOD_GLOBAL_OFFSET UNITYSDK_OFFSET(0x1FECD30)
#define UISERVICE_DATETIMESTRINGLONGTIME_OFFSET UNITYSDK_OFFSET(0x1FECE90)
#define UISERVICE_DATETIMESTRINGSHORTTIME_OFFSET UNITYSDK_OFFSET(0x1FECF70)
#define UISERVICE_TIMESPANSTRING_OFFSET UNITYSDK_OFFSET(0x1FED050)
#define UISERVICE_ISREMAINEXPIRATIONTIME_OFFSET UNITYSDK_OFFSET(0x1FED0F0)
#define UISERVICE_GETDAYOFWEEKSTRING_OFFSET UNITYSDK_OFFSET(0x1FED210)
#define UISERVICE_CAFEPRESETDEFAULTNAME_OFFSET UNITYSDK_OFFSET(0x1FED3A0)
#define UISERVICE_GETREMAINTIMEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1FED4A0)
#define UISERVICE_GETMONTHDAYHOURTEXTFORMATTED_OFFSET UNITYSDK_OFFSET(0x1FED750)
#define UISERVICE_GETDATEBEFOREMONTHLYPRODUCTCHECKDATE_OFFSET UNITYSDK_OFFSET(0x1FED8D0)
#define UISERVICE_GETACTIVEGACHALIST_OFFSET UNITYSDK_OFFSET(0x1FEDA10)
#define UISERVICE_RELEASESCENARIOBGFROMUITEXTURE_OFFSET UNITYSDK_OFFSET(0x1FEE8D0)
#define UISERVICE_CLEARSCENARIOBG_OFFSET UNITYSDK_OFFSET(0x1FEEA10)
#define UISERVICE_CLEARSCENARIOBGTRACKER_OFFSET UNITYSDK_OFFSET(0x1FEEAC0)
#define UISERVICE_SETSCENARIOBG_OFFSET UNITYSDK_OFFSET(0x1FEECE0)
#define UISERVICE_SETSCENARIOBG_OFFSET UNITYSDK_OFFSET(0x1FEED90)
#define UISERVICE_GETWEEKDUNGEONSTAGEDIFFICULTYNUMBER_OFFSET UNITYSDK_OFFSET(0x1FEEF80)
#define UISERVICE_GETSCHOOLDUNGEONSTAGEDIFFICULTYNUMBER_OFFSET UNITYSDK_OFFSET(0x1FEEFD0)
#define UISERVICE_GETWEEKDUNGEONSTAGENAME_OFFSET UNITYSDK_OFFSET(0x1FEF020)
#define UISERVICE_GETSCHOOLDUNGEONSTAGENAME_OFFSET UNITYSDK_OFFSET(0x1FEF180)
#define UISERVICE_GETWEEKDUNGEONSTARGOALTEXT_OFFSET UNITYSDK_OFFSET(0x1FEF2E0)
#define UISERVICE_GETCONQUESTBATTLESTARGOALTEXT_OFFSET UNITYSDK_OFFSET(0x1FEF3A0)
#define UISERVICE_GETMINIGAMEDEFENSESTARGOALTEXT_OFFSET UNITYSDK_OFFSET(0x1FEF460)
#define UISERVICE_SETWEEKDUNGEONMISSIONS_OFFSET UNITYSDK_OFFSET(0x1FEF520)
#define UISERVICE_SETSCHOOLDUNGEONMISSIONS_OFFSET UNITYSDK_OFFSET(0x1FEF700)
#define UISERVICE_SETCONQUESTUNITMISSIONS_OFFSET UNITYSDK_OFFSET(0x1FEF8D0)
#define UISERVICE_SETCAMPAIGNMISSIONDISPLAY_OFFSET UNITYSDK_OFFSET(0x1FEFAA0)
#define UISERVICE_SETEVENTCONTENTSTAGEMISSIONS_OFFSET UNITYSDK_OFFSET(0x1FEFB80)
#define UISERVICE_SETMINIGAMEDEFENSESTAGEMISSIONS_OFFSET UNITYSDK_OFFSET(0x1FEFCD0)
#define UISERVICE_SETFIELDSTAGEMISSIONS_OFFSET UNITYSDK_OFFSET(0x1FF0080)
#define UISERVICE_GETARMORTYPENAME_OFFSET UNITYSDK_OFFSET(0x1FEC3B0)
#define UISERVICE_SETTACTICROLEICON_OFFSET UNITYSDK_OFFSET(0x1FF0380)
#define UISERVICE_SETTACTICROLELABEL_OFFSET UNITYSDK_OFFSET(0x1FF0410)
#define UISERVICE_SETTACTICRANGE_OFFSET UNITYSDK_OFFSET(0x1FF04F0)
#define UISERVICE_GETOUTDOORADAPTATIONSTATNAME_OFFSET UNITYSDK_OFFSET(0x1FF0580)
#define UISERVICE_GETINDOORADAPTATIONSTATNAME_OFFSET UNITYSDK_OFFSET(0x1FF0650)
#define UISERVICE_GETSTREETADAPTATIONSTATNAME_OFFSET UNITYSDK_OFFSET(0x1FF0720)
#define UISERVICE_GETCOMPONENTINCHILDREN_OFFSET UNITYSDK_OFFSET(0x000000)
#define UISERVICE_GETCOMPONENTINCHILDREN_OFFSET UNITYSDK_OFFSET(0x000000)
#define UISERVICE_GETPARCELLEVELTEXT_OFFSET UNITYSDK_OFFSET(0x1FF07F0)
#define UISERVICE_GETPARCELTIERTEXT_OFFSET UNITYSDK_OFFSET(0x1FF08F0)
#define UISERVICE_SETREQUIERCOSTAPPLYTEXTCOLOR_OFFSET UNITYSDK_OFFSET(0x1FF09F0)
#define UISERVICE_SETSTACKCOUNTMATERIALAPPLYTEXTCOLOR_OFFSET UNITYSDK_OFFSET(0x1FF0B30)
#define UISERVICE_SETMINIGAMESHOOTINGSECTIONNAME_OFFSET UNITYSDK_OFFSET(0x1FF0C10)
#define UISERVICE_SETMINIGAMESHOOTINGGAMEMODE_OFFSET UNITYSDK_OFFSET(0x1FF0D50)
#define UISERVICE_GETSCENARIOMODEVOLUMETITLE_OFFSET UNITYSDK_OFFSET(0x1FEB4A0)
#define UISERVICE_GETSCENARIOMODEVOLUMETITLE_OFFSET UNITYSDK_OFFSET(0x1FEAC50)
#define UISERVICE_GETNOTENOUGHMESSAGE_OFFSET UNITYSDK_OFFSET(0x1FF0DE0)
#define UISERVICE_GETSCENARIOMODECHAPTERTITLE_OFFSET UNITYSDK_OFFSET(0x1FEB0F0)
#define UISERVICE_GETSCENARIOMODECHAPTERINFO_OFFSET UNITYSDK_OFFSET(0x1FF0ED0)
#define UISERVICE_GETLASTVOLUMECHECKKEY_OFFSET UNITYSDK_OFFSET(0x1FF1280)
#define UISERVICE_GETSCENARIOOPENCONDITIONCHECKKEY_OFFSET UNITYSDK_OFFSET(0x1FF1350)
#define UISERVICE_GETCAMPAIGNSTAGEREWARDPACELCARDCOUNT_OFFSET UNITYSDK_OFFSET(0x1FF14F0)
#define UISERVICE_AUTOMATERIALSELECT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UISERVICE_SETCAMPAIGNSTAGEREWARDPARCELCARDS_OFFSET UNITYSDK_OFFSET(0x1FF1C90)
#define UISERVICE_SETPARCELINFOCOSTSPRITE_OFFSET UNITYSDK_OFFSET(0x1FF29A0)
#define UISERVICE_SETPARCELTEXTURE_OFFSET UNITYSDK_OFFSET(0x1FF2BC0)
#define UISERVICE_GETHARDTOTALPLAYCOUNTS_OFFSET UNITYSDK_OFFSET(0x1FF3990)
#define UISERVICE_GETCURRENCYTYPESBYSHOPCATEGORY_OFFSET UNITYSDK_OFFSET(0x1FF39F0)
#define UISERVICE_ISSKEWINGPARCELICONUSED_OFFSET UNITYSDK_OFFSET(0x1FF3AB0)
#define UISERVICE_GETPRODUCTDISPLAYTAGTEXTUREPATH_OFFSET UNITYSDK_OFFSET(0x1FF3AD0)
#define UISERVICE_GETUIROOTSCALEINV_OFFSET UNITYSDK_OFFSET(0x1FF3B90)
#define UISERVICE_GETEMBLEMCATEGORY_ETCMERGED_OFFSET UNITYSDK_OFFSET(0x1FF3DA0)
#define UISERVICE_SETRAIDCHARACTERCARDS_OFFSET UNITYSDK_OFFSET(0x1FF3DB0)
#define UISERVICE_SETECHELONPRESETCARDS_OFFSET UNITYSDK_OFFSET(0x1FF44E0)
#define UISERVICE_SETECHELONOBJECTCARD_OFFSET UNITYSDK_OFFSET(0x1FF5330)
#define UISERVICE_GETMULTIFLOORRAIDBESTCLEARTIMETEXT_OFFSET UNITYSDK_OFFSET(0x1FF5980)
#define UISERVICE_ISPOTENTIALGROWTHOPENED_OFFSET UNITYSDK_OFFSET(0x1FD68C0)
#define UISERVICE_GETPOTENTIALLEVELTEXT_OFFSET UNITYSDK_OFFSET(0x1FF5AB0)
#define UISERVICE_GETPOTENTIALLEVELTEXTFORMAT_OFFSET UNITYSDK_OFFSET(0x1FF5CA0)
#define UISERVICE_GETSORTEDPARCELPOTENTIALLEVELTEXT_OFFSET UNITYSDK_OFFSET(0x1FF5D20)
#define UISERVICE_PARSETODIFFICULTY_OFFSET UNITYSDK_OFFSET(0x1FF5E40)
#define UISERVICE_PARSETODIFFICULTYFILTER_OFFSET UNITYSDK_OFFSET(0x1FE3CB0)
#define UISERVICE_GETRANKBRACKETPERCENTAGES_OFFSET UNITYSDK_OFFSET(0x1FF5F20)
#define UISERVICE_GETARENAMYNAME_OFFSET UNITYSDK_OFFSET(0x1FF63B0)
#define UISERVICE_GETARENAOPPONENTNAME_OFFSET UNITYSDK_OFFSET(0x1FF64D0)
#define UISERVICE_ISOWNEDPRODUCTSELECT_OFFSET UNITYSDK_OFFSET(0x1FF6610)
#define UISERVICE_ISSCHOOLSHOPFILTERTYPE_OFFSET UNITYSDK_OFFSET(0x1FF6770)
#define UISERVICE_CLEARANDADD_OFFSET UNITYSDK_OFFSET(0x1FF6790)
#define UISERVICE_GETCURRENTAVAILABLEDAILYRECORDSHOPCASHEXCEL_OFFSET UNITYSDK_OFFSET(0x1FF6870)
#define UISERVICE_ISSHOPCASHPERIODONSALE_OFFSET UNITYSDK_OFFSET(0x1FF6E60)
#define UISERVICE_ISPRODUCTDAILYRECORDAVAILABLEPERIOD_OFFSET UNITYSDK_OFFSET(0x1FF6B50)
#define UISERVICE_GETSHOPCASHPRODUCTIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1FF3770)
#define UISERVICE_SHOWNOTENOUGHSHOPCASHRESOURCEPOPUP_OFFSET UNITYSDK_OFFSET(0x1FF6F50)
#define UISERVICE_SETSHOPCASHSALEPERIODLABEL_OFFSET UNITYSDK_OFFSET(0x1FF7090)
#define UISERVICE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1FF7330)
#define UISERVICE__SETRAIDCHARACTERCARDS_G__SETDISABLE|180_0_OFFSET UNITYSDK_OFFSET(0x1FF4090)
#define UISERVICE__SETRAIDCHARACTERCARDS_G__SETCARDS|180_1_OFFSET UNITYSDK_OFFSET(0x1FF4120)

	inline static constexpr unsigned int UIService_TypeDefinitionIndex = 3097;

	class UIService : public Il2CppObject
	{
	public:
		::UnityEngine::Color* DefaultLevelColor; // 0x0
		::UnityEngine::Color* MaxLevelColor; // 0x10
		Il2CppObject* scenarioBgTracker; // 0x20

		::UnityEngine::Vector3* WorldToUIPoint(::UnityEngine::Vector3* arg, ::UnityEngine::Camera* arg2)
		{
			return ((::UnityEngine::Vector3*(*)(::UnityEngine::Vector3*, ::UnityEngine::Camera*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_WORLDTOUIPOINT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetCardRarityBgSprite(UISprite* arg, ::FlatData::Rarity* arg2)
		{
			((::System::Void(*)(UISprite*, ::FlatData::Rarity*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_SETCARDRARITYBGSPRITE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetCharacterBulletTypeBg(UISprite* arg, ::FlatData::BulletType* arg2)
		{
			((::System::Void(*)(UISprite*, ::FlatData::BulletType*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_SETCHARACTERBULLETTYPEBG_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetCharacterArmorTypeBg(UISprite* arg, ::FlatData::ArmorType* arg2)
		{
			((::System::Void(*)(UISprite*, ::FlatData::ArmorType*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_SETCHARACTERARMORTYPEBG_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetCardRarityIconSprite(UISprite* arg, ::FlatData::Rarity* arg2)
		{
			((::System::Void(*)(UISprite*, ::FlatData::Rarity*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_SETCARDRARITYICONSPRITE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetCharacterWeaponTypeBgSprite(UISprite* arg, ::FlatData::Rarity* arg2)
		{
			((::System::Void(*)(UISprite*, ::FlatData::Rarity*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_SETCHARACTERWEAPONTYPEBGSPRITE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetCharacterWeaponTypeSprite(UISprite* arg, ::FlatData::WeaponType* arg2)
		{
			((::System::Void(*)(UISprite*, ::FlatData::WeaponType*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_SETCHARACTERWEAPONTYPESPRITE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetCharacterTacticRoleSprite(UISprite* arg, ::FlatData::TacticRole* arg2)
		{
			((::System::Void(*)(UISprite*, ::FlatData::TacticRole*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_SETCHARACTERTACTICROLESPRITE_OFFSET))(arg, arg2, nullptr);
		}

		::System::String* GetRemainTimeText(::System::TimeSpan* arg)
		{
			return ((::System::String*(*)(::System::TimeSpan*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_GETREMAINTIMETEXT_OFFSET))(arg, nullptr);
		}

		::System::Void SetRemainTimeText(UILabel* arg, ::System::TimeSpan* arg2)
		{
			((::System::Void(*)(UILabel*, ::System::TimeSpan*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_SETREMAINTIMETEXT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetUISprite(UISprite* arg, ::System::String* str, ::System::Boolean arg2)
		{
			((::System::Void(*)(UISprite*, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_SETUISPRITE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::String* GetTransformPathFromRoot(::UnityEngine::Transform* arg, ::System::String* str)
		{
			return ((::System::String*(*)(::UnityEngine::Transform*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_GETTRANSFORMPATHFROMROOT_OFFSET))(arg, str, nullptr);
		}

		::System::String* GetCharacterStatTypeString(::FlatData::StatType* arg)
		{
			return ((::System::String*(*)(::FlatData::StatType*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_GETCHARACTERSTATTYPESTRING_OFFSET))(arg, nullptr);
		}

		::System::String* GetEquipmentStatTypeString(::FlatData::EquipmentOptionType* arg)
		{
			return ((::System::String*(*)(::FlatData::EquipmentOptionType*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_GETEQUIPMENTSTATTYPESTRING_OFFSET))(arg, nullptr);
		}

		::System::String* GetEmblemCategoryFilterName(::FlatData::EmblemCategory* arg)
		{
			return ((::System::String*(*)(::FlatData::EmblemCategory*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_GETEMBLEMCATEGORYFILTERNAME_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* LoadTextureAsync(UITexture* arg, ::System::String* str)
		{
			return ((::System::Collections::IEnumerator*(*)(UITexture*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_LOADTEXTUREASYNC_OFFSET))(arg, str, nullptr);
		}

		::System::Void SetUITexture(UITexture* arg, ::System::String* str, ::System::String* str2, ::System::Boolean arg2)
		{
			((::System::Void(*)(UITexture*, ::System::String*, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_SETUITEXTURE_OFFSET))(arg, str, str2, arg2, nullptr);
		}

		::System::Void SetCharacterParcelTexture(UITexture* arg, ::System::String* str, ::System::Boolean arg2)
		{
			((::System::Void(*)(UITexture*, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_SETCHARACTERPARCELTEXTURE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Void SetCostumeParcelTexture(UITexture* arg, ::System::String* str, ::System::Boolean arg2)
		{
			((::System::Void(*)(UITexture*, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_SETCOSTUMEPARCELTEXTURE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Void SetSquadTypeTexture(UITexture* arg, ::FlatData::SquadType* arg2)
		{
			((::System::Void(*)(UITexture*, ::FlatData::SquadType*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_SETSQUADTYPETEXTURE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetRaidBossPortraitTexture(UITexture* arg, ::System::String* str)
		{
			((::System::Void(*)(UITexture*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_SETRAIDBOSSPORTRAITTEXTURE_OFFSET))(arg, str, nullptr);
		}

		::System::Void SetRaidBossBGTexture(UITexture* arg, ::System::String* str)
		{
			((::System::Void(*)(UITexture*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_SETRAIDBOSSBGTEXTURE_OFFSET))(arg, str, nullptr);
		}

		::System::Void SetRaidBossDifficultyLabel(UILabel* arg, ::FlatData::Difficulty* arg2)
		{
			((::System::Void(*)(UILabel*, ::FlatData::Difficulty*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_SETRAIDBOSSDIFFICULTYLABEL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetRaidRankTierTexture(UITexture* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(UITexture*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_SETRAIDRANKTIERTEXTURE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetRaidRank(UILabel* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(UILabel*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_SETRAIDRANK_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetRaidRankPoint(UILabel* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(UILabel*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_SETRAIDRANKPOINT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetRaidRankPoint(UILabel* arg, ::System::Int64 arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(UILabel*, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_SETRAIDRANKPOINT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::String* GetRaidDifficultyText(::FlatData::Difficulty* arg)
		{
			return ((::System::String*(*)(::FlatData::Difficulty*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_GETRAIDDIFFICULTYTEXT_OFFSET))(arg, nullptr);
		}

		::System::String* GetRaidDifficultyFilterText(::FlatData::Difficulty* arg)
		{
			return ((::System::String*(*)(::FlatData::Difficulty*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_GETRAIDDIFFICULTYFILTERTEXT_OFFSET))(arg, nullptr);
		}

		::System::String* GetWorldRaidDifficulty(::FlatData::WorldRaidDifficulty* arg)
		{
			return ((::System::String*(*)(::FlatData::WorldRaidDifficulty*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_GETWORLDRAIDDIFFICULTY_OFFSET))(arg, nullptr);
		}

		::System::String* GetInteractiveWorldRaidDifficulty(::FlatData::WorldRaidDifficulty* arg)
		{
			return ((::System::String*(*)(::FlatData::WorldRaidDifficulty*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_GETINTERACTIVEWORLDRAIDDIFFICULTY_OFFSET))(arg, nullptr);
		}

		::System::Void SetCharacterCollectionTexture(UITexture* arg, ::System::String* str)
		{
			((::System::Void(*)(UITexture*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_SETCHARACTERCOLLECTIONTEXTURE_OFFSET))(arg, str, nullptr);
		}

		::System::Void SetCharacterDetailBackgroundTexture(UITexture* arg, ::System::String* str)
		{
			((::System::Void(*)(UITexture*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_SETCHARACTERDETAILBACKGROUNDTEXTURE_OFFSET))(arg, str, nullptr);
		}

		::System::Void SetSkillCardParcelTexture(UITexture* arg, ::System::String* str)
		{
			((::System::Void(*)(UITexture*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_SETSKILLCARDPARCELTEXTURE_OFFSET))(arg, str, nullptr);
		}

		::System::Void SetSkillIconParcelTexture(UITexture* arg, ::System::String* str)
		{
			((::System::Void(*)(UITexture*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_SETSKILLICONPARCELTEXTURE_OFFSET))(arg, str, nullptr);
		}

		::System::Void SetEquipmentParcelTexture(UITexture* arg, ::System::String* str)
		{
			((::System::Void(*)(UITexture*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_SETEQUIPMENTPARCELTEXTURE_OFFSET))(arg, str, nullptr);
		}

		::System::Void SetItemParcelTexture(UITexture* arg, ::System::String* str)
		{
			((::System::Void(*)(UITexture*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_SETITEMPARCELTEXTURE_OFFSET))(arg, str, nullptr);
		}

		::System::Void SetIdCardBgTexture(UITexture* arg, ::System::String* str)
		{
			((::System::Void(*)(UITexture*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_SETIDCARDBGTEXTURE_OFFSET))(arg, str, nullptr);
		}

		::System::Void SetEmblemBgTexture(UITexture* arg)
		{
			((::System::Void(*)(UITexture*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_SETEMBLEMBGTEXTURE_OFFSET))(arg, nullptr);
		}

		::System::Void SetStickerTexture(UITexture* arg, ::System::String* str)
		{
			((::System::Void(*)(UITexture*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_SETSTICKERTEXTURE_OFFSET))(arg, str, nullptr);
		}

		::System::Void SetWeaponTexture(UITexture* arg, ::System::String* str)
		{
			((::System::Void(*)(UITexture*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_SETWEAPONTEXTURE_OFFSET))(arg, str, nullptr);
		}

		::System::Void SetFurnitureParcelTexture(UITexture* arg, ::System::String* str)
		{
			((::System::Void(*)(UITexture*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_SETFURNITUREPARCELTEXTURE_OFFSET))(arg, str, nullptr);
		}

		::System::Void SetCurrencyParcelTexture(UITexture* arg, ::System::String* str)
		{
			((::System::Void(*)(UITexture*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_SETCURRENCYPARCELTEXTURE_OFFSET))(arg, str, nullptr);
		}

		::System::Void SetChapterTexture(UITexture* arg, ::System::String* str)
		{
			((::System::Void(*)(UITexture*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_SETCHAPTERTEXTURE_OFFSET))(arg, str, nullptr);
		}

		::System::Void SetArenaMapTexture(UITexture* arg, ::System::String* str)
		{
			((::System::Void(*)(UITexture*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_SETARENAMAPTEXTURE_OFFSET))(arg, str, nullptr);
		}

		::System::Void SetArenaRankTexture(UITexture* arg, ::System::String* str)
		{
			((::System::Void(*)(UITexture*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_SETARENARANKTEXTURE_OFFSET))(arg, str, nullptr);
		}

		::System::Void SetExpParcelTexture(UITexture* arg, ::FlatData::ParcelType* arg2, ::System::Int64 arg3)
		{
			((::System::Void(*)(UITexture*, ::FlatData::ParcelType*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_SETEXPPARCELTEXTURE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void SetCurrencySprite(UISprite* arg, ::FlatData::CurrencyTypes* arg2)
		{
			((::System::Void(*)(UISprite*, ::FlatData::CurrencyTypes*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_SETCURRENCYSPRITE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetItemSprite(UISprite* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(UISprite*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_SETITEMSPRITE_OFFSET))(arg, arg2, nullptr);
		}

		::System::String* GetEquipmentCategoryString(::FlatData::EquipmentCategory* arg)
		{
			return ((::System::String*(*)(::FlatData::EquipmentCategory*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_GETEQUIPMENTCATEGORYSTRING_OFFSET))(arg, nullptr);
		}

		::System::String* GetColorTagForStat(::System::Boolean arg)
		{
			return ((::System::String*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_GETCOLORTAGFORSTAT_OFFSET))(arg, nullptr);
		}

		::System::Void SetGoodsIconTexture(UITexture* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(UITexture*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_SETGOODSICONTEXTURE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetGoodsInteractionFurniture(::UnityEngine::GameObject* arg, ::MX::Data::Excel::GoodsExcel* arg2)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::MX::Data::Excel::GoodsExcel*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_SETGOODSINTERACTIONFURNITURE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetStageStarAll(::FlatData::ContentType* arg, ::System::Int64 arg2, CampaignMissionDisplay* arg3, CampaignMissionDisplay* arg4, CampaignMissionDisplay* arg5, ::MX::GameLogic::DBModel::CampaignStageHistoryDB* arg6, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg7, ::System::Boolean arg8)
		{
			((::System::Void(*)(::FlatData::ContentType*, ::System::Int64, CampaignMissionDisplay*, CampaignMissionDisplay*, CampaignMissionDisplay*, ::MX::GameLogic::DBModel::CampaignStageHistoryDB*, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_SETSTAGESTARALL_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, nullptr);
		}

		::System::Void SetStageStarClear(CampaignMissionDisplay* arg, ::MX::GameLogic::DBModel::CampaignStageHistoryDB* arg2)
		{
			((::System::Void(*)(CampaignMissionDisplay*, ::MX::GameLogic::DBModel::CampaignStageHistoryDB*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_SETSTAGESTARCLEAR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetStageStarWinCount(::FlatData::ContentType* arg, ::System::Int64 arg2, CampaignMissionDisplay* arg3, ::MX::GameLogic::DBModel::CampaignStageHistoryDB* arg4, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg5)
		{
			((::System::Void(*)(::FlatData::ContentType*, ::System::Int64, CampaignMissionDisplay*, ::MX::GameLogic::DBModel::CampaignStageHistoryDB*, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_SETSTAGESTARWINCOUNT_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void SetStageStarTurn(::FlatData::ContentType* arg, ::System::Int64 arg2, CampaignMissionDisplay* arg3, ::MX::GameLogic::DBModel::CampaignStageHistoryDB* arg4, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg5)
		{
			((::System::Void(*)(::FlatData::ContentType*, ::System::Int64, CampaignMissionDisplay*, ::MX::GameLogic::DBModel::CampaignStageHistoryDB*, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_SETSTAGESTARTURN_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void LoadPortraitSpineForCharacterGrowth(CharacterObject* arg, ::UnityEngine::Transform* arg2, UIWidget* arg3, Il2CppObject* arg4, ::System::Boolean arg5, ::System::Int32 arg6)
		{
			((::System::Void(*)(CharacterObject*, ::UnityEngine::Transform*, UIWidget*, Il2CppObject*, ::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_LOADPORTRAITSPINEFORCHARACTERGROWTH_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Void LoadPortraitSpineCharacterAsync(::System::Int64 arg, ::UnityEngine::Transform* arg2, UIWidget* arg3, Il2CppObject* arg4, ::System::Boolean arg5, ::System::Int32 arg6)
		{
			((::System::Void(*)(::System::Int64, ::UnityEngine::Transform*, UIWidget*, Il2CppObject*, ::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_LOADPORTRAITSPINECHARACTERASYNC_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Void LoadPortraitSpineCharacterAsync(::System::Int64 arg, ::System::Int64 arg2, ::UnityEngine::Transform* arg3, UIWidget* arg4, Il2CppObject* arg5, ::System::Boolean arg6, ::System::Int32 arg7)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::UnityEngine::Transform*, UIWidget*, Il2CppObject*, ::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_LOADPORTRAITSPINECHARACTERASYNC_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, nullptr);
		}

		::System::Void LoadPortraitSpineCharacterAsyncWithClip(::System::Int64 arg, ::System::Int64 arg2, ::System::String* str, ::UnityEngine::Transform* arg3, UIWidget* arg4, Il2CppObject* arg5, ::System::Boolean arg6, ::System::Int32 arg7)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::System::String*, ::UnityEngine::Transform*, UIWidget*, Il2CppObject*, ::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_LOADPORTRAITSPINECHARACTERASYNCWITHCLIP_OFFSET))(arg, arg2, str, arg3, arg4, arg5, arg6, arg7, nullptr);
		}

		::System::Void LoadPortraitSpineCharacterAsyncWithClip(::MX::Data::Excel::CostumeExcel* arg, ::System::String* str, ::UnityEngine::Transform* arg2, UIWidget* arg3, Il2CppObject* arg4, ::System::Boolean arg5, ::System::Int32 arg6)
		{
			((::System::Void(*)(::MX::Data::Excel::CostumeExcel*, ::System::String*, ::UnityEngine::Transform*, UIWidget*, Il2CppObject*, ::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_LOADPORTRAITSPINECHARACTERASYNCWITHCLIP_OFFSET))(arg, str, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Void LoadPortraitSpineCharacterAsyncWithClip(::System::String* str, ::System::String* str2, ::UnityEngine::Transform* arg, UIWidget* arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::UnityEngine::Transform*, UIWidget*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_LOADPORTRAITSPINECHARACTERASYNCWITHCLIP_OFFSET))(str, str2, arg, arg2, arg3, nullptr);
		}

		::System::Void LoadSchoolIcon(::FlatData::School* arg, UITexture* arg2)
		{
			((::System::Void(*)(::FlatData::School*, UITexture*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_LOADSCHOOLICON_OFFSET))(arg, arg2, nullptr);
		}

		::System::String* GetSchoolName(::FlatData::School* arg)
		{
			return ((::System::String*(*)(::FlatData::School*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_GETSCHOOLNAME_OFFSET))(arg, nullptr);
		}

		::System::String* GetSchoolEnName(::FlatData::School* arg)
		{
			return ((::System::String*(*)(::FlatData::School*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_GETSCHOOLENNAME_OFFSET))(arg, nullptr);
		}

		::System::String* GetSchoolNameInCollection(::FlatData::School* arg)
		{
			return ((::System::String*(*)(::FlatData::School*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_GETSCHOOLNAMEINCOLLECTION_OFFSET))(arg, nullptr);
		}

		::System::Void SetMemoryLobbyParcelTexture(UITexture* arg, ::System::String* str, ::System::Boolean arg2)
		{
			((::System::Void(*)(UITexture*, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_SETMEMORYLOBBYPARCELTEXTURE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Boolean IsCanGainCharacterBySecretStone(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_ISCANGAINCHARACTERBYSECRETSTONE_OFFSET))(arg, nullptr);
		}

		::System::Void ResetFilterSortScrollViewState()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_RESETFILTERSORTSCROLLVIEWSTATE_OFFSET))(nullptr);
		}

		::System::Void ShowRewardUI(Il2CppObject* arg, Il2CppObject* arg2, Il2CppObject* arg3, ::System::Action* arg4, Il2CppObject* arg5)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, ::System::Action*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_SHOWREWARDUI_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void ConvertCharactersToStones(Il2CppObject* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_CONVERTCHARACTERSTOSTONES_OFFSET))(arg, arg2, nullptr);
		}

		::System::Collections::IEnumerator* Co_ShowRewardUI(Il2CppObject* arg, Il2CppObject* arg2, ::System::Action* arg3, Il2CppObject* arg4)
		{
			return ((::System::Collections::IEnumerator*(*)(Il2CppObject*, Il2CppObject*, ::System::Action*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_CO_SHOWREWARDUI_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Collections::IEnumerator* Co_ShowRewardConfirm(Il2CppObject* arg, Il2CppObject* arg2, Il2CppObject* arg3)
		{
			return ((::System::Collections::IEnumerator*(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_CO_SHOWREWARDCONFIRM_OFFSET))(arg, arg2, arg3, nullptr);
		}

		Il2CppObject* GenerateRewardConfirmDatas(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			return ((Il2CppObject*(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_GENERATEREWARDCONFIRMDATAS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GenerateRewardConfirmDatas(Il2CppObject* arg, Il2CppObject* arg2, Il2CppObject* arg3)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_GENERATEREWARDCONFIRMDATAS_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Collections::IEnumerator* CoShowRewardConfirm(Il2CppObject* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_COSHOWREWARDCONFIRM_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CoShowRewardConfirmOnBattle(Il2CppObject* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_COSHOWREWARDCONFIRMONBATTLE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* ConvertDuplicatedCharacters(Il2CppObject* arg, Il2CppObject* arg2)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_CONVERTDUPLICATEDCHARACTERS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void PreLoadResourceUseCharacterDetailUI(::System::Int64 arg, ::System::Int64 arg2, ::System::Action* arg3)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_PRELOADRESOURCEUSECHARACTERDETAILUI_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Collections::IEnumerator* co_PreLoadResourceUseCharacterDetailUI_AllStyles(Il2CppObject* arg, ::System::Int64 arg2, ::System::Action* arg3)
		{
			return ((::System::Collections::IEnumerator*(*)(Il2CppObject*, ::System::Int64, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_CO_PRELOADRESOURCEUSECHARACTERDETAILUI_ALLSTYLES_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Collections::IEnumerator* co_PreLoadResourceUseCharacterDetailUI(::MX::Data::Excel::CharacterExcel* arg, ::MX::Data::Excel::CostumeExcel* arg2, ::System::Action* arg3)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::Data::Excel::CharacterExcel*, ::MX::Data::Excel::CostumeExcel*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_CO_PRELOADRESOURCEUSECHARACTERDETAILUI_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Collections::IEnumerator* CoPreLoadResourceList(Il2CppObject* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_COPRELOADRESOURCELIST_OFFSET))(arg, nullptr);
		}

		::System::Void ShowRewardUI(Il2CppObject* arg, Il2CppObject* arg2, ::System::Action* arg3)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_SHOWREWARDUI_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Collections::IEnumerator* Co_ShowRewardUI(Il2CppObject* arg, Il2CppObject* arg2, ::System::Action* arg3)
		{
			return ((::System::Collections::IEnumerator*(*)(Il2CppObject*, Il2CppObject*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_CO_SHOWREWARDUI_OFFSET))(arg, arg2, arg3, nullptr);
		}

		Il2CppObject* ParcelResultDBToParcelInfos(::MX::GameLogic::Parcel::ParcelResultDB* arg, ::MX::GameLogic::Parcel::CurrencyTransaction* arg2)
		{
			return ((Il2CppObject*(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::MX::GameLogic::Parcel::CurrencyTransaction*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_PARCELRESULTDBTOPARCELINFOS_OFFSET))(arg, arg2, nullptr);
		}

		::UnityEngine::Color* GetSkillBGColor(::FlatData::BulletType* arg)
		{
			return ((::UnityEngine::Color*(*)(::FlatData::BulletType*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_GETSKILLBGCOLOR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Color* GetSkillCostBgColor(::FlatData::BulletType* arg)
		{
			return ((::UnityEngine::Color*(*)(::FlatData::BulletType*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_GETSKILLCOSTBGCOLOR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Color* GetArmorTypeBrightBGColor(::FlatData::ArmorType* arg)
		{
			return ((::UnityEngine::Color*(*)(::FlatData::ArmorType*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_GETARMORTYPEBRIGHTBGCOLOR_OFFSET))(arg, nullptr);
		}

		::System::String* GetSkillTypeText(::MX::Logic::BattleEntities::SkillSlot* arg, ::System::Boolean arg2)
		{
			return ((::System::String*(*)(::MX::Logic::BattleEntities::SkillSlot*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_GETSKILLTYPETEXT_OFFSET))(arg, arg2, nullptr);
		}

		::System::String* GetSkillTypeText(::MX::Logic::Skills::SkillType* arg, ::System::Boolean arg2)
		{
			return ((::System::String*(*)(::MX::Logic::Skills::SkillType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_GETSKILLTYPETEXT_OFFSET))(arg, arg2, nullptr);
		}

		::System::String* GetSkillTypeText(::FlatData::SkillSlotShowType* arg, ::System::Boolean arg2)
		{
			return ((::System::String*(*)(::FlatData::SkillSlotShowType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_GETSKILLTYPETEXT_OFFSET))(arg, arg2, nullptr);
		}

		::System::String* GetSkillCostString(::MX::Data::Excel::SkillExcel* arg)
		{
			return ((::System::String*(*)(::MX::Data::Excel::SkillExcel*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_GETSKILLCOSTSTRING_OFFSET))(arg, nullptr);
		}

		::System::String* GetAdditionalSkillCostString(::MX::Logic::Skills::SkillType* arg, ::MX::Data::Excel::SkillExcel* arg2)
		{
			return ((::System::String*(*)(::MX::Logic::Skills::SkillType*, ::MX::Data::Excel::SkillExcel*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_GETADDITIONALSKILLCOSTSTRING_OFFSET))(arg, arg2, nullptr);
		}

		::System::String* GetClubName(::FlatData::Club* arg)
		{
			return ((::System::String*(*)(::FlatData::Club*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_GETCLUBNAME_OFFSET))(arg, nullptr);
		}

		::System::String* GetStageTopographyIconSpriteName(::FlatData::StageTopography* arg)
		{
			return ((::System::String*(*)(::FlatData::StageTopography*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_GETSTAGETOPOGRAPHYICONSPRITENAME_OFFSET))(arg, nullptr);
		}

		::System::String* GetTerrainAdaptationStatSpriteName(::FlatData::TerrainAdaptationStat* arg)
		{
			return ((::System::String*(*)(::FlatData::TerrainAdaptationStat*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_GETTERRAINADAPTATIONSTATSPRITENAME_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetScenarioModeOpenConditions(::MX::Data::Excel::ScenarioModeExcel* arg)
		{
			return ((Il2CppObject*(*)(::MX::Data::Excel::ScenarioModeExcel*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_GETSCENARIOMODEOPENCONDITIONS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetScenarioModeOpenConditions(::MX::Data::Excel::ScenarioModeExcel* arg, ScenarioWatchConditionCheck* arg2)
		{
			return ((Il2CppObject*(*)(::MX::Data::Excel::ScenarioModeExcel*, ScenarioWatchConditionCheck*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_GETSCENARIOMODEOPENCONDITIONS_OFFSET))(arg, arg2, nullptr);
		}

		::System::String* GetClearModeEpisodeText(::MX::Data::LocalizeData* arg, ::MX::Data::Excel::ScenarioModeExcel* arg2)
		{
			return ((::System::String*(*)(::MX::Data::LocalizeData*, ::MX::Data::Excel::ScenarioModeExcel*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_GETCLEARMODEEPISODETEXT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void ScenarioModeConditionSetup(Il2CppObject* arg, ::MX::Data::Excel::ScenarioModeExcel* arg2, ::System::DateTime* arg3)
		{
			((::System::Void(*)(Il2CppObject*, ::MX::Data::Excel::ScenarioModeExcel*, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_SCENARIOMODECONDITIONSETUP_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void ScenarioModeConditionSetup(Il2CppObject* arg, ::MX::Data::Excel::ScenarioModeExcel* arg2, ::System::Boolean arg3, ScenarioWatchConditionCheck* arg4)
		{
			((::System::Void(*)(Il2CppObject*, ::MX::Data::Excel::ScenarioModeExcel*, ::System::Boolean, ScenarioWatchConditionCheck*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_SCENARIOMODECONDITIONSETUP_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::String* GetBulletTypeUILocalizeDataKey(::FlatData::BulletType* arg)
		{
			return ((::System::String*(*)(::FlatData::BulletType*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_GETBULLETTYPEUILOCALIZEDATAKEY_OFFSET))(arg, nullptr);
		}

		::System::String* GetBulletTypeName(::FlatData::BulletType* arg)
		{
			return ((::System::String*(*)(::FlatData::BulletType*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_GETBULLETTYPENAME_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetBulletTypeColorAndName(::FlatData::BulletType* arg)
		{
			return ((Il2CppObject*(*)(::FlatData::BulletType*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_GETBULLETTYPECOLORANDNAME_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetArmorTypeColorAndName(::FlatData::ArmorType* arg)
		{
			return ((Il2CppObject*(*)(::FlatData::ArmorType*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_GETARMORTYPECOLORANDNAME_OFFSET))(arg, nullptr);
		}

		::System::Boolean ShowSkillSlotBuffIcon(::MX::Logic::Skills::LogicEffects::StatChangeEffect* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Skills::LogicEffects::StatChangeEffect*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_SHOWSKILLSLOTBUFFICON_OFFSET))(arg, nullptr);
		}

		::System::Boolean ShowSkillSlotBuffIcon(::MX::Logic::BattleEntities::DotAbility* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::DotAbility*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_SHOWSKILLSLOTBUFFICON_OFFSET))(arg, nullptr);
		}

		::System::Boolean ShowBuffIconByConstCombat(::MX::Logic::BattleEntities::SkillSlot* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::SkillSlot*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_SHOWBUFFICONBYCONSTCOMBAT_OFFSET))(arg, nullptr);
		}

		::System::Boolean ShowBuffIConByOption(::MX::Logic::Skills::SkillType* arg, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Skills::SkillType*, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_SHOWBUFFICONBYOPTION_OFFSET))(arg, arg2, nullptr);
		}

		::System::String* DateTimeStringLongDate(::System::DateTime* arg)
		{
			return ((::System::String*(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_DATETIMESTRINGLONGDATE_OFFSET))(arg, nullptr);
		}

		::System::String* DateTimeStringCustomDate(::System::DateTime* arg)
		{
			return ((::System::String*(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_DATETIMESTRINGCUSTOMDATE_OFFSET))(arg, nullptr);
		}

		::System::String* DateTimeStringShortDate(::System::DateTime* arg)
		{
			return ((::System::String*(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_DATETIMESTRINGSHORTDATE_OFFSET))(arg, nullptr);
		}

		::System::String* DateTimeStringSeasonPeriod(::System::DateTime* arg)
		{
			return ((::System::String*(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_DATETIMESTRINGSEASONPERIOD_OFFSET))(arg, nullptr);
		}

		::System::String* DateTimeStringSeasonPeriod_Global(::System::DateTime* arg, ::System::Boolean arg2)
		{
			return ((::System::String*(*)(::System::DateTime*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_DATETIMESTRINGSEASONPERIOD_GLOBAL_OFFSET))(arg, arg2, nullptr);
		}

		::System::String* DateTimeStringLongTime(::System::DateTime* arg)
		{
			return ((::System::String*(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_DATETIMESTRINGLONGTIME_OFFSET))(arg, nullptr);
		}

		::System::String* DateTimeStringShortTime(::System::DateTime* arg)
		{
			return ((::System::String*(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_DATETIMESTRINGSHORTTIME_OFFSET))(arg, nullptr);
		}

		::System::String* TimeSpanString(::System::TimeSpan* arg)
		{
			return ((::System::String*(*)(::System::TimeSpan*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_TIMESPANSTRING_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsRemainExpirationTime(::System::DateTime* arg, ::System::DateTime* arg2)
		{
			return ((::System::Boolean(*)(::System::DateTime*, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_ISREMAINEXPIRATIONTIME_OFFSET))(arg, arg2, nullptr);
		}

		::System::String* GetDayOfWeekString(::System::DayOfWeek* arg)
		{
			return ((::System::String*(*)(::System::DayOfWeek*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_GETDAYOFWEEKSTRING_OFFSET))(arg, nullptr);
		}

		::System::String* CafePresetDefaultName(::System::Int32 arg)
		{
			return ((::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_CAFEPRESETDEFAULTNAME_OFFSET))(arg, nullptr);
		}

		::System::String* GetRemainTimeMessage(::System::DateTime* arg)
		{
			return ((::System::String*(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_GETREMAINTIMEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::String* GetMonthDayHourTextFormatted(::System::DateTime* arg)
		{
			return ((::System::String*(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_GETMONTHDAYHOURTEXTFORMATTED_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetDateBeforeMonthlyProductCheckDate(Il2CppObject* arg)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_GETDATEBEFOREMONTHLYPRODUCTCHECKDATE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetActiveGachaList(::System::Boolean arg)
		{
			return ((Il2CppObject*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_GETACTIVEGACHALIST_OFFSET))(arg, nullptr);
		}

		::System::Void ReleaseScenarioBGFromUITexture(UITexture* arg)
		{
			((::System::Void(*)(UITexture*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_RELEASESCENARIOBGFROMUITEXTURE_OFFSET))(arg, nullptr);
		}

		::System::Void ClearScenarioBG(UITexture* arg)
		{
			((::System::Void(*)(UITexture*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_CLEARSCENARIOBG_OFFSET))(arg, nullptr);
		}

		::System::Void ClearScenarioBGTracker()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_CLEARSCENARIOBGTRACKER_OFFSET))(nullptr);
		}

		::System::Void SetScenarioBG(UITexture* arg, ::System::String* str)
		{
			((::System::Void(*)(UITexture*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_SETSCENARIOBG_OFFSET))(arg, str, nullptr);
		}

		::System::Void SetScenarioBG(UITexture* arg, ::System::String* str, ::UnityEngine::Texture2D* arg2)
		{
			((::System::Void(*)(UITexture*, ::System::String*, ::UnityEngine::Texture2D*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_SETSCENARIOBG_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::String* GetWeekDungeonStageDifficultyNumber(::MX::Data::Excel::WeekDungeonExcel* arg)
		{
			return ((::System::String*(*)(::MX::Data::Excel::WeekDungeonExcel*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_GETWEEKDUNGEONSTAGEDIFFICULTYNUMBER_OFFSET))(arg, nullptr);
		}

		::System::String* GetSchoolDungeonStageDifficultyNumber(::MX::Data::Excel::SchoolDungeonStageExcel* arg)
		{
			return ((::System::String*(*)(::MX::Data::Excel::SchoolDungeonStageExcel*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_GETSCHOOLDUNGEONSTAGEDIFFICULTYNUMBER_OFFSET))(arg, nullptr);
		}

		::System::String* GetWeekDungeonStageName(::MX::Data::Excel::WeekDungeonExcel* arg)
		{
			return ((::System::String*(*)(::MX::Data::Excel::WeekDungeonExcel*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_GETWEEKDUNGEONSTAGENAME_OFFSET))(arg, nullptr);
		}

		::System::String* GetSchoolDungeonStageName(::MX::Data::Excel::SchoolDungeonStageExcel* arg)
		{
			return ((::System::String*(*)(::MX::Data::Excel::SchoolDungeonStageExcel*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_GETSCHOOLDUNGEONSTAGENAME_OFFSET))(arg, nullptr);
		}

		::System::String* GetWeekDungeonStarGoalText(::FlatData::StarGoalType* arg)
		{
			return ((::System::String*(*)(::FlatData::StarGoalType*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_GETWEEKDUNGEONSTARGOALTEXT_OFFSET))(arg, nullptr);
		}

		::System::String* GetConquestBattleStarGoalText(::FlatData::StarGoalType* arg)
		{
			return ((::System::String*(*)(::FlatData::StarGoalType*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_GETCONQUESTBATTLESTARGOALTEXT_OFFSET))(arg, nullptr);
		}

		::System::String* GetMinigameDefenseStarGoalText(::FlatData::StarGoalType* arg)
		{
			return ((::System::String*(*)(::FlatData::StarGoalType*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_GETMINIGAMEDEFENSESTARGOALTEXT_OFFSET))(arg, nullptr);
		}

		::System::Void SetWeekDungeonMissions(Il2CppObject* arg, ::MX::Data::Excel::WeekDungeonExcel* arg2, ::MX::GameLogic::DBModel::WeekDungeonStageHistoryDB* arg3)
		{
			((::System::Void(*)(Il2CppObject*, ::MX::Data::Excel::WeekDungeonExcel*, ::MX::GameLogic::DBModel::WeekDungeonStageHistoryDB*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_SETWEEKDUNGEONMISSIONS_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void SetSchoolDungeonMissions(Il2CppObject* arg, ::MX::Data::Excel::SchoolDungeonStageExcel* arg2, ::MX::GameLogic::DBModel::SchoolDungeonStageHistoryDB* arg3)
		{
			((::System::Void(*)(Il2CppObject*, ::MX::Data::Excel::SchoolDungeonStageExcel*, ::MX::GameLogic::DBModel::SchoolDungeonStageHistoryDB*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_SETSCHOOLDUNGEONMISSIONS_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void SetConquestUnitMissions(Il2CppObject* arg, ::MX::Data::Excel::ConquestUnitExcel* arg2, ::MX::GameLogic::DBModel::ConquestTileDB* arg3)
		{
			((::System::Void(*)(Il2CppObject*, ::MX::Data::Excel::ConquestUnitExcel*, ::MX::GameLogic::DBModel::ConquestTileDB*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_SETCONQUESTUNITMISSIONS_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void SetCampaignMissionDisplay(CampaignMissionDisplay* arg, ::System::Int32 arg2, ::FlatData::StarGoalType* arg3, ::System::Int32 arg4, ::MX::GameLogic::DBModel::CampaignStageHistoryDB* arg5)
		{
			((::System::Void(*)(CampaignMissionDisplay*, ::System::Int32, ::FlatData::StarGoalType*, ::System::Int32, ::MX::GameLogic::DBModel::CampaignStageHistoryDB*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_SETCAMPAIGNMISSIONDISPLAY_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void SetEventContentStageMissions(Il2CppObject* arg, ::MX::Data::Excel::EventContentStageExcel* arg2, ::MX::GameLogic::DBModel::CampaignStageHistoryDB* arg3)
		{
			((::System::Void(*)(Il2CppObject*, ::MX::Data::Excel::EventContentStageExcel*, ::MX::GameLogic::DBModel::CampaignStageHistoryDB*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_SETEVENTCONTENTSTAGEMISSIONS_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void SetMinigameDefenseStageMissions(Il2CppObject* arg, ::MX::Data::MiniGameDefenseStageInfo* arg2, ::MX::GameLogic::DBModel::MiniGameDefenseStageHistoryDB* arg3)
		{
			((::System::Void(*)(Il2CppObject*, ::MX::Data::MiniGameDefenseStageInfo*, ::MX::GameLogic::DBModel::MiniGameDefenseStageHistoryDB*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_SETMINIGAMEDEFENSESTAGEMISSIONS_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void SetFieldStageMissions(Il2CppObject* arg, ::MX::Data::FieldContentStageInfo* arg2, ::MX::GameLogic::DBModel::CampaignStageHistoryDB* arg3)
		{
			((::System::Void(*)(Il2CppObject*, ::MX::Data::FieldContentStageInfo*, ::MX::GameLogic::DBModel::CampaignStageHistoryDB*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_SETFIELDSTAGEMISSIONS_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::String* GetArmorTypeName(::FlatData::ArmorType* arg)
		{
			return ((::System::String*(*)(::FlatData::ArmorType*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_GETARMORTYPENAME_OFFSET))(arg, nullptr);
		}

		::System::Void SetTacticRoleIcon(::FlatData::TacticRole* arg, UISprite* arg2)
		{
			((::System::Void(*)(::FlatData::TacticRole*, UISprite*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_SETTACTICROLEICON_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetTacticRoleLabel(::FlatData::TacticRole* arg, UILabel* arg2)
		{
			((::System::Void(*)(::FlatData::TacticRole*, UILabel*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_SETTACTICROLELABEL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetTacticRange(::FlatData::TacticRange* arg, UISprite* arg2)
		{
			((::System::Void(*)(::FlatData::TacticRange*, UISprite*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_SETTACTICRANGE_OFFSET))(arg, arg2, nullptr);
		}

		::System::String* GetOutdoorAdaptationStatName(::FlatData::TerrainAdaptationStat* arg)
		{
			return ((::System::String*(*)(::FlatData::TerrainAdaptationStat*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_GETOUTDOORADAPTATIONSTATNAME_OFFSET))(arg, nullptr);
		}

		::System::String* GetIndoorAdaptationStatName(::FlatData::TerrainAdaptationStat* arg)
		{
			return ((::System::String*(*)(::FlatData::TerrainAdaptationStat*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_GETINDOORADAPTATIONSTATNAME_OFFSET))(arg, nullptr);
		}

		::System::String* GetStreetAdaptationStatName(::FlatData::TerrainAdaptationStat* arg)
		{
			return ((::System::String*(*)(::FlatData::TerrainAdaptationStat*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_GETSTREETADAPTATIONSTATNAME_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetComponentInChildren(::UnityEngine::Component* arg, Il2CppObject&* arg2)
		{
			return ((Il2CppObject*(*)(::UnityEngine::Component*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_GETCOMPONENTINCHILDREN_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* GetComponentInChildren(::UnityEngine::Component* arg, Il2CppObject&* arg2, ::System::String* str)
		{
			return ((Il2CppObject*(*)(::UnityEngine::Component*, Il2CppObject&*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_GETCOMPONENTINCHILDREN_OFFSET))(arg, arg2, str, nullptr);
		}

		::System::String* GetParcelLevelText(::System::Int64 arg)
		{
			return ((::System::String*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_GETPARCELLEVELTEXT_OFFSET))(arg, nullptr);
		}

		::System::String* GetParcelTierText(::System::Int64 arg)
		{
			return ((::System::String*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_GETPARCELTIERTEXT_OFFSET))(arg, nullptr);
		}

		::System::String* SetRequierCostApplyTextColor(UILabel* arg, ::System::Int64 arg2, ::FlatData::CurrencyTypes* arg3)
		{
			return ((::System::String*(*)(UILabel*, ::System::Int64, ::FlatData::CurrencyTypes*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_SETREQUIERCOSTAPPLYTEXTCOLOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::String* SetStackCountMaterialApplyTextColor(::System::Int64 arg, ::System::Int64 arg2, ::System::Int64 arg3)
		{
			return ((::System::String*(*)(::System::Int64, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_SETSTACKCOUNTMATERIALAPPLYTEXTCOLOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::String* SetMiniGameShootingSectionName(::System::Int64 arg)
		{
			return ((::System::String*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_SETMINIGAMESHOOTINGSECTIONNAME_OFFSET))(arg, nullptr);
		}

		::System::String* SetMiniGameShootingGameMode(::MX::MinigameShooting::MGSGameMode* arg, ::System::Int64 arg2)
		{
			return ((::System::String*(*)(::MX::MinigameShooting::MGSGameMode*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_SETMINIGAMESHOOTINGGAMEMODE_OFFSET))(arg, arg2, nullptr);
		}

		::System::String* GetScenarioModeVolumeTitle(::FlatData::ScenarioModeTypes* arg, ::FlatData::ScenarioModeSubTypes* arg2, ::FlatData::ScenarioModeReplayTypes* arg3, ::System::Int64 arg4)
		{
			return ((::System::String*(*)(::FlatData::ScenarioModeTypes*, ::FlatData::ScenarioModeSubTypes*, ::FlatData::ScenarioModeReplayTypes*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_GETSCENARIOMODEVOLUMETITLE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::String* GetScenarioModeVolumeTitle(::FlatData::ScenarioModeTypes* arg, ::FlatData::ScenarioModeReplayTypes* arg2, ::System::Int64 arg3)
		{
			return ((::System::String*(*)(::FlatData::ScenarioModeTypes*, ::FlatData::ScenarioModeReplayTypes*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_GETSCENARIOMODEVOLUMETITLE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::String* GetNotEnoughMessage(::System::Boolean arg, ::System::Boolean arg2)
		{
			return ((::System::String*(*)(::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_GETNOTENOUGHMESSAGE_OFFSET))(arg, arg2, nullptr);
		}

		::System::String* GetScenarioModeChapterTitle(::FlatData::ScenarioModeTypes* arg, ::FlatData::ScenarioModeSubTypes* arg2, ::FlatData::ScenarioModeReplayTypes* arg3, ::System::Int64 arg4, ::System::Int64 arg5)
		{
			return ((::System::String*(*)(::FlatData::ScenarioModeTypes*, ::FlatData::ScenarioModeSubTypes*, ::FlatData::ScenarioModeReplayTypes*, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_GETSCENARIOMODECHAPTERTITLE_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::String* GetScenarioModeChapterInfo(::FlatData::ScenarioModeTypes* arg, ::FlatData::ScenarioModeSubTypes* arg2, ::FlatData::ScenarioModeReplayTypes* arg3, ::System::Int64 arg4, ::System::Int64 arg5)
		{
			return ((::System::String*(*)(::FlatData::ScenarioModeTypes*, ::FlatData::ScenarioModeSubTypes*, ::FlatData::ScenarioModeReplayTypes*, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_GETSCENARIOMODECHAPTERINFO_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::String* GetLastVolumeCheckKey(::FlatData::ScenarioModeSubTypes* arg, ::System::Int64 arg2)
		{
			return ((::System::String*(*)(::FlatData::ScenarioModeSubTypes*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_GETLASTVOLUMECHECKKEY_OFFSET))(arg, arg2, nullptr);
		}

		::System::String* GetScenarioOpenConditionCheckKey(::FlatData::ScenarioModeTypes* arg, ::System::Int64 arg2)
		{
			return ((::System::String*(*)(::FlatData::ScenarioModeTypes*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_GETSCENARIOOPENCONDITIONCHECKKEY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 GetCampaignStageRewardPacelCardCount(::MX::Data::CampaignStageInfo* arg, ::MX::GameLogic::DBModel::CampaignStageHistoryDB* arg2)
		{
			return ((::System::Int32(*)(::MX::Data::CampaignStageInfo*, ::MX::GameLogic::DBModel::CampaignStageHistoryDB*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_GETCAMPAIGNSTAGEREWARDPACELCARDCOUNT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AutoMaterialSelect(AssetObjectBase* arg, Il2CppObject&* arg2, ::System::Int64 arg3, ::System::Boolean arg4)
		{
			((::System::Void(*)(AssetObjectBase*, Il2CppObject&*, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_AUTOMATERIALSELECT_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void SetCampaignStageRewardParcelCards(::Il2CppArray<::System::Object*>* arg, ::MX::Data::CampaignStageInfo* arg2, ::MX::GameLogic::DBModel::CampaignStageHistoryDB* arg3, ::System::Boolean arg4)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::MX::Data::CampaignStageInfo*, ::MX::GameLogic::DBModel::CampaignStageHistoryDB*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_SETCAMPAIGNSTAGEREWARDPARCELCARDS_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void SetParcelInfoCostSprite(UISprite* arg, ::MX::GameLogic::Parcel::ParcelInfo* arg2)
		{
			((::System::Void(*)(UISprite*, ::MX::GameLogic::Parcel::ParcelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_SETPARCELINFOCOSTSPRITE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetParcelTexture(UITexture* arg, UISprite* arg2, ::MX::GameLogic::Parcel::ParcelInfo* arg3, ::MX::GameLogic::Parcel::ParcelInfo&* arg4)
		{
			((::System::Void(*)(UITexture*, UISprite*, ::MX::GameLogic::Parcel::ParcelInfo*, ::MX::GameLogic::Parcel::ParcelInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_SETPARCELTEXTURE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Int64 GetHardTotalPlayCounts(::FlatData::ContentType* arg)
		{
			return ((::System::Int64(*)(::FlatData::ContentType*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_GETHARDTOTALPLAYCOUNTS_OFFSET))(arg, nullptr);
		}

		::FlatData::CurrencyTypes* GetCurrencyTypesByShopCategory(::FlatData::ShopCategoryType* arg, ::System::Int64 arg2)
		{
			return ((::FlatData::CurrencyTypes*(*)(::FlatData::ShopCategoryType*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_GETCURRENCYTYPESBYSHOPCATEGORY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean IsSkewingParcelIconUsed(::FlatData::CurrencyTypes* arg)
		{
			return ((::System::Boolean(*)(::FlatData::CurrencyTypes*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_ISSKEWINGPARCELICONUSED_OFFSET))(arg, nullptr);
		}

		::System::String* GetProductDisplayTagTexturePath(::FlatData::ProductDisplayTag* arg)
		{
			return ((::System::String*(*)(::FlatData::ProductDisplayTag*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_GETPRODUCTDISPLAYTAGTEXTUREPATH_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* GetUIRootScaleInv()
		{
			return ((::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_GETUIROOTSCALEINV_OFFSET))(nullptr);
		}

		::FlatData::EmblemCategory* GetEmblemCategory_EtcMerged(::FlatData::EmblemCategory* arg)
		{
			return ((::FlatData::EmblemCategory*(*)(::FlatData::EmblemCategory*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_GETEMBLEMCATEGORY_ETCMERGED_OFFSET))(arg, nullptr);
		}

		::System::Void SetRaidCharacterCards(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg2, ::MX::GameLogic::DBModel::RaidTeamSettingDB* arg3, ::System::Boolean arg4)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::MX::GameLogic::DBModel::RaidTeamSettingDB*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_SETRAIDCHARACTERCARDS_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void SetEchelonPresetCards(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg2, ::MX::GameLogic::DBModel::EchelonPresetDB* arg3, ::System::Boolean arg4)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::MX::GameLogic::DBModel::EchelonPresetDB*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_SETECHELONPRESETCARDS_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void SetEchelonObjectCard(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg2, EchelonObject* arg3, ::System::Boolean arg4)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, EchelonObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_SETECHELONOBJECTCARD_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::String* GetMultiFloorRaidBestClearTimeText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_GETMULTIFLOORRAIDBESTCLEARTIMETEXT_OFFSET))(nullptr);
		}

		::System::Boolean IsPotentialGrowthOpened(CharacterObject* arg)
		{
			return ((::System::Boolean(*)(CharacterObject*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_ISPOTENTIALGROWTHOPENED_OFFSET))(arg, nullptr);
		}

		::System::String* GetPotentialLevelText(::FlatData::PotentialStatBonusRateType* arg, ::System::Int32 arg2)
		{
			return ((::System::String*(*)(::FlatData::PotentialStatBonusRateType*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_GETPOTENTIALLEVELTEXT_OFFSET))(arg, arg2, nullptr);
		}

		::System::String* GetPotentialLevelTextFormat(::System::Boolean arg)
		{
			return ((::System::String*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_GETPOTENTIALLEVELTEXTFORMAT_OFFSET))(arg, nullptr);
		}

		::System::String* GetSortedParcelPotentialLevelText(SortingRule* arg, Il2CppObject* arg2)
		{
			return ((::System::String*(*)(SortingRule*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_GETSORTEDPARCELPOTENTIALLEVELTEXT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::Difficulty* ParseToDifficulty(RaidDifficultyFilter* arg)
		{
			return ((::FlatData::Difficulty*(*)(RaidDifficultyFilter*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_PARSETODIFFICULTY_OFFSET))(arg, nullptr);
		}

		RaidDifficultyFilter* ParseToDifficultyFilter(::FlatData::Difficulty* arg)
		{
			return ((RaidDifficultyFilter*(*)(::FlatData::Difficulty*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_PARSETODIFFICULTYFILTER_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetRankBracketPercentages()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_GETRANKBRACKETPERCENTAGES_OFFSET))(nullptr);
		}

		::System::String* GetArenaMyName(::MX::Logic::Data::TeamSetting* arg)
		{
			return ((::System::String*(*)(::MX::Logic::Data::TeamSetting*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_GETARENAMYNAME_OFFSET))(arg, nullptr);
		}

		::System::String* GetArenaOpponentName(::System::String* str)
		{
			return ((::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_GETARENAOPPONENTNAME_OFFSET))(str, nullptr);
		}

		::System::Boolean IsOwnedProductSelect(::FlatData::ParcelType* arg, ::System::Int64 arg2)
		{
			return ((::System::Boolean(*)(::FlatData::ParcelType*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_ISOWNEDPRODUCTSELECT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean IsSchoolShopFilterType(::FlatData::ShopFilterType* arg, ::FlatData::School&* arg2)
		{
			return ((::System::Boolean(*)(::FlatData::ShopFilterType*, ::FlatData::School&*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_ISSCHOOLSHOPFILTERTYPE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void ClearAndAdd(Il2CppObject* arg, EventDelegate* arg2)
		{
			((::System::Void(*)(Il2CppObject*, EventDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_CLEARANDADD_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* GetCurrentAvailableDailyRecordShopCashExcel()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_GETCURRENTAVAILABLEDAILYRECORDSHOPCASHEXCEL_OFFSET))(nullptr);
		}

		::System::Boolean IsShopCashPeriodOnSale(::MX::Data::Excel::ShopCashExcel* arg)
		{
			return ((::System::Boolean(*)(::MX::Data::Excel::ShopCashExcel*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_ISSHOPCASHPERIODONSALE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsProductDailyRecordAvailablePeriod(::MX::Data::Excel::ShopCashExcel* arg)
		{
			return ((::System::Boolean(*)(::MX::Data::Excel::ShopCashExcel*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_ISPRODUCTDAILYRECORDAVAILABLEPERIOD_OFFSET))(arg, nullptr);
		}

		::System::String* GetShopCashProductImagePath(::MX::Data::Excel::ShopCashExcel* arg)
		{
			return ((::System::String*(*)(::MX::Data::Excel::ShopCashExcel*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_GETSHOPCASHPRODUCTIMAGEPATH_OFFSET))(arg, nullptr);
		}

		::System::Void ShowNotEnoughShopCashResourcePopup(::System::String* str, Il2CppObject* arg, ::FlatData::ProductCategory* arg2)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::FlatData::ProductCategory*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_SHOWNOTENOUGHSHOPCASHRESOURCEPOPUP_OFFSET))(str, arg, arg2, nullptr);
		}

		::System::Void SetShopCashSalePeriodLabel(UILabel* arg, UISprite* arg2, UISprite* arg3, ::System::Boolean arg4, ::System::DateTime* arg5, ::System::DateTime* arg6)
		{
			((::System::Void(*)(UILabel*, UISprite*, UISprite*, ::System::Boolean, ::System::DateTime*, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_SETSHOPCASHSALEPERIODLABEL_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISERVICE_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void _SetRaidCharacterCards_g__SetDisable|180_0(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE__SETRAIDCHARACTERCARDS_G__SETDISABLE|180_0_OFFSET))(arg, nullptr);
		}

		::System::Void _SetRaidCharacterCards_g__SetCards|180_1(::Il2CppArray<::System::Object*>* arg, Il2CppObject* arg2, <>c__DisplayClass180_0&* arg3)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, Il2CppObject*, <>c__DisplayClass180_0&*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVICE__SETRAIDCHARACTERCARDS_G__SETCARDS|180_1_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};

