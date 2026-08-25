#pragma once
#include "../../../unitysdk.h"

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int DSAParameters_TypeDefinitionIndex = 24333;

	class DSAParameters : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* P; // 0x10
		::Il2CppArray<::System::Object*>* Q; // 0x18
		::Il2CppArray<::System::Object*>* G; // 0x20
		::Il2CppArray<::System::Object*>* Y; // 0x28
		::Il2CppArray<::System::Object*>* J; // 0x30
		::Il2CppArray<::System::Object*>* X; // 0x38
		::Il2CppArray<::System::Object*>* Seed; // 0x40
		::System::Int32 Counter; // 0x48

	};
}

