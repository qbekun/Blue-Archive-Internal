#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math { class BigInteger; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_RAW_NAT448_COPY64_OFFSET UNITYSDK_OFFSET(0x522AF0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_RAW_NAT448_COPY64_OFFSET UNITYSDK_OFFSET(0x522BB0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_RAW_NAT448_CREATE64_OFFSET UNITYSDK_OFFSET(0x522CE0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_RAW_NAT448_CREATEEXT64_OFFSET UNITYSDK_OFFSET(0x522D20)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_RAW_NAT448_EQ64_OFFSET UNITYSDK_OFFSET(0x522D60)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_RAW_NAT448_FROMBIGINTEGER64_OFFSET UNITYSDK_OFFSET(0x522DE0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_RAW_NAT448_ISONE64_OFFSET UNITYSDK_OFFSET(0x522F00)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_RAW_NAT448_ISZERO64_OFFSET UNITYSDK_OFFSET(0x522FD0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_RAW_NAT448_TOBIGINTEGER64_OFFSET UNITYSDK_OFFSET(0x5230B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_RAW_NAT448_.CTOR_OFFSET UNITYSDK_OFFSET(0x523240)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Raw
{
	inline static constexpr unsigned int Nat448_TypeDefinitionIndex = 21767;

	class Nat448 : public Il2CppObject
	{
	public:
		::System::Void Copy64(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_RAW_NAT448_COPY64_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Copy64(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_RAW_NAT448_COPY64_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* Create64()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_RAW_NAT448_CREATE64_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* CreateExt64()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_RAW_NAT448_CREATEEXT64_OFFSET))(nullptr);
		}

		::System::Boolean Eq64(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_RAW_NAT448_EQ64_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* FromBigInteger64(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_RAW_NAT448_FROMBIGINTEGER64_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsOne64(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_RAW_NAT448_ISONE64_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsZero64(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_RAW_NAT448_ISZERO64_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* ToBigInteger64(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_RAW_NAT448_TOBIGINTEGER64_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_RAW_NAT448_.CTOR_OFFSET))(nullptr);
		}

	};
}

