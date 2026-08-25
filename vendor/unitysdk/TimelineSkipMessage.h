#pragma once
#include "unitysdk.h"

#define TIMELINESKIPMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0xB6E950)

	inline static constexpr unsigned int TimelineSkipMessage_TypeDefinitionIndex = 8459;

	class TimelineSkipMessage : public ::TriInspector::TitleAttribute
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMELINESKIPMESSAGE_.CTOR_OFFSET))(nullptr);
		}

	};

