#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Skills::LogicEffects { class StatChangeEffect; }
namespace MX::Logic::Equipments { class EquipmentOption; }
namespace FlatData { class EquipmentCategory; }
namespace FlatData { class EquipmentOptionType; }

#define MX_LOGIC_EQUIPMENTS_EQUIPMENTSERVICE_TOSTATCHANGEEFFECT_OFFSET UNITYSDK_OFFSET(0x108A980)
#define MX_LOGIC_EQUIPMENTS_EQUIPMENTSERVICE_ISEXPCATEGORY_OFFSET UNITYSDK_OFFSET(0x108BCE0)
#define MX_LOGIC_EQUIPMENTS_EQUIPMENTSERVICE_TOSTATCHANGEEFFECT_OFFSET UNITYSDK_OFFSET(0x108A990)

namespace MX::Logic::Equipments
{
	inline static constexpr unsigned int EquipmentService_TypeDefinitionIndex = 12924;

	class EquipmentService : public Il2CppObject
	{
	public:
		::MX::Logic::Skills::LogicEffects::StatChangeEffect* ToStatChangeEffect(::MX::Logic::Equipments::EquipmentOption* arg)
		{
			return ((::MX::Logic::Skills::LogicEffects::StatChangeEffect*(*)(::MX::Logic::Equipments::EquipmentOption*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_EQUIPMENTS_EQUIPMENTSERVICE_TOSTATCHANGEEFFECT_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsExpCategory(::FlatData::EquipmentCategory* arg)
		{
			return ((::System::Boolean(*)(::FlatData::EquipmentCategory*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_EQUIPMENTS_EQUIPMENTSERVICE_ISEXPCATEGORY_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Skills::LogicEffects::StatChangeEffect* ToStatChangeEffect(::FlatData::EquipmentOptionType* arg, ::System::Int64 arg2)
		{
			return ((::MX::Logic::Skills::LogicEffects::StatChangeEffect*(*)(::FlatData::EquipmentOptionType*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_EQUIPMENTS_EQUIPMENTSERVICE_TOSTATCHANGEEFFECT_OFFSET))(arg, arg2, nullptr);
		}

	};
}

