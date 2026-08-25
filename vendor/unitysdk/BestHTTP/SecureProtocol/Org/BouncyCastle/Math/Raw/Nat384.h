#pragma once
#include "../../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_RAW_NAT384_MUL_OFFSET UNITYSDK_OFFSET(0x5227C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_RAW_NAT384_SQUARE_OFFSET UNITYSDK_OFFSET(0x5229A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_RAW_NAT384_.CTOR_OFFSET UNITYSDK_OFFSET(0x522AE0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Raw
{
	inline static constexpr unsigned int Nat384_TypeDefinitionIndex = 21766;

	class Nat384 : public Il2CppObject
	{
	public:
		::System::Void Mul(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_RAW_NAT384_MUL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Square(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_RAW_NAT384_SQUARE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_RAW_NAT384_.CTOR_OFFSET))(nullptr);
		}

	};
}

