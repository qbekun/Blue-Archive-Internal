#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_PUBLICKEY_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B079A0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_PUBLICKEY_GET_ENCODEDKEYVALUE_OFFSET UNITYSDK_OFFSET(0x9B07B60)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_PUBLICKEY_GET_ENCODEDPARAMETERS_OFFSET UNITYSDK_OFFSET(0x9B07B70)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_PUBLICKEY_GET_KEY_OFFSET UNITYSDK_OFFSET(0x9B07B80)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_PUBLICKEY_GET_OID_OFFSET UNITYSDK_OFFSET(0x9B088A0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_PUBLICKEY_GETUNSIGNEDBIGINTEGER_OFFSET UNITYSDK_OFFSET(0x9B088B0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_PUBLICKEY_DECODEDSA_OFFSET UNITYSDK_OFFSET(0x9B081B0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_PUBLICKEY_DECODERSA_OFFSET UNITYSDK_OFFSET(0x9B07D30)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_PUBLICKEY_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9B08940)

namespace System::Security::Cryptography::X509Certificates
{
	inline static constexpr unsigned int PublicKey_TypeDefinitionIndex = 29287;

	class PublicKey : public Il2CppObject
	{
	public:
		::System::Security::Cryptography::AsnEncodedData* _keyValue; // 0x10
		::System::Security::Cryptography::AsnEncodedData* _params; // 0x18
		::System::Security::Cryptography::Oid* _oid; // 0x20
		::Il2CppArray<::System::Object*>* Empty; // 0x0

		::System::Void .ctor(::System::Security::Cryptography::Oid* arg, ::System::Security::Cryptography::AsnEncodedData* arg, ::System::Security::Cryptography::AsnEncodedData* arg)
		{
			((::System::Void(*)(::System::Security::Cryptography::Oid*, ::System::Security::Cryptography::AsnEncodedData*, ::System::Security::Cryptography::AsnEncodedData*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_PUBLICKEY_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Security::Cryptography::AsnEncodedData* get_EncodedKeyValue()
		{
			return (return (::System::Security::Cryptography::AsnEncodedData*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_PUBLICKEY_GET_ENCODEDKEYVALUE_OFFSET))(nullptr);
		}

		::System::Security::Cryptography::AsnEncodedData* get_EncodedParameters()
		{
			return (return (::System::Security::Cryptography::AsnEncodedData*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_PUBLICKEY_GET_ENCODEDPARAMETERS_OFFSET))(nullptr);
		}

		::System::Security::Cryptography::AsymmetricAlgorithm* get_Key()
		{
			return (return (::System::Security::Cryptography::AsymmetricAlgorithm*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_PUBLICKEY_GET_KEY_OFFSET))(nullptr);
		}

		::System::Security::Cryptography::Oid* get_Oid()
		{
			return (return (::System::Security::Cryptography::Oid*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_PUBLICKEY_GET_OID_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetUnsignedBigInteger(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_PUBLICKEY_GETUNSIGNEDBIGINTEGER_OFFSET))(arg, nullptr);
		}

		::System::Security::Cryptography::DSA* DecodeDSA(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Security::Cryptography::DSA*(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_PUBLICKEY_DECODEDSA_OFFSET))(arg, arg, nullptr);
		}

		::System::Security::Cryptography::RSA* DecodeRSA(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Security::Cryptography::RSA*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_PUBLICKEY_DECODERSA_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_PUBLICKEY_.CCTOR_OFFSET))(nullptr);
		}

	};
}

