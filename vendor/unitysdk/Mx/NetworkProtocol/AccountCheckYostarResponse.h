#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ACCOUNTCHECKYOSTARRESPONSE_GET_BIRTH_OFFSET UNITYSDK_OFFSET(0xF10530)
#define MX_NETWORKPROTOCOL_ACCOUNTCHECKYOSTARRESPONSE_GET_ENCRYPTEDIV_OFFSET UNITYSDK_OFFSET(0xF10540)
#define MX_NETWORKPROTOCOL_ACCOUNTCHECKYOSTARRESPONSE_SET_RESULTSTATE_OFFSET UNITYSDK_OFFSET(0xF10550)
#define MX_NETWORKPROTOCOL_ACCOUNTCHECKYOSTARRESPONSE_SET_ENCRYPTEDIV_OFFSET UNITYSDK_OFFSET(0xF10560)
#define MX_NETWORKPROTOCOL_ACCOUNTCHECKYOSTARRESPONSE_SET_SIGNEDKEY_OFFSET UNITYSDK_OFFSET(0xF10570)
#define MX_NETWORKPROTOCOL_ACCOUNTCHECKYOSTARRESPONSE_SET_BIRTH_OFFSET UNITYSDK_OFFSET(0xF10580)
#define MX_NETWORKPROTOCOL_ACCOUNTCHECKYOSTARRESPONSE_GET_ENCRYPTEDKEY_OFFSET UNITYSDK_OFFSET(0xF10590)
#define MX_NETWORKPROTOCOL_ACCOUNTCHECKYOSTARRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF105A0)
#define MX_NETWORKPROTOCOL_ACCOUNTCHECKYOSTARRESPONSE_SET_RESULTMESSAG_OFFSET UNITYSDK_OFFSET(0xF10660)
#define MX_NETWORKPROTOCOL_ACCOUNTCHECKYOSTARRESPONSE_SET_ENCRYPTEDKEY_OFFSET UNITYSDK_OFFSET(0xF10670)
#define MX_NETWORKPROTOCOL_ACCOUNTCHECKYOSTARRESPONSE_GET_SIGNEDKEY_OFFSET UNITYSDK_OFFSET(0xF10680)
#define MX_NETWORKPROTOCOL_ACCOUNTCHECKYOSTARRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF10690)
#define MX_NETWORKPROTOCOL_ACCOUNTCHECKYOSTARRESPONSE_SET_SIGNEDIV_OFFSET UNITYSDK_OFFSET(0xF106A0)
#define MX_NETWORKPROTOCOL_ACCOUNTCHECKYOSTARRESPONSE_GET_RESULTSTATE_OFFSET UNITYSDK_OFFSET(0xF106B0)
#define MX_NETWORKPROTOCOL_ACCOUNTCHECKYOSTARRESPONSE_GET_SIGNEDIV_OFFSET UNITYSDK_OFFSET(0xF106C0)
#define MX_NETWORKPROTOCOL_ACCOUNTCHECKYOSTARRESPONSE_GET_RESULTMESSAG_OFFSET UNITYSDK_OFFSET(0xF106D0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int AccountCheckYostarResponse_TypeDefinitionIndex = 11268;

	class AccountCheckYostarResponse : public Il2CppObject
	{
	public:
		::System::Int32 _ResultState_k__BackingField; // 0x50
		::System::String* _ResultMessag_k__BackingField; // 0x58
		::System::String* _Birth_k__BackingField; // 0x60
		::System::String* _EncryptedKey_k__BackingField; // 0x68
		::System::String* _SignedKey_k__BackingField; // 0x70
		::System::String* _EncryptedIV_k__BackingField; // 0x78
		::System::String* _SignedIV_k__BackingField; // 0x80

		::System::String* get_Birth()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTCHECKYOSTARRESPONSE_GET_BIRTH_OFFSET))(nullptr);
		}

		::System::String* get_EncryptedIV()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTCHECKYOSTARRESPONSE_GET_ENCRYPTEDIV_OFFSET))(nullptr);
		}

		::System::Void set_ResultState(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTCHECKYOSTARRESPONSE_SET_RESULTSTATE_OFFSET))(arg, nullptr);
		}

		::System::Void set_EncryptedIV(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTCHECKYOSTARRESPONSE_SET_ENCRYPTEDIV_OFFSET))(str, nullptr);
		}

		::System::Void set_SignedKey(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTCHECKYOSTARRESPONSE_SET_SIGNEDKEY_OFFSET))(str, nullptr);
		}

		::System::Void set_Birth(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTCHECKYOSTARRESPONSE_SET_BIRTH_OFFSET))(str, nullptr);
		}

		::System::String* get_EncryptedKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTCHECKYOSTARRESPONSE_GET_ENCRYPTEDKEY_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTCHECKYOSTARRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_ResultMessag(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTCHECKYOSTARRESPONSE_SET_RESULTMESSAG_OFFSET))(str, nullptr);
		}

		::System::Void set_EncryptedKey(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTCHECKYOSTARRESPONSE_SET_ENCRYPTEDKEY_OFFSET))(str, nullptr);
		}

		::System::String* get_SignedKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTCHECKYOSTARRESPONSE_GET_SIGNEDKEY_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTCHECKYOSTARRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_SignedIV(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTCHECKYOSTARRESPONSE_SET_SIGNEDIV_OFFSET))(str, nullptr);
		}

		::System::Int32 get_ResultState()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTCHECKYOSTARRESPONSE_GET_RESULTSTATE_OFFSET))(nullptr);
		}

		::System::String* get_SignedIV()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTCHECKYOSTARRESPONSE_GET_SIGNEDIV_OFFSET))(nullptr);
		}

		::System::String* get_ResultMessag()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTCHECKYOSTARRESPONSE_GET_RESULTMESSAG_OFFSET))(nullptr);
		}

	};
}

