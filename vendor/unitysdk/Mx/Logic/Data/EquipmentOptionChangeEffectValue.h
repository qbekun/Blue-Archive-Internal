#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class EquipmentOptionType; }
namespace MX::Logic::Skills::LogicEffects { class StatEvalType; }
namespace MX::GameData::DAO::Battle { class EquipmentOptionChangeEffectDAO; }

#define MX_LOGIC_DATA_EQUIPMENTOPTIONCHANGEEFFECTVALUE_GET_DURATIONFRAME_OFFSET UNITYSDK_OFFSET(0x1239A50)
#define MX_LOGIC_DATA_EQUIPMENTOPTIONCHANGEEFFECTVALUE_GET_STATTYPE_OFFSET UNITYSDK_OFFSET(0x1239A60)
#define MX_LOGIC_DATA_EQUIPMENTOPTIONCHANGEEFFECTVALUE_GET_DISPELLABLE_OFFSET UNITYSDK_OFFSET(0x1239A70)
#define MX_LOGIC_DATA_EQUIPMENTOPTIONCHANGEEFFECTVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1239A80)
#define MX_LOGIC_DATA_EQUIPMENTOPTIONCHANGEEFFECTVALUE_GET_AMOUNT_OFFSET UNITYSDK_OFFSET(0x1239B90)
#define MX_LOGIC_DATA_EQUIPMENTOPTIONCHANGEEFFECTVALUE_GET_EVALTYPE_OFFSET UNITYSDK_OFFSET(0x1239BA0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int EquipmentOptionChangeEffectValue_TypeDefinitionIndex = 13884;

	class EquipmentOptionChangeEffectValue : public Il2CppObject
	{
	public:
		::FlatData::EquipmentOptionType* _StatType_k__BackingField; // 0x48
		::MX::Logic::Skills::LogicEffects::StatEvalType* _EvalType_k__BackingField; // 0x4C
		::System::Int64 _Amount_k__BackingField; // 0x50
		::System::Int32 _DurationFrame_k__BackingField; // 0x58
		::System::Boolean _Dispellable_k__BackingField; // 0x5C

		::System::Int32 get_DurationFrame()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_EQUIPMENTOPTIONCHANGEEFFECTVALUE_GET_DURATIONFRAME_OFFSET))(nullptr);
		}

		::FlatData::EquipmentOptionType* get_StatType()
		{
			return ((::FlatData::EquipmentOptionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_EQUIPMENTOPTIONCHANGEEFFECTVALUE_GET_STATTYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_Dispellable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_EQUIPMENTOPTIONCHANGEEFFECTVALUE_GET_DISPELLABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::EquipmentOptionChangeEffectDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::EquipmentOptionChangeEffectDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_EQUIPMENTOPTIONCHANGEEFFECTVALUE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_Amount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_EQUIPMENTOPTIONCHANGEEFFECTVALUE_GET_AMOUNT_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::LogicEffects::StatEvalType* get_EvalType()
		{
			return ((::MX::Logic::Skills::LogicEffects::StatEvalType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_EQUIPMENTOPTIONCHANGEEFFECTVALUE_GET_EVALTYPE_OFFSET))(nullptr);
		}

	};
}

