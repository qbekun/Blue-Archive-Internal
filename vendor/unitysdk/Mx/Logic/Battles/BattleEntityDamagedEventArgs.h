#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class EntityId; }
namespace FlatData { class FontType; }

#define MX_LOGIC_BATTLES_BATTLEENTITYDAMAGEDEVENTARGS_GET_HITRESULTTYPE_OFFSET UNITYSDK_OFFSET(0x126FA90)
#define MX_LOGIC_BATTLES_BATTLEENTITYDAMAGEDEVENTARGS_GET_TARGETID_OFFSET UNITYSDK_OFFSET(0x126FAA0)
#define MX_LOGIC_BATTLES_BATTLEENTITYDAMAGEDEVENTARGS_GET_DAMAGEABSORBED_OFFSET UNITYSDK_OFFSET(0x126FAB0)
#define MX_LOGIC_BATTLES_BATTLEENTITYDAMAGEDEVENTARGS_GET_ISKILLSHOT_OFFSET UNITYSDK_OFFSET(0x126FAC0)
#define MX_LOGIC_BATTLES_BATTLEENTITYDAMAGEDEVENTARGS_GET_ATTACKERID_OFFSET UNITYSDK_OFFSET(0x126FAD0)
#define MX_LOGIC_BATTLES_BATTLEENTITYDAMAGEDEVENTARGS_GET_DAMAGETAKEN_OFFSET UNITYSDK_OFFSET(0x126FAE0)
#define MX_LOGIC_BATTLES_BATTLEENTITYDAMAGEDEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x126FAF0)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int BattleEntityDamagedEventArgs_TypeDefinitionIndex = 14028;

	class BattleEntityDamagedEventArgs : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::EntityId* _AttackerId_k__BackingField; // 0x10
		::MX::Logic::BattleEntities::EntityId* _TargetId_k__BackingField; // 0x14
		::System::Int64 _DamageTaken_k__BackingField; // 0x18
		::System::Int64 _DamageAbsorbed_k__BackingField; // 0x20
		::FlatData::FontType* _HitResultType_k__BackingField; // 0x28
		::System::Boolean _IsKillShot_k__BackingField; // 0x2C

		::FlatData::FontType* get_HitResultType()
		{
			return ((::FlatData::FontType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BATTLEENTITYDAMAGEDEVENTARGS_GET_HITRESULTTYPE_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::EntityId* get_TargetId()
		{
			return ((::MX::Logic::BattleEntities::EntityId*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BATTLEENTITYDAMAGEDEVENTARGS_GET_TARGETID_OFFSET))(nullptr);
		}

		::System::Int64 get_DamageAbsorbed()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BATTLEENTITYDAMAGEDEVENTARGS_GET_DAMAGEABSORBED_OFFSET))(nullptr);
		}

		::System::Boolean get_IsKillShot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BATTLEENTITYDAMAGEDEVENTARGS_GET_ISKILLSHOT_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::EntityId* get_AttackerId()
		{
			return ((::MX::Logic::BattleEntities::EntityId*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BATTLEENTITYDAMAGEDEVENTARGS_GET_ATTACKERID_OFFSET))(nullptr);
		}

		::System::Int64 get_DamageTaken()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BATTLEENTITYDAMAGEDEVENTARGS_GET_DAMAGETAKEN_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::EntityId* arg, ::MX::Logic::BattleEntities::EntityId* arg2, ::System::Int64 arg3, ::System::Int64 arg4, ::FlatData::FontType* arg5, ::System::Boolean arg6)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, ::MX::Logic::BattleEntities::EntityId*, ::System::Int64, ::System::Int64, ::FlatData::FontType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BATTLEENTITYDAMAGEDEVENTARGS_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

	};
}

