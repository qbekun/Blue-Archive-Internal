#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Encodable; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Object; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DEROUTPUTSTREAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x7C7E10)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DEROUTPUTSTREAM_WRITELENGTH_OFFSET UNITYSDK_OFFSET(0x7D9FB0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DEROUTPUTSTREAM_WRITEENCODED_OFFSET UNITYSDK_OFFSET(0x7D2540)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DEROUTPUTSTREAM_WRITEENCODED_OFFSET UNITYSDK_OFFSET(0x7CC6E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DEROUTPUTSTREAM_WRITEENCODED_OFFSET UNITYSDK_OFFSET(0x7D9D30)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DEROUTPUTSTREAM_WRITETAG_OFFSET UNITYSDK_OFFSET(0x7D0800)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DEROUTPUTSTREAM_WRITEENCODED_OFFSET UNITYSDK_OFFSET(0x7D1B20)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DEROUTPUTSTREAM_WRITENULL_OFFSET UNITYSDK_OFFSET(0x7C7F90)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DEROUTPUTSTREAM_WRITEOBJECT_OFFSET UNITYSDK_OFFSET(0x7DA050)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DEROUTPUTSTREAM_WRITEOBJECT_OFFSET UNITYSDK_OFFSET(0x7DA1C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DEROUTPUTSTREAM_WRITEOBJECT_OFFSET UNITYSDK_OFFSET(0x7DA250)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1
{
	inline static constexpr unsigned int DerOutputStream_TypeDefinitionIndex = 22802;

	class DerOutputStream : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::IO::Stream* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DEROUTPUTSTREAM_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void WriteLength(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DEROUTPUTSTREAM_WRITELENGTH_OFFSET))(arg, nullptr);
		}

		::System::Void WriteEncoded(::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DEROUTPUTSTREAM_WRITEENCODED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void WriteEncoded(::System::Int32 arg, ::System::Byte arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Byte, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DEROUTPUTSTREAM_WRITEENCODED_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void WriteEncoded(::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DEROUTPUTSTREAM_WRITEENCODED_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void WriteTag(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DEROUTPUTSTREAM_WRITETAG_OFFSET))(arg, arg, nullptr);
		}

		::System::Void WriteEncoded(::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DEROUTPUTSTREAM_WRITEENCODED_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void WriteNull()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DEROUTPUTSTREAM_WRITENULL_OFFSET))(nullptr);
		}

		::System::Void WriteObject(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DEROUTPUTSTREAM_WRITEOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Void WriteObject(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DEROUTPUTSTREAM_WRITEOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Void WriteObject(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DEROUTPUTSTREAM_WRITEOBJECT_OFFSET))(arg, nullptr);
		}

	};
}

