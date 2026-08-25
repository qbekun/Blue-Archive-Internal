#pragma once
#include "../../../../unitysdk.h"

namespace Unity::IO::LowLevel::Unsafe
{
	inline static constexpr unsigned int AsyncReadManagerMetricsFilters_TypeDefinitionIndex = 30891;

	class AsyncReadManagerMetricsFilters : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* TypeIDs; // 0x10
		::Il2CppArray<::System::Object*>* States; // 0x18
		::Il2CppArray<::System::Object*>* ReadTypes; // 0x20
		::Il2CppArray<::System::Object*>* PriorityLevels; // 0x28
		::Il2CppArray<::System::Object*>* Subsystems; // 0x30

	};
}

