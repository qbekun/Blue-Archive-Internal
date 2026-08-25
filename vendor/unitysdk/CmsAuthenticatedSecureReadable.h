#pragma once
#include "unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class AlgorithmIdentifier; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class IMac; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms { class CmsReadable; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters { class KeyParameter; }

#define CMSAUTHENTICATEDSECUREREADABLE_GETREADABLE_OFFSET UNITYSDK_OFFSET(0x795FF0)
#define CMSAUTHENTICATEDSECUREREADABLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x78E100)
#define CMSAUTHENTICATEDSECUREREADABLE_GET_CRYPTOOBJECT_OFFSET UNITYSDK_OFFSET(0x796490)
#define CMSAUTHENTICATEDSECUREREADABLE_GET_ALGORITHM_OFFSET UNITYSDK_OFFSET(0x7964A0)

	inline static constexpr unsigned int CmsAuthenticatedSecureReadable_TypeDefinitionIndex = 22686;

	class CmsAuthenticatedSecureReadable : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algorithm; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IMac* mac; // 0x18
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsReadable* readable; // 0x20

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsReadable* GetReadable(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::KeyParameter* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsReadable*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::KeyParameter*, ::PVOID))((::PBYTE)hIl2Cpp + CMSAUTHENTICATEDSECUREREADABLE_GETREADABLE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsReadable* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsReadable*, ::PVOID))((::PBYTE)hIl2Cpp + CMSAUTHENTICATEDSECUREREADABLE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* get_CryptoObject()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CMSAUTHENTICATEDSECUREREADABLE_GET_CRYPTOOBJECT_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_Algorithm()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + CMSAUTHENTICATEDSECUREREADABLE_GET_ALGORITHM_OFFSET))(nullptr);
		}

	};

