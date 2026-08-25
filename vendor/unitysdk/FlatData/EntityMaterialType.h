#pragma once
#include "../unitysdk.h"

namespace FlatData { class EntityMaterialType; }

namespace FlatData
{
	inline static constexpr unsigned int EntityMaterialType_TypeDefinitionIndex = 9375;

	class EntityMaterialType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::EntityMaterialType* Wood; // 0x0
		::FlatData::EntityMaterialType* Stone; // 0x0
		::FlatData::EntityMaterialType* Flesh; // 0x0
		::FlatData::EntityMaterialType* Metal; // 0x0

	};
}

