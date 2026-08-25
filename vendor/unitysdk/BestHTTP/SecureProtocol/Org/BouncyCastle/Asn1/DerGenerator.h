#pragma once
#include "../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERGENERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x7D66F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERGENERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x7D6700)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERGENERATOR_WRITELENGTH_OFFSET UNITYSDK_OFFSET(0x7D6730)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERGENERATOR_WRITEDERENCODED_OFFSET UNITYSDK_OFFSET(0x7D67E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERGENERATOR_WRITEDERENCODED_OFFSET UNITYSDK_OFFSET(0x7D68C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERGENERATOR_WRITEDERENCODED_OFFSET UNITYSDK_OFFSET(0x7D6990)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1
{
	inline static constexpr unsigned int DerGenerator_TypeDefinitionIndex = 22793;

	class DerGenerator : public JobBurstSchedulableProducer`1
	{
	public:
		::System::Boolean _tagged; // 0x18
		::System::Boolean _isExplicit; // 0x19
		::System::Int32 _tagNo; // 0x1C

		::System::Void .ctor(::System::IO::Stream* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERGENERATOR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::IO::Stream* arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERGENERATOR_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void WriteLength(::System::IO::Stream* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERGENERATOR_WRITELENGTH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void WriteDerEncoded(::System::IO::Stream* arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERGENERATOR_WRITEDERENCODED_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void WriteDerEncoded(::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERGENERATOR_WRITEDERENCODED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void WriteDerEncoded(::System::IO::Stream* arg, ::System::Int32 arg, ::System::IO::Stream* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::System::Int32, ::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERGENERATOR_WRITEDERENCODED_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

