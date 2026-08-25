#pragma once
#include "../unitysdk.h"

namespace FlatData { class TargetGroup; }

namespace FlatData
{
	inline static constexpr unsigned int TargetGroup_TypeDefinitionIndex = 9650;

	class TargetGroup : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::TargetGroup* WaitingSignIn; // 0x0
		::FlatData::TargetGroup* Normal; // 0x0
		::FlatData::TargetGroup* Dormant; // 0x0
		::FlatData::TargetGroup* Comeback; // 0x0
		::FlatData::TargetGroup* Newbie; // 0x0

	};
}

