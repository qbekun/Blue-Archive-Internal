#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math { class BigInteger; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Security { class SecureRandom; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_BIGINTEGERS_ASUNSIGNEDBYTEARRAY_OFFSET UNITYSDK_OFFSET(0x8CA9C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_BIGINTEGERS_ASUNSIGNEDBYTEARRAY_OFFSET UNITYSDK_OFFSET(0x8CA9E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_BIGINTEGERS_CREATERANDOMBIGINTEGER_OFFSET UNITYSDK_OFFSET(0x8CAAE0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_BIGINTEGERS_CREATERANDOMINRANGE_OFFSET UNITYSDK_OFFSET(0x8CAB40)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_BIGINTEGERS_GETUNSIGNEDBYTELENGTH_OFFSET UNITYSDK_OFFSET(0x8CAD60)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_BIGINTEGERS_.CTOR_OFFSET UNITYSDK_OFFSET(0x8CAD90)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities
{
	inline static constexpr unsigned int BigIntegers_TypeDefinitionIndex = 21568;

	class BigIntegers : public Il2CppObject
	{
	public:
		::System::Int32 MaxIterations; // 0x0

		::Il2CppArray<::System::Object*>* AsUnsignedByteArray(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_BIGINTEGERS_ASUNSIGNEDBYTEARRAY_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* AsUnsignedByteArray(::System::Int32 arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Int32, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_BIGINTEGERS_ASUNSIGNEDBYTEARRAY_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* CreateRandomBigInteger(::System::Int32 arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*(*)(::System::Int32, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_BIGINTEGERS_CREATERANDOMBIGINTEGER_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* CreateRandomInRange(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_BIGINTEGERS_CREATERANDOMINRANGE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 GetUnsignedByteLength(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg)
		{
			return (return (::System::Int32(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_BIGINTEGERS_GETUNSIGNEDBYTELENGTH_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_BIGINTEGERS_.CTOR_OFFSET))(nullptr);
		}

	};
}

