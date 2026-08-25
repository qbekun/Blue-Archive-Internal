#pragma once
#include "unitysdk.h"

class UIToggle;

#define UIPOPUP_OPTION_TOGGLE_DYNAMIC_PART_SETDATA_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIPOPUP_OPTION_TOGGLE_DYNAMIC_PART_.CTOR_OFFSET UNITYSDK_OFFSET(0x271A060)

	inline static constexpr unsigned int UIPopup_Option_Toggle_Dynamic_Part_TypeDefinitionIndex = 7154;

	class UIPopup_Option_Toggle_Dynamic_Part : public Il2CppObject
	{
	public:
		UIToggle* SetData(::System::Object* arg, ::System::Boolean arg2)
		{
			return ((UIToggle*(*)(::System::Object*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTION_TOGGLE_DYNAMIC_PART_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTION_TOGGLE_DYNAMIC_PART_.CTOR_OFFSET))(nullptr);
		}

	};

