#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerObjectIdentifier; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerInteger; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Object; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1EncodableVector; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerTaggedObject; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerOutputStream; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Encodable; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DEREXTERNAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x7D4480)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DEREXTERNAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x7D4950)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DEREXTERNAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x7D49C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DEREXTERNAL_ENCODE_OFFSET UNITYSDK_OFFSET(0x7D4A70)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DEREXTERNAL_ASN1GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7D4CA0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DEREXTERNAL_ASN1EQUALS_OFFSET UNITYSDK_OFFSET(0x7D4D30)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DEREXTERNAL_GET_DATAVALUEDESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x7D4E20)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DEREXTERNAL_SET_DATAVALUEDESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x7D4E30)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DEREXTERNAL_GET_DIRECTREFERENCE_OFFSET UNITYSDK_OFFSET(0x7D4E40)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DEREXTERNAL_SET_DIRECTREFERENCE_OFFSET UNITYSDK_OFFSET(0x7D4E50)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DEREXTERNAL_GET_ENCODING_OFFSET UNITYSDK_OFFSET(0x7D4E60)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DEREXTERNAL_SET_ENCODING_OFFSET UNITYSDK_OFFSET(0x7D48C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DEREXTERNAL_GET_EXTERNALCONTENT_OFFSET UNITYSDK_OFFSET(0x7D4E70)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DEREXTERNAL_SET_EXTERNALCONTENT_OFFSET UNITYSDK_OFFSET(0x7D4E80)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DEREXTERNAL_GET_INDIRECTREFERENCE_OFFSET UNITYSDK_OFFSET(0x7D4E90)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DEREXTERNAL_SET_INDIRECTREFERENCE_OFFSET UNITYSDK_OFFSET(0x7D4EA0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DEREXTERNAL_GETOBJFROMVECTOR_OFFSET UNITYSDK_OFFSET(0x7D4810)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DEREXTERNAL_WRITEENCODABLE_OFFSET UNITYSDK_OFFSET(0x7D4C40)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1
{
	inline static constexpr unsigned int DerExternal_TypeDefinitionIndex = 22789;

	class DerExternal : public ::Unity::Jobs::IJobParallelForBurstSchedulable
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* directReference; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerInteger* indirectReference; // 0x18
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* dataValueDescriptor; // 0x20
		::System::Int32 encoding; // 0x28
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* externalContent; // 0x30

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1EncodableVector* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1EncodableVector*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DEREXTERNAL_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerInteger* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerTaggedObject* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerInteger*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerTaggedObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DEREXTERNAL_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerInteger* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* arg, ::System::Int32 arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerInteger*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object*, ::System::Int32, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DEREXTERNAL_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Encode(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerOutputStream* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerOutputStream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DEREXTERNAL_ENCODE_OFFSET))(arg, nullptr);
		}

		::System::Int32 Asn1GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DEREXTERNAL_ASN1GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean Asn1Equals(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* arg)
		{
			return (return (::System::Boolean(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DEREXTERNAL_ASN1EQUALS_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* get_DataValueDescriptor()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DEREXTERNAL_GET_DATAVALUEDESCRIPTOR_OFFSET))(nullptr);
		}

		::System::Void set_DataValueDescriptor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DEREXTERNAL_SET_DATAVALUEDESCRIPTOR_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* get_DirectReference()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DEREXTERNAL_GET_DIRECTREFERENCE_OFFSET))(nullptr);
		}

		::System::Void set_DirectReference(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DEREXTERNAL_SET_DIRECTREFERENCE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Encoding()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DEREXTERNAL_GET_ENCODING_OFFSET))(nullptr);
		}

		::System::Void set_Encoding(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DEREXTERNAL_SET_ENCODING_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* get_ExternalContent()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DEREXTERNAL_GET_EXTERNALCONTENT_OFFSET))(nullptr);
		}

		::System::Void set_ExternalContent(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DEREXTERNAL_SET_EXTERNALCONTENT_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerInteger* get_IndirectReference()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerInteger*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DEREXTERNAL_GET_INDIRECTREFERENCE_OFFSET))(nullptr);
		}

		::System::Void set_IndirectReference(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerInteger* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerInteger*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DEREXTERNAL_SET_INDIRECTREFERENCE_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* GetObjFromVector(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1EncodableVector* arg, ::System::Int32 arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1EncodableVector*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DEREXTERNAL_GETOBJFROMVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void WriteEncodable(::System::IO::MemoryStream* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable* arg)
		{
			((::System::Void(*)(::System::IO::MemoryStream*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DEREXTERNAL_WRITEENCODABLE_OFFSET))(arg, arg, nullptr);
		}

	};
}

