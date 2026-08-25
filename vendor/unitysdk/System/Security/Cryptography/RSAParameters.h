#pragma once
#include "../../../unitysdk.h"

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int RSAParameters_TypeDefinitionIndex = 24361;

	class RSAParameters : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* Exponent; // 0x10
		::Il2CppArray<::System::Object*>* Modulus; // 0x18
		::Il2CppArray<::System::Object*>* P; // 0x20
		::Il2CppArray<::System::Object*>* Q; // 0x28
		::Il2CppArray<::System::Object*>* DP; // 0x30
		::Il2CppArray<::System::Object*>* DQ; // 0x38
		::Il2CppArray<::System::Object*>* InverseQ; // 0x40
		::Il2CppArray<::System::Object*>* D; // 0x48

	};
}

