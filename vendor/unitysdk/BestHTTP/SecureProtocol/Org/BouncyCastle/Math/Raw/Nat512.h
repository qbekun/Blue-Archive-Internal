#pragma once
#include "../../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_RAW_NAT512_SQUARE_OFFSET UNITYSDK_OFFSET(0x523250)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_RAW_NAT512_MUL_OFFSET UNITYSDK_OFFSET(0x523390)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_RAW_NAT512_.CTOR_OFFSET UNITYSDK_OFFSET(0x523570)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Raw
{
	inline static constexpr unsigned int Nat512_TypeDefinitionIndex = 21768;

	class Nat512 : public Il2CppObject
	{
	public:
		::System::Void Square(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_RAW_NAT512_SQUARE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Mul(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_RAW_NAT512_MUL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_RAW_NAT512_.CTOR_OFFSET))(nullptr);
		}

	};
}

