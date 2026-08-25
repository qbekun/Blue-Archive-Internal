#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_QUEUINGGETCRYPTOKEYSREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4B930)
#define MX_NETWORKPROTOCOL_QUEUINGGETCRYPTOKEYSREQUEST_GET_CLIENTGENERATEDIV_OFFSET UNITYSDK_OFFSET(0xF4B9A0)
#define MX_NETWORKPROTOCOL_QUEUINGGETCRYPTOKEYSREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4B9B0)
#define MX_NETWORKPROTOCOL_QUEUINGGETCRYPTOKEYSREQUEST_SET_CLIENTGENERATEDKEY_OFFSET UNITYSDK_OFFSET(0xF4B9C0)
#define MX_NETWORKPROTOCOL_QUEUINGGETCRYPTOKEYSREQUEST_SET_CLIENTGENERATEDIV_OFFSET UNITYSDK_OFFSET(0xF4B9D0)
#define MX_NETWORKPROTOCOL_QUEUINGGETCRYPTOKEYSREQUEST_GET_CLIENTGENERATEDKEY_OFFSET UNITYSDK_OFFSET(0xF4B9E0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int QueuingGetCryptoKeysRequest_TypeDefinitionIndex = 12006;

	class QueuingGetCryptoKeysRequest : public Il2CppObject
	{
	public:
		::System::String* _ClientGeneratedKey_k__BackingField; // 0x40
		::System::String* _ClientGeneratedIV_k__BackingField; // 0x48

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_QUEUINGGETCRYPTOKEYSREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::String* get_ClientGeneratedIV()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_QUEUINGGETCRYPTOKEYSREQUEST_GET_CLIENTGENERATEDIV_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_QUEUINGGETCRYPTOKEYSREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_ClientGeneratedKey(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_QUEUINGGETCRYPTOKEYSREQUEST_SET_CLIENTGENERATEDKEY_OFFSET))(str, nullptr);
		}

		::System::Void set_ClientGeneratedIV(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_QUEUINGGETCRYPTOKEYSREQUEST_SET_CLIENTGENERATEDIV_OFFSET))(str, nullptr);
		}

		::System::String* get_ClientGeneratedKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_QUEUINGGETCRYPTOKEYSREQUEST_GET_CLIENTGENERATEDKEY_OFFSET))(nullptr);
		}

	};
}

