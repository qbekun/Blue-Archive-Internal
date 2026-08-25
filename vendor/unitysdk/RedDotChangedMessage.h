#pragma once
#include "unitysdk.h"

#define REDDOTCHANGEDMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F9D980)

	inline static constexpr unsigned int RedDotChangedMessage_TypeDefinitionIndex = 2797;

	class RedDotChangedMessage : public ::TriInspector::TitleAttribute
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REDDOTCHANGEDMESSAGE_.CTOR_OFFSET))(nullptr);
		}

	};

