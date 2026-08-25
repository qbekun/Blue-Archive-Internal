#pragma once
#include "unitysdk.h"

class MXButton;
namespace UnityEngine { class GameObject; }
class UIWidget;
class UILabel;
class UIPanel;
class MXBattleTask;
class SupporterPublicSkillDialogPlayer;
namespace UnityEngine { class ParticleSystem; }
class UIBattleChaserChampionsDisplay;
class ConfrontationGauge;
namespace UnityEngine { class Transform; }
class ChangeStatLogicApplicationGauge;
class UIBattleWaveCountDisplay;
class UIBattleFindGiftDisplay;
class UIBattleRaidSet;
namespace MX::Logic::Data { class BattleTypes; }
namespace MX::Logic::Battles { class O6258293a6fdb8d9d3ceab40a511b1305e11a635a155aab54997aa5321b5e4a39; }
class UICarrierSkillCard;
namespace UnityEngine { class Coroutine; }
class DynamicUIContainer;
class UIBattleSubLayout;
class UIPlayerSkillCardSet;
class MXToggle;
class ObjectHPBar;
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
namespace FlatData { class UIEnemyCountType; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::Battles { class KillEventArgs; }
class IBulletTimeCancelReceiver;
namespace MX::Logic::Battles { class O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c; }
namespace MX::Logic::BattleEntities { class SkillCardEventArgs; }
class FindGiftProcess;
namespace MX::Logic::Battles { class DamageUpdatedEventArgs; }
class UIStatusLevelIndicator;
namespace MX::Logic::Battles { class CharacterFormConvertedEventArgs; }
namespace MX::Logic::Battles { class LogicEffectHitEventArgs; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::Skills::LogicEffects { class IAdditionalUISet; }
namespace MX::Logic::Skills::LogicEffects { class IAdditionalUIAction; }
class UIBattleDynamicUIContainerPosition;
class DynamicUISlot;

#define UIBATTLE_GET_CURRENTSUBLAYOUT_OFFSET UNITYSDK_OFFSET(0x221F5D0)
#define UIBATTLE_GET_CURRENTSKILLCARDSET_OFFSET UNITYSDK_OFFSET(0x221F630)
#define UIBATTLE_GET_CURRENTCARRIERSKILLCARDSET_OFFSET UNITYSDK_OFFSET(0x221F740)
#define UIBATTLE_GET_SINGLECARRIERSKILLPARENT_OFFSET UNITYSDK_OFFSET(0x221F7B0)
#define UIBATTLE_GET_CARRIERTOGGLE_OFFSET UNITYSDK_OFFSET(0x221F820)
#define UIBATTLE_GET_AUTOLOCKBUTTON_OFFSET UNITYSDK_OFFSET(0x221F890)
#define UIBATTLE_GET_AUTOONBUTTON_OFFSET UNITYSDK_OFFSET(0x221F900)
#define UIBATTLE_GET_AUTOOFFBUTTON_OFFSET UNITYSDK_OFFSET(0x221F970)
#define UIBATTLE_GET_SPEEDLOCKBUTTON_OFFSET UNITYSDK_OFFSET(0x221F9E0)
#define UIBATTLE_GET_SPEEDBUTTONLIST_OFFSET UNITYSDK_OFFSET(0x221FA50)
#define UIBATTLE_GET_UIOBJECTHPBAR_OFFSET UNITYSDK_OFFSET(0x221FAC0)
#define UIBATTLE_GET_WAVECOUNTDISPLAY_OFFSET UNITYSDK_OFFSET(0x221FB30)
#define UIBATTLE_GET_FINDGIFTDISPLAY_OFFSET UNITYSDK_OFFSET(0x221FD40)
#define UIBATTLE_GET_BATTLERAIDSET_OFFSET UNITYSDK_OFFSET(0x221FCD0)
#define UIBATTLE_GET_ISRIGHT_OFFSET UNITYSDK_OFFSET(0x221FDB0)
#define UIBATTLE_GET_SKILLCARDMANAGER_OFFSET UNITYSDK_OFFSET(0x221FDC0)
#define UIBATTLE_GET_ISCODISAPPEARING_OFFSET UNITYSDK_OFFSET(0x221FF40)
#define UIBATTLE_AWAKE_OFFSET UNITYSDK_OFFSET(0x221FF50)
#define UIBATTLE_ONANDROIDBACKBUTTON_OFFSET UNITYSDK_OFFSET(0x22211E0)
#define UIBATTLE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x22212C0)
#define UIBATTLE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x22215B0)
#define UIBATTLE_IMMEDIATELYHIDEOPTIONALUI_OFFSET UNITYSDK_OFFSET(0x2221A80)
#define UIBATTLE_HANDLEUIOPEN_OFFSET UNITYSDK_OFFSET(0x22221A0)
#define UIBATTLE_HANDLEUICLOSE_OFFSET UNITYSDK_OFFSET(0x22222A0)
#define UIBATTLE_HANDLEONSTARTSTEPTUTORIAL_OFFSET UNITYSDK_OFFSET(0x22223A0)
#define UIBATTLE_HANDLEONENDSTEPTUTORIAL_OFFSET UNITYSDK_OFFSET(0x22223D0)
#define UIBATTLE_ONCLICKTEMP_OFFSET UNITYSDK_OFFSET(0x2222400)
#define UIBATTLE_ONCLICKAUTOON_OFFSET UNITYSDK_OFFSET(0x2222410)
#define UIBATTLE_ONCLICKAUTOLOCK_OFFSET UNITYSDK_OFFSET(0x22226A0)
#define UIBATTLE_ONCLICKAUTOOFF_OFFSET UNITYSDK_OFFSET(0x2222820)
#define UIBATTLE_ONCLICKSPEEDLOCK_OFFSET UNITYSDK_OFFSET(0x2222A20)
#define UIBATTLE_ONCLICKSPEEDCHANGE_OFFSET UNITYSDK_OFFSET(0x2222CE0)
#define UIBATTLE_CHECKCANPAUSE_OFFSET UNITYSDK_OFFSET(0x2222FE0)
#define UIBATTLE_ONCLICKPAUSE_OFFSET UNITYSDK_OFFSET(0x22211F0)
#define UIBATTLE_PAUSEWITHPOPUPMESSAGE_OFFSET UNITYSDK_OFFSET(0x2223520)
#define UIBATTLE_ONSKIPLOCKCLICK_OFFSET UNITYSDK_OFFSET(0x2223680)
#define UIBATTLE_ONSKIPACTIVECLICK_OFFSET UNITYSDK_OFFSET(0x2223880)
#define UIBATTLE_ARENASKIPLOCKCLICK_OFFSET UNITYSDK_OFFSET(0x2223700)
#define UIBATTLE_ARENASKIPACTIVECLICK_OFFSET UNITYSDK_OFFSET(0x2223920)
#define UIBATTLE_SCENARIOSKIPLOCKCLICK_OFFSET UNITYSDK_OFFSET(0x22237C0)
#define UIBATTLE_ONSCENARIOSKIPACTIVECLICK_OFFSET UNITYSDK_OFFSET(0x2223A80)
#define UIBATTLE_SCENARIOBATTLESKIPOK_OFFSET UNITYSDK_OFFSET(0x2223EB0)
#define UIBATTLE_SKIPVICTORY_OFFSET UNITYSDK_OFFSET(0x2224060)
#define UIBATTLE_SCENARIOBATTLESKIPCANCEL_OFFSET UNITYSDK_OFFSET(0x22240F0)
#define UIBATTLE_ONSTORYSTRATEGYBATTLESKIPACTIVECLICK_OFFSET UNITYSDK_OFFSET(0x2223C90)
#define UIBATTLE_STORYSTRATEGYBATTLESKIPOK_OFFSET UNITYSDK_OFFSET(0x2224190)
#define UIBATTLE_OPENUIVICTORYFORSTORYSTRATEGYBATTLESKIP_OFFSET UNITYSDK_OFFSET(0x2224340)
#define UIBATTLE_STORYSTRATEGYBATTLESKIPCANCEL_OFFSET UNITYSDK_OFFSET(0x22243D0)
#define UIBATTLE_UPDATE_OFFSET UNITYSDK_OFFSET(0x2224460)
#define UIBATTLE_UPDATEBATTLETIME_OFFSET UNITYSDK_OFFSET(0x22244A0)
#define UIBATTLE_SETHIDEBATTLEUI_OFFSET UNITYSDK_OFFSET(0x2224830)
#define UIBATTLE_SETSHOWBATTLESTARTSIGN_OFFSET UNITYSDK_OFFSET(0x2224840)
#define UIBATTLE_ONENDOPENANIMATION_OFFSET UNITYSDK_OFFSET(0x2224850)
#define UIBATTLE_INITIALIZESUBLAYOUT_OFFSET UNITYSDK_OFFSET(0x2220F40)
#define UIBATTLE_ONOPENED_OFFSET UNITYSDK_OFFSET(0x2224A20)
#define UIBATTLE_ONCLOSED_OFFSET UNITYSDK_OFFSET(0x2229DC0)
#define UIBATTLE_INITSTARTTEXTURE_OFFSET UNITYSDK_OFFSET(0x2225CE0)
#define UIBATTLE_INITCOUNTDISPLAY_OFFSET UNITYSDK_OFFSET(0x2225D40)
#define UIBATTLE_SHOWENEMYCOUNTUIBYCOMMAND_OFFSET UNITYSDK_OFFSET(0x2229EF0)
#define UIBATTLE_GETCOUNTDISPLAYTYPE_OFFSET UNITYSDK_OFFSET(0x2229E00)
#define UIBATTLE_REFRESHWAVEALIVECOUNTBYREMAINENEMYCOUNT_OFFSET UNITYSDK_OFFSET(0x222A180)
#define UIBATTLE_INITTIMELIMITALARM_OFFSET UNITYSDK_OFFSET(0x22295B0)
#define UIBATTLE_SHOWBATTLESTARTOPERATOR_OFFSET UNITYSDK_OFFSET(0x2229720)
#define UIBATTLE_INITAUTOBUTTON_OFFSET UNITYSDK_OFFSET(0x2227C60)
#define UIBATTLE_INITSPEEDBUTTON_OFFSET UNITYSDK_OFFSET(0x2228390)
#define UIBATTLE_INITARENASKIPBUTTON_OFFSET UNITYSDK_OFFSET(0x2228FC0)
#define UIBATTLE_SETSTAGELABEL_OFFSET UNITYSDK_OFFSET(0x2226000)
#define UIBATTLE_ADDLISTENERBULLETTIMECANCEL_OFFSET UNITYSDK_OFFSET(0x222A280)
#define UIBATTLE_REMOVELISTENERBULLETTIMECANCEL_OFFSET UNITYSDK_OFFSET(0x222A390)
#define UIBATTLE_INITSKILLCARD_OFFSET UNITYSDK_OFFSET(0x2227430)
#define UIBATTLE_INITCARRIERSKILLCARD_OFFSET UNITYSDK_OFFSET(0x22274C0)
#define UIBATTLE_INITSINGLECARRIERSKILLCARD_OFFSET UNITYSDK_OFFSET(0x222A3F0)
#define UIBATTLE_CLOSEUISINGLECARRIERSKILLCARD_OFFSET UNITYSDK_OFFSET(0x22220B0)
#define UIBATTLE_ONCARRIERTOGGLECHANGED_OFFSET UNITYSDK_OFFSET(0x222A580)
#define UIBATTLE_SETVISUALCARRIERSKILLCARD_OFFSET UNITYSDK_OFFSET(0x222A7F0)
#define UIBATTLE_SETVISUALSINGLECARRIERSKILLCARD_OFFSET UNITYSDK_OFFSET(0x222AB50)
#define UIBATTLE_SETDEPTHSKILLANDCOST_OFFSET UNITYSDK_OFFSET(0x222AC20)
#define UIBATTLE_HIGHLIGHTPLAYERSKILLCARD_OFFSET UNITYSDK_OFFSET(0x222B0B0)
#define UIBATTLE_HIGHLIGHTCARRIERSKILLCARD_OFFSET UNITYSDK_OFFSET(0x222ACA0)
#define UIBATTLE_SETSKILLCARDSONSCENARIOSTART_OFFSET UNITYSDK_OFFSET(0x222B740)
#define UIBATTLE_SETSKILLCARDSONSCENARIOEND_OFFSET UNITYSDK_OFFSET(0x222B8D0)
#define UIBATTLE_SHOWBULLETTIMEUI_OFFSET UNITYSDK_OFFSET(0x222BA50)
#define UIBATTLE_SETSELECTSKILLINDEX_OFFSET UNITYSDK_OFFSET(0x222BB80)
#define UIBATTLE_HIDEOPERATORUI_OFFSET UNITYSDK_OFFSET(0x222BC60)
#define UIBATTLE_SHOWPUBLICSKILLDIALOG_OFFSET UNITYSDK_OFFSET(0x222BD50)
#define UIBATTLE_CLEARSKILLCARDSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x222BDF0)
#define UIBATTLE_APPLY_OFFSET UNITYSDK_OFFSET(0x222BE50)
#define UIBATTLE_STARTDISAPPEARCOROUTINE_OFFSET UNITYSDK_OFFSET(0x222BED0)
#define UIBATTLE_CODISAPPEAR_OFFSET UNITYSDK_OFFSET(0x222BFC0)
#define UIBATTLE_COOPENANIMATION_OFFSET UNITYSDK_OFFSET(0x222C050)
#define UIBATTLE_CANCELBULLETTIME_OFFSET UNITYSDK_OFFSET(0x222C100)
#define UIBATTLE_REFRESHCHASERCHAMPIONS_OFFSET UNITYSDK_OFFSET(0x22296A0)
#define UIBATTLE_ONSTARTWAVE_OFFSET UNITYSDK_OFFSET(0x222C920)
#define UIBATTLE_ONWAVECOUNTCHANGED_OFFSET UNITYSDK_OFFSET(0x222CA00)
#define UIBATTLE_ONENDWAVECOMMAND_OFFSET UNITYSDK_OFFSET(0x222CA90)
#define UIBATTLE_STARTFINDGIFT_OFFSET UNITYSDK_OFFSET(0x222CBB0)
#define UIBATTLE_STARTFINDGIFTPROCESS_OFFSET UNITYSDK_OFFSET(0x222CDF0)
#define UIBATTLE_ENDFINDGIFT_OFFSET UNITYSDK_OFFSET(0x222D0C0)
#define UIBATTLE_REFRESHDAMAGEMETER_OFFSET UNITYSDK_OFFSET(0x222D290)
#define UIBATTLE_TUTORIALDEACTIVATEAUTOBTN_OFFSET UNITYSDK_OFFSET(0x22299C0)
#define UIBATTLE_TUTORIALDEACTIVATEPAUSEBTN_OFFSET UNITYSDK_OFFSET(0x2229B40)
#define UIBATTLE_TUTORIALDEACTIVATESPEEDBUTTON_OFFSET UNITYSDK_OFFSET(0x2229BA0)
#define UIBATTLE_SETSKILLCARDCOLLIDERS_OFFSET UNITYSDK_OFFSET(0x222D330)
#define UIBATTLE_ATTACHBTN_CALLCHEATPOPUP_OFFSET UNITYSDK_OFFSET(0x22211D0)
#define UIBATTLE_ISPLAYINGCUTIN_OFFSET UNITYSDK_OFFSET(0x22233F0)
#define UIBATTLE_ISPLAYINGSCENARIO_OFFSET UNITYSDK_OFFSET(0x2223480)
#define UIBATTLE_SETSTATLOGICAPPLICATIONGAUGE_OFFSET UNITYSDK_OFFSET(0x222D3D0)
#define UIBATTLE_SETSTATUSLEVELINDICATOR_OFFSET UNITYSDK_OFFSET(0x222D540)
#define UIBATTLE_HIDECHANGESTATLOGICAPPLICATIONGAUGE_OFFSET UNITYSDK_OFFSET(0x2221AB0)
#define UIBATTLE_HIDEALLSTATUSLEVELINDICATORS_OFFSET UNITYSDK_OFFSET(0x2221C60)
#define UIBATTLE_HIDESTATUSLEVELINDICATOR_OFFSET UNITYSDK_OFFSET(0x222D7E0)
#define UIBATTLE_CHANGELOGICAPPLICATIONGAUGETYPE_OFFSET UNITYSDK_OFFSET(0x222DB20)
#define UIBATTLE_ONOWNERFORMCHANGE_OFFSET UNITYSDK_OFFSET(0x222DB90)
#define UIBATTLE_ONOWNERFORMCHANGESTATUSLEVEL_OFFSET UNITYSDK_OFFSET(0x222DC00)
#define UIBATTLE_ONOWNERLOGICEFFECTHIT_OFFSET UNITYSDK_OFFSET(0x222DE40)
#define UIBATTLE_ONOWNERLOGICEFFECTHITSTATUSLEVEL_OFFSET UNITYSDK_OFFSET(0x222DF10)
#define UIBATTLE_CURRENTSHOWINGSTATLOGICAPPLICATIONGAUGEGROUPID_OFFSET UNITYSDK_OFFSET(0x222E170)
#define UIBATTLE_CURRENTSHOWINGCHANGESTATLOGICAPPLICATIONGAUGECOUNT_OFFSET UNITYSDK_OFFSET(0x222E200)
#define UIBATTLE_CURRENTSHOWINGSTATUSLEVELINDICATORCOUNT_OFFSET UNITYSDK_OFFSET(0x222E280)
#define UIBATTLE_BATTLEADDITIONALUISET_OFFSET UNITYSDK_OFFSET(0x222E310)
#define UIBATTLE_BATTLEADDITIONALUISET_OFFSET UNITYSDK_OFFSET(0x222E800)
#define UIBATTLE_BATTLEADDITIONALUIACTION_OFFSET UNITYSDK_OFFSET(0x222E940)
#define UIBATTLE_BATTLEADDITIONALUIFIND_OFFSET UNITYSDK_OFFSET(0x222E650)
#define UIBATTLE_BATTLEADDITIONALUICLOSE_OFFSET UNITYSDK_OFFSET(0x222EB20)
#define UIBATTLE_BATTLEADDITIONALUICLOSEALL_OFFSET UNITYSDK_OFFSET(0x2221FB0)
#define UIBATTLE_ENSUREADDITIONALCAMERABUTTON_OFFSET UNITYSDK_OFFSET(0x222ECB0)
#define UIBATTLE_RESERVEREMOVEADDITIONALCAMERABUTTON_OFFSET UNITYSDK_OFFSET(0x222ED60)
#define UIBATTLE_GETDYNAMICUICONTAINER_OFFSET UNITYSDK_OFFSET(0x222EE00)
#define UIBATTLE_TRYSETPARENT_OFFSET UNITYSDK_OFFSET(0x222EE10)
#define UIBATTLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x222EF20)
#define UIBATTLE__SKIPVICTORY_G__CLOSEOPERATION_SHOWRESULTSUBSCENE|108_0_OFFSET UNITYSDK_OFFSET(0x222F010)
#define UIBATTLE__SKIPVICTORY_G__CLOSEOPERATION_UIVICTORY|108_1_OFFSET UNITYSDK_OFFSET(0x222F0A0)

