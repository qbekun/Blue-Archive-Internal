#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerBitString; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_MISC_NETSCAPECERTTYPE_.CTOR_OFFSET UNITYSDK_OFFSET(0x846C70)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_MISC_NETSCAPECERTTYPE_.CTOR_OFFSET UNITYSDK_OFFSET(0x846CC0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_MISC_NETSCAPECERTTYPE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x846D50)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Misc
{
	inline static constexpr unsigned int NetscapeCertType_TypeDefinitionIndex = 23076;

	class NetscapeCertType : public Il2CppObject
	{
	public:
		::System::Int32 SslClient; // 0x0
		::System::Int32 SslServer; // 0x0
		::System::Int32 Smime; // 0x0
		::System::Int32 ObjectSigning; // 0x0
		::System::Int32 Reserved; // 0x0
		::System::Int32 SslCA; // 0x0
		::System::Int32 SmimeCA; // 0x0
		::System::Int32 ObjectSigningCA; // 0x0

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_MISC_NETSCAPECERTTYPE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerBitString* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerBitString*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_MISC_NETSCAPECERTTYPE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_MISC_NETSCAPECERTTYPE_TOSTRING_OFFSET))(nullptr);
		}

	};
}

