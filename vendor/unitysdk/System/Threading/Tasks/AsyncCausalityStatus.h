#pragma once
#include "../../../unitysdk.h"

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int AsyncCausalityStatus_TypeDefinitionIndex = 24211;

	class AsyncCausalityStatus : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Threading::Tasks::AsyncCausalityStatus* Started; // 0x0
		::System::Threading::Tasks::AsyncCausalityStatus* Completed; // 0x0
		::System::Threading::Tasks::AsyncCausalityStatus* Canceled; // 0x0
		::System::Threading::Tasks::AsyncCausalityStatus* Error; // 0x0

	};
}

