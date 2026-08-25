#pragma once
#include "unitysdk.h"

#define ENTERPOPUPOPENEDCALLBACKMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0xC04110)

	inline static constexpr unsigned int EnterPopupOpenedCallBackMessage_TypeDefinitionIndex = 8802;

	class EnterPopupOpenedCallBackMessage : public ::TriInspector::TitleAttribute
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTERPOPUPOPENEDCALLBACKMESSAGE_.CTOR_OFFSET))(nullptr);
		}

	};

