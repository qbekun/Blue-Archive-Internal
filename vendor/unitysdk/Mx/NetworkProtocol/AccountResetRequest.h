#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ACCOUNTRESETREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF106E0)
#define MX_NETWORKPROTOCOL_ACCOUNTRESETREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF106F0)
#define MX_NETWORKPROTOCOL_ACCOUNTRESETREQUEST_GET_DEVID_OFFSET UNITYSDK_OFFSET(0xF10700)
#define MX_NETWORKPROTOCOL_ACCOUNTRESETREQUEST_SET_DEVID_OFFSET UNITYSDK_OFFSET(0xF10710)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int AccountResetRequest_TypeDefinitionIndex = 11269;

	class AccountResetRequest : public Il2CppObject
	{
	public:
		::System::String* _DevId_k__BackingField; // 0x40

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTRESETREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTRESETREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::String* get_DevId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTRESETREQUEST_GET_DEVID_OFFSET))(nullptr);
		}

		::System::Void set_DevId(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTRESETREQUEST_SET_DEVID_OFFSET))(str, nullptr);
		}

	};
}

