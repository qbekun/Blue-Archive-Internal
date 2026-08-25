#pragma once
#include "unitysdk.h"

class MXButton;
class SpineChatDialogContainerEvent;
class UITexture;
namespace UnityEngine { class Transform; }
class UILabel;
class UIEventLobbyContentController_StageList;
namespace UnityEngine { class GameObject; }
class UISlider;
namespace UnityEngine { class ParticleSystem; }
namespace MX::Data { class EventContentSeasonInfo; }
namespace UnityEngine { class Coroutine; }
class TooltipTargetParcelTracker;
namespace FlatData { class DialogCondition; }
class UISpecialOperationInfoPopup;
namespace FlatData { class StageDifficulty; }
namespace MX::Data { class CampaignStageInfo; }
namespace MX::GameLogic::DBModel { class CampaignStageHistoryDB; }
namespace MX::Data { class EventContentStageInfo; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
class StageSelectListItem;
class UIRecollectionList;
class UISpecialOperationCollection;

#define UISPECIALOPERATIONLOBBY_PLAYDIALOGDELAYED_OFFSET UNITYSDK_OFFSET(0x2460B10)
#define UISPECIALOPERATIONLOBBY_REFRESHOPENSTORYSTAGEINFO_OFFSET UNITYSDK_OFFSET(0x2460BB0)
#define UISPECIALOPERATIONLOBBY__ONCLICKOPENSTORYSTAGEINFOBUTTON_B__66_0_OFFSET UNITYSDK_OFFSET(0x2461110)
#define UISPECIALOPERATIONLOBBY__REFRESHBUTTON_B__57_0_OFFSET UNITYSDK_OFFSET(0x24611E0)
#define UISPECIALOPERATIONLOBBY_CREATESTACKUI_OFFSET UNITYSDK_OFFSET(0x2461210)
#define UISPECIALOPERATIONLOBBY_GET_NEEDSTACKUIS_OFFSET UNITYSDK_OFFSET(0x24612A0)
#define UISPECIALOPERATIONLOBBY_CO_LOADING_OFFSET UNITYSDK_OFFSET(0x24613F0)
#define UISPECIALOPERATIONLOBBY___N__0_OFFSET UNITYSDK_OFFSET(0x2461480)
#define UISPECIALOPERATIONLOBBY_OPENSHORTCUTTAB_OFFSET UNITYSDK_OFFSET(0x2461490)
#define UISPECIALOPERATIONLOBBY_CHECKCLOSETIME_OFFSET UNITYSDK_OFFSET(0x24614C0)
#define UISPECIALOPERATIONLOBBY_REFRESHCONTENT_OFFSET UNITYSDK_OFFSET(0x24616C0)
#define UISPECIALOPERATIONLOBBY_GET_PARCELTRACKER_OFFSET UNITYSDK_OFFSET(0x2461A20)
#define UISPECIALOPERATIONLOBBY_ONCLICKOPENSTORYSTAGEINFOBUTTON_OFFSET UNITYSDK_OFFSET(0x2461A30)
#define UISPECIALOPERATIONLOBBY_ISACTIVATED_OFFSET UNITYSDK_OFFSET(0x2461B00)
#define UISPECIALOPERATIONLOBBY_SHOWSTAGESELECTINFO_OFFSET UNITYSDK_OFFSET(0x2461BA0)
#define UISPECIALOPERATIONLOBBY_DIALOGPLAYCONDITION_OFFSET UNITYSDK_OFFSET(0x2461F40)
#define UISPECIALOPERATIONLOBBY_ONCLICKCOLLECTIONBUTTON_OFFSET UNITYSDK_OFFSET(0x24623A0)
#define UISPECIALOPERATIONLOBBY_SET_PARCELTRACKER_OFFSET UNITYSDK_OFFSET(0x2462480)
#define UISPECIALOPERATIONLOBBY_OPENSHORTCUTPOPUP_OFFSET UNITYSDK_OFFSET(0x24624A0)
#define UISPECIALOPERATIONLOBBY_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x2462670)
#define UISPECIALOPERATIONLOBBY_SETDATA_OFFSET UNITYSDK_OFFSET(0x2462810)
#define UISPECIALOPERATIONLOBBY_OPENCOLLECTIONFXPAGE_OFFSET UNITYSDK_OFFSET(0x2462830)
#define UISPECIALOPERATIONLOBBY_ONCLICKSTORYBUTTON_OFFSET UNITYSDK_OFFSET(0x2462920)
#define UISPECIALOPERATIONLOBBY_ONCLICKBACKBUTTON_OFFSET UNITYSDK_OFFSET(0x2462A60)
#define UISPECIALOPERATIONLOBBY_AWAKE_OFFSET UNITYSDK_OFFSET(0x2462A80)
#define UISPECIALOPERATIONLOBBY_ONENABLE_OFFSET UNITYSDK_OFFSET(0x2463030)
#define UISPECIALOPERATIONLOBBY_SETCOLLECTIONBUTTONFXPAGE_OFFSET UNITYSDK_OFFSET(0x24631F0)
#define UISPECIALOPERATIONLOBBY_HANDLEMISSIONLISTRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x24635E0)
#define UISPECIALOPERATIONLOBBY_PLAYCOLLECTIONBUTTONANIMATIONS_OFFSET UNITYSDK_OFFSET(0x2463740)
#define UISPECIALOPERATIONLOBBY_REFRESHCOLLECTIONBUTTON_OFFSET UNITYSDK_OFFSET(0x2461700)
#define UISPECIALOPERATIONLOBBY_ONCLOSED_OFFSET UNITYSDK_OFFSET(0x24637D0)
#define UISPECIALOPERATIONLOBBY_REFRESHBUTTON_OFFSET UNITYSDK_OFFSET(0x2463800)
#define UISPECIALOPERATIONLOBBY_ONCLICKMISSIONBUTTON_OFFSET UNITYSDK_OFFSET(0x2463E30)
#define UISPECIALOPERATIONLOBBY__OPENCOLLECTIONFXPAGE_G__COOPENFXPAGE|49_0_OFFSET UNITYSDK_OFFSET(0x24628B0)
#define UISPECIALOPERATIONLOBBY_GETSTAGELISTITEM_OFFSET UNITYSDK_OFFSET(0x2463FF0)
#define UISPECIALOPERATIONLOBBY__ONCLICKRECOLLECTIONBUTTON_B__63_0_OFFSET UNITYSDK_OFFSET(0x2464020)
#define UISPECIALOPERATIONLOBBY_.CTOR_OFFSET UNITYSDK_OFFSET(0x24640D0)
#define UISPECIALOPERATIONLOBBY_ONOPENED_OFFSET UNITYSDK_OFFSET(0x2464150)
#define UISPECIALOPERATIONLOBBY_SETPERMANENT_OFFSET UNITYSDK_OFFSET(0x2465090)
#define UISPECIALOPERATIONLOBBY__ONCLICKCOLLECTIONBUTTON_B__65_0_OFFSET UNITYSDK_OFFSET(0x2465460)
#define UISPECIALOPERATIONLOBBY_ONCLICKRECOLLECTIONBUTTON_OFFSET UNITYSDK_OFFSET(0x2465520)
#define UISPECIALOPERATIONLOBBY__ONOPENED_G__DEFAULTONOPENEDHANDLING|50_0_OFFSET UNITYSDK_OFFSET(0x2464FC0)

