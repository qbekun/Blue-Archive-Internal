#pragma once
#include "unitysdk.h"

#define LEANFINGEREVENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1EAB770)

	inline static constexpr unsigned int LeanFingerEvent_TypeDefinitionIndex = 21255;

	class LeanFingerEvent : public Capability
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEANFINGEREVENT_.CTOR_OFFSET))(nullptr);
		}

	};

