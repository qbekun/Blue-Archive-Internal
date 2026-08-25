#pragma once
#include "../unitysdk.h"

namespace FlatData { class ArmorType; }

namespace FlatData
{
	inline static constexpr unsigned int ArmorType_TypeDefinitionIndex = 9373;

	class ArmorType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::ArmorType* LightArmor; // 0x0
		::FlatData::ArmorType* HeavyArmor; // 0x0
		::FlatData::ArmorType* Unarmed; // 0x0
		::FlatData::ArmorType* Structure; // 0x0
		::FlatData::ArmorType* Normal; // 0x0
		::FlatData::ArmorType* ElasticArmor; // 0x0
		::FlatData::ArmorType* CompositeArmor; // 0x0

	};
}

