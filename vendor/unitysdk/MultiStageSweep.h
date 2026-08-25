#pragma once
#include "unitysdk.h"

class UILabel;
class ButtonActivator;
class MXButton;
class UIAdmissionDisplay;
namespace UnityEngine { class Coroutine; }
class UIPopup_MultiSweep_Result;
namespace MX::GameLogic::Parcel { class ParcelInfo; }

#define MULTISTAGESWEEP_ONCLICKMIN_OFFSET UNITYSDK_OFFSET(0x27056F0)
#define MULTISTAGESWEEP_SET_MAXSWEEPCOUNT_OFFSET UNITYSDK_OFFSET(0x2705810)
#define MULTISTAGESWEEP_ONCLICKSTART_OFFSET UNITYSDK_OFFSET(0x2705820)
#define MULTISTAGESWEEP_GET_SWEEPCOUNT_OFFSET UNITYSDK_OFFSET(0x2705900)
#define MULTISTAGESWEEP_ONSWEEPCOUNTBUTTONDOWN_OFFSET UNITYSDK_OFFSET(0x2705910)
#define MULTISTAGESWEEP_HANDLESWEEPCOUNTCHANGED_OFFSET UNITYSDK_OFFSET(0x2705A30)
#define MULTISTAGESWEEP_ONCLICKMINUS_OFFSET UNITYSDK_OFFSET(0x2705F00)
#define MULTISTAGESWEEP__AWAKE_B__21_1_OFFSET UNITYSDK_OFFSET(0x2705FF0)
#define MULTISTAGESWEEP__AWAKE_B__21_0_OFFSET UNITYSDK_OFFSET(0x2706000)
#define MULTISTAGESWEEP_ONCLICKPLUS_OFFSET UNITYSDK_OFFSET(0x2706010)
#define MULTISTAGESWEEP_.CTOR_OFFSET UNITYSDK_OFFSET(0x2706100)
#define MULTISTAGESWEEP_SET_SWEEPCOUNT_OFFSET UNITYSDK_OFFSET(0x2705780)
#define MULTISTAGESWEEP_ONCLICKMAX_OFFSET UNITYSDK_OFFSET(0x2706190)
#define MULTISTAGESWEEP_GETMAXSWEEPCOUNT_OFFSET UNITYSDK_OFFSET(0x2706230)
#define MULTISTAGESWEEP_COONSWEEPCOUNTBUTTONDOWN_OFFSET UNITYSDK_OFFSET(0x27059B0)
#define MULTISTAGESWEEP_REFRESHCOST_OFFSET UNITYSDK_OFFSET(0x2705AF0)
#define MULTISTAGESWEEP__ONCLICKSTART_B__34_0_OFFSET UNITYSDK_OFFSET(0x2706A10)
#define MULTISTAGESWEEP_REFRESHADMISSIONINTERNAL_OFFSET UNITYSDK_OFFSET(0x27067D0)
#define MULTISTAGESWEEP_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x2707200)
#define MULTISTAGESWEEP__ONCLICKMINUS_G__COCLICK|31_0_OFFSET UNITYSDK_OFFSET(0x2705F80)
#define MULTISTAGESWEEP_REFRESHMAXSWEEPCOUNT_OFFSET UNITYSDK_OFFSET(0x27072A0)
#define MULTISTAGESWEEP_ADDCOST_OFFSET UNITYSDK_OFFSET(0x27072C0)
#define MULTISTAGESWEEP__ONCLICKPLUS_G__COCLICK|30_0_OFFSET UNITYSDK_OFFSET(0x2706090)
#define MULTISTAGESWEEP_AWAKE_OFFSET UNITYSDK_OFFSET(0x27073F0)
#define MULTISTAGESWEEP_GET_MAXSWEEPCOUNT_OFFSET UNITYSDK_OFFSET(0x2707C00)

	inline static constexpr unsigned int MultiStageSweep_TypeDefinitionIndex = 7099;

	class MultiStageSweep : public Il2CppObject
	{
	public:
		UILabel* countLabel; // 0x18
		ButtonActivator* plusButton; // 0x20
		ButtonActivator* minusButton; // 0x28
		ButtonActivator* minButton; // 0x30
		ButtonActivator* maxButton; // 0x38
		MXButton* startButton; // 0x40
		::System::Single sweepCountAccumSpeed; // 0x48
		UIAdmissionDisplay* apAdmissionDisplay; // 0x50
		ButtonActivator* selectSweepButton; // 0x58
		Il2CppObject* stageSelectSweepList; // 0x60
		::UnityEngine::Coroutine* longPressCoroutine; // 0x68
		::System::Int64 _MaxSweepCount_k__BackingField; // 0x70
		::System::Int64 _sweepCount; // 0x78
		Il2CppObject* OnSweepCountChanged; // 0x80
		::System::Int64 totalUseCost; // 0x88

		::System::Void OnClickMin()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTISTAGESWEEP_ONCLICKMIN_OFFSET))(nullptr);
		}

		::System::Void set_MaxSweepCount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MULTISTAGESWEEP_SET_MAXSWEEPCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickStart()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTISTAGESWEEP_ONCLICKSTART_OFFSET))(nullptr);
		}

		::System::Int64 get_SweepCount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTISTAGESWEEP_GET_SWEEPCOUNT_OFFSET))(nullptr);
		}

		::System::Void OnSweepCountButtonDown(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MULTISTAGESWEEP_ONSWEEPCOUNTBUTTONDOWN_OFFSET))(arg, nullptr);
		}

		::System::Void HandleSweepCountChanged(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MULTISTAGESWEEP_HANDLESWEEPCOUNTCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickMinus()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTISTAGESWEEP_ONCLICKMINUS_OFFSET))(nullptr);
		}

		::System::Void _Awake_b__21_1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTISTAGESWEEP__AWAKE_B__21_1_OFFSET))(nullptr);
		}

		::System::Void _Awake_b__21_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTISTAGESWEEP__AWAKE_B__21_0_OFFSET))(nullptr);
		}

		::System::Void OnClickPlus()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTISTAGESWEEP_ONCLICKPLUS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTISTAGESWEEP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_SweepCount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MULTISTAGESWEEP_SET_SWEEPCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickMax()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTISTAGESWEEP_ONCLICKMAX_OFFSET))(nullptr);
		}

		::System::Int64 GetMaxSweepCount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTISTAGESWEEP_GETMAXSWEEPCOUNT_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoOnSweepCountButtonDown(::System::Boolean arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MULTISTAGESWEEP_COONSWEEPCOUNTBUTTONDOWN_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshCost()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTISTAGESWEEP_REFRESHCOST_OFFSET))(nullptr);
		}

		::System::Void _OnClickStart_b__34_0(UIPopup_MultiSweep_Result* arg)
		{
			((::System::Void(*)(UIPopup_MultiSweep_Result*, ::PVOID))((::PBYTE)hIl2Cpp + MULTISTAGESWEEP__ONCLICKSTART_B__34_0_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshAdmissionInternal(::MX::GameLogic::Parcel::ParcelInfo* arg, ::System::Int64 arg2, ::System::Int64 arg3, ::System::Int64 arg4)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelInfo*, ::System::Int64, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MULTISTAGESWEEP_REFRESHADMISSIONINTERNAL_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTISTAGESWEEP_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* _OnClickMinus_g__CoClick|31_0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTISTAGESWEEP__ONCLICKMINUS_G__COCLICK|31_0_OFFSET))(nullptr);
		}

		::System::Void RefreshMaxSweepCount()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTISTAGESWEEP_REFRESHMAXSWEEPCOUNT_OFFSET))(nullptr);
		}

		::System::Void AddCost(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MULTISTAGESWEEP_ADDCOST_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* _OnClickPlus_g__CoClick|30_0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTISTAGESWEEP__ONCLICKPLUS_G__COCLICK|30_0_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTISTAGESWEEP_AWAKE_OFFSET))(nullptr);
		}

		::System::Int64 get_MaxSweepCount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTISTAGESWEEP_GET_MAXSWEEPCOUNT_OFFSET))(nullptr);
		}

	};

