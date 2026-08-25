#pragma once
#include "../../unitysdk.h"

namespace System::Threading
{
	inline static constexpr unsigned int LockRecursionPolicy_TypeDefinitionIndex = 33590;

	class LockRecursionPolicy : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Threading::LockRecursionPolicy* NoRecursion; // 0x0
		::System::Threading::LockRecursionPolicy* SupportsRecursion; // 0x0

	};
}

