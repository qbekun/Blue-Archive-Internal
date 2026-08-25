#pragma once
#include "../unitysdk.h"

namespace FlatData { class StageTopography; }

namespace FlatData
{
	inline static constexpr unsigned int StageTopography_TypeDefinitionIndex = 9389;

	class StageTopography : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::StageTopography* Street; // 0x0
		::FlatData::StageTopography* Outdoor; // 0x0
		::FlatData::StageTopography* Indoor; // 0x0

	};
}

