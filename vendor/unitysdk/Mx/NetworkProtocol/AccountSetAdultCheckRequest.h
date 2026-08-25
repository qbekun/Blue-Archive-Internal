#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ACCOUNTSETADULTCHECKREQUEST_SET_CHECKADULTAGREE_OFFSET UNITYSDK_OFFSET(0xF0FCA0)
#define MX_NETWORKPROTOCOL_ACCOUNTSETADULTCHECKREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF0FCB0)
#define MX_NETWORKPROTOCOL_ACCOUNTSETADULTCHECKREQUEST_GET_CHECKADULTAGREE_OFFSET UNITYSDK_OFFSET(0xF0FCC0)
#define MX_NETWORKPROTOCOL_ACCOUNTSETADULTCHECKREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF0FCD0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int AccountSetAdultCheckRequest_TypeDefinitionIndex = 11259;

	class AccountSetAdultCheckRequest : public Il2CppObject
	{
	public:
		::System::Boolean _CheckAdultAgree_k__BackingField; // 0x40

		::System::Void set_CheckAdultAgree(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTSETADULTCHECKREQUEST_SET_CHECKADULTAGREE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTSETADULTCHECKREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_CheckAdultAgree()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTSETADULTCHECKREQUEST_GET_CHECKADULTAGREE_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTSETADULTCHECKREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

