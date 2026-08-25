#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ACCOUNTVERIFYADULTCHECKREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF0FC40)
#define MX_NETWORKPROTOCOL_ACCOUNTVERIFYADULTCHECKREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF0FC50)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int AccountVerifyAdultCheckRequest_TypeDefinitionIndex = 11257;

	class AccountVerifyAdultCheckRequest : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTVERIFYADULTCHECKREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTVERIFYADULTCHECKREQUEST_.CTOR_OFFSET))(nullptr);
		}

	};
}

