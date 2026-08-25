#pragma once
#include "../unitysdk.h"

namespace FlatData { class ScenarioZoomAnchors; }

namespace FlatData
{
	inline static constexpr unsigned int ScenarioZoomAnchors_TypeDefinitionIndex = 9618;

	class ScenarioZoomAnchors : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::ScenarioZoomAnchors* Center; // 0x0
		::FlatData::ScenarioZoomAnchors* LeftTop; // 0x0
		::FlatData::ScenarioZoomAnchors* LeftBottom; // 0x0
		::FlatData::ScenarioZoomAnchors* RightTop; // 0x0
		::FlatData::ScenarioZoomAnchors* RightBottom; // 0x0

	};
}

