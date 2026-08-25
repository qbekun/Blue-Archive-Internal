#pragma once
#include "unitysdk.h"

class UILobbyAccountInfo;
class MXButton;
class UILobbyBattlePassButton;
class UILobbyProductDailyRecordButton;
class UISmallBannerScrollViewController;
namespace UnityEngine { class GameObject; }
class UISprite;
class UILobbyGachaTag;
class UILabel;
class UIGrid;
class UILobbySpineController;
namespace MX::Core::Math { class IRandomService; }
class UILobbyScreenshotMode;
namespace UnityEngine { class Coroutine; }
namespace MX::Data { class BGMPlayInfo; }
namespace MX::Data { class ManagementGuidePopupData; }
namespace MX::SaveData { class LobbyCharacterSelectData; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define UILOBBY_ONCLICKEVENTARCHIVE_OFFSET UNITYSDK_OFFSET(0x2645B60)
#define UILOBBY_SET_ISCHECKPURCHASESTATEFINISH_OFFSET UNITYSDK_OFFSET(0x2645C10)
#define UILOBBY__ADDPOPUPS_G__SHOWEXPIRESHORTLYENDCURRENCY|96_12_OFFSET UNITYSDK_OFFSET(0x2645C20)
#define UILOBBY_OPENNEXONCOMMUNITYPOPUP_OFFSET UNITYSDK_OFFSET(0x2645CA0)
#define UILOBBY_REFRESHACCOUNTINFO_OFFSET UNITYSDK_OFFSET(0x2645D60)
#define UILOBBY__ONCLICKGEMSHOP_B__71_0_OFFSET UNITYSDK_OFFSET(0x2645DE0)
#define UILOBBY_SET_ISOPENEDEVENTNOTICEPOPUP_OFFSET UNITYSDK_OFFSET(0x2645E30)
#define UILOBBY__ADDPOPUPS_G__SHOWEXPIREENDITEMEXCHANGE|96_9_OFFSET UNITYSDK_OFFSET(0x2645E40)
#define UILOBBY__ADDPOPUPS_G__SHOWPCPLAYGUIDE|96_21_OFFSET UNITYSDK_OFFSET(0x2645EC0)
#define UILOBBY_GETLOBBYBGMPLAYINFO_OFFSET UNITYSDK_OFFSET(0x2645F20)
#define UILOBBY__ADDPOPUPS_G__CLOSEINVISIBLEBLOCK|96_20_OFFSET UNITYSDK_OFFSET(0x2645F40)
#define UILOBBY_ONCLICKGEMSHOP_OFFSET UNITYSDK_OFFSET(0x2645FC0)
#define UILOBBY_ONCLICKACADEMY_OFFSET UNITYSDK_OFFSET(0x2646120)
#define UILOBBY__ADDPOPUPS_G__SHOWEXPIRESHORTLYENDITEMS|96_11_OFFSET UNITYSDK_OFFSET(0x2646290)
#define UILOBBY_GET_ISOPENEDEVENTNOTICEPOPUP_OFFSET UNITYSDK_OFFSET(0x2646310)
#define UILOBBY_GETUILOBBYSCREENSHOTMODE_OFFSET UNITYSDK_OFFSET(0x2646320)
#define UILOBBY__ADDPOPUPS_G__SHOWREPURCHASEPRODUCTPOPUP|96_13_OFFSET UNITYSDK_OFFSET(0x2646330)
#define UILOBBY_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x26463B0)
#define UILOBBY__ADDPOPUPS_G__SHOWPARCELAUTOSYNTHPOPUP|96_17_OFFSET UNITYSDK_OFFSET(0x26465A0)
#define UILOBBY___N__0_OFFSET UNITYSDK_OFFSET(0x2646620)
#define UILOBBY_ONENABLE_OFFSET UNITYSDK_OFFSET(0x2646630)
#define UILOBBY__ADDPOPUPS_G__SHOWNOTIFYEVENTCLOSEPOPUP|96_18_OFFSET UNITYSDK_OFFSET(0x26467F0)
#define UILOBBY_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x2646870)
#define UILOBBY_ONCLICKRECRUITMENT_OFFSET UNITYSDK_OFFSET(0x2646970)
#define UILOBBY_ONCLICKNOTICE_OFFSET UNITYSDK_OFFSET(0x2646B30)
#define UILOBBY_ONCLICKCHARACTERCOLLECTIONBUTTON_OFFSET UNITYSDK_OFFSET(0x2646D40)
#define UILOBBY__ADDPOPUPS_G__SHOWGUIDEPOPUPAT|96_15_OFFSET UNITYSDK_OFFSET(0x2646DB0)
#define UILOBBY__ADDPOPUPS_G__SHOWMONTHLYPRODUCTREWARD|96_4_OFFSET UNITYSDK_OFFSET(0x2646E40)
#define UILOBBY_SET_ISOPENEDNOTICEPOPUP_OFFSET UNITYSDK_OFFSET(0x2646EC0)
#define UILOBBY_INVOKEGEMSHOP_OFFSET UNITYSDK_OFFSET(0x2646ED0)
#define UILOBBY_GET_ISOPENEDNOTICEPOPUP_OFFSET UNITYSDK_OFFSET(0x2646F80)
#define UILOBBY_CHANGESELECTCHARACTERS_OFFSET UNITYSDK_OFFSET(0x2646F90)
#define UILOBBY_HANDLEEVENTREWARDINCREASERESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x2646FC0)
#define UILOBBY__ADDPOPUPS_G__SHOWTOYPROMOTION|96_1_OFFSET UNITYSDK_OFFSET(0x2647660)
#define UILOBBY__ADDPOPUPS_G__SHOWEXPIREENDCURRENCYDELETED|96_8_OFFSET UNITYSDK_OFFSET(0x26476E0)
#define UILOBBY_ONCLICKSCREENSHOTMODE_OFFSET UNITYSDK_OFFSET(0x2647760)
#define UILOBBY_MEMORYLOBBYSKIP_OFFSET UNITYSDK_OFFSET(0x2647A90)
#define UILOBBY_CO_LOADING_OFFSET UNITYSDK_OFFSET(0x2647CB0)
#define UILOBBY_SENDNEXONEVENTFORRESEMARAEND_OFFSET UNITYSDK_OFFSET(0x2647D40)
#define UILOBBY_GET_SHOULDPLAYBGM2ND_OFFSET UNITYSDK_OFFSET(0x2647EB0)
#define UILOBBY_SETACTIVELOBBYICONS_OFFSET UNITYSDK_OFFSET(0x2647AC0)
#define UILOBBY_ONCLICKCRAFT_OFFSET UNITYSDK_OFFSET(0x26483C0)
#define UILOBBY_ONANDROIDBACKBUTTON_OFFSET UNITYSDK_OFFSET(0x2648520)
#define UILOBBY_ONCLICKSHOP_OFFSET UNITYSDK_OFFSET(0x2648750)
#define UILOBBY_ONCLICKSOCIAL_OFFSET UNITYSDK_OFFSET(0x2648800)
#define UILOBBY_ONCLICKMEMORYLOBBYSKIP_OFFSET UNITYSDK_OFFSET(0x26485C0)
#define UILOBBY_AWAKE_OFFSET UNITYSDK_OFFSET(0x2648880)
#define UILOBBY__ADDPOPUPS_G__SHOWWELCOMECAMPAIGNPOPUP|96_19_OFFSET UNITYSDK_OFFSET(0x2649CC0)
#define UILOBBY_ONCLICKFORMATION_OFFSET UNITYSDK_OFFSET(0x2649D40)
#define UILOBBY__ADDPOPUPS_G__SHOWEXPIREENDCURRENCYEXCHANGE|96_10_OFFSET UNITYSDK_OFFSET(0x2649DB0)
#define UILOBBY__ADDPOPUPS_G__SHOWEXPIREENDITEMDELETED|96_7_OFFSET UNITYSDK_OFFSET(0x2649E30)
#define UILOBBY_INITOPENSEQUENCE_OFFSET UNITYSDK_OFFSET(0x2649EB0)
#define UILOBBY_ONOPENED_OFFSET UNITYSDK_OFFSET(0x2649EC0)
#define UILOBBY_HANDLEBILLINGPURCHASELISTBYNEXONRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x264AB00)
#define UILOBBY_.CTOR_OFFSET UNITYSDK_OFFSET(0x264AB90)
#define UILOBBY_GET_SCREENSHOTMODE_OFFSET UNITYSDK_OFFSET(0x2647900)
#define UILOBBY_ONCLICKSTAGESELECTBUTTON_OFFSET UNITYSDK_OFFSET(0x264AC00)
#define UILOBBY_O589B23124E7FA5FCD011FD704C5D6CABF653C6FABB4C812270317A79F9C2FA76_OFFSET UNITYSDK_OFFSET(0x264ACB0)
#define UILOBBY_PRELOADSERVERDATA_OFFSET UNITYSDK_OFFSET(0x265C310)
#define UILOBBY__ONENABLE_G__COREFRESHTIMELABEL|43_0_OFFSET UNITYSDK_OFFSET(0x2646780)
#define UILOBBY_LOADDEFAULTANDCHANGE_OFFSET UNITYSDK_OFFSET(0x265C3B0)
#define UILOBBY_GET_ISCHECKPURCHASESTATEFINISH_OFFSET UNITYSDK_OFFSET(0x265C3E0)
#define UILOBBY_ONENDOPENANIMATION_OFFSET UNITYSDK_OFFSET(0x265C3F0)
#define UILOBBY_ONCLICKCAFE_OFFSET UNITYSDK_OFFSET(0x265C510)
#define UILOBBY__HANDLEEVENTREWARDINCREASERESPONSEMESSAGE_G__SHOWACCOUNTLEVEEXPINCREASEINDICATOR|63_0_OFFSET UNITYSDK_OFFSET(0x2647630)
#define UILOBBY__ADDPOPUPS_G__OPENINVISIBLEBLOCK|96_0_OFFSET UNITYSDK_OFFSET(0x265C590)
#define UILOBBY_ONFAVORSCENARIOFINISHED_OFFSET UNITYSDK_OFFSET(0x265C610)
#define UILOBBY__ENTERSCREENSHOTMODE_B__53_0_OFFSET UNITYSDK_OFFSET(0x265C640)
#define UILOBBY_PLAYOPENINGSEQUENCE_OFFSET UNITYSDK_OFFSET(0x2647F00)
#define UILOBBY_SETSPINEBUTTONS_OFFSET UNITYSDK_OFFSET(0x265C7F0)
#define UILOBBY_HANDLEITEMAUTOSYNTHRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x265C820)
#define UILOBBY_ENTERSCREENSHOTMODE_OFFSET UNITYSDK_OFFSET(0x2647970)
#define UILOBBY_GET_MEMORYRANDOM_OFFSET UNITYSDK_OFFSET(0x265DC10)

