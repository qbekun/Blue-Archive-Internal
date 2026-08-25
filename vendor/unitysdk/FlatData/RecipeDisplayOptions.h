#pragma once
#include "../unitysdk.h"

namespace FlatData { class RecipeDisplayOptions; }

namespace FlatData
{
	inline static constexpr unsigned int RecipeDisplayOptions_TypeDefinitionIndex = 9490;

	class RecipeDisplayOptions : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::RecipeDisplayOptions* None; // 0x0
		::FlatData::RecipeDisplayOptions* Always; // 0x0
		::FlatData::RecipeDisplayOptions* HideNoMaterials; // 0x0

	};
}

