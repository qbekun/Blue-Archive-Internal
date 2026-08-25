#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define OPENCONDITIONLISTRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F88F80)

	inline static constexpr unsigned int OpenConditionListResponseMessage_TypeDefinitionIndex = 2664;

	class OpenConditionListResponseMessage : public Il2CppObject
	{
	public:
		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::PVOID))((::PBYTE)hIl2Cpp + OPENCONDITIONLISTRESPONSEMESSAGE_.CTOR_OFFSET))(arg, nullptr);
		}

	};

