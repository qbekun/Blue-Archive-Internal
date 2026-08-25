#pragma once
#include "unitysdk.h"

#define SCROLLEVENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA474670)

	inline static constexpr unsigned int ScrollEvent_TypeDefinitionIndex = 34834;

	class ScrollEvent : public <>c
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCROLLEVENT_.CTOR_OFFSET))(nullptr);
		}

	};