	inline static constexpr unsigned int UIBattle_TypeDefinitionIndex = 4445;

	class UIBattle : public Il2CppObject
	{
	public:
		MXButton* TempButton; // 0xD8
		MXButton* PauseButton; // 0xE0
		::UnityEngine::GameObject* StartImageParent; // 0xE8
		::UnityEngine::GameObject* StartImage; // 0xF0
		::UnityEngine::GameObject* FightImage; // 0xF8
		UIWidget* StartBg; // 0x100
		::UnityEngine::GameObject* StageLabelObject; // 0x108
		UILabel* StageLabel; // 0x110
		::UnityEngine::GameObject* PracticeLabelObject; // 0x118
		UILabel* PracticeLabel; // 0x120
		::UnityEngine::GameObject* TimeObject; // 0x128
		UILabel* TimeLabel; // 0x130
		UILabel* RaidTimeLabel; // 0x138
		::UnityEngine::GameObject* TimeLimitIndicator; // 0x140
		::UnityEngine::GameObject* RaidTimeLimitIndicator; // 0x148
		UILabel* RaidCodeLabel; // 0x150
		Il2CppObject* SubLayout; // 0x158
		UIPanel* TutorialPanel; // 0x160
		MXBattleTask* mxBattleTask; // 0x168
		::UnityEngine::GameObject* SkipObj; // 0x170
		MXButton* SkipLockButton; // 0x178
		MXButton* SkipActiveButton; // 0x180
		::System::Boolean isSpeedLocked; // 0x188
		SupporterPublicSkillDialogPlayer* allySupporterPublicSkillDialogPlayer; // 0x190
		SupporterPublicSkillDialogPlayer* enemySupporterPublicSkillDialogPlayer; // 0x198
		::UnityEngine::GameObject* RaidGroup; // 0x1A0
		UILabel* RaidBestPointLabel; // 0x1A8
		::UnityEngine::ParticleSystem* SpeedOnButtonParticle; // 0x1B0
		::UnityEngine::GameObject* timeLimitObject; // 0x1B8
		UIBattleChaserChampionsDisplay* chaserChampionsDisplay; // 0x1C0
		::System::Int32 operatorDepth; // 0x1C8
		ConfrontationGauge* ConfrontationBar; // 0x1D0
		::UnityEngine::Transform* ConfrontationGaugeParent; // 0x1D8
		ChangeStatLogicApplicationGauge* ChangeStatLogicApplicationGauge; // 0x1E0
		Il2CppObject* UIStatusLevelIndicators; // 0x1E8
		Il2CppObject* UIStatusLevelIndicatorCount; // 0x1F0
		UIWidget* GaugeParentWidget; // 0x1F8
		UIBattleWaveCountDisplay* waveCountDisplay; // 0x200
		UIBattleFindGiftDisplay* findGiftDisplay; // 0x208
		UIBattleRaidSet* battleRaidSet; // 0x210
		::System::Boolean isExtension; // 0x218
		::System::Boolean isRight; // 0x219
		::MX::Logic::Data::BattleTypes* battleType; // 0x21C
		::System::Int64 timeLimitAlarm; // 0x220
		::System::Int64 timeArenaActiveSkipBtn; // 0x228
		::MX::Logic::Battles::O6258293a6fdb8d9d3ceab40a511b1305e11a635a155aab54997aa5321b5e4a39* skillCardManager; // 0x230
		UICarrierSkillCard* curUiSingleCarrierSkillCard; // 0x238
		Il2CppObject* bulletTimeCancelReceivers; // 0x240
		::UnityEngine::Coroutine* disappearCoroutine; // 0x248
		::System::Boolean IsHideBattleUICalled; // 0x250
		::System::Boolean ShowBattleStartSign; // 0x251
		DynamicUIContainer* containerTopRight_Downward; // 0x258
		::System::String* PathAdditionalUICameraSwitch; // 0x0
		Il2CppObject* additionalUIs; // 0x260

