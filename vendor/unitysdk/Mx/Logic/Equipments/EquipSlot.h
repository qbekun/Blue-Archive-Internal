#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Equipments { class EquipSlot; }

namespace MX::Logic::Equipments
{
	inline static constexpr unsigned int EquipSlot_TypeDefinitionIndex = 12923;

	class EquipSlot : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Logic::Equipments::EquipSlot* None; // 0x0
		::MX::Logic::Equipments::EquipSlot* Weapon; // 0x0
		::MX::Logic::Equipments::EquipSlot* Helmet; // 0x0
		::MX::Logic::Equipments::EquipSlot* Armor; // 0x0
		::MX::Logic::Equipments::EquipSlot* Shoes; // 0x0
		::MX::Logic::Equipments::EquipSlot* Accessory; // 0x0

	};
}

