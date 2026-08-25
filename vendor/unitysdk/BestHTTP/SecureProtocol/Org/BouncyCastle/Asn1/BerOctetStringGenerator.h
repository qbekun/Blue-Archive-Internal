#pragma once
#include "../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_BEROCTETSTRINGGENERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x7CDD40)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_BEROCTETSTRINGGENERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x7CDD70)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_BEROCTETSTRINGGENERATOR_GETOCTETOUTPUTSTREAM_OFFSET UNITYSDK_OFFSET(0x7CDDB0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_BEROCTETSTRINGGENERATOR_GETOCTETOUTPUTSTREAM_OFFSET UNITYSDK_OFFSET(0x7CDEA0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_BEROCTETSTRINGGENERATOR_GETOCTETOUTPUTSTREAM_OFFSET UNITYSDK_OFFSET(0x7CDE40)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1
{
	inline static constexpr unsigned int BerOctetStringGenerator_TypeDefinitionIndex = 22771;

	class BerOctetStringGenerator : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::IO::Stream* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_BEROCTETSTRINGGENERATOR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::IO::Stream* arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_BEROCTETSTRINGGENERATOR_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::IO::Stream* GetOctetOutputStream()
		{
			return (return (::System::IO::Stream*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_BEROCTETSTRINGGENERATOR_GETOCTETOUTPUTSTREAM_OFFSET))(nullptr);
		}

		::System::IO::Stream* GetOctetOutputStream(::System::Int32 arg)
		{
			return (return (::System::IO::Stream*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_BEROCTETSTRINGGENERATOR_GETOCTETOUTPUTSTREAM_OFFSET))(arg, nullptr);
		}

		::System::IO::Stream* GetOctetOutputStream(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::IO::Stream*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_BEROCTETSTRINGGENERATOR_GETOCTETOUTPUTSTREAM_OFFSET))(arg, nullptr);
		}

	};
}