		UIBattleSubLayout* get_CurrentSubLayout()
		{
			return ((UIBattleSubLayout*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_GET_CURRENTSUBLAYOUT_OFFSET))(nullptr);
		}

		UIPlayerSkillCardSet* get_CurrentSkillCardSet()
		{
			return ((UIPlayerSkillCardSet*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_GET_CURRENTSKILLCARDSET_OFFSET))(nullptr);
		}

		Il2CppObject* get_CurrentCarrierSkillCardSet()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_GET_CURRENTCARRIERSKILLCARDSET_OFFSET))(nullptr);
		}

		::UnityEngine::GameObject* get_SingleCarrierSkillParent()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_GET_SINGLECARRIERSKILLPARENT_OFFSET))(nullptr);
		}

		MXToggle* get_CarrierToggle()
		{
			return ((MXToggle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_GET_CARRIERTOGGLE_OFFSET))(nullptr);
		}

		MXButton* get_AutoLockButton()
		{
			return ((MXButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_GET_AUTOLOCKBUTTON_OFFSET))(nullptr);
		}

		MXButton* get_AutoOnButton()
		{
			return ((MXButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_GET_AUTOONBUTTON_OFFSET))(nullptr);
		}

		MXButton* get_AutoOffButton()
		{
			return ((MXButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_GET_AUTOOFFBUTTON_OFFSET))(nullptr);
		}

		MXButton* get_SpeedLockButton()
		{
			return ((MXButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_GET_SPEEDLOCKBUTTON_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_SpeedButtonList()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_GET_SPEEDBUTTONLIST_OFFSET))(nullptr);
		}

		ObjectHPBar* get_UIObjectHPBar()
		{
			return ((ObjectHPBar*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_GET_UIOBJECTHPBAR_OFFSET))(nullptr);
		}

		UIBattleWaveCountDisplay* get_WaveCountDisplay()
		{
			return ((UIBattleWaveCountDisplay*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_GET_WAVECOUNTDISPLAY_OFFSET))(nullptr);
		}

		UIBattleFindGiftDisplay* get_FindGiftDisplay()
		{
			return ((UIBattleFindGiftDisplay*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_GET_FINDGIFTDISPLAY_OFFSET))(nullptr);
		}

		UIBattleRaidSet* get_BattleRaidSet()
		{
			return ((UIBattleRaidSet*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_GET_BATTLERAIDSET_OFFSET))(nullptr);
		}

		::System::Boolean get_IsRight()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_GET_ISRIGHT_OFFSET))(nullptr);
		}

		::MX::Logic::Battles::O6258293a6fdb8d9d3ceab40a511b1305e11a635a155aab54997aa5321b5e4a39* get_SkillCardManager()
		{
			return ((::MX::Logic::Battles::O6258293a6fdb8d9d3ceab40a511b1305e11a635a155aab54997aa5321b5e4a39*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_GET_SKILLCARDMANAGER_OFFSET))(nullptr);
		}

		::System::Boolean get_IsCoDisappearing()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_GET_ISCODISAPPEARING_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnAndroidBackButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_ONANDROIDBACKBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void ImmediatelyHideOptionalUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_IMMEDIATELYHIDEOPTIONALUI_OFFSET))(nullptr);
		}

		::System::Boolean HandleUIOpen(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_HANDLEUIOPEN_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleUIClose(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_HANDLEUICLOSE_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleOnStartStepTutorial(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_HANDLEONSTARTSTEPTUTORIAL_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleOnEndStepTutorial(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_HANDLEONENDSTEPTUTORIAL_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickTemp()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_ONCLICKTEMP_OFFSET))(nullptr);
		}

		::System::Void OnClickAutoOn()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_ONCLICKAUTOON_OFFSET))(nullptr);
		}

		::System::Void OnClickAutoLock()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_ONCLICKAUTOLOCK_OFFSET))(nullptr);
		}

		::System::Void OnClickAutoOff()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_ONCLICKAUTOOFF_OFFSET))(nullptr);
		}

		::System::Void OnClickSpeedLock()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_ONCLICKSPEEDLOCK_OFFSET))(nullptr);
		}

		::System::Void OnClickSpeedChange()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_ONCLICKSPEEDCHANGE_OFFSET))(nullptr);
		}

		::System::Boolean CheckCanPause()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_CHECKCANPAUSE_OFFSET))(nullptr);
		}

		::System::Void OnClickPause()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_ONCLICKPAUSE_OFFSET))(nullptr);
		}

		::System::Void PauseWithPopupMessage(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_PAUSEWITHPOPUPMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void OnSkipLockClick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_ONSKIPLOCKCLICK_OFFSET))(nullptr);
		}

		::System::Void OnSkipActiveClick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_ONSKIPACTIVECLICK_OFFSET))(nullptr);
		}

		::System::Void ArenaSkipLockClick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_ARENASKIPLOCKCLICK_OFFSET))(nullptr);
		}

		::System::Void ArenaSkipActiveClick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_ARENASKIPACTIVECLICK_OFFSET))(nullptr);
		}

		::System::Void ScenarioSkipLockClick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_SCENARIOSKIPLOCKCLICK_OFFSET))(nullptr);
		}

		::System::Void OnScenarioSkipActiveClick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_ONSCENARIOSKIPACTIVECLICK_OFFSET))(nullptr);
		}

		::System::Void ScenarioBattleSkipOk()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_SCENARIOBATTLESKIPOK_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* SkipVictory()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_SKIPVICTORY_OFFSET))(nullptr);
		}

		::System::Void ScenarioBattleSkipCancel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_SCENARIOBATTLESKIPCANCEL_OFFSET))(nullptr);
		}

		::System::Void OnStoryStrategyBattleSkipActiveClick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_ONSTORYSTRATEGYBATTLESKIPACTIVECLICK_OFFSET))(nullptr);
		}

		::System::Void StoryStrategyBattleSkipOk()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_STORYSTRATEGYBATTLESKIPOK_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* OpenUIVictoryForStoryStrategyBattleSkip()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_OPENUIVICTORYFORSTORYSTRATEGYBATTLESKIP_OFFSET))(nullptr);
		}

		::System::Void StoryStrategyBattleSkipCancel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_STORYSTRATEGYBATTLESKIPCANCEL_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_UPDATE_OFFSET))(nullptr);
		}

		::System::Void UpdateBattleTime()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_UPDATEBATTLETIME_OFFSET))(nullptr);
		}

		::System::Void SetHideBattleUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_SETHIDEBATTLEUI_OFFSET))(nullptr);
		}

		::System::Void SetShowBattleStartSign(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_SETSHOWBATTLESTARTSIGN_OFFSET))(arg, nullptr);
		}

		::System::Void OnEndOpenAnimation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_ONENDOPENANIMATION_OFFSET))(nullptr);
		}

		::System::Void InitializeSubLayout()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_INITIALIZESUBLAYOUT_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_ONCLOSED_OFFSET))(nullptr);
		}

		::System::Void InitStartTexture()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_INITSTARTTEXTURE_OFFSET))(nullptr);
		}

		::System::Void InitCountDisplay()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_INITCOUNTDISPLAY_OFFSET))(nullptr);
		}

		::System::Void ShowEnemyCountUIByCommand(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_SHOWENEMYCOUNTUIBYCOMMAND_OFFSET))(arg, nullptr);
		}

		::FlatData::UIEnemyCountType* GetCountDisplayType(::MX::Logic::Battles::Battle* arg)
		{
			return ((::FlatData::UIEnemyCountType*(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_GETCOUNTDISPLAYTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshWaveAliveCountByRemainEnemyCount(::System::Object* arg, ::MX::Logic::Battles::KillEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::KillEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_REFRESHWAVEALIVECOUNTBYREMAINENEMYCOUNT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void InitTimeLimitAlarm()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_INITTIMELIMITALARM_OFFSET))(nullptr);
		}

		::System::Void ShowBattleStartOperator()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_SHOWBATTLESTARTOPERATOR_OFFSET))(nullptr);
		}

		::System::Void InitAutoButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_INITAUTOBUTTON_OFFSET))(nullptr);
		}

		::System::Void InitSpeedButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_INITSPEEDBUTTON_OFFSET))(nullptr);
		}

		::System::Void InitArenaSkipButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_INITARENASKIPBUTTON_OFFSET))(nullptr);
		}

		::System::Void SetStageLabel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_SETSTAGELABEL_OFFSET))(nullptr);
		}

		::System::Void AddListenerBulletTimeCancel(IBulletTimeCancelReceiver* arg)
		{
			((::System::Void(*)(IBulletTimeCancelReceiver*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_ADDLISTENERBULLETTIMECANCEL_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveListenerBulletTimeCancel(IBulletTimeCancelReceiver* arg)
		{
			((::System::Void(*)(IBulletTimeCancelReceiver*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_REMOVELISTENERBULLETTIMECANCEL_OFFSET))(arg, nullptr);
		}

		::System::Void InitSkillCard()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_INITSKILLCARD_OFFSET))(nullptr);
		}

		::System::Void InitCarrierSkillcard()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_INITCARRIERSKILLCARD_OFFSET))(nullptr);
		}

		::System::Void InitSingleCarrierSkillCard(UICarrierSkillCard* arg)
		{
			((::System::Void(*)(UICarrierSkillCard*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_INITSINGLECARRIERSKILLCARD_OFFSET))(arg, nullptr);
		}

		::System::Void CloseUiSingleCarrierSkillCard()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_CLOSEUISINGLECARRIERSKILLCARD_OFFSET))(nullptr);
		}

		::System::Void OnCarrierToggleChanged(MXToggle* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(MXToggle*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_ONCARRIERTOGGLECHANGED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetVisualCarrierSkillCard(::System::Boolean arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_SETVISUALCARRIERSKILLCARD_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetVisualSingleCarrierSkillCard(::System::Boolean arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_SETVISUALSINGLECARRIERSKILLCARD_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetDepthSkillAndCost(::MX::Logic::Battles::O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_SETDEPTHSKILLANDCOST_OFFSET))(arg, nullptr);
		}

		::System::Void HighlightPlayerSkillCard(::MX::Logic::Battles::O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_HIGHLIGHTPLAYERSKILLCARD_OFFSET))(arg, nullptr);
		}

		::System::Void HighlightCarrierSkillCard(::MX::Logic::Battles::O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_HIGHLIGHTCARRIERSKILLCARD_OFFSET))(arg, nullptr);
		}

		::System::Void SetSkillCardsOnScenarioStart(Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_SETSKILLCARDSONSCENARIOSTART_OFFSET))(arg, nullptr);
		}

		::System::Void SetSkillCardsOnScenarioEnd(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_SETSKILLCARDSONSCENARIOEND_OFFSET))(arg, nullptr);
		}

		::System::Void ShowBulletTimeUI(::MX::Logic::Battles::O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_SHOWBULLETTIMEUI_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetSelectSkillIndex(::MX::Logic::Battles::O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_SETSELECTSKILLINDEX_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void HideOperatorUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_HIDEOPERATORUI_OFFSET))(nullptr);
		}

		::System::Void ShowPublicSkillDialog(::System::Int64 arg, ::System::Int64 arg2, ::System::UInt32 arg3, ::System::Boolean arg4)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::System::UInt32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_SHOWPUBLICSKILLDIALOG_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void ClearSkillCardSnapshot()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_CLEARSKILLCARDSNAPSHOT_OFFSET))(nullptr);
		}

		::System::Void Apply(::MX::Logic::BattleEntities::SkillCardEventArgs* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::SkillCardEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_APPLY_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Coroutine* StartDisappearCoroutine()
		{
			return ((::UnityEngine::Coroutine*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_STARTDISAPPEARCOROUTINE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoDisappear()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_CODISAPPEAR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoOpenAnimation(::System::Boolean arg, ::System::Action* arg2, ::System::Boolean arg3)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Boolean, ::System::Action*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_COOPENANIMATION_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void CancelBulletTime(::MX::Logic::Battles::O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_CANCELBULLETTIME_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshChaserChampions()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_REFRESHCHASERCHAMPIONS_OFFSET))(nullptr);
		}

		::System::Void OnStartWave(::System::Int32 arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_ONSTARTWAVE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnWaveCountChanged(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_ONWAVECOUNTCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void OnEndWaveCommand()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_ONENDWAVECOMMAND_OFFSET))(nullptr);
		}

		::System::Void StartFindGift(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_STARTFINDGIFT_OFFSET))(str, nullptr);
		}

		::System::Void StartFindGiftProcess(FindGiftProcess* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(FindGiftProcess*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_STARTFINDGIFTPROCESS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void EndFindGift(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_ENDFINDGIFT_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshDamageMeter(::MX::Logic::Battles::DamageUpdatedEventArgs* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::DamageUpdatedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_REFRESHDAMAGEMETER_OFFSET))(arg, nullptr);
		}

		::System::Void TutorialDeactivateAutoBtn()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_TUTORIALDEACTIVATEAUTOBTN_OFFSET))(nullptr);
		}

		::System::Void TutorialDeactivatePauseBtn()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_TUTORIALDEACTIVATEPAUSEBTN_OFFSET))(nullptr);
		}

		::System::Void TutorialDeactivateSpeedButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_TUTORIALDEACTIVATESPEEDBUTTON_OFFSET))(nullptr);
		}

		::System::Void SetSkillCardColliders(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_SETSKILLCARDCOLLIDERS_OFFSET))(arg, nullptr);
		}

		::System::Void AttachBtn_CallCheatPopup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_ATTACHBTN_CALLCHEATPOPUP_OFFSET))(nullptr);
		}

		::System::Boolean IsPlayingCutin()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_ISPLAYINGCUTIN_OFFSET))(nullptr);
		}

		::System::Boolean IsPlayingScenario()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_ISPLAYINGSCENARIO_OFFSET))(nullptr);
		}

		::System::Void SetStatLogicApplicationGauge(ChangeStatLogicApplicationGauge* arg)
		{
			((::System::Void(*)(ChangeStatLogicApplicationGauge*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_SETSTATLOGICAPPLICATIONGAUGE_OFFSET))(arg, nullptr);
		}

		::System::Void SetStatusLevelIndicator(UIStatusLevelIndicator* arg)
		{
			((::System::Void(*)(UIStatusLevelIndicator*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_SETSTATUSLEVELINDICATOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean HideChangeStatLogicApplicationGauge()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_HIDECHANGESTATLOGICAPPLICATIONGAUGE_OFFSET))(nullptr);
		}

		::System::Void HideAllStatusLevelIndicators()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_HIDEALLSTATUSLEVELINDICATORS_OFFSET))(nullptr);
		}

		::System::Boolean HideStatusLevelIndicator(::System::String* str)
		{
			return ((::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_HIDESTATUSLEVELINDICATOR_OFFSET))(str, nullptr);
		}

		::System::Void ChangeLogicApplicationGaugeType(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_CHANGELOGICAPPLICATIONGAUGETYPE_OFFSET))(arg, nullptr);
		}

		::System::Void OnOwnerFormChange(::System::Object* arg, ::MX::Logic::Battles::CharacterFormConvertedEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::CharacterFormConvertedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_ONOWNERFORMCHANGE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnOwnerFormChangeStatusLevel(::System::Object* arg, ::MX::Logic::Battles::CharacterFormConvertedEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::CharacterFormConvertedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_ONOWNERFORMCHANGESTATUSLEVEL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnOwnerLogicEffectHit(::System::Object* arg, ::MX::Logic::Battles::LogicEffectHitEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::LogicEffectHitEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_ONOWNERLOGICEFFECTHIT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnOwnerLogicEffectHitStatusLevel(::System::Object* arg, ::MX::Logic::Battles::LogicEffectHitEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::LogicEffectHitEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_ONOWNERLOGICEFFECTHITSTATUSLEVEL_OFFSET))(arg, arg2, nullptr);
		}

		::System::String* CurrentShowingStatLogicApplicationGaugeGroupId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_CURRENTSHOWINGSTATLOGICAPPLICATIONGAUGEGROUPID_OFFSET))(nullptr);
		}

		::System::Int32 CurrentShowingChangeStatLogicApplicationGaugeCount(::MX::Logic::BattleEntities::BattleEntity* arg)
		{
			return ((::System::Int32(*)(::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_CURRENTSHOWINGCHANGESTATLOGICAPPLICATIONGAUGECOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 CurrentShowingStatusLevelIndicatorCount(::MX::Logic::BattleEntities::BattleEntity* arg)
		{
			return ((::System::Int32(*)(::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_CURRENTSHOWINGSTATUSLEVELINDICATORCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void BattleAdditionalUISet(::MX::Logic::Skills::LogicEffects::IAdditionalUISet* arg)
		{
			((::System::Void(*)(::MX::Logic::Skills::LogicEffects::IAdditionalUISet*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_BATTLEADDITIONALUISET_OFFSET))(arg, nullptr);
		}

		::System::Void BattleAdditionalUISet(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_BATTLEADDITIONALUISET_OFFSET))(str, nullptr);
		}

		::System::Void BattleAdditionalUIAction(::MX::Logic::Skills::LogicEffects::IAdditionalUIAction* arg)
		{
			((::System::Void(*)(::MX::Logic::Skills::LogicEffects::IAdditionalUIAction*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_BATTLEADDITIONALUIACTION_OFFSET))(arg, nullptr);
		}

		::System::Boolean BattleAdditionalUIFind(::System::String* str, UIBattleAdditional_Base&* arg)
		{
			return ((::System::Boolean(*)(::System::String*, UIBattleAdditional_Base&*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_BATTLEADDITIONALUIFIND_OFFSET))(str, arg, nullptr);
		}

		::System::Void BattleAdditionalUIClose(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_BATTLEADDITIONALUICLOSE_OFFSET))(str, nullptr);
		}

		::System::Void BattleAdditionalUICloseAll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_BATTLEADDITIONALUICLOSEALL_OFFSET))(nullptr);
		}

		::System::Void EnsureAdditionalCameraButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_ENSUREADDITIONALCAMERABUTTON_OFFSET))(nullptr);
		}

		::System::Void ReserveRemoveAdditionalCameraButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_RESERVEREMOVEADDITIONALCAMERABUTTON_OFFSET))(nullptr);
		}

		DynamicUIContainer* GetDynamicUIContainer(UIBattleDynamicUIContainerPosition* arg)
		{
			return ((DynamicUIContainer*(*)(UIBattleDynamicUIContainerPosition*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_GETDYNAMICUICONTAINER_OFFSET))(arg, nullptr);
		}

		::System::Boolean TrySetParent(UIBattleDynamicUIContainerPosition* arg, DynamicUISlot* arg2)
		{
			return ((::System::Boolean(*)(UIBattleDynamicUIContainerPosition*, DynamicUISlot*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_TRYSETPARENT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* _SkipVictory_g__CloseOperation_ShowResultSubScene|108_0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE__SKIPVICTORY_G__CLOSEOPERATION_SHOWRESULTSUBSCENE|108_0_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* _SkipVictory_g__CloseOperation_UIVictory|108_1()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLE__SKIPVICTORY_G__CLOSEOPERATION_UIVICTORY|108_1_OFFSET))(nullptr);
		}

	};

