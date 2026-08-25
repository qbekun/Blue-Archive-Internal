#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_RAIDSEARCHREQUEST_SET_SECRETCODE_OFFSET UNITYSDK_OFFSET(0xF4C870)
#define MX_NETWORKPROTOCOL_RAIDSEARCHREQUEST_GET_SECRETCODE_OFFSET UNITYSDK_OFFSET(0xF4C880)
#define MX_NETWORKPROTOCOL_RAIDSEARCHREQUEST_GET_TAGS_OFFSET UNITYSDK_OFFSET(0xF4C890)
#define MX_NETWORKPROTOCOL_RAIDSEARCHREQUEST_SET_TAGS_OFFSET UNITYSDK_OFFSET(0xF4C8A0)
#define MX_NETWORKPROTOCOL_RAIDSEARCHREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4C8B0)
#define MX_NETWORKPROTOCOL_RAIDSEARCHREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4C8C0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int RaidSearchRequest_TypeDefinitionIndex = 12023;

	class RaidSearchRequest : public Il2CppObject
	{
	public:
		::System::String* _SecretCode_k__BackingField; // 0x40
		Il2CppObject* _Tags_k__BackingField; // 0x48

		::System::Void set_SecretCode(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDSEARCHREQUEST_SET_SECRETCODE_OFFSET))(str, nullptr);
		}

		::System::String* get_SecretCode()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDSEARCHREQUEST_GET_SECRETCODE_OFFSET))(nullptr);
		}

		Il2CppObject* get_Tags()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDSEARCHREQUEST_GET_TAGS_OFFSET))(nullptr);
		}

		::System::Void set_Tags(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDSEARCHREQUEST_SET_TAGS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDSEARCHREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDSEARCHREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

