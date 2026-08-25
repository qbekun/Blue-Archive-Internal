#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests { class ShakeDigest; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities { class IMemoable; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SHAKEDIGEST_CHECKBITLENGTH_OFFSET UNITYSDK_OFFSET(0x771550)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SHAKEDIGEST_.CTOR_OFFSET UNITYSDK_OFFSET(0x771600)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SHAKEDIGEST_.CTOR_OFFSET UNITYSDK_OFFSET(0x771650)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SHAKEDIGEST_.CTOR_OFFSET UNITYSDK_OFFSET(0x7716B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SHAKEDIGEST_GET_ALGORITHMNAME_OFFSET UNITYSDK_OFFSET(0x771710)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SHAKEDIGEST_DOFINAL_OFFSET UNITYSDK_OFFSET(0x771760)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SHAKEDIGEST_DOFINAL_OFFSET UNITYSDK_OFFSET(0x7717B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SHAKEDIGEST_DOOUTPUT_OFFSET UNITYSDK_OFFSET(0x7717F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SHAKEDIGEST_DOFINAL_OFFSET UNITYSDK_OFFSET(0x771850)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SHAKEDIGEST_DOFINAL_OFFSET UNITYSDK_OFFSET(0x7718C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SHAKEDIGEST_COPY_OFFSET UNITYSDK_OFFSET(0x771A00)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests
{
	inline static constexpr unsigned int ShakeDigest_TypeDefinitionIndex = 22609;

	class ShakeDigest : public Il2CppObject
	{
	public:
		::System::Int32 CheckBitLength(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SHAKEDIGEST_CHECKBITLENGTH_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SHAKEDIGEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SHAKEDIGEST_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests::ShakeDigest* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests::ShakeDigest*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SHAKEDIGEST_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::String* get_AlgorithmName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SHAKEDIGEST_GET_ALGORITHMNAME_OFFSET))(nullptr);
		}

		::System::Int32 DoFinal(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SHAKEDIGEST_DOFINAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 DoFinal(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SHAKEDIGEST_DOFINAL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 DoOutput(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SHAKEDIGEST_DOOUTPUT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 DoFinal(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Byte arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Byte, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SHAKEDIGEST_DOFINAL_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 DoFinal(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Byte arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::Byte, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SHAKEDIGEST_DOFINAL_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IMemoable* Copy()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IMemoable*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SHAKEDIGEST_COPY_OFFSET))(nullptr);
		}

	};
}

