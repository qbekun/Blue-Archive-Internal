#pragma once
#include "../../unitysdk.h"

namespace System::Threading
{
	inline static constexpr unsigned int StackCrawlMark_TypeDefinitionIndex = 24100;

	class StackCrawlMark : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Threading::StackCrawlMark* LookForMe; // 0x0
		::System::Threading::StackCrawlMark* LookForMyCaller; // 0x0
		::System::Threading::StackCrawlMark* LookForMyCallersCaller; // 0x0
		::System::Threading::StackCrawlMark* LookForThread; // 0x0

	};
}

