#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC { class ECFieldElement; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC { class ECCurve; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math { class BigInteger; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X9_X9INTEGERCONVERTER_GETBYTELENGTH_OFFSET UNITYSDK_OFFSET(0x7E8190)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X9_X9INTEGERCONVERTER_GETBYTELENGTH_OFFSET UNITYSDK_OFFSET(0x7E81D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X9_X9INTEGERCONVERTER_INTEGERTOBYTES_OFFSET UNITYSDK_OFFSET(0x7E8210)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X9_X9INTEGERCONVERTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x7E82F0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9
{
	inline static constexpr unsigned int X9IntegerConverter_TypeDefinitionIndex = 22865;

	class X9IntegerConverter : public Il2CppObject
	{
	public:
		::System::Int32 GetByteLength(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement* arg)
		{
			return (return (::System::Int32(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X9_X9INTEGERCONVERTER_GETBYTELENGTH_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetByteLength(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECCurve* arg)
		{
			return (return (::System::Int32(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECCurve*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X9_X9INTEGERCONVERTER_GETBYTELENGTH_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* IntegerToBytes(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg, ::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X9_X9INTEGERCONVERTER_INTEGERTOBYTES_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X9_X9INTEGERCONVERTER_.CTOR_OFFSET))(nullptr);
		}

	};
}

