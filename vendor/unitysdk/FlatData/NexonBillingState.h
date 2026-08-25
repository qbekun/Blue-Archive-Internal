#pragma once
#include "../unitysdk.h"

namespace FlatData { class NexonBillingState; }

namespace FlatData
{
	inline static constexpr unsigned int NexonBillingState_TypeDefinitionIndex = 9582;

	class NexonBillingState : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::NexonBillingState* ValiDateWait; // 0x0
		::FlatData::NexonBillingState* ValiDateFail; // 0x0
		::FlatData::NexonBillingState* ValiDateSuccess; // 0x0
		::FlatData::NexonBillingState* Finish; // 0x0

	};
}

