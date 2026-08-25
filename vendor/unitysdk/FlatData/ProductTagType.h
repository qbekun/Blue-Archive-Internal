#pragma once
#include "../unitysdk.h"

namespace FlatData { class ProductTagType; }

namespace FlatData
{
	inline static constexpr unsigned int ProductTagType_TypeDefinitionIndex = 9632;

	class ProductTagType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::ProductTagType* Monthly; // 0x0
		::FlatData::ProductTagType* Weekly; // 0x0
		::FlatData::ProductTagType* Biweekly; // 0x0

	};
}

