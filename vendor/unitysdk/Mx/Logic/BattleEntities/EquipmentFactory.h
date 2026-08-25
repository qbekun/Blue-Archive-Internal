#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Equipments { class Equipment; }
namespace MX::Logic::Data { class EquipmentSetting; }

#define MX_LOGIC_BATTLEENTITIES_EQUIPMENTFACTORY_CREATEEQUIPMENT_OFFSET UNITYSDK_OFFSET(0x11C3CC0)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int EquipmentFactory_TypeDefinitionIndex = 13345;

	class EquipmentFactory : public Il2CppObject
	{
	public:
		::MX::Logic::Equipments::Equipment* CreateEquipment(::MX::Logic::Data::EquipmentSetting* arg)
		{
			return ((::MX::Logic::Equipments::Equipment*(*)(::MX::Logic::Data::EquipmentSetting*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_EQUIPMENTFACTORY_CREATEEQUIPMENT_OFFSET))(arg, nullptr);
		}

	};
}

