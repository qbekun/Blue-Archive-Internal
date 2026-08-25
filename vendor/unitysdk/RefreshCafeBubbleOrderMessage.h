#pragma once
#include "unitysdk.h"

#define REFRESHCAFEBUBBLEORDERMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x226F170)

	inline static constexpr unsigned int RefreshCafeBubbleOrderMessage_TypeDefinitionIndex = 4625;

	class RefreshCafeBubbleOrderMessage : public ::TriInspector::TitleAttribute
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFRESHCAFEBUBBLEORDERMESSAGE_.CTOR_OFFSET))(nullptr);
		}

	};

