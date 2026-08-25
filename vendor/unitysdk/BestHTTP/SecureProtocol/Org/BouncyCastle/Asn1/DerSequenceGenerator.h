#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Encodable; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERSEQUENCEGENERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x7DA860)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERSEQUENCEGENERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x7DA8E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERSEQUENCEGENERATOR_ADDOBJECT_OFFSET UNITYSDK_OFFSET(0x7DA970)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERSEQUENCEGENERATOR_GETRAWOUTPUTSTREAM_OFFSET UNITYSDK_OFFSET(0x7DA9F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERSEQUENCEGENERATOR_CLOSE_OFFSET UNITYSDK_OFFSET(0x7DAA00)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1
{
	inline static constexpr unsigned int DerSequenceGenerator_TypeDefinitionIndex = 22805;

	class DerSequenceGenerator : public Il2CppObject
	{
	public:
		::System::IO::MemoryStream* _bOut; // 0x20

		::System::Void .ctor(::System::IO::Stream* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERSEQUENCEGENERATOR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::IO::Stream* arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERSEQUENCEGENERATOR_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void AddObject(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERSEQUENCEGENERATOR_ADDOBJECT_OFFSET))(arg, nullptr);
		}

		::System::IO::Stream* GetRawOutputStream()
		{
			return (return (::System::IO::Stream*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERSEQUENCEGENERATOR_GETRAWOUTPUTSTREAM_OFFSET))(nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERSEQUENCEGENERATOR_CLOSE_OFFSET))(nullptr);
		}

	};
}

