#pragma once
#include "../../../../unitysdk.h"

namespace System::Threading::Tasks::Sources
{
	inline static constexpr unsigned int ValueTaskSourceStatus_TypeDefinitionIndex = 24216;

	class ValueTaskSourceStatus : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Threading::Tasks::Sources::ValueTaskSourceStatus* Pending; // 0x0
		::System::Threading::Tasks::Sources::ValueTaskSourceStatus* Succeeded; // 0x0
		::System::Threading::Tasks::Sources::ValueTaskSourceStatus* Faulted; // 0x0
		::System::Threading::Tasks::Sources::ValueTaskSourceStatus* Canceled; // 0x0

	};
}