	inline static constexpr unsigned int UILobby_TypeDefinitionIndex = 6681;

	class UILobby : public Il2CppObject
	{
	public:
		UILobbyAccountInfo* accountInfo; // 0xD8
		MXButton* NoticeButton; // 0xE0
		MXButton* GemShopButton; // 0xE8
		UILobbyBattlePassButton* BattlePassButton; // 0xF0
		UILobbyProductDailyRecordButton* ProductDailyRecordButton; // 0xF8
		MXButton* ScreenshotModeButton; // 0x100
		UISmallBannerScrollViewController* SmallBannerController; // 0x108
		::UnityEngine::GameObject* eventArchiveButtonObject; // 0x110
		MXButton* eventArchiveButton; // 0x118
		UISprite* eventArchiveReddotSprite; // 0x120
		MXButton* StageSelectButton; // 0x128
		MXButton* CafeButton; // 0x130
		MXButton* AcademyButton; // 0x138
		MXButton* SocialButton; // 0x140
		MXButton* CraftButton; // 0x148
		MXButton* ShopButton; // 0x150
		MXButton* RecruitmentButton; // 0x158
		MXButton* CharacterCollectionButton; // 0x160
		MXButton* FormationButton; // 0x168
		UILobbyGachaTag* gachaTag; // 0x170
		UILabel* timeLabel; // 0x178
		UIGrid* indicatorGrid; // 0x180
		::UnityEngine::GameObject* raidOpenIndicator; // 0x188
		::UnityEngine::GameObject* timeattackOpenIndicator; // 0x190
		::UnityEngine::GameObject* workEventRewardIncreaseIndicator; // 0x198
		::UnityEngine::GameObject* eliminateRaidOpenIndicator; // 0x1A0
		::UnityEngine::GameObject* academyScheduleEventRewardIndicator; // 0x1A8
		::UnityEngine::GameObject* accountLevelExpIncreaseindicator; // 0x1B0
		UILobbySpineController* spineController; // 0x1B8
		Il2CppObject* SpineIntroDisableList; // 0x1C0
		MXButton* MemoryLobbySkipButton; // 0x1C8
		UISprite* RecruitmentButtonSprite; // 0x1D0
		::MX::Core::Math::IRandomService* _MemoryRandom_k__BackingField; // 0x1D8
		::Il2CppArray<::System::Object*>* openConditionButtons; // 0x1E0
		UILobbyScreenshotMode* screenshotMode; // 0x1E8
		::UnityEngine::Coroutine* refreshTimeLabelCoroutine; // 0x1F0
		::UnityEngine::Coroutine* enterScreenshotModeCoroutine; // 0x1F8
		::System::Boolean isOnMemoryLobbySkipPopup; // 0x200
		::System::Boolean _isOpenedNoticePopup_k__BackingField; // 0x201
		::System::Boolean _isOpenedEventNoticePopup_k__BackingField; // 0x202
		::System::Boolean _isCheckPurchaseStateFinish_k__BackingField; // 0x203

