#pragma once
#include "unitysdk.h"

class ButtonActivator;
class UILabel;

#define UIPOPUP_MINIGAMEOPTION_NOTESPEED_SET_SPEEDOPTIONVALUE_OFFSET UNITYSDK_OFFSET(0x276F040)
#define UIPOPUP_MINIGAMEOPTION_NOTESPEED_CHANGEVALUE_OFFSET UNITYSDK_OFFSET(0x276F240)
#define UIPOPUP_MINIGAMEOPTION_NOTESPEED_FORMATTOFIRSTDECIMAL_OFFSET UNITYSDK_OFFSET(0x276F1B0)
#define UIPOPUP_MINIGAMEOPTION_NOTESPEED_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x276F2C0)
#define UIPOPUP_MINIGAMEOPTION_NOTESPEED_SUBTRACTONE_OFFSET UNITYSDK_OFFSET(0x276F890)
#define UIPOPUP_MINIGAMEOPTION_NOTESPEED_.CTOR_OFFSET UNITYSDK_OFFSET(0x276F910)
#define UIPOPUP_MINIGAMEOPTION_NOTESPEED_ADDONE_OFFSET UNITYSDK_OFFSET(0x276F920)
#define UIPOPUP_MINIGAMEOPTION_NOTESPEED_SUBTRACTPOINTONE_OFFSET UNITYSDK_OFFSET(0x276F9A0)
#define UIPOPUP_MINIGAMEOPTION_NOTESPEED_ADDPOINTONE_OFFSET UNITYSDK_OFFSET(0x276FA20)
#define UIPOPUP_MINIGAMEOPTION_NOTESPEED_GET_SPEEDOPTIONVALUE_OFFSET UNITYSDK_OFFSET(0x276FAA0)

	inline static constexpr unsigned int UIPopup_MinigameOption_NoteSpeed_TypeDefinitionIndex = 7338;

	class UIPopup_MinigameOption_NoteSpeed : public Il2CppObject
	{
	public:
		::System::Int32 minSpeedValue; // 0x0
		::System::Int32 maxSpeedValue; // 0x0
		ButtonActivator* DecreaseOne; // 0x28
		ButtonActivator* DecreasePointOne; // 0x30
		ButtonActivator* IncreasePointOne; // 0x38
		ButtonActivator* IncreaseOne; // 0x40
		UILabel* SpeedValueLabel; // 0x48
		::System::Int32 speedOptionValue; // 0x50

		::System::Void set_SpeedOptionValue(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MINIGAMEOPTION_NOTESPEED_SET_SPEEDOPTIONVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void ChangeValue(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MINIGAMEOPTION_NOTESPEED_CHANGEVALUE_OFFSET))(arg, nullptr);
		}

		::System::String* FormatToFirstDecimal(::System::Int32 arg)
		{
			return ((::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MINIGAMEOPTION_NOTESPEED_FORMATTOFIRSTDECIMAL_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize(::System::Object* arg, ::System::Object* arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(::System::Object*, ::System::Object*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MINIGAMEOPTION_NOTESPEED_INITIALIZE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void SubtractOne()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MINIGAMEOPTION_NOTESPEED_SUBTRACTONE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MINIGAMEOPTION_NOTESPEED_.CTOR_OFFSET))(nullptr);
		}

		::System::Void AddOne()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MINIGAMEOPTION_NOTESPEED_ADDONE_OFFSET))(nullptr);
		}

		::System::Void SubtractPointOne()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MINIGAMEOPTION_NOTESPEED_SUBTRACTPOINTONE_OFFSET))(nullptr);
		}

		::System::Void AddPointOne()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MINIGAMEOPTION_NOTESPEED_ADDPOINTONE_OFFSET))(nullptr);
		}

		::System::Int32 get_SpeedOptionValue()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MINIGAMEOPTION_NOTESPEED_GET_SPEEDOPTIONVALUE_OFFSET))(nullptr);
		}

	};

