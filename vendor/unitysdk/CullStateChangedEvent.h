#pragma once
#include "unitysdk.h"

#define CULLSTATECHANGEDEVENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA46EB80)

	inline static constexpr unsigned int CullStateChangedEvent_TypeDefinitionIndex = 34823;

	class CullStateChangedEvent : public RefInstance
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CULLSTATECHANGEDEVENT_.CTOR_OFFSET))(nullptr);
		}

	};

