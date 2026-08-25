#pragma once
#include "unitysdk.h"

#define ENABLEEVENT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xC863F0)
#define ENABLEEVENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xC86410)
#define ENABLEEVENT_ONENABLE_OFFSET UNITYSDK_OFFSET(0xC86420)

	inline static constexpr unsigned int EnableEvent_TypeDefinitionIndex = 9075;

	class EnableEvent : public Il2CppObject
	{
	public:
		::System::Action* OnEnableAction; // 0x18
		::System::Action* OnDisableAction; // 0x20

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENABLEEVENT_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENABLEEVENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENABLEEVENT_ONENABLE_OFFSET))(nullptr);
		}

	};

