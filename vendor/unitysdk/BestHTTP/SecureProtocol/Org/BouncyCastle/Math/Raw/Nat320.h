#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math { class BigInteger; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_RAW_NAT320_COPY64_OFFSET UNITYSDK_OFFSET(0x5221D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_RAW_NAT320_COPY64_OFFSET UNITYSDK_OFFSET(0x522250)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_RAW_NAT320_CREATE64_OFFSET UNITYSDK_OFFSET(0x522330)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_RAW_NAT320_CREATEEXT64_OFFSET UNITYSDK_OFFSET(0x522370)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_RAW_NAT320_EQ64_OFFSET UNITYSDK_OFFSET(0x5223B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_RAW_NAT320_FROMBIGINTEGER64_OFFSET UNITYSDK_OFFSET(0x522420)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_RAW_NAT320_ISONE64_OFFSET UNITYSDK_OFFSET(0x522540)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_RAW_NAT320_ISZERO64_OFFSET UNITYSDK_OFFSET(0x5225D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_RAW_NAT320_TOBIGINTEGER64_OFFSET UNITYSDK_OFFSET(0x522670)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_RAW_NAT320_.CTOR_OFFSET UNITYSDK_OFFSET(0x5227B0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Raw
{
	inline static constexpr unsigned int Nat320_TypeDefinitionIndex = 21765;

	class Nat320 : public Il2CppObject
	{
	public:
		::System::Void Copy64(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_RAW_NAT320_COPY64_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Copy64(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_RAW_NAT320_COPY64_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* Create64()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_RAW_NAT320_CREATE64_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* CreateExt64()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_RAW_NAT320_CREATEEXT64_OFFSET))(nullptr);
		}

		::System::Boolean Eq64(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_RAW_NAT320_EQ64_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* FromBigInteger64(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_RAW_NAT320_FROMBIGINTEGER64_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsOne64(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_RAW_NAT320_ISONE64_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsZero64(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_RAW_NAT320_ISZERO64_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* ToBigInteger64(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_RAW_NAT320_TOBIGINTEGER64_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_RAW_NAT320_.CTOR_OFFSET))(nullptr);
		}

	};
}

