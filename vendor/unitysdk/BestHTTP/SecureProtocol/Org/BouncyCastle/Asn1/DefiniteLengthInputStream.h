#pragma once
#include "../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DEFINITELENGTHINPUTSTREAM_READBYTE_OFFSET UNITYSDK_OFFSET(0x7D1100)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DEFINITELENGTHINPUTSTREAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x7CB740)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DEFINITELENGTHINPUTSTREAM_GET_REMAINING_OFFSET UNITYSDK_OFFSET(0x7D1260)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DEFINITELENGTHINPUTSTREAM_TOARRAY_OFFSET UNITYSDK_OFFSET(0x7CA900)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DEFINITELENGTHINPUTSTREAM_READALLINTOBYTEARRAY_OFFSET UNITYSDK_OFFSET(0x7D1270)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DEFINITELENGTHINPUTSTREAM_READ_OFFSET UNITYSDK_OFFSET(0x7D1480)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DEFINITELENGTHINPUTSTREAM_.CCTOR_OFFSET UNITYSDK_OFFSET(0x7D15F0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1
{
	inline static constexpr unsigned int DefiniteLengthInputStream_TypeDefinitionIndex = 22783;

	class DefiniteLengthInputStream : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* EmptyBytes; // 0x0
		::System::Int32 _originalLength; // 0x40
		::System::Int32 _remaining; // 0x44

		::System::Int32 ReadByte()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DEFINITELENGTHINPUTSTREAM_READBYTE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::IO::Stream* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DEFINITELENGTHINPUTSTREAM_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 get_Remaining()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DEFINITELENGTHINPUTSTREAM_GET_REMAINING_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* ToArray()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DEFINITELENGTHINPUTSTREAM_TOARRAY_OFFSET))(nullptr);
		}

		::System::Void ReadAllIntoByteArray(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DEFINITELENGTHINPUTSTREAM_READALLINTOBYTEARRAY_OFFSET))(arg, nullptr);
		}

		::System::Int32 Read(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DEFINITELENGTHINPUTSTREAM_READ_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DEFINITELENGTHINPUTSTREAM_.CCTOR_OFFSET))(nullptr);
		}

	};
}

