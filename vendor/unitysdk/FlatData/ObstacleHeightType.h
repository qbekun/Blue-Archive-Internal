#pragma once
#include "../unitysdk.h"

namespace FlatData { class ObstacleHeightType; }

namespace FlatData
{
	inline static constexpr unsigned int ObstacleHeightType_TypeDefinitionIndex = 9394;

	class ObstacleHeightType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::ObstacleHeightType* Low; // 0x0
		::FlatData::ObstacleHeightType* Middle; // 0x0
		::FlatData::ObstacleHeightType* High; // 0x0

	};
}

