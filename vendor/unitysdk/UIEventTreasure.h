#pragma once
#include "unitysdk.h"

class MXButton;
class ButtonActivator;
class SpineChatDialogContainerEvent;
class UITexture;
class UILabel;
namespace UnityEngine { class Transform; }
class UIGrid;
namespace UnityEngine { class Animation; }
class UISprite;
namespace UnityEngine { class GameObject; }
namespace MX::GameLogic::Parcel { class ParcelInfo; }
namespace MX::Data { class EventContentSeasonInfo; }
namespace MX::Data { class EventContentTreasureInfo; }
namespace MX::GameLogic::DBModel { class EventContentTreasureHistoryDB; }
namespace MX::GameLogic::DBModel { class EventContentTreasureCell; }
namespace MX::Data { class BGMPlayInfo; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
class UIEventTreasureRewardListPopup;
namespace MX::GameLogic::Parcel { class ParcelResultDB; }

#define UIEVENTTREASURE_ONCLICKBACKBUTTON_OFFSET UNITYSDK_OFFSET(0x24C6260)
#define UIEVENTTREASURE___N__0_OFFSET UNITYSDK_OFFSET(0x24C6280)
#define UIEVENTTREASURE_REFRESHTREASUREOBJECTS_OFFSET UNITYSDK_OFFSET(0x24C6290)
#define UIEVENTTREASURE_REFRESHALLOPENCOUNTLABEL_OFFSET UNITYSDK_OFFSET(0x24C78E0)
#define UIEVENTTREASURE_ONCELLSELECTED_OFFSET UNITYSDK_OFFSET(0x24C7A70)
#define UIEVENTTREASURE_ONCLICKSHUFFLEBUTTON_OFFSET UNITYSDK_OFFSET(0x24C7D10)
#define UIEVENTTREASURE_ONOPENED_OFFSET UNITYSDK_OFFSET(0x24C7EA0)
#define UIEVENTTREASURE_REFRESHCOVEROPENAMOUNT_OFFSET UNITYSDK_OFFSET(0x24C7650)
#define UIEVENTTREASURE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x24C8110)
#define UIEVENTTREASURE_REFRESHALLOPENBUTTON_OFFSET UNITYSDK_OFFSET(0x24C7870)
#define UIEVENTTREASURE_ONCLICKCARDSELECTALLBUTTON_OFFSET UNITYSDK_OFFSET(0x24C83C0)
#define UIEVENTTREASURE_AWAKE_OFFSET UNITYSDK_OFFSET(0x24C8550)
#define UIEVENTTREASURE_GETBGMPLAYINFO_OFFSET UNITYSDK_OFFSET(0x24C8A80)
#define UIEVENTTREASURE_CO_REQUESTTREASURELOBBY_OFFSET UNITYSDK_OFFSET(0x24C8AB0)
#define UIEVENTTREASURE_HANDLEEVENTCONTENTTREASURELOBBYRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x24C8B40)
#define UIEVENTTREASURE_HANDLEEVENTCONTENTTREASUREFLIPRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x24C8BC0)
#define UIEVENTTREASURE_CO_LOADSPINE_OFFSET UNITYSDK_OFFSET(0x24C9670)
#define UIEVENTTREASURE_CO_LOADING_OFFSET UNITYSDK_OFFSET(0x24C9700)
#define UIEVENTTREASURE_CO_RESETANIMATION_OFFSET UNITYSDK_OFFSET(0x24C9790)
#define UIEVENTTREASURE_REFRESHCURRENTROUND_OFFSET UNITYSDK_OFFSET(0x24C7540)
#define UIEVENTTREASURE__ONCLICKTOTALREWARDBUTTON_B__60_0_OFFSET UNITYSDK_OFFSET(0x24C9820)
#define UIEVENTTREASURE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x24C9850)
#define UIEVENTTREASURE_HANDLEEVENTCONTENTTREASURENEXTRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x24C99E0)
#define UIEVENTTREASURE_SETDATA_OFFSET UNITYSDK_OFFSET(0x24C9A90)
#define UIEVENTTREASURE__HANDLEEVENTCONTENTTREASUREFLIPRESPONSEMESSAGE_B__56_0_OFFSET UNITYSDK_OFFSET(0x24C9D90)
#define UIEVENTTREASURE_ONCLICKTOTALREWARDBUTTON_OFFSET UNITYSDK_OFFSET(0x24CA020)
#define UIEVENTTREASURE_REFRESTREASUREITEMSLOTS_OFFSET UNITYSDK_OFFSET(0x24C72F0)
#define UIEVENTTREASURE_OPENEVENTTREASURE_OFFSET UNITYSDK_OFFSET(0x24C9E40)
#define UIEVENTTREASURE_SETTREASUREOBJECTS_OFFSET UNITYSDK_OFFSET(0x24C9B20)
#define UIEVENTTREASURE__ONOPENED_G__PLAYDIALOGDELAYED|42_0_OFFSET UNITYSDK_OFFSET(0x24C80A0)
#define UIEVENTTREASURE_REFRESHSHUFFLEBUTTONACTIVE_OFFSET UNITYSDK_OFFSET(0x24C78B0)
#define UIEVENTTREASURE_REFRESHCURRENTCOST_OFFSET UNITYSDK_OFFSET(0x24C7230)
#define UIEVENTTREASURE_FLIPTREASUREOBJECTS_OFFSET UNITYSDK_OFFSET(0x24C8D50)
#define UIEVENTTREASURE_REFRESHACQUISITIONTREASUREPROCEEDING_OFFSET UNITYSDK_OFFSET(0x24CA110)
#define UIEVENTTREASURE_.CTOR_OFFSET UNITYSDK_OFFSET(0x24CA160)
#define UIEVENTTREASURE__CO_RESETANIMATION_G__CORESETANIMATION|40_0_OFFSET UNITYSDK_OFFSET(0x24CA1E0)

