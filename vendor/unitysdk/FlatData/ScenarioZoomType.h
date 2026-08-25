#pragma once
#include "../unitysdk.h"

namespace FlatData { class ScenarioZoomType; }

namespace FlatData
{
	inline static constexpr unsigned int ScenarioZoomType_TypeDefinitionIndex = 9619;

	class ScenarioZoomType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::ScenarioZoomType* Instant; // 0x0
		::FlatData::ScenarioZoomType* Slide; // 0x0

	};
}

