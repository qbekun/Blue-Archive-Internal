#pragma once
#include "unitysdk.h"

#define SCROLLRECTEVENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA4790E0)

	inline static constexpr unsigned int ScrollRectEvent_TypeDefinitionIndex = 34840;

	class ScrollRectEvent : public Clamp
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCROLLRECTEVENT_.CTOR_OFFSET))(nullptr);
		}

	};

