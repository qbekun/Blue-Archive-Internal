#pragma once
#include "../unitysdk.h"

namespace FlatData { class WebAPIErrorLevel; }

namespace FlatData
{
	inline static constexpr unsigned int WebAPIErrorLevel_TypeDefinitionIndex = 9506;

	class WebAPIErrorLevel : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::WebAPIErrorLevel* None; // 0x0
		::FlatData::WebAPIErrorLevel* Warning; // 0x0
		::FlatData::WebAPIErrorLevel* Error; // 0x0

	};
}

