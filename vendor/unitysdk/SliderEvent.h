#pragma once
#include "unitysdk.h"

#define SLIDEREVENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA47F810)

	inline static constexpr unsigned int SliderEvent_TypeDefinitionIndex = 34847;

	class SliderEvent : public <>c
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SLIDEREVENT_.CTOR_OFFSET))(nullptr);
		}

	};

