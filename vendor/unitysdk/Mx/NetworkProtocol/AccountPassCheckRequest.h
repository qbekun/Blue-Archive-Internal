#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ACCOUNTPASSCHECKREQUEST_SET_CLIENTGENERATEDIV_OFFSET UNITYSDK_OFFSET(0xF0F860)
#define MX_NETWORKPROTOCOL_ACCOUNTPASSCHECKREQUEST_SET_ONLYACCOUNTID_OFFSET UNITYSDK_OFFSET(0xF0F870)
#define MX_NETWORKPROTOCOL_ACCOUNTPASSCHECKREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF0F880)
#define MX_NETWORKPROTOCOL_ACCOUNTPASSCHECKREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF0F890)
#define MX_NETWORKPROTOCOL_ACCOUNTPASSCHECKREQUEST_GET_CLIENTGENERATEDIV_OFFSET UNITYSDK_OFFSET(0xF0F910)
#define MX_NETWORKPROTOCOL_ACCOUNTPASSCHECKREQUEST_GET_ONLYACCOUNTID_OFFSET UNITYSDK_OFFSET(0xF0F920)
#define MX_NETWORKPROTOCOL_ACCOUNTPASSCHECKREQUEST_GET_CLIENTGENERATEDKEY_OFFSET UNITYSDK_OFFSET(0xF0F930)
#define MX_NETWORKPROTOCOL_ACCOUNTPASSCHECKREQUEST_GET_DEVID_OFFSET UNITYSDK_OFFSET(0xF0F940)
#define MX_NETWORKPROTOCOL_ACCOUNTPASSCHECKREQUEST_SET_DEVID_OFFSET UNITYSDK_OFFSET(0xF0F950)
#define MX_NETWORKPROTOCOL_ACCOUNTPASSCHECKREQUEST_SET_CLIENTGENERATEDKEY_OFFSET UNITYSDK_OFFSET(0xF0F960)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int AccountPassCheckRequest_TypeDefinitionIndex = 11247;

	class AccountPassCheckRequest : public Il2CppObject
	{
	public:
		::System::String* _DevId_k__BackingField; // 0x40
		::System::Boolean _OnlyAccountId_k__BackingField; // 0x48
		::System::String* _ClientGeneratedKey_k__BackingField; // 0x50
		::System::String* _ClientGeneratedIV_k__BackingField; // 0x58

		::System::Void set_ClientGeneratedIV(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTPASSCHECKREQUEST_SET_CLIENTGENERATEDIV_OFFSET))(str, nullptr);
		}

		::System::Void set_OnlyAccountId(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTPASSCHECKREQUEST_SET_ONLYACCOUNTID_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTPASSCHECKREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTPASSCHECKREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::String* get_ClientGeneratedIV()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTPASSCHECKREQUEST_GET_CLIENTGENERATEDIV_OFFSET))(nullptr);
		}

		::System::Boolean get_OnlyAccountId()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTPASSCHECKREQUEST_GET_ONLYACCOUNTID_OFFSET))(nullptr);
		}

		::System::String* get_ClientGeneratedKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTPASSCHECKREQUEST_GET_CLIENTGENERATEDKEY_OFFSET))(nullptr);
		}

		::System::String* get_DevId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTPASSCHECKREQUEST_GET_DEVID_OFFSET))(nullptr);
		}

		::System::Void set_DevId(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTPASSCHECKREQUEST_SET_DEVID_OFFSET))(str, nullptr);
		}

		::System::Void set_ClientGeneratedKey(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTPASSCHECKREQUEST_SET_CLIENTGENERATEDKEY_OFFSET))(str, nullptr);
		}

	};
}

