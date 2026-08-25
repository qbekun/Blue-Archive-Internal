#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ACCOUNTREPORTXIGNCODECHEATERREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF0FAF0)
#define MX_NETWORKPROTOCOL_ACCOUNTREPORTXIGNCODECHEATERREQUEST_SET_ERRORCODE_OFFSET UNITYSDK_OFFSET(0xF0FB00)
#define MX_NETWORKPROTOCOL_ACCOUNTREPORTXIGNCODECHEATERREQUEST_GET_ERRORCODE_OFFSET UNITYSDK_OFFSET(0xF0FB10)
#define MX_NETWORKPROTOCOL_ACCOUNTREPORTXIGNCODECHEATERREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF0FB20)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int AccountReportXignCodeCheaterRequest_TypeDefinitionIndex = 11251;

	class AccountReportXignCodeCheaterRequest : public Il2CppObject
	{
	public:
		::System::String* _ErrorCode_k__BackingField; // 0x40

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTREPORTXIGNCODECHEATERREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_ErrorCode(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTREPORTXIGNCODECHEATERREQUEST_SET_ERRORCODE_OFFSET))(str, nullptr);
		}

		::System::String* get_ErrorCode()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTREPORTXIGNCODECHEATERREQUEST_GET_ERRORCODE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTREPORTXIGNCODECHEATERREQUEST_.CTOR_OFFSET))(nullptr);
		}

	};
}

