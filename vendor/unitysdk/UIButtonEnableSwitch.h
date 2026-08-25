#pragma once
#include "unitysdk.h"

class MXButton;
class EventDelegate;

#define UIBUTTONENABLESWITCH_SETENABLE_OFFSET UNITYSDK_OFFSET(0x2562C70)
#define UIBUTTONENABLESWITCH_SETONCLICKEVENT_OFFSET UNITYSDK_OFFSET(0x2562CE0)
#define UIBUTTONENABLESWITCH_.CTOR_OFFSET UNITYSDK_OFFSET(0x2562E20)

	inline static constexpr unsigned int UIButtonEnableSwitch_TypeDefinitionIndex = 6125;

	class UIButtonEnableSwitch : public Il2CppObject
	{
	public:
		MXButton* enableButton; // 0x18
		MXButton* disableButton; // 0x20

		::System::Void SetEnable(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIBUTTONENABLESWITCH_SETENABLE_OFFSET))(arg, nullptr);
		}

		::System::Void SetOnClickEvent(EventDelegate* arg, EventDelegate* arg2)
		{
			((::System::Void(*)(EventDelegate*, EventDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + UIBUTTONENABLESWITCH_SETONCLICKEVENT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBUTTONENABLESWITCH_.CTOR_OFFSET))(nullptr);
		}

	};

