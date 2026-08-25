#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Security { class SecureRandom; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Prng { class IRandomGenerator; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Prng { class DigestRandomGenerator; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_SECURERANDOM_NEXTCOUNTERVALUE_OFFSET UNITYSDK_OFFSET(0x9C0910)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_SECURERANDOM_GET_MASTER_OFFSET UNITYSDK_OFFSET(0x9C0960)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_SECURERANDOM_CREATEPRNG_OFFSET UNITYSDK_OFFSET(0x9C09B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_SECURERANDOM_GETNEXTBYTES_OFFSET UNITYSDK_OFFSET(0x9B4210)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_SECURERANDOM_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x9C0C00)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_SECURERANDOM_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x9C0C50)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_SECURERANDOM_GETSEED_OFFSET UNITYSDK_OFFSET(0x9C0E80)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_SECURERANDOM_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C0FC0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_SECURERANDOM_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C1070)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_SECURERANDOM_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C0E10)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_SECURERANDOM_GENERATESEED_OFFSET UNITYSDK_OFFSET(0x9C1140)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_SECURERANDOM_SETSEED_OFFSET UNITYSDK_OFFSET(0x9C1280)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_SECURERANDOM_SETSEED_OFFSET UNITYSDK_OFFSET(0x9C1330)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_SECURERANDOM_NEXT_OFFSET UNITYSDK_OFFSET(0x9C13E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_SECURERANDOM_NEXT_OFFSET UNITYSDK_OFFSET(0x9C1400)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_SECURERANDOM_NEXT_OFFSET UNITYSDK_OFFSET(0x9C1500)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_SECURERANDOM_NEXTBYTES_OFFSET UNITYSDK_OFFSET(0x9C15D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_SECURERANDOM_NEXTBYTES_OFFSET UNITYSDK_OFFSET(0x9C1680)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_SECURERANDOM_NEXTDOUBLE_OFFSET UNITYSDK_OFFSET(0x9C1740)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_SECURERANDOM_NEXTINT_OFFSET UNITYSDK_OFFSET(0x9C17F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_SECURERANDOM_NEXTLONG_OFFSET UNITYSDK_OFFSET(0x9C1850)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_SECURERANDOM_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9C18B0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Security
{
	inline static constexpr unsigned int SecureRandom_TypeDefinitionIndex = 21720;

	class SecureRandom : public Il2CppObject
	{
	public:
		::System::Int64 counter; // 0x0
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* master; // 0x8
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Prng::IRandomGenerator* generator; // 0x20
		::System::Double DoubleScale; // 0x10

		::System::Int64 NextCounterValue()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_SECURERANDOM_NEXTCOUNTERVALUE_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* get_Master()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_SECURERANDOM_GET_MASTER_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator* CreatePrng(::System::String* str, ::System::Boolean arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator*(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_SECURERANDOM_CREATEPRNG_OFFSET))(str, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetNextBytes(::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* arg, ::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_SECURERANDOM_GETNEXTBYTES_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* GetInstance(::System::String* str)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_SECURERANDOM_GETINSTANCE_OFFSET))(str, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* GetInstance(::System::String* str, ::System::Boolean arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom*(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_SECURERANDOM_GETINSTANCE_OFFSET))(str, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetSeed(::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_SECURERANDOM_GETSEED_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_SECURERANDOM_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_SECURERANDOM_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Prng::IRandomGenerator* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Prng::IRandomGenerator*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_SECURERANDOM_.CTOR_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GenerateSeed(::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_SECURERANDOM_GENERATESEED_OFFSET))(arg, nullptr);
		}

		::System::Void SetSeed(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_SECURERANDOM_SETSEED_OFFSET))(arg, nullptr);
		}

		::System::Void SetSeed(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_SECURERANDOM_SETSEED_OFFSET))(arg, nullptr);
		}

		::System::Int32 Next()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_SECURERANDOM_NEXT_OFFSET))(nullptr);
		}

		::System::Int32 Next(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_SECURERANDOM_NEXT_OFFSET))(arg, nullptr);
		}

		::System::Int32 Next(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_SECURERANDOM_NEXT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void NextBytes(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_SECURERANDOM_NEXTBYTES_OFFSET))(arg, nullptr);
		}

		::System::Void NextBytes(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_SECURERANDOM_NEXTBYTES_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Double NextDouble()
		{
			return (return (::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_SECURERANDOM_NEXTDOUBLE_OFFSET))(nullptr);
		}

		::System::Int32 NextInt()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_SECURERANDOM_NEXTINT_OFFSET))(nullptr);
		}

		::System::Int64 NextLong()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_SECURERANDOM_NEXTLONG_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_SECURERANDOM_.CCTOR_OFFSET))(nullptr);
		}

	};
}

