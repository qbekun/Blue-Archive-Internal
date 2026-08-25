#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ACCOUNTPASSCHECKRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF0F970)
#define MX_NETWORKPROTOCOL_ACCOUNTPASSCHECKRESPONSE_GET_SIGNEDKEY_OFFSET UNITYSDK_OFFSET(0xF0F980)
#define MX_NETWORKPROTOCOL_ACCOUNTPASSCHECKRESPONSE_SET_ENCRYPTEDKEY_OFFSET UNITYSDK_OFFSET(0xF0F990)
#define MX_NETWORKPROTOCOL_ACCOUNTPASSCHECKRESPONSE_GET_ENCRYPTEDIV_OFFSET UNITYSDK_OFFSET(0xF0F9A0)
#define MX_NETWORKPROTOCOL_ACCOUNTPASSCHECKRESPONSE_SET_ENCRYPTEDIV_OFFSET UNITYSDK_OFFSET(0xF0F9B0)
#define MX_NETWORKPROTOCOL_ACCOUNTPASSCHECKRESPONSE_GET_ENCRYPTEDKEY_OFFSET UNITYSDK_OFFSET(0xF0F9C0)
#define MX_NETWORKPROTOCOL_ACCOUNTPASSCHECKRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF0F9D0)
#define MX_NETWORKPROTOCOL_ACCOUNTPASSCHECKRESPONSE_SET_SIGNEDIV_OFFSET UNITYSDK_OFFSET(0xF0FA80)
#define MX_NETWORKPROTOCOL_ACCOUNTPASSCHECKRESPONSE_GET_SIGNEDIV_OFFSET UNITYSDK_OFFSET(0xF0FA90)
#define MX_NETWORKPROTOCOL_ACCOUNTPASSCHECKRESPONSE_SET_SIGNEDKEY_OFFSET UNITYSDK_OFFSET(0xF0FAA0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int AccountPassCheckResponse_TypeDefinitionIndex = 11248;

	class AccountPassCheckResponse : public Il2CppObject
	{
	public:
		::System::String* _EncryptedKey_k__BackingField; // 0x50
		::System::String* _SignedKey_k__BackingField; // 0x58
		::System::String* _EncryptedIV_k__BackingField; // 0x60
		::System::String* _SignedIV_k__BackingField; // 0x68

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTPASSCHECKRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::String* get_SignedKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTPASSCHECKRESPONSE_GET_SIGNEDKEY_OFFSET))(nullptr);
		}

		::System::Void set_EncryptedKey(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTPASSCHECKRESPONSE_SET_ENCRYPTEDKEY_OFFSET))(str, nullptr);
		}

		::System::String* get_EncryptedIV()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTPASSCHECKRESPONSE_GET_ENCRYPTEDIV_OFFSET))(nullptr);
		}

		::System::Void set_EncryptedIV(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTPASSCHECKRESPONSE_SET_ENCRYPTEDIV_OFFSET))(str, nullptr);
		}

		::System::String* get_EncryptedKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTPASSCHECKRESPONSE_GET_ENCRYPTEDKEY_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTPASSCHECKRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_SignedIV(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTPASSCHECKRESPONSE_SET_SIGNEDIV_OFFSET))(str, nullptr);
		}

		::System::String* get_SignedIV()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTPASSCHECKRESPONSE_GET_SIGNEDIV_OFFSET))(nullptr);
		}

		::System::Void set_SignedKey(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTPASSCHECKRESPONSE_SET_SIGNEDKEY_OFFSET))(str, nullptr);
		}

	};
}

