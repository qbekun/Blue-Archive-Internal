#pragma once
#include "unitysdk.h"

#define TOGGLEEVENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA485CB0)

	inline static constexpr unsigned int ToggleEvent_TypeDefinitionIndex = 34855;

	class ToggleEvent : public RefInstance
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOGGLEEVENT_.CTOR_OFFSET))(nullptr);
		}

	};

