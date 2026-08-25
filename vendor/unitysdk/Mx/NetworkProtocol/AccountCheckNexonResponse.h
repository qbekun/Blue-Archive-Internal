#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ACCOUNTCHECKNEXONRESPONSE_SET_ENCRYPTEDIV_OFFSET UNITYSDK_OFFSET(0xF108F0)
#define MX_NETWORKPROTOCOL_ACCOUNTCHECKNEXONRESPONSE_GET_RESULTMESSAGE_OFFSET UNITYSDK_OFFSET(0xF10900)
#define MX_NETWORKPROTOCOL_ACCOUNTCHECKNEXONRESPONSE_SET_RESULTMESSAGE_OFFSET UNITYSDK_OFFSET(0xF10910)
#define MX_NETWORKPROTOCOL_ACCOUNTCHECKNEXONRESPONSE_GET_ENCRYPTEDIV_OFFSET UNITYSDK_OFFSET(0xF10920)
#define MX_NETWORKPROTOCOL_ACCOUNTCHECKNEXONRESPONSE_GET_SIGNEDIV_OFFSET UNITYSDK_OFFSET(0xF10930)
#define MX_NETWORKPROTOCOL_ACCOUNTCHECKNEXONRESPONSE_SET_SIGNEDIV_OFFSET UNITYSDK_OFFSET(0xF10940)
#define MX_NETWORKPROTOCOL_ACCOUNTCHECKNEXONRESPONSE_SET_RESULTSTATE_OFFSET UNITYSDK_OFFSET(0xF10950)
#define MX_NETWORKPROTOCOL_ACCOUNTCHECKNEXONRESPONSE_SET_ENCRYPTEDKEY_OFFSET UNITYSDK_OFFSET(0xF10960)
#define MX_NETWORKPROTOCOL_ACCOUNTCHECKNEXONRESPONSE_SET_SIGNEDKEY_OFFSET UNITYSDK_OFFSET(0xF10970)
#define MX_NETWORKPROTOCOL_ACCOUNTCHECKNEXONRESPONSE_GET_RESULTSTATE_OFFSET UNITYSDK_OFFSET(0xF10980)
#define MX_NETWORKPROTOCOL_ACCOUNTCHECKNEXONRESPONSE_GET_ENCRYPTEDKEY_OFFSET UNITYSDK_OFFSET(0xF10990)
#define MX_NETWORKPROTOCOL_ACCOUNTCHECKNEXONRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF109A0)
#define MX_NETWORKPROTOCOL_ACCOUNTCHECKNEXONRESPONSE_GET_BIRTH_OFFSET UNITYSDK_OFFSET(0xF10A60)
#define MX_NETWORKPROTOCOL_ACCOUNTCHECKNEXONRESPONSE_GET_SIGNEDKEY_OFFSET UNITYSDK_OFFSET(0xF10A70)
#define MX_NETWORKPROTOCOL_ACCOUNTCHECKNEXONRESPONSE_SET_BIRTH_OFFSET UNITYSDK_OFFSET(0xF10A80)
#define MX_NETWORKPROTOCOL_ACCOUNTCHECKNEXONRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF10A90)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int AccountCheckNexonResponse_TypeDefinitionIndex = 11274;

	class AccountCheckNexonResponse : public Il2CppObject
	{
	public:
		::System::Int32 _ResultState_k__BackingField; // 0x50
		::System::String* _ResultMessage_k__BackingField; // 0x58
		::System::String* _Birth_k__BackingField; // 0x60
		::System::String* _EncryptedKey_k__BackingField; // 0x68
		::System::String* _SignedKey_k__BackingField; // 0x70
		::System::String* _EncryptedIV_k__BackingField; // 0x78
		::System::String* _SignedIV_k__BackingField; // 0x80

		::System::Void set_EncryptedIV(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTCHECKNEXONRESPONSE_SET_ENCRYPTEDIV_OFFSET))(str, nullptr);
		}

		::System::String* get_ResultMessage()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTCHECKNEXONRESPONSE_GET_RESULTMESSAGE_OFFSET))(nullptr);
		}

		::System::Void set_ResultMessage(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTCHECKNEXONRESPONSE_SET_RESULTMESSAGE_OFFSET))(str, nullptr);
		}

		::System::String* get_EncryptedIV()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTCHECKNEXONRESPONSE_GET_ENCRYPTEDIV_OFFSET))(nullptr);
		}

		::System::String* get_SignedIV()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTCHECKNEXONRESPONSE_GET_SIGNEDIV_OFFSET))(nullptr);
		}

		::System::Void set_SignedIV(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTCHECKNEXONRESPONSE_SET_SIGNEDIV_OFFSET))(str, nullptr);
		}

		::System::Void set_ResultState(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTCHECKNEXONRESPONSE_SET_RESULTSTATE_OFFSET))(arg, nullptr);
		}

		::System::Void set_EncryptedKey(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTCHECKNEXONRESPONSE_SET_ENCRYPTEDKEY_OFFSET))(str, nullptr);
		}

		::System::Void set_SignedKey(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTCHECKNEXONRESPONSE_SET_SIGNEDKEY_OFFSET))(str, nullptr);
		}

		::System::Int32 get_ResultState()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTCHECKNEXONRESPONSE_GET_RESULTSTATE_OFFSET))(nullptr);
		}

		::System::String* get_EncryptedKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTCHECKNEXONRESPONSE_GET_ENCRYPTEDKEY_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTCHECKNEXONRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::String* get_Birth()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTCHECKNEXONRESPONSE_GET_BIRTH_OFFSET))(nullptr);
		}

		::System::String* get_SignedKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTCHECKNEXONRESPONSE_GET_SIGNEDKEY_OFFSET))(nullptr);
		}

		::System::Void set_Birth(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTCHECKNEXONRESPONSE_SET_BIRTH_OFFSET))(str, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTCHECKNEXONRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

