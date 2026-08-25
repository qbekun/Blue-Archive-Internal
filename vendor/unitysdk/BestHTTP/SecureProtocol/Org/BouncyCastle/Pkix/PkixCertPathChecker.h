#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections { class ISet; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::X509 { class X509Certificate; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCERTPATHCHECKER_CLONE_OFFSET UNITYSDK_OFFSET(0x94F690)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCERTPATHCHECKER_.CTOR_OFFSET UNITYSDK_OFFSET(0x94F6A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCERTPATHCHECKER_GETSUPPORTEDEXTENSIONS_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCERTPATHCHECKER_INIT_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCERTPATHCHECKER_ISFORWARDCHECKINGSUPPORTED_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCERTPATHCHECKER_CHECK_OFFSET UNITYSDK_OFFSET(0x000000)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix
{
	inline static constexpr unsigned int PkixCertPathChecker_TypeDefinitionIndex = 21660;

	class PkixCertPathChecker : public Il2CppObject
	{
	public:
		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCERTPATHCHECKER_CLONE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCERTPATHCHECKER_.CTOR_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* GetSupportedExtensions()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCERTPATHCHECKER_GETSUPPORTEDEXTENSIONS_OFFSET))(nullptr);
		}

		::System::Void Init(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCERTPATHCHECKER_INIT_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsForwardCheckingSupported()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCERTPATHCHECKER_ISFORWARDCHECKINGSUPPORTED_OFFSET))(nullptr);
		}

		::System::Void Check(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCERTPATHCHECKER_CHECK_OFFSET))(arg, arg, nullptr);
		}

	};
}

