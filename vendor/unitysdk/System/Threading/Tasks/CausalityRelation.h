#pragma once
#include "../../../unitysdk.h"

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int CausalityRelation_TypeDefinitionIndex = 24212;

	class CausalityRelation : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Threading::Tasks::CausalityRelation* AssignDelegate; // 0x0
		::System::Threading::Tasks::CausalityRelation* Join; // 0x0
		::System::Threading::Tasks::CausalityRelation* Choice; // 0x0
		::System::Threading::Tasks::CausalityRelation* Cancel; // 0x0
		::System::Threading::Tasks::CausalityRelation* Error; // 0x0

	};
}

