#pragma once
#include "../unitysdk.h"

namespace FlatData { class ProductDisplayTag; }

namespace FlatData
{
	inline static constexpr unsigned int ProductDisplayTag_TypeDefinitionIndex = 9631;

	class ProductDisplayTag : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::ProductDisplayTag* None; // 0x0
		::FlatData::ProductDisplayTag* New; // 0x0
		::FlatData::ProductDisplayTag* Hot; // 0x0
		::FlatData::ProductDisplayTag* Sale; // 0x0
		::FlatData::ProductDisplayTag* Limited; // 0x0
		::FlatData::ProductDisplayTag* Free; // 0x0

	};
}