		::System::Void OnClickEventArchive()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBY_ONCLICKEVENTARCHIVE_OFFSET))(nullptr);
		}

		::System::Void set_isCheckPurchaseStateFinish(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UILOBBY_SET_ISCHECKPURCHASESTATEFINISH_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* _AddPopups_g__ShowExpireShortlyEndCurrency|96_12()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBY__ADDPOPUPS_G__SHOWEXPIRESHORTLYENDCURRENCY|96_12_OFFSET))(nullptr);
		}

		::System::Void OpenNexonCommunityPopup(::System::Action* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::System::Action*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UILOBBY_OPENNEXONCOMMUNITYPOPUP_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RefreshAccountInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBY_REFRESHACCOUNTINFO_OFFSET))(nullptr);
		}

		::System::Void _OnClickGemShop_b__71_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBY__ONCLICKGEMSHOP_B__71_0_OFFSET))(nullptr);
		}

		::System::Void set_isOpenedEventNoticePopup(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UILOBBY_SET_ISOPENEDEVENTNOTICEPOPUP_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* _AddPopups_g__ShowExpireEndItemExchange|96_9()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBY__ADDPOPUPS_G__SHOWEXPIREENDITEMEXCHANGE|96_9_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* _AddPopups_g__ShowPcPlayGuide|96_21()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBY__ADDPOPUPS_G__SHOWPCPLAYGUIDE|96_21_OFFSET))(nullptr);
		}

		::MX::Data::BGMPlayInfo* GetLobbyBGMPlayInfo()
		{
			return ((::MX::Data::BGMPlayInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBY_GETLOBBYBGMPLAYINFO_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* _AddPopups_g__CloseInvisibleBlock|96_20()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBY__ADDPOPUPS_G__CLOSEINVISIBLEBLOCK|96_20_OFFSET))(nullptr);
		}

		::System::Void OnClickGemShop()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBY_ONCLICKGEMSHOP_OFFSET))(nullptr);
		}

		::System::Void OnClickAcademy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBY_ONCLICKACADEMY_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* _AddPopups_g__ShowExpireShortlyEndItems|96_11()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBY__ADDPOPUPS_G__SHOWEXPIRESHORTLYENDITEMS|96_11_OFFSET))(nullptr);
		}

		::System::Boolean get_isOpenedEventNoticePopup()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBY_GET_ISOPENEDEVENTNOTICEPOPUP_OFFSET))(nullptr);
		}

		UILobbyScreenshotMode* GetUILobbyScreenshotMode()
		{
			return ((UILobbyScreenshotMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBY_GETUILOBBYSCREENSHOTMODE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* _AddPopups_g__ShowRepurchaseProductPopup|96_13()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBY__ADDPOPUPS_G__SHOWREPURCHASEPRODUCTPOPUP|96_13_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBY_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* _AddPopups_g__ShowParcelAutoSynthPopup|96_17()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBY__ADDPOPUPS_G__SHOWPARCELAUTOSYNTHPOPUP|96_17_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBY___N__0_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBY_ONENABLE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* _AddPopups_g__ShowNotifyEventClosePopup|96_18()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBY__ADDPOPUPS_G__SHOWNOTIFYEVENTCLOSEPOPUP|96_18_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBY_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void OnClickRecruitment()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBY_ONCLICKRECRUITMENT_OFFSET))(nullptr);
		}

		::System::Void OnClickNotice()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBY_ONCLICKNOTICE_OFFSET))(nullptr);
		}

		::System::Void OnClickCharacterCollectionButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBY_ONCLICKCHARACTERCOLLECTIONBUTTON_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* _AddPopups_g__ShowGuidePopupAt|96_15(::MX::Data::ManagementGuidePopupData* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::Data::ManagementGuidePopupData*, ::PVOID))((::PBYTE)hIl2Cpp + UILOBBY__ADDPOPUPS_G__SHOWGUIDEPOPUPAT|96_15_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* _AddPopups_g__ShowMonthlyProductReward|96_4()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBY__ADDPOPUPS_G__SHOWMONTHLYPRODUCTREWARD|96_4_OFFSET))(nullptr);
		}

		::System::Void set_isOpenedNoticePopup(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UILOBBY_SET_ISOPENEDNOTICEPOPUP_OFFSET))(arg, nullptr);
		}

		::System::Void InvokeGemShop()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBY_INVOKEGEMSHOP_OFFSET))(nullptr);
		}

		::System::Boolean get_isOpenedNoticePopup()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBY_GET_ISOPENEDNOTICEPOPUP_OFFSET))(nullptr);
		}

		::System::Void ChangeSelectCharacters(::MX::SaveData::LobbyCharacterSelectData* arg)
		{
			((::System::Void(*)(::MX::SaveData::LobbyCharacterSelectData*, ::PVOID))((::PBYTE)hIl2Cpp + UILOBBY_CHANGESELECTCHARACTERS_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleEventRewardIncreaseResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UILOBBY_HANDLEEVENTREWARDINCREASERESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* _AddPopups_g__ShowToyPromotion|96_1()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBY__ADDPOPUPS_G__SHOWTOYPROMOTION|96_1_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* _AddPopups_g__ShowExpireEndCurrencyDeleted|96_8()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBY__ADDPOPUPS_G__SHOWEXPIREENDCURRENCYDELETED|96_8_OFFSET))(nullptr);
		}

		::System::Void OnClickScreenshotMode()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBY_ONCLICKSCREENSHOTMODE_OFFSET))(nullptr);
		}

		::System::Void MemoryLobbySkip()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBY_MEMORYLOBBYSKIP_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBY_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Void SendNexonEventForResemaraEnd()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBY_SENDNEXONEVENTFORRESEMARAEND_OFFSET))(nullptr);
		}

		::System::Boolean get_ShouldPlayBGM2nd()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBY_GET_SHOULDPLAYBGM2ND_OFFSET))(nullptr);
		}

		::System::Void SetActiveLobbyIcons(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UILOBBY_SETACTIVELOBBYICONS_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickCraft()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBY_ONCLICKCRAFT_OFFSET))(nullptr);
		}

		::System::Void OnAndroidBackButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBY_ONANDROIDBACKBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnClickShop()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBY_ONCLICKSHOP_OFFSET))(nullptr);
		}

		::System::Void OnClickSocial()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBY_ONCLICKSOCIAL_OFFSET))(nullptr);
		}

		::System::Void OnClickMemoryLobbySkip()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBY_ONCLICKMEMORYLOBBYSKIP_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBY_AWAKE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* _AddPopups_g__ShowWelcomeCampaignPopup|96_19()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBY__ADDPOPUPS_G__SHOWWELCOMECAMPAIGNPOPUP|96_19_OFFSET))(nullptr);
		}

		::System::Void OnClickFormation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBY_ONCLICKFORMATION_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* _AddPopups_g__ShowExpireEndCurrencyExchange|96_10()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBY__ADDPOPUPS_G__SHOWEXPIREENDCURRENCYEXCHANGE|96_10_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* _AddPopups_g__ShowExpireEndItemDeleted|96_7()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBY__ADDPOPUPS_G__SHOWEXPIREENDITEMDELETED|96_7_OFFSET))(nullptr);
		}

		::System::Void InitOpenSequence()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBY_INITOPENSEQUENCE_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UILOBBY_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleBillingPurchaseListByNexonResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UILOBBY_HANDLEBILLINGPURCHASELISTBYNEXONRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBY_.CTOR_OFFSET))(nullptr);
		}

		UILobbyScreenshotMode* get_ScreenshotMode()
		{
			return ((UILobbyScreenshotMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBY_GET_SCREENSHOTMODE_OFFSET))(nullptr);
		}

		::System::Void OnClickStageSelectButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBY_ONCLICKSTAGESELECTBUTTON_OFFSET))(nullptr);
		}

		::System::Void O589b23124e7fa5fcd011fd704c5d6cabf653c6fabb4c812270317a79f9c2fa76(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UILOBBY_O589B23124E7FA5FCD011FD704C5D6CABF653C6FABB4C812270317A79F9C2FA76_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* PreloadServerData()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBY_PRELOADSERVERDATA_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* _OnEnable_g__CoRefreshTimeLabel|43_0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBY__ONENABLE_G__COREFRESHTIMELABEL|43_0_OFFSET))(nullptr);
		}

		::System::Void LoadDefaultAndChange()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBY_LOADDEFAULTANDCHANGE_OFFSET))(nullptr);
		}

		::System::Boolean get_isCheckPurchaseStateFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBY_GET_ISCHECKPURCHASESTATEFINISH_OFFSET))(nullptr);
		}

		::System::Void OnEndOpenAnimation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBY_ONENDOPENANIMATION_OFFSET))(nullptr);
		}

		::System::Void OnClickCafe()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBY_ONCLICKCAFE_OFFSET))(nullptr);
		}

		::System::Void _HandleEventRewardIncreaseResponseMessage_g__ShowAccountLeveExpIncreaseindicator|63_0(<>c__DisplayClass63_0&* arg)
		{
			((::System::Void(*)(<>c__DisplayClass63_0&*, ::PVOID))((::PBYTE)hIl2Cpp + UILOBBY__HANDLEEVENTREWARDINCREASERESPONSEMESSAGE_G__SHOWACCOUNTLEVEEXPINCREASEINDICATOR|63_0_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* _AddPopups_g__OpenInvisibleBlock|96_0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBY__ADDPOPUPS_G__OPENINVISIBLEBLOCK|96_0_OFFSET))(nullptr);
		}

		::System::Void OnFavorScenarioFinished()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBY_ONFAVORSCENARIOFINISHED_OFFSET))(nullptr);
		}

		::System::Void _EnterScreenshotMode_b__53_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBY__ENTERSCREENSHOTMODE_B__53_0_OFFSET))(nullptr);
		}

		::System::Void PlayOpeningSequence(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UILOBBY_PLAYOPENINGSEQUENCE_OFFSET))(arg, nullptr);
		}

		::System::Void SetSpineButtons()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBY_SETSPINEBUTTONS_OFFSET))(nullptr);
		}

		::System::Boolean HandleItemAutoSynthResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UILOBBY_HANDLEITEMAUTOSYNTHRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void EnterScreenshotMode()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBY_ENTERSCREENSHOTMODE_OFFSET))(nullptr);
		}

		::MX::Core::Math::IRandomService* get_MemoryRandom()
		{
			return ((::MX::Core::Math::IRandomService*(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBY_GET_MEMORYRANDOM_OFFSET))(nullptr);
		}

	};

