#pragma once
#include "../unitysdk.h"

namespace FlatData { class MissionResetType; }

namespace FlatData
{
	inline static constexpr unsigned int MissionResetType_TypeDefinitionIndex = 9575;

	class MissionResetType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::MissionResetType* None; // 0x0
		::FlatData::MissionResetType* Daily; // 0x0
		::FlatData::MissionResetType* Weekly; // 0x0
		::FlatData::MissionResetType* Limit; // 0x0

	};
}

