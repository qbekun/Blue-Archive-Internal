#pragma once
#include "unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms { class CmsAuthEnvelopedData; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class AlgorithmIdentifier; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms { class CmsReadable; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters { class KeyParameter; }

#define AUTHENVELOPEDSECUREREADABLE_GET_ALGORITHM_OFFSET UNITYSDK_OFFSET(0x78F590)
#define AUTHENVELOPEDSECUREREADABLE_GETREADABLE_OFFSET UNITYSDK_OFFSET(0x78F5B0)
#define AUTHENVELOPEDSECUREREADABLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x78F560)
#define AUTHENVELOPEDSECUREREADABLE_GET_CRYPTOOBJECT_OFFSET UNITYSDK_OFFSET(0x78F610)

	inline static constexpr unsigned int AuthEnvelopedSecureReadable_TypeDefinitionIndex = 22671;

	class AuthEnvelopedSecureReadable : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsAuthEnvelopedData* parent; // 0x10

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_Algorithm()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + AUTHENVELOPEDSECUREREADABLE_GET_ALGORITHM_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsReadable* GetReadable(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::KeyParameter* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsReadable*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::KeyParameter*, ::PVOID))((::PBYTE)hIl2Cpp + AUTHENVELOPEDSECUREREADABLE_GETREADABLE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsAuthEnvelopedData* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsAuthEnvelopedData*, ::PVOID))((::PBYTE)hIl2Cpp + AUTHENVELOPEDSECUREREADABLE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Object* get_CryptoObject()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + AUTHENVELOPEDSECUREREADABLE_GET_CRYPTOOBJECT_OFFSET))(nullptr);
		}

	};

