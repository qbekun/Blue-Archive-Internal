#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests { class SkeinEngine; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Macs { class SkeinMac; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class ICipherParameters; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_SKEINMAC_.CTOR_OFFSET UNITYSDK_OFFSET(0x6BFCD0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_SKEINMAC_.CTOR_OFFSET UNITYSDK_OFFSET(0x6BFD50)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_SKEINMAC_GET_ALGORITHMNAME_OFFSET UNITYSDK_OFFSET(0x6BFDD0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_SKEINMAC_INIT_OFFSET UNITYSDK_OFFSET(0x6BFE80)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_SKEINMAC_GETMACSIZE_OFFSET UNITYSDK_OFFSET(0x6C00C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_SKEINMAC_RESET_OFFSET UNITYSDK_OFFSET(0x6C00E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_SKEINMAC_UPDATE_OFFSET UNITYSDK_OFFSET(0x6C0100)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_SKEINMAC_BLOCKUPDATE_OFFSET UNITYSDK_OFFSET(0x6C0120)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_SKEINMAC_DOFINAL_OFFSET UNITYSDK_OFFSET(0x6C0150)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Macs
{
	inline static constexpr unsigned int SkeinMac_TypeDefinitionIndex = 22441;

	class SkeinMac : public Il2CppObject
	{
	public:
		::System::Int32 SKEIN_256; // 0x0
		::System::Int32 SKEIN_512; // 0x0
		::System::Int32 SKEIN_1024; // 0x0
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests::SkeinEngine* engine; // 0x10

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_SKEINMAC_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Macs::SkeinMac* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Macs::SkeinMac*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_SKEINMAC_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::String* get_AlgorithmName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_SKEINMAC_GET_ALGORITHMNAME_OFFSET))(nullptr);
		}

		::System::Void Init(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_SKEINMAC_INIT_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetMacSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_SKEINMAC_GETMACSIZE_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_SKEINMAC_RESET_OFFSET))(nullptr);
		}

		::System::Void Update(::System::Byte arg)
		{
			((::System::Void(*)(::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_SKEINMAC_UPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void BlockUpdate(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_SKEINMAC_BLOCKUPDATE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 DoFinal(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_SKEINMAC_DOFINAL_OFFSET))(arg, arg, nullptr);
		}

	};
}

