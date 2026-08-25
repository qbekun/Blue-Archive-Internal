#pragma once
#include "unitysdk.h"

class ButtonActivator;
class UILabel;
class MXButton;
class UIPopup_MinigameRhythmOption_Timing;

#define UIPOPUP_MINIGAMEOPTION_NOTETIMING_SET_OFFSETOPTIONVALUE_OFFSET UNITYSDK_OFFSET(0x276FAB0)
#define UIPOPUP_MINIGAMEOPTION_NOTETIMING_CHANGEVALUE_OFFSET UNITYSDK_OFFSET(0x276FB70)
#define UIPOPUP_MINIGAMEOPTION_NOTETIMING_SETVALUEFROMAUTOSETRESULT_OFFSET UNITYSDK_OFFSET(0x276FBF0)
#define UIPOPUP_MINIGAMEOPTION_NOTETIMING_.CTOR_OFFSET UNITYSDK_OFFSET(0x276FC70)
#define UIPOPUP_MINIGAMEOPTION_NOTETIMING_SUBTRACTONE_OFFSET UNITYSDK_OFFSET(0x276FC80)
#define UIPOPUP_MINIGAMEOPTION_NOTETIMING_ONCLICKPOPUPUITIMING_OFFSET UNITYSDK_OFFSET(0x276FD00)
#define UIPOPUP_MINIGAMEOPTION_NOTETIMING_GET_OFFSETOPTIONVALUE_OFFSET UNITYSDK_OFFSET(0x276FDE0)
#define UIPOPUP_MINIGAMEOPTION_NOTETIMING_RESETOFFSETLEVEL_OFFSET UNITYSDK_OFFSET(0x276FDF0)
#define UIPOPUP_MINIGAMEOPTION_NOTETIMING_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x276FE70)
#define UIPOPUP_MINIGAMEOPTION_NOTETIMING_ADDONE_OFFSET UNITYSDK_OFFSET(0x2770340)
#define UIPOPUP_MINIGAMEOPTION_NOTETIMING__ONCLICKPOPUPUITIMING_B__13_0_OFFSET UNITYSDK_OFFSET(0x27703C0)

	inline static constexpr unsigned int UIPopup_MinigameOption_NoteTiming_TypeDefinitionIndex = 7339;

	class UIPopup_MinigameOption_NoteTiming : public Il2CppObject
	{
	public:
		::System::Int32 minSpeedValue; // 0x0
		::System::Int32 maxSpeedValue; // 0x0
		ButtonActivator* DecreaseOne; // 0x28
		ButtonActivator* IncreaseOne; // 0x30
		UILabel* OffsetLevelValueLabel; // 0x38
		MXButton* ResetButton; // 0x40
		MXButton* UIPopupTimingButton; // 0x48
		::System::Int32 offsetOptionValue; // 0x50

		::System::Void set_OffsetOptionValue(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MINIGAMEOPTION_NOTETIMING_SET_OFFSETOPTIONVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void ChangeValue(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MINIGAMEOPTION_NOTETIMING_CHANGEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void SetValueFromAutosetResult(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MINIGAMEOPTION_NOTETIMING_SETVALUEFROMAUTOSETRESULT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MINIGAMEOPTION_NOTETIMING_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SubtractOne()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MINIGAMEOPTION_NOTETIMING_SUBTRACTONE_OFFSET))(nullptr);
		}

		::System::Void OnClickPopupUITiming()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MINIGAMEOPTION_NOTETIMING_ONCLICKPOPUPUITIMING_OFFSET))(nullptr);
		}

		::System::Int32 get_OffsetOptionValue()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MINIGAMEOPTION_NOTETIMING_GET_OFFSETOPTIONVALUE_OFFSET))(nullptr);
		}

		::System::Void ResetOffsetLevel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MINIGAMEOPTION_NOTETIMING_RESETOFFSETLEVEL_OFFSET))(nullptr);
		}

		::System::Void Initialize(::System::Object* arg, ::System::Object* arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(::System::Object*, ::System::Object*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MINIGAMEOPTION_NOTETIMING_INITIALIZE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void AddOne()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MINIGAMEOPTION_NOTETIMING_ADDONE_OFFSET))(nullptr);
		}

		::System::Void _OnClickPopupUITiming_b__13_0(UIPopup_MinigameRhythmOption_Timing* arg)
		{
			((::System::Void(*)(UIPopup_MinigameRhythmOption_Timing*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MINIGAMEOPTION_NOTETIMING__ONCLICKPOPUPUITIMING_B__13_0_OFFSET))(arg, nullptr);
		}

	};

