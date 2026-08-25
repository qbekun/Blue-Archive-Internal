#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class EffectArea; }
namespace MX::Logic::BattleEntities { class EntityId; }
namespace MX::Logic::Skills { class SkillSpecification; }

#define MX_LOGIC_BATTLES_EFFECTAREASPAWNEDEVENTARGS_GET_AREA_OFFSET UNITYSDK_OFFSET(0x126EBF0)
#define MX_LOGIC_BATTLES_EFFECTAREASPAWNEDEVENTARGS_GET_AREAID_OFFSET UNITYSDK_OFFSET(0x126EC00)
#define MX_LOGIC_BATTLES_EFFECTAREASPAWNEDEVENTARGS_GET_SKILLSPECIFICATION_OFFSET UNITYSDK_OFFSET(0x126EC20)
#define MX_LOGIC_BATTLES_EFFECTAREASPAWNEDEVENTARGS_GET_INVOKERID_OFFSET UNITYSDK_OFFSET(0x126EC40)
#define MX_LOGIC_BATTLES_EFFECTAREASPAWNEDEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x1267D40)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int EffectAreaSpawnedEventArgs_TypeDefinitionIndex = 14008;

	class EffectAreaSpawnedEventArgs : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::EffectArea* _Area_k__BackingField; // 0x10

		::MX::Logic::BattleEntities::EffectArea* get_Area()
		{
			return ((::MX::Logic::BattleEntities::EffectArea*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_EFFECTAREASPAWNEDEVENTARGS_GET_AREA_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::EntityId* get_AreaId()
		{
			return ((::MX::Logic::BattleEntities::EntityId*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_EFFECTAREASPAWNEDEVENTARGS_GET_AREAID_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::SkillSpecification* get_SkillSpecification()
		{
			return ((::MX::Logic::Skills::SkillSpecification*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_EFFECTAREASPAWNEDEVENTARGS_GET_SKILLSPECIFICATION_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::EntityId* get_InvokerId()
		{
			return ((::MX::Logic::BattleEntities::EntityId*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_EFFECTAREASPAWNEDEVENTARGS_GET_INVOKERID_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::EffectArea* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EffectArea*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_EFFECTAREASPAWNEDEVENTARGS_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

