#pragma once
#include "../unitysdk.h"

namespace FlatData { class PositioningType; }

namespace FlatData
{
	inline static constexpr unsigned int PositioningType_TypeDefinitionIndex = 9378;

	class PositioningType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::PositioningType* CloseToObstacle; // 0x0
		::FlatData::PositioningType* CloseToTarget; // 0x0

	};
}

