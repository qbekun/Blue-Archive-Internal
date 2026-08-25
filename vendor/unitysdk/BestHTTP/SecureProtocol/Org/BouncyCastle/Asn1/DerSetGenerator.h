#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Encodable; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERSETGENERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x7DAD10)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERSETGENERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x7DAD90)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERSETGENERATOR_ADDOBJECT_OFFSET UNITYSDK_OFFSET(0x7DAE20)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERSETGENERATOR_GETRAWOUTPUTSTREAM_OFFSET UNITYSDK_OFFSET(0x7DAEA0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERSETGENERATOR_CLOSE_OFFSET UNITYSDK_OFFSET(0x7DAEB0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1
{
	inline static constexpr unsigned int DerSetGenerator_TypeDefinitionIndex = 22808;

	class DerSetGenerator : public Il2CppObject
	{
	public:
		::System::IO::MemoryStream* _bOut; // 0x20

		::System::Void .ctor(::System::IO::Stream* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERSETGENERATOR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::IO::Stream* arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERSETGENERATOR_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void AddObject(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERSETGENERATOR_ADDOBJECT_OFFSET))(arg, nullptr);
		}

		::System::IO::Stream* GetRawOutputStream()
		{
			return (return (::System::IO::Stream*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERSETGENERATOR_GETRAWOUTPUTSTREAM_OFFSET))(nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERSETGENERATOR_CLOSE_OFFSET))(nullptr);
		}

	};
}

