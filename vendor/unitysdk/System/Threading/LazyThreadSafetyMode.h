#pragma once
#include "../../unitysdk.h"

namespace System::Threading
{
	inline static constexpr unsigned int LazyThreadSafetyMode_TypeDefinitionIndex = 24038;

	class LazyThreadSafetyMode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Threading::LazyThreadSafetyMode* None; // 0x0
		::System::Threading::LazyThreadSafetyMode* PublicationOnly; // 0x0
		::System::Threading::LazyThreadSafetyMode* ExecutionAndPublication; // 0x0

	};
}

