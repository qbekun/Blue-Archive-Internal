#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests { class Dstu7564Digest; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class ICipherParameters; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_DSTU7564MAC_.CTOR_OFFSET UNITYSDK_OFFSET(0x6B9D80)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_DSTU7564MAC_BLOCKUPDATE_OFFSET UNITYSDK_OFFSET(0x6B9E00)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_DSTU7564MAC_GETMACSIZE_OFFSET UNITYSDK_OFFSET(0x6B9F30)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_DSTU7564MAC_PAD_OFFSET UNITYSDK_OFFSET(0x6B9F40)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_DSTU7564MAC_DOFINAL_OFFSET UNITYSDK_OFFSET(0x6BA070)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_DSTU7564MAC_GET_ALGORITHMNAME_OFFSET UNITYSDK_OFFSET(0x6B9F00)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_DSTU7564MAC_INIT_OFFSET UNITYSDK_OFFSET(0x6BA1A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_DSTU7564MAC_UPDATE_OFFSET UNITYSDK_OFFSET(0x6BA4C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_DSTU7564MAC_RESET_OFFSET UNITYSDK_OFFSET(0x6BA500)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_DSTU7564MAC_PADKEY_OFFSET UNITYSDK_OFFSET(0x6BA330)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Macs
{
	inline static constexpr unsigned int Dstu7564Mac_TypeDefinitionIndex = 22433;

	class Dstu7564Mac : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests::Dstu7564Digest* engine; // 0x10
		::System::Int32 macSize; // 0x18
		::System::UInt64 inputLength; // 0x20
		::Il2CppArray<::System::Object*>* paddedKey; // 0x28
		::Il2CppArray<::System::Object*>* invertedKey; // 0x30

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_DSTU7564MAC_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void BlockUpdate(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_DSTU7564MAC_BLOCKUPDATE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 GetMacSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_DSTU7564MAC_GETMACSIZE_OFFSET))(nullptr);
		}

		::System::Void Pad()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_DSTU7564MAC_PAD_OFFSET))(nullptr);
		}

		::System::Int32 DoFinal(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_DSTU7564MAC_DOFINAL_OFFSET))(arg, arg, nullptr);
		}

		::System::String* get_AlgorithmName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_DSTU7564MAC_GET_ALGORITHMNAME_OFFSET))(nullptr);
		}

		::System::Void Init(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_DSTU7564MAC_INIT_OFFSET))(arg, nullptr);
		}

		::System::Void Update(::System::Byte arg)
		{
			((::System::Void(*)(::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_DSTU7564MAC_UPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_DSTU7564MAC_RESET_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* PadKey(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_DSTU7564MAC_PADKEY_OFFSET))(arg, nullptr);
		}

	};
}

