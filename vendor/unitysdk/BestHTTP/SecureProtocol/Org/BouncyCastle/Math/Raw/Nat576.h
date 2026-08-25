#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math { class BigInteger; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_RAW_NAT576_COPY64_OFFSET UNITYSDK_OFFSET(0x523580)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_RAW_NAT576_COPY64_OFFSET UNITYSDK_OFFSET(0x523670)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_RAW_NAT576_CREATE64_OFFSET UNITYSDK_OFFSET(0x5237F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_RAW_NAT576_CREATEEXT64_OFFSET UNITYSDK_OFFSET(0x523830)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_RAW_NAT576_EQ64_OFFSET UNITYSDK_OFFSET(0x523870)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_RAW_NAT576_FROMBIGINTEGER64_OFFSET UNITYSDK_OFFSET(0x523910)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_RAW_NAT576_ISONE64_OFFSET UNITYSDK_OFFSET(0x523A30)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_RAW_NAT576_ISZERO64_OFFSET UNITYSDK_OFFSET(0x523B40)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_RAW_NAT576_TOBIGINTEGER64_OFFSET UNITYSDK_OFFSET(0x523C60)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_RAW_NAT576_.CTOR_OFFSET UNITYSDK_OFFSET(0x523E40)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Raw
{
	inline static constexpr unsigned int Nat576_TypeDefinitionIndex = 21769;

	class Nat576 : public Il2CppObject
	{
	public:
		::System::Void Copy64(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_RAW_NAT576_COPY64_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Copy64(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_RAW_NAT576_COPY64_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* Create64()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_RAW_NAT576_CREATE64_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* CreateExt64()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_RAW_NAT576_CREATEEXT64_OFFSET))(nullptr);
		}

		::System::Boolean Eq64(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_RAW_NAT576_EQ64_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* FromBigInteger64(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_RAW_NAT576_FROMBIGINTEGER64_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsOne64(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_RAW_NAT576_ISONE64_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsZero64(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_RAW_NAT576_ISZERO64_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* ToBigInteger64(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_RAW_NAT576_TOBIGINTEGER64_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_RAW_NAT576_.CTOR_OFFSET))(nullptr);
		}

	};
}

