#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Object; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerApplicationSpecific; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Encodable; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_UTILITIES_ASN1DUMP_.CTOR_OFFSET UNITYSDK_OFFSET(0x817440)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_UTILITIES_ASN1DUMP_ASSTRING_OFFSET UNITYSDK_OFFSET(0x817450)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_UTILITIES_ASN1DUMP_OUTPUTAPPLICATIONSPECIFIC_OFFSET UNITYSDK_OFFSET(0x819EE0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_UTILITIES_ASN1DUMP_DUMPASSTRING_OFFSET UNITYSDK_OFFSET(0x81A970)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_UTILITIES_ASN1DUMP_DUMPASSTRING_OFFSET UNITYSDK_OFFSET(0x81AAF0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_UTILITIES_ASN1DUMP_DUMPASSTRING_OFFSET UNITYSDK_OFFSET(0x81AB40)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_UTILITIES_ASN1DUMP_DUMPBINARYDATAASSTRING_OFFSET UNITYSDK_OFFSET(0x819C60)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_UTILITIES_ASN1DUMP_CALCULATEASCSTRING_OFFSET UNITYSDK_OFFSET(0x81AC10)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_UTILITIES_ASN1DUMP_.CCTOR_OFFSET UNITYSDK_OFFSET(0x81AD00)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Utilities
{
	inline static constexpr unsigned int Asn1Dump_TypeDefinitionIndex = 22956;

	class Asn1Dump : public Il2CppObject
	{
	public:
		::System::String* NewLine; // 0x0
		::System::String* Tab; // 0x0
		::System::Int32 SampleSize; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_UTILITIES_ASN1DUMP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void AsString(::System::String* str, ::System::Boolean arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* arg, ::System::Text::StringBuilder* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object*, ::System::Text::StringBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_UTILITIES_ASN1DUMP_ASSTRING_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::String* outputApplicationSpecific(::System::String* str, ::System::String* str, ::System::Boolean arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerApplicationSpecific* arg)
		{
			return (return (::System::String*(*)(::System::String*, ::System::String*, ::System::Boolean, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerApplicationSpecific*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_UTILITIES_ASN1DUMP_OUTPUTAPPLICATIONSPECIFIC_OFFSET))(str, str, arg, arg, nullptr);
		}

		::System::String* DumpAsString(::System::Object* arg)
		{
			return (return (::System::String*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_UTILITIES_ASN1DUMP_DUMPASSTRING_OFFSET))(arg, nullptr);
		}

		::System::String* DumpAsString(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable* arg)
		{
			return (return (::System::String*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_UTILITIES_ASN1DUMP_DUMPASSTRING_OFFSET))(arg, nullptr);
		}

		::System::String* DumpAsString(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable* arg, ::System::Boolean arg)
		{
			return (return (::System::String*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_UTILITIES_ASN1DUMP_DUMPASSTRING_OFFSET))(arg, arg, nullptr);
		}

		::System::String* dumpBinaryDataAsString(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::String*(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_UTILITIES_ASN1DUMP_DUMPBINARYDATAASSTRING_OFFSET))(str, arg, nullptr);
		}

		::System::String* calculateAscString(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::String*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_UTILITIES_ASN1DUMP_CALCULATEASCSTRING_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_UTILITIES_ASN1DUMP_.CCTOR_OFFSET))(nullptr);
		}

	};
}