	inline static constexpr unsigned int UISpecialOperationLobby_TypeDefinitionIndex = 5616;

	class UISpecialOperationLobby : public Il2CppObject
	{
	public:
		MXButton* backButton; // 0xD8
		SpineChatDialogContainerEvent* eventCharacterSpine; // 0xE0
		UITexture* bannerTexture; // 0xE8
		::UnityEngine::Transform* periodRoot; // 0xF0
		UILabel* periodLabel; // 0xF8
		UITexture* bgTexture; // 0x100
		UIEventLobbyContentController_StageList* specialItemStageList; // 0x108
		MXButton* permanentStoryButton; // 0x110
		MXButton* storyButton; // 0x118
		MXButton* missionButton; // 0x120
		::UnityEngine::GameObject* missionReddot; // 0x128
		MXButton* recollectionButton; // 0x130
		::UnityEngine::GameObject* recollectionReddot; // 0x138
		::UnityEngine::GameObject* recollectionDisable; // 0x140
		MXButton* collectionButton; // 0x148
		UITexture* collectionButtonTexture; // 0x150
		UILabel* collectionButtonLabel; // 0x158
		::UnityEngine::GameObject* collectionReddot; // 0x160
		::UnityEngine::Transform* spineOffsetTransform; // 0x168
		::UnityEngine::Transform* dialogOffsetTransform; // 0x170
		UISlider* openStoryStageInfoSlider; // 0x178
		UILabel* openStoryStageInfoSliderLabel; // 0x180
		MXButton* openStoryStageInfoButton; // 0x188
		::UnityEngine::Transform* openStoryStageInfoTransform; // 0x190
		::UnityEngine::ParticleSystem* collectionFxOpening; // 0x198
		::System::Single fxOpeningEndTime; // 0x1A0
		::UnityEngine::ParticleSystem* collectionFxEmpty; // 0x1A8
		::Il2CppArray<::System::Object*>* collectionFxPages; // 0x1B0
		::MX::Data::EventContentSeasonInfo* seasonInfo; // 0x1B8
		Il2CppObject* storyStageInfoList; // 0x1C0
		::System::Int64 eventCurrentPoint; // 0x1C8
		::System::Int64 eventMaxPoint; // 0x1D0
		::System::Int32 pageIndex; // 0x1D8
		Il2CppObject* displayFxPage; // 0x1E0
		::UnityEngine::Coroutine* coroutine; // 0x1E8
		::System::Boolean uiOpenDialogPlayCheck; // 0x1F0
		TooltipTargetParcelTracker* _ParcelTracker_k__BackingField; // 0x1F8

