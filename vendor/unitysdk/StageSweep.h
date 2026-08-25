#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class UILabel;
class MXButton;
class ButtonActivator;
class UIAdmissionDisplay;
namespace Mx::Sweep { class SweepBase; }
namespace UnityEngine { class Coroutine; }
namespace FlatData { class ContentType; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
namespace MX::GameLogic::DBModel { class WeekDungeonStageHistoryDB; }
class TooltipTargetParcelTracker;
namespace MX::GameLogic::DBModel { class SchoolDungeonStageHistoryDB; }
namespace MX::Data { class TimeAttackDungeonSeasonInfo; }
namespace FlatData { class CurrencyTypes; }
namespace MX::GameLogic::Parcel { class ParcelInfo; }

#define STAGESWEEP_GET_SWEEPCOUNT_OFFSET UNITYSDK_OFFSET(0xB128F0)
#define STAGESWEEP_GET_MAXSWEEPCOUNT_OFFSET UNITYSDK_OFFSET(0xB12910)
#define STAGESWEEP_GET_STAGEID_OFFSET UNITYSDK_OFFSET(0xB12930)
#define STAGESWEEP_GET_MYCONTENT_OFFSET UNITYSDK_OFFSET(0xB12950)
#define STAGESWEEP_ADD_ONSWEEPCOUNTCHANGED_OFFSET UNITYSDK_OFFSET(0xB12970)
#define STAGESWEEP_REMOVE_ONSWEEPCOUNTCHANGED_OFFSET UNITYSDK_OFFSET(0xB12A10)
#define STAGESWEEP_AWAKE_OFFSET UNITYSDK_OFFSET(0xB12AB0)
#define STAGESWEEP_ONENABLE_OFFSET UNITYSDK_OFFSET(0xB132C0)
#define STAGESWEEP_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xB136B0)
#define STAGESWEEP_HANDLESWEEPCOUNTCHANGED_OFFSET UNITYSDK_OFFSET(0xB13B20)
#define STAGESWEEP_HANDLECURRENCYUPDATEMESSAGE_OFFSET UNITYSDK_OFFSET(0xB13F70)
#define STAGESWEEP_HANDLECONTENTSWEEPRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0xB13FA0)
#define STAGESWEEP_HANDLERAIDSWEEPRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0xB14060)
#define STAGESWEEP_HANDLETIMEATTACKDUNGEONSWEEPRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0xB141F0)
#define STAGESWEEP_HANDLEMINIGAMERESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0xB142D0)
#define STAGESWEEP_HANDLEELIMINATERAIDSWEEPRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0xB143C0)
#define STAGESWEEP_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xB14550)
#define STAGESWEEP_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xB14820)
#define STAGESWEEP_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xB14920)
#define STAGESWEEP_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xB14A20)
#define STAGESWEEP_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xB14C60)
#define STAGESWEEP_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xB14D60)
#define STAGESWEEP_INITIALIZEINTERNAL_OFFSET UNITYSDK_OFFSET(0xB14640)
#define STAGESWEEP_REFRESHADMISSION_OFFSET UNITYSDK_OFFSET(0xB13E90)
#define STAGESWEEP_REFRESHADMISSIONINTERNAL_OFFSET UNITYSDK_OFFSET(0xB15D30)
#define STAGESWEEP_REFRESHADMISSIONINTERNAL_OFFSET UNITYSDK_OFFSET(0xB16080)
#define STAGESWEEP_REFRESHADMISSIONINTERNAL_OFFSET UNITYSDK_OFFSET(0xB14E40)
#define STAGESWEEP_REFRESHADMISSIONINTERNAL_OFFSET UNITYSDK_OFFSET(0xB16390)
#define STAGESWEEP_REFRESHADMISSIONINTERNAL_OFFSET UNITYSDK_OFFSET(0xB15810)
#define STAGESWEEP_ONCLICKSTART_OFFSET UNITYSDK_OFFSET(0xB166E0)
#define STAGESWEEP_ONSWEEPCOUNTBUTTONDOWN_OFFSET UNITYSDK_OFFSET(0xB167D0)
#define STAGESWEEP_COONSWEEPCOUNTBUTTONDOWN_OFFSET UNITYSDK_OFFSET(0xB16870)
#define STAGESWEEP_ONCLICKPLUS_OFFSET UNITYSDK_OFFSET(0xB168E0)
#define STAGESWEEP_ONCLICKMINUS_OFFSET UNITYSDK_OFFSET(0xB169D0)
#define STAGESWEEP_ONCLICKMAX_OFFSET UNITYSDK_OFFSET(0xB16AC0)
#define STAGESWEEP_ONCLICKMIN_OFFSET UNITYSDK_OFFSET(0xB16AF0)
#define STAGESWEEP_.CTOR_OFFSET UNITYSDK_OFFSET(0xB16B20)
#define STAGESWEEP__AWAKE_B__30_0_OFFSET UNITYSDK_OFFSET(0xB16B30)
#define STAGESWEEP__AWAKE_B__30_1_OFFSET UNITYSDK_OFFSET(0xB16B40)
#define STAGESWEEP__ONCLICKSTART_G__CLOSEUI|53_0_OFFSET UNITYSDK_OFFSET(0xB16B50)
#define STAGESWEEP__ONCLICKPLUS_G__COCLICK|56_0_OFFSET UNITYSDK_OFFSET(0xB16960)
#define STAGESWEEP__ONCLICKMINUS_G__COCLICK|57_0_OFFSET UNITYSDK_OFFSET(0xB16A50)

