#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters { class NaccacheSternKeyParameters; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math { class BigInteger; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class ICipherParameters; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_NACCACHESTERNENGINE_ADDCRYPTEDBLOCKS_OFFSET UNITYSDK_OFFSET(0x6FEC90)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_NACCACHESTERNENGINE_CHINESEREMAINDER_OFFSET UNITYSDK_OFFSET(0x6FEEC0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_NACCACHESTERNENGINE_SET_DEBUG_OFFSET UNITYSDK_OFFSET(0x6FF310)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_NACCACHESTERNENGINE_PROCESSBLOCK_OFFSET UNITYSDK_OFFSET(0x6FF320)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_NACCACHESTERNENGINE_PROCESSDATA_OFFSET UNITYSDK_OFFSET(0x6FFC60)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_NACCACHESTERNENGINE_.CTOR_OFFSET UNITYSDK_OFFSET(0x6FFE70)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_NACCACHESTERNENGINE_GET_ALGORITHMNAME_OFFSET UNITYSDK_OFFSET(0x6FFE80)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_NACCACHESTERNENGINE_ENCRYPT_OFFSET UNITYSDK_OFFSET(0x6FFEB0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_NACCACHESTERNENGINE_GETINPUTBLOCKSIZE_OFFSET UNITYSDK_OFFSET(0x6FFF90)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_NACCACHESTERNENGINE_GETOUTPUTBLOCKSIZE_OFFSET UNITYSDK_OFFSET(0x6FFFF0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_NACCACHESTERNENGINE_INIT_OFFSET UNITYSDK_OFFSET(0x700050)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Engines
{
	inline static constexpr unsigned int NaccacheSternEngine_TypeDefinitionIndex = 22511;

	class NaccacheSternEngine : public Il2CppObject
	{
	public:
		::System::Boolean forEncryption; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters* key; // 0x18
		::Il2CppArray<::System::Object*>* lookup; // 0x20

		::Il2CppArray<::System::Object*>* AddCryptedBlocks(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_NACCACHESTERNENGINE_ADDCRYPTEDBLOCKS_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* chineseRemainder(::System::Collections::IList* arg, ::System::Collections::IList* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*(*)(::System::Collections::IList*, ::System::Collections::IList*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_NACCACHESTERNENGINE_CHINESEREMAINDER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void set_Debug(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_NACCACHESTERNENGINE_SET_DEBUG_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* ProcessBlock(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_NACCACHESTERNENGINE_PROCESSBLOCK_OFFSET))(arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* ProcessData(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_NACCACHESTERNENGINE_PROCESSDATA_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_NACCACHESTERNENGINE_.CTOR_OFFSET))(nullptr);
		}

		::System::String* get_AlgorithmName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_NACCACHESTERNENGINE_GET_ALGORITHMNAME_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* Encrypt(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_NACCACHESTERNENGINE_ENCRYPT_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetInputBlockSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_NACCACHESTERNENGINE_GETINPUTBLOCKSIZE_OFFSET))(nullptr);
		}

		::System::Int32 GetOutputBlockSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_NACCACHESTERNENGINE_GETOUTPUTBLOCKSIZE_OFFSET))(nullptr);
		}

		::System::Void Init(::System::Boolean arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* arg)
		{
			((::System::Void(*)(::System::Boolean, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_NACCACHESTERNENGINE_INIT_OFFSET))(arg, arg, nullptr);
		}

	};
}

