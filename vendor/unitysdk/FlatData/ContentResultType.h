#pragma once
#include "../unitysdk.h"

namespace FlatData { class ContentResultType; }

namespace FlatData
{
	inline static constexpr unsigned int ContentResultType_TypeDefinitionIndex = 9463;

	class ContentResultType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::ContentResultType* Failure; // 0x0
		::FlatData::ContentResultType* Success; // 0x0

	};
}

