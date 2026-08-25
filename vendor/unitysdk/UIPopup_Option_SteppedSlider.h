#pragma once
#include "unitysdk.h"

class UISlider;
class UILabel;

#define UIPOPUP_OPTION_STEPPEDSLIDER_ONSLIDER_OFFSET UNITYSDK_OFFSET(0x27192B0)
#define UIPOPUP_OPTION_STEPPEDSLIDER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x27194C0)
#define UIPOPUP_OPTION_STEPPEDSLIDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x27198B0)
#define UIPOPUP_OPTION_STEPPEDSLIDER_ONCHANGED_OFFSET UNITYSDK_OFFSET(0x27192C0)
#define UIPOPUP_OPTION_STEPPEDSLIDER_SETSTEPS_OFFSET UNITYSDK_OFFSET(0x2719930)
#define UIPOPUP_OPTION_STEPPEDSLIDER_GETCURRENTVALUE_OFFSET UNITYSDK_OFFSET(0x2719940)
#define UIPOPUP_OPTION_STEPPEDSLIDER_FINDCLOSESTINDEX_OFFSET UNITYSDK_OFFSET(0x27197E0)

	inline static constexpr unsigned int UIPopup_Option_SteppedSlider_TypeDefinitionIndex = 7150;

	class UIPopup_Option_SteppedSlider : public Il2CppObject
	{
	public:
		UISlider* Slider; // 0x28
		UILabel* Label; // 0x30
		::Il2CppArray<::System::Object*>* steps; // 0x38
		::System::Single currentValue; // 0x40
		::System::Int32 currentIndex; // 0x44

		::System::Void OnSlider()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTION_STEPPEDSLIDER_ONSLIDER_OFFSET))(nullptr);
		}

		::System::Void Initialize(::System::Object* arg, ::System::Object* arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(::System::Object*, ::System::Object*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTION_STEPPEDSLIDER_INITIALIZE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTION_STEPPEDSLIDER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTION_STEPPEDSLIDER_ONCHANGED_OFFSET))(nullptr);
		}

		::System::Void SetSteps(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTION_STEPPEDSLIDER_SETSTEPS_OFFSET))(arg, nullptr);
		}

		::System::Single GetCurrentValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTION_STEPPEDSLIDER_GETCURRENTVALUE_OFFSET))(nullptr);
		}

		::System::Int32 FindClosestIndex(::System::Single arg)
		{
			return ((::System::Int32(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTION_STEPPEDSLIDER_FINDCLOSESTINDEX_OFFSET))(arg, nullptr);
		}

	};

