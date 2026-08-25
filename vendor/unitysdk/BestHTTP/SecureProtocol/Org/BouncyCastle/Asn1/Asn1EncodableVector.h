#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1EncodableVector; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Encodable; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ASN1ENCODABLEVECTOR_FROMENUMERABLE_OFFSET UNITYSDK_OFFSET(0x7C4D00)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ASN1ENCODABLEVECTOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x7A4400)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ASN1ENCODABLEVECTOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x7C50E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ASN1ENCODABLEVECTOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x7C5200)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ASN1ENCODABLEVECTOR_ADD_OFFSET UNITYSDK_OFFSET(0x7A4480)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ASN1ENCODABLEVECTOR_ADD_OFFSET UNITYSDK_OFFSET(0x7C52B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ASN1ENCODABLEVECTOR_ADDOPTIONAL_OFFSET UNITYSDK_OFFSET(0x7C53C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ASN1ENCODABLEVECTOR_ADDOPTIONALTAGGED_OFFSET UNITYSDK_OFFSET(0x7C5410)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ASN1ENCODABLEVECTOR_ADDALL_OFFSET UNITYSDK_OFFSET(0x7C54A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ASN1ENCODABLEVECTOR_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x7C3BF0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ASN1ENCODABLEVECTOR_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x7C5620)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ASN1ENCODABLEVECTOR_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x7C1440)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ASN1ENCODABLEVECTOR_COPYELEMENTS_OFFSET UNITYSDK_OFFSET(0x7C5630)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ASN1ENCODABLEVECTOR_TAKEELEMENTS_OFFSET UNITYSDK_OFFSET(0x7C56D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ASN1ENCODABLEVECTOR_REALLOCATE_OFFSET UNITYSDK_OFFSET(0x7C5300)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ASN1ENCODABLEVECTOR_CLONEELEMENTS_OFFSET UNITYSDK_OFFSET(0x7C5790)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ASN1ENCODABLEVECTOR_.CCTOR_OFFSET UNITYSDK_OFFSET(0x7C5840)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1
{
	inline static constexpr unsigned int Asn1EncodableVector_TypeDefinitionIndex = 22743;

	class Asn1EncodableVector : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* EmptyElements; // 0x0
		::System::Int32 DefaultCapacity; // 0x0
		::Il2CppArray<::System::Object*>* elements; // 0x10
		::System::Int32 elementCount; // 0x18
		::System::Boolean copyOnWrite; // 0x1C

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1EncodableVector* FromEnumerable(::System::Collections::IEnumerable* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1EncodableVector*(*)(::System::Collections::IEnumerable*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ASN1ENCODABLEVECTOR_FROMENUMERABLE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ASN1ENCODABLEVECTOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ASN1ENCODABLEVECTOR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ASN1ENCODABLEVECTOR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Add(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ASN1ENCODABLEVECTOR_ADD_OFFSET))(arg, nullptr);
		}

		::System::Void Add(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ASN1ENCODABLEVECTOR_ADD_OFFSET))(arg, nullptr);
		}

		::System::Void AddOptional(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ASN1ENCODABLEVECTOR_ADDOPTIONAL_OFFSET))(arg, nullptr);
		}

		::System::Void AddOptionalTagged(::System::Boolean arg, ::System::Int32 arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable* arg)
		{
			((::System::Void(*)(::System::Boolean, ::System::Int32, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ASN1ENCODABLEVECTOR_ADDOPTIONALTAGGED_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void AddAll(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1EncodableVector* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1EncodableVector*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ASN1ENCODABLEVECTOR_ADDALL_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable* get_Item(::System::Int32 arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ASN1ENCODABLEVECTOR_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ASN1ENCODABLEVECTOR_GET_COUNT_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ASN1ENCODABLEVECTOR_GETENUMERATOR_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* CopyElements()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ASN1ENCODABLEVECTOR_COPYELEMENTS_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* TakeElements()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ASN1ENCODABLEVECTOR_TAKEELEMENTS_OFFSET))(nullptr);
		}

		::System::Void Reallocate(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ASN1ENCODABLEVECTOR_REALLOCATE_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* CloneElements(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ASN1ENCODABLEVECTOR_CLONEELEMENTS_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ASN1ENCODABLEVECTOR_.CCTOR_OFFSET))(nullptr);
		}

	};
}

