#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class IDigest; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities { class IMemoable; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class ICipherParameters; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_HMAC_INIT_OFFSET UNITYSDK_OFFSET(0x6BC280)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_HMAC_.CTOR_OFFSET UNITYSDK_OFFSET(0x6BCA50)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_HMAC_UPDATE_OFFSET UNITYSDK_OFFSET(0x6BCBC0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_HMAC_GET_ALGORITHMNAME_OFFSET UNITYSDK_OFFSET(0x6BCC60)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_HMAC_BLOCKUPDATE_OFFSET UNITYSDK_OFFSET(0x6BCD20)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_HMAC_RESET_OFFSET UNITYSDK_OFFSET(0x6BCDE0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_HMAC_GETUNDERLYINGDIGEST_OFFSET UNITYSDK_OFFSET(0x6BCF10)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_HMAC_DOFINAL_OFFSET UNITYSDK_OFFSET(0x6BCF20)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_HMAC_XORPAD_OFFSET UNITYSDK_OFFSET(0x6BC980)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_HMAC_GETMACSIZE_OFFSET UNITYSDK_OFFSET(0x6BD420)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Macs
{
	inline static constexpr unsigned int HMac_TypeDefinitionIndex = 22437;

	class HMac : public Il2CppObject
	{
	public:
		::System::Byte IPAD; // 0x0
		::System::Byte OPAD; // 0x0
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* digest; // 0x10
		::System::Int32 digestSize; // 0x18
		::System::Int32 blockLength; // 0x1C
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IMemoable* ipadState; // 0x20
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IMemoable* opadState; // 0x28
		::Il2CppArray<::System::Object*>* inputPad; // 0x30
		::Il2CppArray<::System::Object*>* outputBuf; // 0x38

		::System::Void Init(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_HMAC_INIT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_HMAC_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Update(::System::Byte arg)
		{
			((::System::Void(*)(::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_HMAC_UPDATE_OFFSET))(arg, nullptr);
		}

		::System::String* get_AlgorithmName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_HMAC_GET_ALGORITHMNAME_OFFSET))(nullptr);
		}

		::System::Void BlockUpdate(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_HMAC_BLOCKUPDATE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_HMAC_RESET_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* GetUnderlyingDigest()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_HMAC_GETUNDERLYINGDIGEST_OFFSET))(nullptr);
		}

		::System::Int32 DoFinal(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_HMAC_DOFINAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void XorPad(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Byte arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_HMAC_XORPAD_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 GetMacSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_HMAC_GETMACSIZE_OFFSET))(nullptr);
		}

	};
}

