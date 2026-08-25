#pragma once
#include "unitysdk.h"

class DiceRaceController;
class MXButton;
namespace UnityEngine { class GameObject; }
class UIAdmissionDisplay;
namespace UnityEngine { class Transform; }
class ConfirmDiceInfo;
namespace MX::GameLogic::Parcel { class ParcelInfo; }
namespace MX::Data { class EventContentSeasonInfo; }
namespace MX::Data::Excel { class EventContentDiceRaceEffectExcel; }
class UIDiceRaceResult;
class UIDiceRaceTrackFinish;
class UIDiceRacePlus;
class UIDiceRaceEvent;
class UIDiceSpecialReward;
class UISportsDiceRace;
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
namespace MX::Data { class BGMPlayInfo; }
class UIPopup_DiceRaceReward;
class UITexture;
namespace MX::GameLogic::DBModel { class EventContentDiceRaceDB; }

#define UISPORTSDICERACE__CLOSEANDREOPENUISPORTSDICERACE_B__53_1_OFFSET UNITYSDK_OFFSET(0x23D9E70)
#define UISPORTSDICERACE_ONRACEPLUSPRODUCTIONEND_OFFSET UNITYSDK_OFFSET(0x23DA330)
#define UISPORTSDICERACE_.CTOR_OFFSET UNITYSDK_OFFSET(0x23DA360)
#define UISPORTSDICERACE_ONCLICKDICERACEREWARDINFOBUTTON_OFFSET UNITYSDK_OFFSET(0x23DA440)
#define UISPORTSDICERACE_ONTRACKSPECIALREWARDPRODUCTIONEND_OFFSET UNITYSDK_OFFSET(0x23DA510)
#define UISPORTSDICERACE__CLOSEANDREOPENUISPORTSDICERACE_B__53_0_OFFSET UNITYSDK_OFFSET(0x23DA610)
#define UISPORTSDICERACE_REFRESHADDICERACEINTERNAL_OFFSET UNITYSDK_OFFSET(0x23DA730)
#define UISPORTSDICERACE___N__0_OFFSET UNITYSDK_OFFSET(0x23DA800)
#define UISPORTSDICERACE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x23DA810)
#define UISPORTSDICERACE_REFRESHCONFIRMDICEITEMS_OFFSET UNITYSDK_OFFSET(0x23DADC0)
#define UISPORTSDICERACE_SETDATA_OFFSET UNITYSDK_OFFSET(0x23D9F20)
#define UISPORTSDICERACE_REFRESHDICERACEFINISHREWARDREDDOT_OFFSET UNITYSDK_OFFSET(0x23DADF0)
#define UISPORTSDICERACE_HANDLEDICERACEUSEITEMRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x23DAED0)
#define UISPORTSDICERACE_ONTRACKNODEGENERALREWARD_OFFSET UNITYSDK_OFFSET(0x23DB2A0)
#define UISPORTSDICERACE_AWAKE_OFFSET UNITYSDK_OFFSET(0x23DB3E0)
#define UISPORTSDICERACE_ONTRACKFINISHPRODUCTIONEND_OFFSET UNITYSDK_OFFSET(0x23DB6D0)
#define UISPORTSDICERACE_GETBGMPLAYINFO_OFFSET UNITYSDK_OFFSET(0x23DB710)
#define UISPORTSDICERACE_ONRACEPLUSPRODUCTION_OFFSET UNITYSDK_OFFSET(0x23DB740)
#define UISPORTSDICERACE_ONEVENTPRODUCTIONEND_OFFSET UNITYSDK_OFFSET(0x23DB7D0)
#define UISPORTSDICERACE_EVENTPRODUCTIONLOAD_OFFSET UNITYSDK_OFFSET(0x23DBB70)
#define UISPORTSDICERACE_CO_LOADING_OFFSET UNITYSDK_OFFSET(0x23DBC20)
#define UISPORTSDICERACE_ONTRACKNODEREWARD_OFFSET UNITYSDK_OFFSET(0x23DA520)
#define UISPORTSDICERACE_REFRESHCAMERAFOV_OFFSET UNITYSDK_OFFSET(0x23DBCB0)
#define UISPORTSDICERACE_ONTRACKSPECIALREWARDPRODUCTION_OFFSET UNITYSDK_OFFSET(0x23DBE30)
#define UISPORTSDICERACE_ONCLICKPLAYDICEBUTTON_OFFSET UNITYSDK_OFFSET(0x23DBED0)
#define UISPORTSDICERACE_ONCLICKBACKBUTTON_OFFSET UNITYSDK_OFFSET(0x23DC1E0)
#define UISPORTSDICERACE_CLOSEANDREOPENUISPORTSDICERACE_OFFSET UNITYSDK_OFFSET(0x23DC200)
#define UISPORTSDICERACE__ONCLICKDICERACEREWARDINFOBUTTON_B__46_0_OFFSET UNITYSDK_OFFSET(0x23DC370)
#define UISPORTSDICERACE_ONSCREENRESOLUTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x23DC4D0)
#define UISPORTSDICERACE_ONTRACKFINISHPRODUCTION_OFFSET UNITYSDK_OFFSET(0x23DC4E0)
#define UISPORTSDICERACE_ONEVENTPRODUCTION_OFFSET UNITYSDK_OFFSET(0x23DC620)
#define UISPORTSDICERACE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x23DC7E0)
#define UISPORTSDICERACE_HANDLEDICERACEROLLRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x23DCA30)
#define UISPORTSDICERACE_ONOPENED_OFFSET UNITYSDK_OFFSET(0x23DCAC0)
#define UISPORTSDICERACE__CO_LOADING_B__29_0_OFFSET UNITYSDK_OFFSET(0x23DCB80)
#define UISPORTSDICERACE_DICETHROW_OFFSET UNITYSDK_OFFSET(0x23DAF60)

	inline static constexpr unsigned int UISportsDiceRace_TypeDefinitionIndex = 5370;

	class UISportsDiceRace : public Il2CppObject
	{
	public:
		DiceRaceController* diceRaceController; // 0xD8
		MXButton* backButton; // 0xE0
		MXButton* playDiceButton; // 0xE8
		MXButton* diceRaceRewardInfoButton; // 0xF0
		::UnityEngine::GameObject* diceRaceRewardInfoRedDot; // 0xF8
		UIAdmissionDisplay* apAdmissionDisplay; // 0x100
		::System::Single CameraFovMax; // 0x108
		::UnityEngine::Transform* eventProductionTransform; // 0x110
		Il2CppObject* diceButtonTexs; // 0x118
		ConfirmDiceInfo* confirmDiceInfo; // 0x120
		Il2CppObject* currentDiceResults; // 0x128
		::System::Int32 diceResultIndex; // 0x130
		::MX::GameLogic::Parcel::ParcelInfo* diceRaceCostParcelInfo; // 0x138
		::MX::Data::EventContentSeasonInfo* seasonInfo; // 0x140
		::System::Int64 eventContentId; // 0x148
		::System::Boolean usingConfirmDiceInfo; // 0x150
		Il2CppObject* addedCollectionList; // 0x158
		Il2CppObject* diceResultEffects; // 0x160
		::MX::Data::Excel::EventContentDiceRaceEffectExcel* finishEffect; // 0x168
		::MX::Data::Excel::EventContentDiceRaceEffectExcel* specialRewardEffect; // 0x178
		UIDiceRaceResult* uiDiceRaceResult; // 0x188
		UIDiceRaceTrackFinish* uiDiceRaceTrackFinish; // 0x190
		UIDiceRacePlus* uiDiceRacePlus; // 0x198
		UIDiceRaceEvent* uiDiceRaceEvent; // 0x1A0
		UIDiceSpecialReward* uiDiceSpecialReward; // 0x1A8

		::System::Void _CloseAndReopenUISportsDiceRace_b__53_1(UISportsDiceRace* arg)
		{
			((::System::Void(*)(UISportsDiceRace*, ::PVOID))((::PBYTE)hIl2Cpp + UISPORTSDICERACE__CLOSEANDREOPENUISPORTSDICERACE_B__53_1_OFFSET))(arg, nullptr);
		}

		::System::Void OnRacePlusProductionEnd(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UISPORTSDICERACE_ONRACEPLUSPRODUCTIONEND_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPORTSDICERACE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClickDiceRaceRewardInfoButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPORTSDICERACE_ONCLICKDICERACEREWARDINFOBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnTrackSpecialRewardProductionEnd()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPORTSDICERACE_ONTRACKSPECIALREWARDPRODUCTIONEND_OFFSET))(nullptr);
		}

		::System::Void _CloseAndReopenUISportsDiceRace_b__53_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPORTSDICERACE__CLOSEANDREOPENUISPORTSDICERACE_B__53_0_OFFSET))(nullptr);
		}

		::System::Void RefreshAdDiceRaceInternal()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPORTSDICERACE_REFRESHADDICERACEINTERNAL_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPORTSDICERACE___N__0_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPORTSDICERACE_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void RefreshConfirmDiceItems()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPORTSDICERACE_REFRESHCONFIRMDICEITEMS_OFFSET))(nullptr);
		}

		::System::Void SetData(::MX::Data::EventContentSeasonInfo* arg)
		{
			((::System::Void(*)(::MX::Data::EventContentSeasonInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UISPORTSDICERACE_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshDiceRaceFinishRewardRedDot()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPORTSDICERACE_REFRESHDICERACEFINISHREWARDREDDOT_OFFSET))(nullptr);
		}

		::System::Boolean HandleDiceRaceUseItemResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UISPORTSDICERACE_HANDLEDICERACEUSEITEMRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void OnTrackNodeGeneralReward(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UISPORTSDICERACE_ONTRACKNODEGENERALREWARD_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPORTSDICERACE_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnTrackFinishProductionEnd()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPORTSDICERACE_ONTRACKFINISHPRODUCTIONEND_OFFSET))(nullptr);
		}

		::MX::Data::BGMPlayInfo* GetBGMPlayInfo()
		{
			return ((::MX::Data::BGMPlayInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPORTSDICERACE_GETBGMPLAYINFO_OFFSET))(nullptr);
		}

		::System::Void OnRacePlusProduction(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UISPORTSDICERACE_ONRACEPLUSPRODUCTION_OFFSET))(arg, nullptr);
		}

		::System::Void OnEventProductionEnd()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPORTSDICERACE_ONEVENTPRODUCTIONEND_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* EventProductionLoad(::System::Int64 arg, Il2CppObject* arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Int64, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UISPORTSDICERACE_EVENTPRODUCTIONLOAD_OFFSET))(arg, arg2, nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPORTSDICERACE_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Void OnTrackNodeReward()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPORTSDICERACE_ONTRACKNODEREWARD_OFFSET))(nullptr);
		}

		::System::Void RefreshCameraFOV()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPORTSDICERACE_REFRESHCAMERAFOV_OFFSET))(nullptr);
		}

		::System::Void OnTrackSpecialRewardProduction()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPORTSDICERACE_ONTRACKSPECIALREWARDPRODUCTION_OFFSET))(nullptr);
		}

		::System::Void OnClickPlayDiceButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPORTSDICERACE_ONCLICKPLAYDICEBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnClickBackButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPORTSDICERACE_ONCLICKBACKBUTTON_OFFSET))(nullptr);
		}

		::System::Void CloseAndReopenUISportsDiceRace()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPORTSDICERACE_CLOSEANDREOPENUISPORTSDICERACE_OFFSET))(nullptr);
		}

		::System::Void _OnClickDiceRaceRewardInfoButton_b__46_0(UIPopup_DiceRaceReward* arg)
		{
			((::System::Void(*)(UIPopup_DiceRaceReward*, ::PVOID))((::PBYTE)hIl2Cpp + UISPORTSDICERACE__ONCLICKDICERACEREWARDINFOBUTTON_B__46_0_OFFSET))(arg, nullptr);
		}

		::System::Void OnScreenResolutionChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPORTSDICERACE_ONSCREENRESOLUTIONCHANGED_OFFSET))(nullptr);
		}

		::System::Void OnTrackFinishProduction()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPORTSDICERACE_ONTRACKFINISHPRODUCTION_OFFSET))(nullptr);
		}

		::System::Void OnEventProduction()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPORTSDICERACE_ONEVENTPRODUCTION_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPORTSDICERACE_ONENABLE_OFFSET))(nullptr);
		}

		::System::Boolean HandleDiceRaceRollResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UISPORTSDICERACE_HANDLEDICERACEROLLRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISPORTSDICERACE_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void _Co_Loading_b__29_0(UITexture* arg)
		{
			((::System::Void(*)(UITexture*, ::PVOID))((::PBYTE)hIl2Cpp + UISPORTSDICERACE__CO_LOADING_B__29_0_OFFSET))(arg, nullptr);
		}

		::System::Void DiceThrow(::MX::GameLogic::DBModel::EventContentDiceRaceDB* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::EventContentDiceRaceDB*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UISPORTSDICERACE_DICETHROW_OFFSET))(arg, arg2, nullptr);
		}

	};