		::System::Collections::IEnumerator* PlayDialogDelayed(::FlatData::DialogCondition* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::FlatData::DialogCondition*, ::PVOID))((::PBYTE)hIl2Cpp + UISPECIALOPERATIONLOBBY_PLAYDIALOGDELAYED_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshOpenStoryStageInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPECIALOPERATIONLOBBY_REFRESHOPENSTORYSTAGEINFO_OFFSET))(nullptr);
		}

		::System::Void _OnClickOpenStoryStageInfoButton_b__66_0(UISpecialOperationInfoPopup* arg)
		{
			((::System::Void(*)(UISpecialOperationInfoPopup*, ::PVOID))((::PBYTE)hIl2Cpp + UISPECIALOPERATIONLOBBY__ONCLICKOPENSTORYSTAGEINFOBUTTON_B__66_0_OFFSET))(arg, nullptr);
		}

		::System::Boolean _RefreshButton_b__57_0(::MX::Data::EventContentSeasonInfo* arg)
		{
			return ((::System::Boolean(*)(::MX::Data::EventContentSeasonInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UISPECIALOPERATIONLOBBY__REFRESHBUTTON_B__57_0_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CreateStackUI()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPECIALOPERATIONLOBBY_CREATESTACKUI_OFFSET))(nullptr);
		}

		Il2CppObject* get_needStackUIs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPECIALOPERATIONLOBBY_GET_NEEDSTACKUIS_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPECIALOPERATIONLOBBY_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPECIALOPERATIONLOBBY___N__0_OFFSET))(nullptr);
		}

		::System::Void OpenShortcutTab(::FlatData::StageDifficulty* arg)
		{
			((::System::Void(*)(::FlatData::StageDifficulty*, ::PVOID))((::PBYTE)hIl2Cpp + UISPECIALOPERATIONLOBBY_OPENSHORTCUTTAB_OFFSET))(arg, nullptr);
		}

		::System::Boolean CheckCloseTime()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPECIALOPERATIONLOBBY_CHECKCLOSETIME_OFFSET))(nullptr);
		}

		::System::Void RefreshContent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPECIALOPERATIONLOBBY_REFRESHCONTENT_OFFSET))(nullptr);
		}

		TooltipTargetParcelTracker* get_ParcelTracker()
		{
			return ((TooltipTargetParcelTracker*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPECIALOPERATIONLOBBY_GET_PARCELTRACKER_OFFSET))(nullptr);
		}

		::System::Void OnClickOpenStoryStageInfoButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPECIALOPERATIONLOBBY_ONCLICKOPENSTORYSTAGEINFOBUTTON_OFFSET))(nullptr);
		}

		::System::Boolean IsActivated(::MX::Data::EventContentSeasonInfo* arg, ::System::DateTime* arg2)
		{
			return ((::System::Boolean(*)(::MX::Data::EventContentSeasonInfo*, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + UISPECIALOPERATIONLOBBY_ISACTIVATED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void ShowStageSelectInfo(::MX::Data::CampaignStageInfo* arg, ::MX::GameLogic::DBModel::CampaignStageHistoryDB* arg2)
		{
			((::System::Void(*)(::MX::Data::CampaignStageInfo*, ::MX::GameLogic::DBModel::CampaignStageHistoryDB*, ::PVOID))((::PBYTE)hIl2Cpp + UISPECIALOPERATIONLOBBY_SHOWSTAGESELECTINFO_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void DialogPlayCondition(::System::Boolean arg, ::FlatData::StageDifficulty* arg2)
		{
			((::System::Void(*)(::System::Boolean, ::FlatData::StageDifficulty*, ::PVOID))((::PBYTE)hIl2Cpp + UISPECIALOPERATIONLOBBY_DIALOGPLAYCONDITION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnClickCollectionButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPECIALOPERATIONLOBBY_ONCLICKCOLLECTIONBUTTON_OFFSET))(nullptr);
		}

		::System::Void set_ParcelTracker(TooltipTargetParcelTracker* arg)
		{
			((::System::Void(*)(TooltipTargetParcelTracker*, ::PVOID))((::PBYTE)hIl2Cpp + UISPECIALOPERATIONLOBBY_SET_PARCELTRACKER_OFFSET))(arg, nullptr);
		}

		::System::Void OpenShortcutPopup(::MX::Data::EventContentSeasonInfo* arg, ::MX::Data::EventContentStageInfo* arg2)
		{
			((::System::Void(*)(::MX::Data::EventContentSeasonInfo*, ::MX::Data::EventContentStageInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UISPECIALOPERATIONLOBBY_OPENSHORTCUTPOPUP_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPECIALOPERATIONLOBBY_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void SetData(::MX::Data::EventContentSeasonInfo* arg)
		{
			((::System::Void(*)(::MX::Data::EventContentSeasonInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UISPECIALOPERATIONLOBBY_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void OpenCollectionFxPage()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPECIALOPERATIONLOBBY_OPENCOLLECTIONFXPAGE_OFFSET))(nullptr);
		}

		::System::Void OnClickStoryButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPECIALOPERATIONLOBBY_ONCLICKSTORYBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnClickBackButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPECIALOPERATIONLOBBY_ONCLICKBACKBUTTON_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPECIALOPERATIONLOBBY_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPECIALOPERATIONLOBBY_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void SetCollectionButtonFxPage()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPECIALOPERATIONLOBBY_SETCOLLECTIONBUTTONFXPAGE_OFFSET))(nullptr);
		}

		::System::Boolean HandleMissionListResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UISPECIALOPERATIONLOBBY_HANDLEMISSIONLISTRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* PlayCollectionButtonAnimations()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPECIALOPERATIONLOBBY_PLAYCOLLECTIONBUTTONANIMATIONS_OFFSET))(nullptr);
		}

		::System::Void RefreshCollectionButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPECIALOPERATIONLOBBY_REFRESHCOLLECTIONBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPECIALOPERATIONLOBBY_ONCLOSED_OFFSET))(nullptr);
		}

		::System::Void RefreshButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPECIALOPERATIONLOBBY_REFRESHBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnClickMissionButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPECIALOPERATIONLOBBY_ONCLICKMISSIONBUTTON_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* _OpenCollectionFxPage_g__CoOpenFxPage|49_0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPECIALOPERATIONLOBBY__OPENCOLLECTIONFXPAGE_G__COOPENFXPAGE|49_0_OFFSET))(nullptr);
		}

		StageSelectListItem* GetStageListItem(::System::Int64 arg)
		{
			return ((StageSelectListItem*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UISPECIALOPERATIONLOBBY_GETSTAGELISTITEM_OFFSET))(arg, nullptr);
		}

		::System::Void _OnClickRecollectionButton_b__63_0(UIRecollectionList* arg)
		{
			((::System::Void(*)(UIRecollectionList*, ::PVOID))((::PBYTE)hIl2Cpp + UISPECIALOPERATIONLOBBY__ONCLICKRECOLLECTIONBUTTON_B__63_0_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPECIALOPERATIONLOBBY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISPECIALOPERATIONLOBBY_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void SetPermanent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPECIALOPERATIONLOBBY_SETPERMANENT_OFFSET))(nullptr);
		}

		::System::Void _OnClickCollectionButton_b__65_0(UISpecialOperationCollection* arg)
		{
			((::System::Void(*)(UISpecialOperationCollection*, ::PVOID))((::PBYTE)hIl2Cpp + UISPECIALOPERATIONLOBBY__ONCLICKCOLLECTIONBUTTON_B__65_0_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickRecollectionButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPECIALOPERATIONLOBBY_ONCLICKRECOLLECTIONBUTTON_OFFSET))(nullptr);
		}

		::System::Void _OnOpened_g__DefaultOnOpenedHandling|50_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPECIALOPERATIONLOBBY__ONOPENED_G__DEFAULTONOPENEDHANDLING|50_0_OFFSET))(nullptr);
		}

	};

