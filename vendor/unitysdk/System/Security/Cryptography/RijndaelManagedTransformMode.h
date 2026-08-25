#pragma once
#include "../../../unitysdk.h"

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int RijndaelManagedTransformMode_TypeDefinitionIndex = 24357;

	class RijndaelManagedTransformMode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Security::Cryptography::RijndaelManagedTransformMode* Encrypt; // 0x0
		::System::Security::Cryptography::RijndaelManagedTransformMode* Decrypt; // 0x0

	};
}

