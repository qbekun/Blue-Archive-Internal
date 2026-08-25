#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define ACCOUNTREPORTXIGNCODECHEATERRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F074C0)

	inline static constexpr unsigned int AccountReportXignCodeCheaterResponseMessage_TypeDefinitionIndex = 1977;

	class AccountReportXignCodeCheaterResponseMessage : public Il2CppObject
	{
	public:
		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTREPORTXIGNCODECHEATERRESPONSEMESSAGE_.CTOR_OFFSET))(arg, nullptr);
		}

	};