	inline static constexpr unsigned int UIEventTreasure_TypeDefinitionIndex = 5925;

	class UIEventTreasure : public Il2CppObject
	{
	public:
		MXButton* backButton; // 0xD8
		MXButton* totalRewardButton; // 0xE0
		ButtonActivator* shuffleButton; // 0xE8
		ButtonActivator* cardSelectAllButton; // 0xF0
		SpineChatDialogContainerEvent* spineChatContainerEvent; // 0xF8
		UITexture* bgTexture; // 0x100
		UITexture* boardBgImageTexture; // 0x108
		UILabel* topTitleLabel; // 0x110
		::UnityEngine::Transform* spineOffsetTransform; // 0x118
		::UnityEngine::Transform* dialogOffsetTransform; // 0x120
		UIGrid* treasureObjectGrid; // 0x128
		::UnityEngine::Animation* resetAnimation; // 0x130
		UISprite* currencyIconSprite; // 0x138
		UILabel* currencyAmountLabel; // 0x140
		::Il2CppArray<::System::Object*>* costAllIconSprites; // 0x148
		::Il2CppArray<::System::Object*>* costAllAmountLabels; // 0x150
		::Il2CppArray<::System::Object*>* openCountLabels; // 0x158
		::Il2CppArray<::System::Object*>* treasureItemSlots; // 0x160
		UILabel* titleRoundLabel; // 0x168
		UILabel* coverAmountLabel; // 0x170
		::UnityEngine::GameObject* completeObject; // 0x178
		::MX::GameLogic::Parcel::ParcelInfo* treasureCostParcelInfo; // 0x180
		::MX::Data::EventContentSeasonInfo* seasonInfo; // 0x188
		::MX::Data::EventContentTreasureInfo* treasureInfo; // 0x190
		Il2CppObject* treasureRoundInfoList; // 0x198
		Il2CppObject* treasureObjectList; // 0x1A0
		Il2CppObject* flipCellList; // 0x1A8
		::Il2CppArray<::System::Object*>* resetAnimationClipNames; // 0x1B0
		::System::Int32 currentRound; // 0x1B8
		::System::Int32 selectCoverCount; // 0x1BC
		::System::Int32 coverMax; // 0x1C0
		::System::Int32 preTresureCount; // 0x1C4
		::System::Int32 preFindTresureCount; // 0x1C8
		::System::Boolean hasDefaultClip; // 0x1CC

