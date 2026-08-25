#pragma once
#include "unitysdk.h"

#define CLICKEMPTYCHARACTERCARDMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x22F2730)

	inline static constexpr unsigned int ClickEmptyCharacterCardMessage_TypeDefinitionIndex = 4896;

	class ClickEmptyCharacterCardMessage : public ::TriInspector::TitleAttribute
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLICKEMPTYCHARACTERCARDMESSAGE_.CTOR_OFFSET))(nullptr);
		}

	};