	inline static constexpr unsigned int StageSweep_TypeDefinitionIndex = 8221;

	class StageSweep : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* lockObject; // 0x18
		::UnityEngine::GameObject* dayLockObject; // 0x20
		UILabel* lockLabel; // 0x28
		MXButton* startButton; // 0x30
		ButtonActivator* plusButton; // 0x38
		ButtonActivator* minusButton; // 0x40
		ButtonActivator* minButton; // 0x48
		ButtonActivator* maxButton; // 0x50
		UILabel* currencyLabel; // 0x58
		UILabel* countLabel; // 0x60
		UIAdmissionDisplay* apAdmissionDisplay; // 0x68
		UIAdmissionDisplay* ticketAdmissionDisplay; // 0x70
		::System::Single sweepCountAccumSpeed; // 0x78
		::UnityEngine::GameObject* apAndTicketAdmissions; // 0x80
		UIAdmissionDisplay* apOfTwoAdmissionDisplay; // 0x88
		UIAdmissionDisplay* ticketOfTwoAdmissionDisplay; // 0x90
		UIAdmissionDisplay* hardAdmissionDisplay; // 0x98
		::Mx::Sweep::SweepBase* sweeper; // 0xA0
		::UnityEngine::Coroutine* longPressCoroutine; // 0xA8
		Il2CppObject* OnSweepCountChanged; // 0xB0

