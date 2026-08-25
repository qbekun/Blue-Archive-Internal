#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Object; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1EncodableVector; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DefiniteLengthInputStream; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerSequence; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerSet; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ASN1INPUTSTREAM_FINDLIMIT_OFFSET UNITYSDK_OFFSET(0x7C5920)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ASN1INPUTSTREAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x7C5A40)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ASN1INPUTSTREAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x7B6730)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ASN1INPUTSTREAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x7B6440)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ASN1INPUTSTREAM_BUILDOBJECT_OFFSET UNITYSDK_OFFSET(0x7C5AB0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ASN1INPUTSTREAM_READVECTOR_OFFSET UNITYSDK_OFFSET(0x7C64C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ASN1INPUTSTREAM_CREATEDERSEQUENCE_OFFSET UNITYSDK_OFFSET(0x7C66C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ASN1INPUTSTREAM_CREATEDERSET_OFFSET UNITYSDK_OFFSET(0x7C6730)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ASN1INPUTSTREAM_READOBJECT_OFFSET UNITYSDK_OFFSET(0x7B67A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ASN1INPUTSTREAM_GET_LIMIT_OFFSET UNITYSDK_OFFSET(0x7C6B20)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ASN1INPUTSTREAM_READTAGNUMBER_OFFSET UNITYSDK_OFFSET(0x7C67A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ASN1INPUTSTREAM_READLENGTH_OFFSET UNITYSDK_OFFSET(0x7C68C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ASN1INPUTSTREAM_GETBUFFER_OFFSET UNITYSDK_OFFSET(0x7C6B30)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ASN1INPUTSTREAM_GETBMPCHARBUFFER_OFFSET UNITYSDK_OFFSET(0x7C6C20)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ASN1INPUTSTREAM_CREATEPRIMITIVEDEROBJECT_OFFSET UNITYSDK_OFFSET(0x7C5F40)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1
{
	inline static constexpr unsigned int Asn1InputStream_TypeDefinitionIndex = 22746;

	class Asn1InputStream : public Il2CppObject
	{
	public:
		::System::Int32 limit; // 0x30
		::Il2CppArray<::System::Object*>* tmpBuffers; // 0x38

		::System::Int32 FindLimit(::System::IO::Stream* arg)
		{
			return (return (::System::Int32(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ASN1INPUTSTREAM_FINDLIMIT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::IO::Stream* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ASN1INPUTSTREAM_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::IO::Stream* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ASN1INPUTSTREAM_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ASN1INPUTSTREAM_.CTOR_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* BuildObject(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object*(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ASN1INPUTSTREAM_BUILDOBJECT_OFFSET))(arg, arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1EncodableVector* ReadVector(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DefiniteLengthInputStream* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1EncodableVector*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DefiniteLengthInputStream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ASN1INPUTSTREAM_READVECTOR_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerSequence* CreateDerSequence(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DefiniteLengthInputStream* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerSequence*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DefiniteLengthInputStream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ASN1INPUTSTREAM_CREATEDERSEQUENCE_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerSet* CreateDerSet(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DefiniteLengthInputStream* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerSet*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DefiniteLengthInputStream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ASN1INPUTSTREAM_CREATEDERSET_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* ReadObject()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ASN1INPUTSTREAM_READOBJECT_OFFSET))(nullptr);
		}

		::System::Int32 get_Limit()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ASN1INPUTSTREAM_GET_LIMIT_OFFSET))(nullptr);
		}

		::System::Int32 ReadTagNumber(::System::IO::Stream* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::IO::Stream*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ASN1INPUTSTREAM_READTAGNUMBER_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 ReadLength(::System::IO::Stream* arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (::System::Int32(*)(::System::IO::Stream*, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ASN1INPUTSTREAM_READLENGTH_OFFSET))(arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetBuffer(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DefiniteLengthInputStream* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DefiniteLengthInputStream*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ASN1INPUTSTREAM_GETBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetBmpCharBuffer(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DefiniteLengthInputStream* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DefiniteLengthInputStream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ASN1INPUTSTREAM_GETBMPCHARBUFFER_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* CreatePrimitiveDerObject(::System::Int32 arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DefiniteLengthInputStream* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object*(*)(::System::Int32, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DefiniteLengthInputStream*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ASN1INPUTSTREAM_CREATEPRIMITIVEDEROBJECT_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

