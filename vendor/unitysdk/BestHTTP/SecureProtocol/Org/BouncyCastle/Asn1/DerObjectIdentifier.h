#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerObjectIdentifier; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1TaggedObject; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math { class BigInteger; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerOutputStream; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Object; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DEROBJECTIDENTIFIER_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x7D8670)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DEROBJECTIDENTIFIER_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x7D8AD0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DEROBJECTIDENTIFIER_.CTOR_OFFSET UNITYSDK_OFFSET(0x7D8BD0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DEROBJECTIDENTIFIER_.CTOR_OFFSET UNITYSDK_OFFSET(0x7D8DB0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DEROBJECTIDENTIFIER_GET_ID_OFFSET UNITYSDK_OFFSET(0x7D8FF0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DEROBJECTIDENTIFIER_BRANCH_OFFSET UNITYSDK_OFFSET(0x7D9000)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DEROBJECTIDENTIFIER_ON_OFFSET UNITYSDK_OFFSET(0x7D9060)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DEROBJECTIDENTIFIER_.CTOR_OFFSET UNITYSDK_OFFSET(0x7D90F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DEROBJECTIDENTIFIER_WRITEFIELD_OFFSET UNITYSDK_OFFSET(0x7D9480)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DEROBJECTIDENTIFIER_WRITEFIELD_OFFSET UNITYSDK_OFFSET(0x7D9540)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DEROBJECTIDENTIFIER_DOOUTPUT_OFFSET UNITYSDK_OFFSET(0x7D96A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DEROBJECTIDENTIFIER_GETBODY_OFFSET UNITYSDK_OFFSET(0x7D9900)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DEROBJECTIDENTIFIER_ENCODE_OFFSET UNITYSDK_OFFSET(0x7D9A70)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DEROBJECTIDENTIFIER_ASN1GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7D9AA0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DEROBJECTIDENTIFIER_ASN1EQUALS_OFFSET UNITYSDK_OFFSET(0x7D9AD0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DEROBJECTIDENTIFIER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x7D9B60)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DEROBJECTIDENTIFIER_ISVALIDBRANCHID_OFFSET UNITYSDK_OFFSET(0x7D8EE0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DEROBJECTIDENTIFIER_ISVALIDIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x7D8D10)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DEROBJECTIDENTIFIER_MAKEOIDSTRINGFROMBYTES_OFFSET UNITYSDK_OFFSET(0x7D91A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DEROBJECTIDENTIFIER_FROMOCTETSTRING_OFFSET UNITYSDK_OFFSET(0x7D8850)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DEROBJECTIDENTIFIER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x7D9B70)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1
{
	inline static constexpr unsigned int DerObjectIdentifier_TypeDefinitionIndex = 22799;

	class DerObjectIdentifier : public ::Unity::Jobs::IJobParallelForBurstSchedulable
	{
	public:
		::System::String* identifier; // 0x10
		::Il2CppArray<::System::Object*>* body; // 0x18
		::System::Int64 LONG_LIMIT; // 0x0
		::Il2CppArray<::System::Object*>* cache; // 0x0

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* GetInstance(::System::Object* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DEROBJECTIDENTIFIER_GETINSTANCE_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* GetInstance(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1TaggedObject* arg, ::System::Boolean arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1TaggedObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DEROBJECTIDENTIFIER_GETINSTANCE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DEROBJECTIDENTIFIER_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* arg, ::System::String* str)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DEROBJECTIDENTIFIER_.CTOR_OFFSET))(arg, str, nullptr);
		}

		::System::String* get_Id()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DEROBJECTIDENTIFIER_GET_ID_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* Branch(::System::String* str)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DEROBJECTIDENTIFIER_BRANCH_OFFSET))(str, nullptr);
		}

		::System::Boolean On(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* arg)
		{
			return (return (::System::Boolean(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DEROBJECTIDENTIFIER_ON_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DEROBJECTIDENTIFIER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void WriteField(::System::IO::Stream* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DEROBJECTIDENTIFIER_WRITEFIELD_OFFSET))(arg, arg, nullptr);
		}

		::System::Void WriteField(::System::IO::Stream* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DEROBJECTIDENTIFIER_WRITEFIELD_OFFSET))(arg, arg, nullptr);
		}

		::System::Void DoOutput(::System::IO::MemoryStream* arg)
		{
			((::System::Void(*)(::System::IO::MemoryStream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DEROBJECTIDENTIFIER_DOOUTPUT_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetBody()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DEROBJECTIDENTIFIER_GETBODY_OFFSET))(nullptr);
		}

		::System::Void Encode(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerOutputStream* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerOutputStream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DEROBJECTIDENTIFIER_ENCODE_OFFSET))(arg, nullptr);
		}

		::System::Int32 Asn1GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DEROBJECTIDENTIFIER_ASN1GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean Asn1Equals(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* arg)
		{
			return (return (::System::Boolean(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DEROBJECTIDENTIFIER_ASN1EQUALS_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DEROBJECTIDENTIFIER_TOSTRING_OFFSET))(nullptr);
		}

		::System::Boolean IsValidBranchID(::System::String* str, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DEROBJECTIDENTIFIER_ISVALIDBRANCHID_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean IsValidIdentifier(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DEROBJECTIDENTIFIER_ISVALIDIDENTIFIER_OFFSET))(str, nullptr);
		}

		::System::String* MakeOidStringFromBytes(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::String*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DEROBJECTIDENTIFIER_MAKEOIDSTRINGFROMBYTES_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* FromOctetString(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DEROBJECTIDENTIFIER_FROMOCTETSTRING_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DEROBJECTIDENTIFIER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

