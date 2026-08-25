#pragma once
#include "unitysdk.h"

#define CURRENCYUPDATEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0xB78490)

	inline static constexpr unsigned int CurrencyUpdateMessage_TypeDefinitionIndex = 8493;

	class CurrencyUpdateMessage : public ::TriInspector::TitleAttribute
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CURRENCYUPDATEMESSAGE_.CTOR_OFFSET))(nullptr);
		}

	};