		::System::Int64 get_SweepCount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGESWEEP_GET_SWEEPCOUNT_OFFSET))(nullptr);
		}

		::System::Int64 get_MaxSweepCount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGESWEEP_GET_MAXSWEEPCOUNT_OFFSET))(nullptr);
		}

		::System::Int64 get_StageId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGESWEEP_GET_STAGEID_OFFSET))(nullptr);
		}

		::FlatData::ContentType* get_MyContent()
		{
			return ((::FlatData::ContentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGESWEEP_GET_MYCONTENT_OFFSET))(nullptr);
		}

		::System::Void add_OnSweepCountChanged(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + STAGESWEEP_ADD_ONSWEEPCOUNTCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_OnSweepCountChanged(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + STAGESWEEP_REMOVE_ONSWEEPCOUNTCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGESWEEP_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGESWEEP_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGESWEEP_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void HandleSweepCountChanged(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + STAGESWEEP_HANDLESWEEPCOUNTCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleCurrencyUpdateMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + STAGESWEEP_HANDLECURRENCYUPDATEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleContentSweepResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + STAGESWEEP_HANDLECONTENTSWEEPRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleRaidSweepResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + STAGESWEEP_HANDLERAIDSWEEPRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleTimeAttackDungeonSweepResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + STAGESWEEP_HANDLETIMEATTACKDUNGEONSWEEPRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleMiniGameResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + STAGESWEEP_HANDLEMINIGAMERESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleEliminateRaidSweepResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + STAGESWEEP_HANDLEELIMINATERAIDSWEEPRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize(::Mx::Sweep::SweepBase* arg)
		{
			((::System::Void(*)(::Mx::Sweep::SweepBase*, ::PVOID))((::PBYTE)hIl2Cpp + STAGESWEEP_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize(::System::Int64 arg, ::MX::GameLogic::DBModel::WeekDungeonStageHistoryDB* arg2, TooltipTargetParcelTracker* arg3)
		{
			((::System::Void(*)(::System::Int64, ::MX::GameLogic::DBModel::WeekDungeonStageHistoryDB*, TooltipTargetParcelTracker*, ::PVOID))((::PBYTE)hIl2Cpp + STAGESWEEP_INITIALIZE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void Initialize(::System::Int64 arg, ::MX::GameLogic::DBModel::SchoolDungeonStageHistoryDB* arg2, TooltipTargetParcelTracker* arg3)
		{
			((::System::Void(*)(::System::Int64, ::MX::GameLogic::DBModel::SchoolDungeonStageHistoryDB*, TooltipTargetParcelTracker*, ::PVOID))((::PBYTE)hIl2Cpp + STAGESWEEP_INITIALIZE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void Initialize(::System::Int64 arg, ::System::Boolean arg2, ::FlatData::ContentType* arg3)
		{
			((::System::Void(*)(::System::Int64, ::System::Boolean, ::FlatData::ContentType*, ::PVOID))((::PBYTE)hIl2Cpp + STAGESWEEP_INITIALIZE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void Initialize(::MX::Data::TimeAttackDungeonSeasonInfo* arg)
		{
			((::System::Void(*)(::MX::Data::TimeAttackDungeonSeasonInfo*, ::PVOID))((::PBYTE)hIl2Cpp + STAGESWEEP_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize(::System::Int64 arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + STAGESWEEP_INITIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void InitializeInternal()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGESWEEP_INITIALIZEINTERNAL_OFFSET))(nullptr);
		}

		::System::Void RefreshAdmission()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGESWEEP_REFRESHADMISSION_OFFSET))(nullptr);
		}

		::System::Void RefreshAdmissionInternal(::FlatData::CurrencyTypes* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatData::CurrencyTypes*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + STAGESWEEP_REFRESHADMISSIONINTERNAL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RefreshAdmissionInternal(::FlatData::CurrencyTypes* arg, ::System::Int64 arg2, ::System::Int64 arg3)
		{
			((::System::Void(*)(::FlatData::CurrencyTypes*, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + STAGESWEEP_REFRESHADMISSIONINTERNAL_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void RefreshAdmissionInternal(::MX::GameLogic::Parcel::ParcelInfo* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelInfo*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + STAGESWEEP_REFRESHADMISSIONINTERNAL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RefreshAdmissionInternal(::MX::GameLogic::Parcel::ParcelInfo* arg, ::System::Int64 arg2, ::System::Int64 arg3)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelInfo*, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + STAGESWEEP_REFRESHADMISSIONINTERNAL_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void RefreshAdmissionInternal(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + STAGESWEEP_REFRESHADMISSIONINTERNAL_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickStart()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGESWEEP_ONCLICKSTART_OFFSET))(nullptr);
		}

		::System::Void OnSweepCountButtonDown(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + STAGESWEEP_ONSWEEPCOUNTBUTTONDOWN_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CoOnSweepCountButtonDown(::System::Boolean arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + STAGESWEEP_COONSWEEPCOUNTBUTTONDOWN_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickPlus()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGESWEEP_ONCLICKPLUS_OFFSET))(nullptr);
		}

		::System::Void OnClickMinus()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGESWEEP_ONCLICKMINUS_OFFSET))(nullptr);
		}

		::System::Void OnClickMax()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGESWEEP_ONCLICKMAX_OFFSET))(nullptr);
		}

		::System::Void OnClickMin()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGESWEEP_ONCLICKMIN_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGESWEEP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _Awake_b__30_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGESWEEP__AWAKE_B__30_0_OFFSET))(nullptr);
		}

		::System::Void _Awake_b__30_1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGESWEEP__AWAKE_B__30_1_OFFSET))(nullptr);
		}

		::System::Void _OnClickStart_g__CloseUI|53_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGESWEEP__ONCLICKSTART_G__CLOSEUI|53_0_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* _OnClickPlus_g__CoClick|56_0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGESWEEP__ONCLICKPLUS_G__COCLICK|56_0_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* _OnClickMinus_g__CoClick|57_0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGESWEEP__ONCLICKMINUS_G__COCLICK|57_0_OFFSET))(nullptr);
		}

	};

