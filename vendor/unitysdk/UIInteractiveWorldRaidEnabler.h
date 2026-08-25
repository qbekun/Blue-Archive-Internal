#pragma once
#include "unitysdk.h"

#define UIINTERACTIVEWORLDRAIDENABLER_TRYACTIVATE_OFFSET UNITYSDK_OFFSET(0x2622D20)
#define UIINTERACTIVEWORLDRAIDENABLER_CANACTIVE_OFFSET UNITYSDK_OFFSET(0x2622D60)
#define UIINTERACTIVEWORLDRAIDENABLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x2623170)

	inline static constexpr unsigned int UIInteractiveWorldRaidEnabler_TypeDefinitionIndex = 6537;

	class UIInteractiveWorldRaidEnabler : public Il2CppObject
	{
	public:
		Il2CppObject* carrierMapIds; // 0x18
		Il2CppObject* conditions; // 0x20

		::System::Void TryActivate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDENABLER_TRYACTIVATE_OFFSET))(nullptr);
		}

		::System::Boolean CanActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDENABLER_CANACTIVE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDENABLER_.CTOR_OFFSET))(nullptr);
		}

	};

