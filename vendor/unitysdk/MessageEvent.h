#pragma once
#include "unitysdk.h"

#define MESSAGEEVENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA24FEE0)

	inline static constexpr unsigned int MessageEvent_TypeDefinitionIndex = 31469;

	class MessageEvent : public MatcherJson
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEEVENT_.CTOR_OFFSET))(nullptr);
		}

	};

