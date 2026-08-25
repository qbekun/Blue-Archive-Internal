#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Object; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509KEYUSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x767250)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509KEYUSAGE_TOASN1OBJECT_OFFSET UNITYSDK_OFFSET(0x767270)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::X509
{
	inline static constexpr unsigned int X509KeyUsage_TypeDefinitionIndex = 21544;

	class X509KeyUsage : public ::UnityEngine::ParticleSystemRenderer
	{
	public:
		::System::Int32 DigitalSignature; // 0x0
		::System::Int32 NonRepudiation; // 0x0
		::System::Int32 KeyEncipherment; // 0x0
		::System::Int32 DataEncipherment; // 0x0
		::System::Int32 KeyAgreement; // 0x0
		::System::Int32 KeyCertSign; // 0x0
		::System::Int32 CrlSign; // 0x0
		::System::Int32 EncipherOnly; // 0x0
		::System::Int32 DecipherOnly; // 0x0
		::System::Int32 usage; // 0x10

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509KEYUSAGE_.CTOR_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509KEYUSAGE_TOASN1OBJECT_OFFSET))(nullptr);
		}

	};
}

