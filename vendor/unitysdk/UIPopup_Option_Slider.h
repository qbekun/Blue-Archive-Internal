#pragma once
#include "unitysdk.h"

#define UIPOPUP_OPTION_SLIDER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x2718AB0)
#define UIPOPUP_OPTION_SLIDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x2718B00)

	inline static constexpr unsigned int UIPopup_Option_Slider_TypeDefinitionIndex = 7148;

	class UIPopup_Option_Slider : public Il2CppObject
	{
	public:
		::System::Void Initialize(::System::Object* arg, ::System::Object* arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(::System::Object*, ::System::Object*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTION_SLIDER_INITIALIZE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTION_SLIDER_.CTOR_OFFSET))(nullptr);
		}

	};

