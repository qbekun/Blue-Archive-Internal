#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Encodable; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_BERGENERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x7CC8E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_BERGENERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x7CC8F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_BERGENERATOR_ADDOBJECT_OFFSET UNITYSDK_OFFSET(0x7CC920)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_BERGENERATOR_GETRAWOUTPUTSTREAM_OFFSET UNITYSDK_OFFSET(0x7CC9B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_BERGENERATOR_CLOSE_OFFSET UNITYSDK_OFFSET(0x7CC9C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_BERGENERATOR_WRITEHDR_OFFSET UNITYSDK_OFFSET(0x7CCA70)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_BERGENERATOR_WRITEBERHEADER_OFFSET UNITYSDK_OFFSET(0x7CCAC0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_BERGENERATOR_WRITEBERBODY_OFFSET UNITYSDK_OFFSET(0x7CCBA0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_BERGENERATOR_WRITEBEREND_OFFSET UNITYSDK_OFFSET(0x7CC9D0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1
{
	inline static constexpr unsigned int BerGenerator_TypeDefinitionIndex = 22767;

	class BerGenerator : public JobBurstSchedulableProducer`1
	{
	public:
		::System::Boolean _tagged; // 0x18
		::System::Boolean _isExplicit; // 0x19
		::System::Int32 _tagNo; // 0x1C

		::System::Void .ctor(::System::IO::Stream* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_BERGENERATOR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::IO::Stream* arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_BERGENERATOR_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void AddObject(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_BERGENERATOR_ADDOBJECT_OFFSET))(arg, nullptr);
		}

		::System::IO::Stream* GetRawOutputStream()
		{
			return (return (::System::IO::Stream*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_BERGENERATOR_GETRAWOUTPUTSTREAM_OFFSET))(nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_BERGENERATOR_CLOSE_OFFSET))(nullptr);
		}

		::System::Void WriteHdr(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_BERGENERATOR_WRITEHDR_OFFSET))(arg, nullptr);
		}

		::System::Void WriteBerHeader(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_BERGENERATOR_WRITEBERHEADER_OFFSET))(arg, nullptr);
		}

		::System::Void WriteBerBody(::System::IO::Stream* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_BERGENERATOR_WRITEBERBODY_OFFSET))(arg, nullptr);
		}

		::System::Void WriteBerEnd()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_BERGENERATOR_WRITEBEREND_OFFSET))(nullptr);
		}

	};
}

