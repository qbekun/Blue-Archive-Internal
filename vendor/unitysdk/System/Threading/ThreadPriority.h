#pragma once
#include "../../unitysdk.h"

namespace System::Threading
{
	inline static constexpr unsigned int ThreadPriority_TypeDefinitionIndex = 24045;

	class ThreadPriority : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Threading::ThreadPriority* Lowest; // 0x0
		::System::Threading::ThreadPriority* BelowNormal; // 0x0
		::System::Threading::ThreadPriority* Normal; // 0x0
		::System::Threading::ThreadPriority* AboveNormal; // 0x0
		::System::Threading::ThreadPriority* Highest; // 0x0

	};
}