		::System::Void OnClickBackButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTTREASURE_ONCLICKBACKBUTTON_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTTREASURE___N__0_OFFSET))(nullptr);
		}

		::System::Void RefreshTreasureObjects(::MX::GameLogic::DBModel::EventContentTreasureHistoryDB* arg, ::MX::GameLogic::DBModel::EventContentTreasureCell* arg2)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::EventContentTreasureHistoryDB*, ::MX::GameLogic::DBModel::EventContentTreasureCell*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTTREASURE_REFRESHTREASUREOBJECTS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RefreshAllOpenCountLabel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTTREASURE_REFRESHALLOPENCOUNTLABEL_OFFSET))(nullptr);
		}

		::System::Boolean OnCellSelected(::MX::GameLogic::DBModel::EventContentTreasureCell* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::EventContentTreasureCell*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTTREASURE_ONCELLSELECTED_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickShuffleButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTTREASURE_ONCLICKSHUFFLEBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTTREASURE_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshCoverOpenAmount()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTTREASURE_REFRESHCOVEROPENAMOUNT_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTTREASURE_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void RefreshAllOpenButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTTREASURE_REFRESHALLOPENBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnClickCardSelectAllButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTTREASURE_ONCLICKCARDSELECTALLBUTTON_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTTREASURE_AWAKE_OFFSET))(nullptr);
		}

		::MX::Data::BGMPlayInfo* GetBGMPlayInfo()
		{
			return ((::MX::Data::BGMPlayInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTTREASURE_GETBGMPLAYINFO_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_RequestTreasureLobby()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTTREASURE_CO_REQUESTTREASURELOBBY_OFFSET))(nullptr);
		}

		::System::Boolean HandleEventContentTreasureLobbyResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTTREASURE_HANDLEEVENTCONTENTTREASURELOBBYRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleEventContentTreasureFlipResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTTREASURE_HANDLEEVENTCONTENTTREASUREFLIPRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* Co_LoadSpine()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTTREASURE_CO_LOADSPINE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTTREASURE_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_ResetAnimation()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTTREASURE_CO_RESETANIMATION_OFFSET))(nullptr);
		}

		::System::Void RefreshCurrentRound()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTTREASURE_REFRESHCURRENTROUND_OFFSET))(nullptr);
		}

		::System::Void _OnClickTotalRewardButton_b__60_0(UIEventTreasureRewardListPopup* arg)
		{
			((::System::Void(*)(UIEventTreasureRewardListPopup*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTTREASURE__ONCLICKTOTALREWARDBUTTON_B__60_0_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTTREASURE_ONENABLE_OFFSET))(nullptr);
		}

		::System::Boolean HandleEventContentTreasureNextResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTTREASURE_HANDLEEVENTCONTENTTREASURENEXTRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(::MX::Data::EventContentSeasonInfo* arg, ::MX::Data::EventContentTreasureInfo* arg2)
		{
			((::System::Void(*)(::MX::Data::EventContentSeasonInfo*, ::MX::Data::EventContentTreasureInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTTREASURE_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void _HandleEventContentTreasureFlipResponseMessage_b__56_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTTREASURE__HANDLEEVENTCONTENTTREASUREFLIPRESPONSEMESSAGE_B__56_0_OFFSET))(nullptr);
		}

		::System::Void OnClickTotalRewardButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTTREASURE_ONCLICKTOTALREWARDBUTTON_OFFSET))(nullptr);
		}

		::System::Void RefresTreasureItemSlots(::MX::GameLogic::DBModel::EventContentTreasureHistoryDB* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::EventContentTreasureHistoryDB*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTTREASURE_REFRESTREASUREITEMSLOTS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OpenEventTreasure(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTTREASURE_OPENEVENTTREASURE_OFFSET))(arg, nullptr);
		}

		::System::Void SetTreasureObjects()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTTREASURE_SETTREASUREOBJECTS_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* _OnOpened_g__PlayDialogDelayed|42_0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTTREASURE__ONOPENED_G__PLAYDIALOGDELAYED|42_0_OFFSET))(nullptr);
		}

		::System::Void RefreshShuffleButtonActive(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTTREASURE_REFRESHSHUFFLEBUTTONACTIVE_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshCurrentCost()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTTREASURE_REFRESHCURRENTCOST_OFFSET))(nullptr);
		}

		::System::Void FlipTreasureObjects(::MX::GameLogic::DBModel::EventContentTreasureHistoryDB* arg, ::MX::GameLogic::Parcel::ParcelResultDB* arg2)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::EventContentTreasureHistoryDB*, ::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTTREASURE_FLIPTREASUREOBJECTS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RefreshAcquisitionTreasureProceeding(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTTREASURE_REFRESHACQUISITIONTREASUREPROCEEDING_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTTREASURE_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* _Co_ResetAnimation_g__CoResetAnimation|40_0(::System::Int32 arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTTREASURE__CO_RESETANIMATION_G__CORESETANIMATION|40_0_OFFSET))(arg, nullptr);
		}

	};

