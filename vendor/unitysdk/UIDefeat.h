#pragma once
#include "unitysdk.h"

class MXButton;
class UIPanel;
class UIGrid;
class UIDefeatHandler;
namespace MX::Logic::Battles::Summary { class BattleSummary; }
class PopupType;
namespace UnityEngine { class Coroutine; }
namespace MX::Visual::Battles { class BattleResultSkipType; }
namespace MX::NetworkProtocol { class ErrorPacket; }
class UIBase;
class UIPopup_ArenaSummary;
class UIPopup_BattleSummary_EchelonExtension;
class UIPopup_BattleSummary;
class UIRewardPopup;
class UITacticClearRankPopup;
class UIReturnParcels;

#define UIDEFEAT_GET_DEFEATHANDLER_OFFSET UNITYSDK_OFFSET(0x23C64E0)
#define UIDEFEAT_SET_DEFEATHANDLER_OFFSET UNITYSDK_OFFSET(0x23C64F0)
#define UIDEFEAT_GET_RETURNPARCELLIST_OFFSET UNITYSDK_OFFSET(0x23C6510)
#define UIDEFEAT_SET_RETURNPARCELLIST_OFFSET UNITYSDK_OFFSET(0x23C6520)
#define UIDEFEAT_GET_RANK_OFFSET UNITYSDK_OFFSET(0x23C6540)
#define UIDEFEAT_SET_RANK_OFFSET UNITYSDK_OFFSET(0x23C6550)
#define UIDEFEAT_GET_ISCAMPAIGNSTAGEDEFEAT_OFFSET UNITYSDK_OFFSET(0x23C6560)
#define UIDEFEAT_GET_BATTLERESULTSKIPTYPE_OFFSET UNITYSDK_OFFSET(0x23C6640)
#define UIDEFEAT_SET_BATTLERESULTSKIPTYPE_OFFSET UNITYSDK_OFFSET(0x23C6650)
#define UIDEFEAT_SETSKIPTYPE_OFFSET UNITYSDK_OFFSET(0x23C6660)
#define UIDEFEAT_AWAKE_OFFSET UNITYSDK_OFFSET(0x23C6670)
#define UIDEFEAT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x23C6CD0)
#define UIDEFEAT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x23C6E20)
#define UIDEFEAT_SETHANDLER_OFFSET UNITYSDK_OFFSET(0x23C6E30)
#define UIDEFEAT_HIDESUMMARYBUTTON_OFFSET UNITYSDK_OFFSET(0x23C4D10)
#define UIDEFEAT_ONANDROIDBACKBUTTON_OFFSET UNITYSDK_OFFSET(0x23C6E50)
#define UIDEFEAT_ONCLICKSHOWRESULTBUTTON_OFFSET UNITYSDK_OFFSET(0x23C6EB0)
#define UIDEFEAT_SHOWRESULT_OFFSET UNITYSDK_OFFSET(0x23C7990)
#define UIDEFEAT_SKIPTOSHOWRESULT_OFFSET UNITYSDK_OFFSET(0x23C7A90)
#define UIDEFEAT_RETRYBATTLETEST_OFFSET UNITYSDK_OFFSET(0x23C7B80)
#define UIDEFEAT_UNLOADBATTLE_OFFSET UNITYSDK_OFFSET(0x23C7DF0)
#define UIDEFEAT_CHECKPLAYSCENARIO_OFFSET UNITYSDK_OFFSET(0x23C7630)
#define UIDEFEAT_ONCLICKSUMMARYBUTTON_OFFSET UNITYSDK_OFFSET(0x23C7E90)
#define UIDEFEAT_ONCLICKPREVBUTTON_OFFSET UNITYSDK_OFFSET(0x23C8140)
#define UIDEFEAT_ONCLICKNEXTBUTTON_OFFSET UNITYSDK_OFFSET(0x23C84A0)
#define UIDEFEAT_ONCLICKSKIPBUTTON_OFFSET UNITYSDK_OFFSET(0x23C86F0)
#define UIDEFEAT_ONCLICKLOBBYBUTTON_OFFSET UNITYSDK_OFFSET(0x23C8E10)
#define UIDEFEAT_ONCLICKCONFIRMBUTTON_OFFSET UNITYSDK_OFFSET(0x23C9530)
#define UIDEFEAT_POPUPLISTANDROIDBACKBUTTONCALLBACK_OFFSET UNITYSDK_OFFSET(0x23C9540)
#define UIDEFEAT_CLOSE_OFFSET UNITYSDK_OFFSET(0x23C8E20)
#define UIDEFEAT_COCLOSE_OFFSET UNITYSDK_OFFSET(0x23C9560)
#define UIDEFEAT_SETRETURNPARCELLIST_OFFSET UNITYSDK_OFFSET(0x23BE650)
#define UIDEFEAT_SETRETURNPARCELLIST_OFFSET UNITYSDK_OFFSET(0x23BF420)
#define UIDEFEAT_CAMPAIGNTACTICRESULTCUSTOMACTION_OFFSET UNITYSDK_OFFSET(0x23C9620)
#define UIDEFEAT_CO_LOADING_OFFSET UNITYSDK_OFFSET(0x23C97E0)
#define UIDEFEAT_ONOPENED_OFFSET UNITYSDK_OFFSET(0x23C9870)
#define UIDEFEAT_SETRESULTANDSUMMARYBUTTON_OFFSET UNITYSDK_OFFSET(0x23BE8F0)
#define UIDEFEAT_ONCLOSED_OFFSET UNITYSDK_OFFSET(0x23C99F0)
#define UIDEFEAT_HANDLECAMPAIGNRESULTRESPONSE_OFFSET UNITYSDK_OFFSET(0x23BF630)
#define UIDEFEAT_CREATEPOPUPLIST_OFFSET UNITYSDK_OFFSET(0x23C6F70)
#define UIDEFEAT_SHOWPOPUP_OFFSET UNITYSDK_OFFSET(0x23C8420)
#define UIDEFEAT_REORDERFRONTPANEL_OFFSET UNITYSDK_OFFSET(0x23C9DD0)
#define UIDEFEAT_HIDEPOPUP_OFFSET UNITYSDK_OFFSET(0x23C8370)
#define UIDEFEAT_COADDEVENTRESULTPOPUP_OFFSET UNITYSDK_OFFSET(0x23C9ED0)
#define UIDEFEAT_COOPENPOPUPS_OFFSET UNITYSDK_OFFSET(0x23C7A20)
#define UIDEFEAT_ACTIVATESKIPBUTTON_OFFSET UNITYSDK_OFFSET(0x23C9F80)
#define UIDEFEAT_ACTIVATEEXITBUTTONS_OFFSET UNITYSDK_OFFSET(0x23C8840)
#define UIDEFEAT_OPENPOPUPSAFTERMISSIONFAILED_OFFSET UNITYSDK_OFFSET(0x23CA230)
#define UIDEFEAT_ONENDOPENANIMATION_OFFSET UNITYSDK_OFFSET(0x23CA580)
#define UIDEFEAT_COOPENANIMATION_OFFSET UNITYSDK_OFFSET(0x23CA670)
#define UIDEFEAT_SETREWARDPARCELBYRETURNPARCEL_OFFSET UNITYSDK_OFFSET(0x23C11C0)
#define UIDEFEAT_CHECKCAMPAIGNDEFEATCONDITIONS_OFFSET UNITYSDK_OFFSET(0x23CA720)
#define UIDEFEAT_.CTOR_OFFSET UNITYSDK_OFFSET(0x23CB710)
#define UIDEFEAT__SKIPTOSHOWRESULT_G__COSKIP|48_0_OFFSET UNITYSDK_OFFSET(0x23C7B10)
#define UIDEFEAT__ONCLICKSUMMARYBUTTON_B__52_0_OFFSET UNITYSDK_OFFSET(0x23CB8B0)
#define UIDEFEAT__ONCLICKSUMMARYBUTTON_B__52_1_OFFSET UNITYSDK_OFFSET(0x23CB990)
#define UIDEFEAT__ONCLICKSUMMARYBUTTON_B__52_2_OFFSET UNITYSDK_OFFSET(0x23CB9D0)
#define UIDEFEAT__CAMPAIGNTACTICRESULTCUSTOMACTION_G__PROCESS|63_1_OFFSET UNITYSDK_OFFSET(0x23CBA10)
#define UIDEFEAT__CREATEPOPUPLIST_G__ADDPOPUP|69_2_OFFSET UNITYSDK_OFFSET(0x23C9D10)
#define UIDEFEAT__SHOWPOPUP_B__70_2_OFFSET UNITYSDK_OFFSET(0x23CBA90)
#define UIDEFEAT__SHOWPOPUP_B__70_4_OFFSET UNITYSDK_OFFSET(0x23CBAC0)
#define UIDEFEAT__SHOWPOPUP_B__70_8_OFFSET UNITYSDK_OFFSET(0x23CBAF0)
#define UIDEFEAT__ONENDOPENANIMATION_G__SHOWFRIENDAPPLICANTPOPUP|78_0_OFFSET UNITYSDK_OFFSET(0x23CA600)
#define UIDEFEAT__CHECKCAMPAIGNDEFEATCONDITIONS_G__ISLOWLEVEL|81_0_OFFSET UNITYSDK_OFFSET(0x23CA8D0)
#define UIDEFEAT__CHECKCAMPAIGNDEFEATCONDITIONS_G__ISLOWEQUIPMENT|81_1_OFFSET UNITYSDK_OFFSET(0x23CAB10)
#define UIDEFEAT__CHECKCAMPAIGNDEFEATCONDITIONS_G__ISLOWSKILL|81_2_OFFSET UNITYSDK_OFFSET(0x23CB190)
#define UIDEFEAT__CHECKCAMPAIGNDEFEATCONDITIONS_G__GETARRAY|81_3_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int UIDefeat_TypeDefinitionIndex = 5307;

	class UIDefeat : public Il2CppObject
	{
	public:
		::System::Single DELAY; // 0x0
		MXButton* showResultButton; // 0xD8
		MXButton* summaryButton; // 0xE0
		UIPanel* widgetParentToMove; // 0xE8
		MXButton* prevButton; // 0xF0
		MXButton* nextButton; // 0xF8
		MXButton* skipButton; // 0x100
		UIGrid* bottomButtonGrid; // 0x108
		MXButton* lobbyButton; // 0x110
		MXButton* confirmButton; // 0x118
		UIDefeatHandler* _DefeatHandler_k__BackingField; // 0x120
		::MX::Logic::Battles::Summary::BattleSummary* battleSummaryCache; // 0x128
		Il2CppObject* levelCache; // 0x130
		Il2CppObject* _ReturnParcelList_k__BackingField; // 0x138
		::System::Int64 _Rank_k__BackingField; // 0x140
		::System::Boolean isSummaryPopupOpened; // 0x148
		Il2CppObject* popupDict; // 0x150
		Il2CppObject* popupList; // 0x158
		PopupType* currentPopup; // 0x160
		::UnityEngine::Coroutine* openPopupCoroutine; // 0x168
		Il2CppObject* rewardParcels; // 0x170
		Il2CppObject* strangerIds; // 0x178
		::MX::Visual::Battles::BattleResultSkipType* _BattleResultSkipType_k__BackingField; // 0x180
		::System::Boolean isHideSummaryButton; // 0x184

		UIDefeatHandler* get_DefeatHandler()
		{
			return ((UIDefeatHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEFEAT_GET_DEFEATHANDLER_OFFSET))(nullptr);
		}

		::System::Void set_DefeatHandler(UIDefeatHandler* arg)
		{
			((::System::Void(*)(UIDefeatHandler*, ::PVOID))((::PBYTE)hIl2Cpp + UIDEFEAT_SET_DEFEATHANDLER_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ReturnParcelList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEFEAT_GET_RETURNPARCELLIST_OFFSET))(nullptr);
		}

		::System::Void set_ReturnParcelList(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIDEFEAT_SET_RETURNPARCELLIST_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_Rank()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEFEAT_GET_RANK_OFFSET))(nullptr);
		}

		::System::Void set_Rank(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIDEFEAT_SET_RANK_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_isCampaignStageDefeat()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEFEAT_GET_ISCAMPAIGNSTAGEDEFEAT_OFFSET))(nullptr);
		}

		::MX::Visual::Battles::BattleResultSkipType* get_BattleResultSkipType()
		{
			return ((::MX::Visual::Battles::BattleResultSkipType*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEFEAT_GET_BATTLERESULTSKIPTYPE_OFFSET))(nullptr);
		}

		::System::Void set_BattleResultSkipType(::MX::Visual::Battles::BattleResultSkipType* arg)
		{
			((::System::Void(*)(::MX::Visual::Battles::BattleResultSkipType*, ::PVOID))((::PBYTE)hIl2Cpp + UIDEFEAT_SET_BATTLERESULTSKIPTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void SetSkipType(::MX::Visual::Battles::BattleResultSkipType* arg)
		{
			((::System::Void(*)(::MX::Visual::Battles::BattleResultSkipType*, ::PVOID))((::PBYTE)hIl2Cpp + UIDEFEAT_SETSKIPTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEFEAT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEFEAT_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEFEAT_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void SetHandler(UIDefeatHandler* arg)
		{
			((::System::Void(*)(UIDefeatHandler*, ::PVOID))((::PBYTE)hIl2Cpp + UIDEFEAT_SETHANDLER_OFFSET))(arg, nullptr);
		}

		::System::Void HideSummaryButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEFEAT_HIDESUMMARYBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnAndroidBackButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEFEAT_ONANDROIDBACKBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnClickShowResultButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEFEAT_ONCLICKSHOWRESULTBUTTON_OFFSET))(nullptr);
		}

		::System::Void ShowResult()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEFEAT_SHOWRESULT_OFFSET))(nullptr);
		}

		::System::Void SkipToShowResult()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEFEAT_SKIPTOSHOWRESULT_OFFSET))(nullptr);
		}

		::System::Void RetryBattleTest()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEFEAT_RETRYBATTLETEST_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* UnloadBattle(::System::Action* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIDEFEAT_UNLOADBATTLE_OFFSET))(arg, nullptr);
		}

		::System::Boolean CheckPlayScenario()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEFEAT_CHECKPLAYSCENARIO_OFFSET))(nullptr);
		}

		::System::Void OnClickSummaryButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEFEAT_ONCLICKSUMMARYBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnClickPrevButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEFEAT_ONCLICKPREVBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnClickNextButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEFEAT_ONCLICKNEXTBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnClickSkipButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEFEAT_ONCLICKSKIPBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnClickLobbyButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEFEAT_ONCLICKLOBBYBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnClickConfirmButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEFEAT_ONCLICKCONFIRMBUTTON_OFFSET))(nullptr);
		}

		::System::Void PopupListAndroidBackButtonCallback()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEFEAT_POPUPLISTANDROIDBACKBUTTONCALLBACK_OFFSET))(nullptr);
		}

		::System::Void Close(::System::Boolean arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIDEFEAT_CLOSE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Collections::IEnumerator* CoClose(::System::Boolean arg, ::System::Boolean arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIDEFEAT_COCLOSE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetReturnParcelList(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIDEFEAT_SETRETURNPARCELLIST_OFFSET))(arg, nullptr);
		}

		::System::Void SetReturnParcelList(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIDEFEAT_SETRETURNPARCELLIST_OFFSET))(arg, nullptr);
		}

		::System::Boolean CampaignTacticResultCustomAction(::MX::NetworkProtocol::ErrorPacket* arg)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::ErrorPacket*, ::PVOID))((::PBYTE)hIl2Cpp + UIDEFEAT_CAMPAIGNTACTICRESULTCUSTOMACTION_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEFEAT_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIDEFEAT_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void SetResultAndSummaryButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEFEAT_SETRESULTANDSUMMARYBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEFEAT_ONCLOSED_OFFSET))(nullptr);
		}

		::System::Void HandleCampaignResultResponse()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEFEAT_HANDLECAMPAIGNRESULTRESPONSE_OFFSET))(nullptr);
		}

		::System::Void CreatePopupList()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEFEAT_CREATEPOPUPLIST_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ShowPopup(PopupType* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(PopupType*, ::PVOID))((::PBYTE)hIl2Cpp + UIDEFEAT_SHOWPOPUP_OFFSET))(arg, nullptr);
		}

		::System::Void ReorderFrontPanel(UIBase* arg)
		{
			((::System::Void(*)(UIBase*, ::PVOID))((::PBYTE)hIl2Cpp + UIDEFEAT_REORDERFRONTPANEL_OFFSET))(arg, nullptr);
		}

		::System::Void HidePopup(PopupType* arg)
		{
			((::System::Void(*)(PopupType*, ::PVOID))((::PBYTE)hIl2Cpp + UIDEFEAT_HIDEPOPUP_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CoAddEventResultPopup()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEFEAT_COADDEVENTRESULTPOPUP_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoOpenPopups()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEFEAT_COOPENPOPUPS_OFFSET))(nullptr);
		}

		::System::Void ActivateSkipButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEFEAT_ACTIVATESKIPBUTTON_OFFSET))(nullptr);
		}

		::System::Void ActivateExitButtons()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEFEAT_ACTIVATEEXITBUTTONS_OFFSET))(nullptr);
		}

		::System::Void OpenPopupsAfterMissionFailed(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIDEFEAT_OPENPOPUPSAFTERMISSIONFAILED_OFFSET))(arg, nullptr);
		}

		::System::Void OnEndOpenAnimation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEFEAT_ONENDOPENANIMATION_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoOpenAnimation(::System::Boolean arg, ::System::Action* arg2, ::System::Boolean arg3)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Boolean, ::System::Action*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIDEFEAT_COOPENANIMATION_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void SetRewardParcelByReturnParcel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEFEAT_SETREWARDPARCELBYRETURNPARCEL_OFFSET))(nullptr);
		}

		::System::String* CheckCampaignDefeatConditions()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEFEAT_CHECKCAMPAIGNDEFEATCONDITIONS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEFEAT_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* _SkipToShowResult_g__CoSkip|48_0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEFEAT__SKIPTOSHOWRESULT_G__COSKIP|48_0_OFFSET))(nullptr);
		}

		::System::Void _OnClickSummaryButton_b__52_0(UIPopup_ArenaSummary* arg)
		{
			((::System::Void(*)(UIPopup_ArenaSummary*, ::PVOID))((::PBYTE)hIl2Cpp + UIDEFEAT__ONCLICKSUMMARYBUTTON_B__52_0_OFFSET))(arg, nullptr);
		}

		::System::Void _OnClickSummaryButton_b__52_1(UIPopup_BattleSummary_EchelonExtension* arg)
		{
			((::System::Void(*)(UIPopup_BattleSummary_EchelonExtension*, ::PVOID))((::PBYTE)hIl2Cpp + UIDEFEAT__ONCLICKSUMMARYBUTTON_B__52_1_OFFSET))(arg, nullptr);
		}

		::System::Void _OnClickSummaryButton_b__52_2(UIPopup_BattleSummary* arg)
		{
			((::System::Void(*)(UIPopup_BattleSummary*, ::PVOID))((::PBYTE)hIl2Cpp + UIDEFEAT__ONCLICKSUMMARYBUTTON_B__52_2_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* _CampaignTacticResultCustomAction_g__Process|63_1()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEFEAT__CAMPAIGNTACTICRESULTCUSTOMACTION_G__PROCESS|63_1_OFFSET))(nullptr);
		}

		::System::Void _CreatePopupList_g__AddPopup|69_2(PopupType* arg, <>c__DisplayClass69_0&* arg2)
		{
			((::System::Void(*)(PopupType*, <>c__DisplayClass69_0&*, ::PVOID))((::PBYTE)hIl2Cpp + UIDEFEAT__CREATEPOPUPLIST_G__ADDPOPUP|69_2_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void _ShowPopup_b__70_2(UIRewardPopup* arg)
		{
			((::System::Void(*)(UIRewardPopup*, ::PVOID))((::PBYTE)hIl2Cpp + UIDEFEAT__SHOWPOPUP_B__70_2_OFFSET))(arg, nullptr);
		}

		::System::Void _ShowPopup_b__70_4(UITacticClearRankPopup* arg)
		{
			((::System::Void(*)(UITacticClearRankPopup*, ::PVOID))((::PBYTE)hIl2Cpp + UIDEFEAT__SHOWPOPUP_B__70_4_OFFSET))(arg, nullptr);
		}

		::System::Void _ShowPopup_b__70_8(UIReturnParcels* arg)
		{
			((::System::Void(*)(UIReturnParcels*, ::PVOID))((::PBYTE)hIl2Cpp + UIDEFEAT__SHOWPOPUP_B__70_8_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* _OnEndOpenAnimation_g__ShowFriendApplicantPopup|78_0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEFEAT__ONENDOPENANIMATION_G__SHOWFRIENDAPPLICANTPOPUP|78_0_OFFSET))(nullptr);
		}

		::System::Boolean _CheckCampaignDefeatConditions_g__IsLowLevel|81_0(<>c__DisplayClass81_0&* arg)
		{
			return ((::System::Boolean(*)(<>c__DisplayClass81_0&*, ::PVOID))((::PBYTE)hIl2Cpp + UIDEFEAT__CHECKCAMPAIGNDEFEATCONDITIONS_G__ISLOWLEVEL|81_0_OFFSET))(arg, nullptr);
		}

		::System::Boolean _CheckCampaignDefeatConditions_g__IsLowEquipment|81_1(<>c__DisplayClass81_0&* arg)
		{
			return ((::System::Boolean(*)(<>c__DisplayClass81_0&*, ::PVOID))((::PBYTE)hIl2Cpp + UIDEFEAT__CHECKCAMPAIGNDEFEATCONDITIONS_G__ISLOWEQUIPMENT|81_1_OFFSET))(arg, nullptr);
		}

		::System::Boolean _CheckCampaignDefeatConditions_g__IsLowSkill|81_2(<>c__DisplayClass81_0&* arg)
		{
			return ((::System::Boolean(*)(<>c__DisplayClass81_0&*, ::PVOID))((::PBYTE)hIl2Cpp + UIDEFEAT__CHECKCAMPAIGNDEFEATCONDITIONS_G__ISLOWSKILL|81_2_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* _CheckCampaignDefeatConditions_g__GetArray|81_3(::System::Int32 arg, Il2CppObject* arg2)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIDEFEAT__CHECKCAMPAIGNDEFEATCONDITIONS_G__GETARRAY|81_3_OFFSET))(arg, arg2, nullptr);
		}

	};

