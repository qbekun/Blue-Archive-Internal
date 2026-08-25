#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class AlgorithmIdentifier; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters { class KeyParameter; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_PKCS5SCHEME2UTF8PBEKEY_.CTOR_OFFSET UNITYSDK_OFFSET(0x7BEAE0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_PKCS5SCHEME2UTF8PBEKEY_.CTOR_OFFSET UNITYSDK_OFFSET(0x7BEB50)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_PKCS5SCHEME2UTF8PBEKEY_.CTOR_OFFSET UNITYSDK_OFFSET(0x7BEB30)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_PKCS5SCHEME2UTF8PBEKEY_.CTOR_OFFSET UNITYSDK_OFFSET(0x7BEB90)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_PKCS5SCHEME2UTF8PBEKEY_GETENCODED_OFFSET UNITYSDK_OFFSET(0x7BEBA0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms
{
	inline static constexpr unsigned int Pkcs5Scheme2Utf8PbeKey_TypeDefinitionIndex = 22730;

	class Pkcs5Scheme2Utf8PbeKey : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::String* str, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_PKCS5SCHEME2UTF8PBEKEY_.CTOR_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* arg)
		{
			((::System::Void(*)(::System::String*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_PKCS5SCHEME2UTF8PBEKEY_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_PKCS5SCHEME2UTF8PBEKEY_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_PKCS5SCHEME2UTF8PBEKEY_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::KeyParameter* GetEncoded(::System::String* str)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::KeyParameter*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_PKCS5SCHEME2UTF8PBEKEY_GETENCODED_OFFSET))(str, nullptr);
		}

	};
}

