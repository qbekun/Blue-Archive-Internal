#pragma once
#include "unitysdk.h"

#define TEXTSELECTIONEVENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA16D190)

	inline static constexpr unsigned int TextSelectionEvent_TypeDefinitionIndex = 33688;

	class TextSelectionEvent : public WriteMode
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TEXTSELECTIONEVENT_.CTOR_OFFSET))(nullptr);
		}

	};

