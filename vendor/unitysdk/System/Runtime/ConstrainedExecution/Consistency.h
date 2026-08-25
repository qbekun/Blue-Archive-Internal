#pragma once
#include "../../../unitysdk.h"

namespace System::Runtime::ConstrainedExecution
{
	inline static constexpr unsigned int Consistency_TypeDefinitionIndex = 24729;

	class Consistency : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Runtime::ConstrainedExecution::Consistency* MayCorruptProcess; // 0x0
		::System::Runtime::ConstrainedExecution::Consistency* MayCorruptAppDomain; // 0x0
		::System::Runtime::ConstrainedExecution::Consistency* MayCorruptInstance; // 0x0
		::System::Runtime::ConstrainedExecution::Consistency* WillNotCorruptState; // 0x0

	};
}

