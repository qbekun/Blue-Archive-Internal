#pragma once
#include "unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class AlgorithmIdentifier; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class IBufferedCipher; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms { class CmsReadable; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters { class KeyParameter; }

#define CMSENVELOPEDSECUREREADABLE_GET_CRYPTOOBJECT_OFFSET UNITYSDK_OFFSET(0x7964B0)
#define CMSENVELOPEDSECUREREADABLE_GETREADABLE_OFFSET UNITYSDK_OFFSET(0x7964C0)
#define CMSENVELOPEDSECUREREADABLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x790BC0)
#define CMSENVELOPEDSECUREREADABLE_GET_ALGORITHM_OFFSET UNITYSDK_OFFSET(0x796B30)

	inline static constexpr unsigned int CmsEnvelopedSecureReadable_TypeDefinitionIndex = 22687;

	class CmsEnvelopedSecureReadable : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algorithm; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBufferedCipher* cipher; // 0x18
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsReadable* readable; // 0x20

		::System::Object* get_CryptoObject()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CMSENVELOPEDSECUREREADABLE_GET_CRYPTOOBJECT_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsReadable* GetReadable(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::KeyParameter* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsReadable*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::KeyParameter*, ::PVOID))((::PBYTE)hIl2Cpp + CMSENVELOPEDSECUREREADABLE_GETREADABLE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsReadable* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsReadable*, ::PVOID))((::PBYTE)hIl2Cpp + CMSENVELOPEDSECUREREADABLE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_Algorithm()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + CMSENVELOPEDSECUREREADABLE_GET_ALGORITHM_OFFSET))(nullptr);
		}

	};

