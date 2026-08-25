#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class EquipmentOptionType; }
namespace MX::Logic::Skills::LogicEffects { class StatEvalType; }

#define MX_LOGIC_DATA_EQUIPMENTOPTIONCHANGEEFFECTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11F40E0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int EquipmentOptionChangeEffectData_TypeDefinitionIndex = 13589;

	class EquipmentOptionChangeEffectData : public Il2CppObject
	{
	public:
		::FlatData::EquipmentOptionType* StatType; // 0x58
		::MX::Logic::Skills::LogicEffects::StatEvalType* EvalType; // 0x5C
		::System::Int64 Amount; // 0x60
		::System::Int32 Duration; // 0x68
		::System::Boolean Dispellable; // 0x6C

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_EQUIPMENTOPTIONCHANGEEFFECTDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

