#pragma once
#include "../../../unitysdk.h"

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int CausalitySynchronousWork_TypeDefinitionIndex = 24213;

	class CausalitySynchronousWork : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Threading::Tasks::CausalitySynchronousWork* CompletionNotification; // 0x0
		::System::Threading::Tasks::CausalitySynchronousWork* ProgressNotification; // 0x0
		::System::Threading::Tasks::CausalitySynchronousWork* Execution; // 0x0

	};
}

