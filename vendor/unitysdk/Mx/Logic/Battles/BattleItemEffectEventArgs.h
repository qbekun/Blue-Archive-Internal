#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class BattleItem; }
namespace MX::Logic::BattleEntities { class BattleEntity; }

#define MX_LOGIC_BATTLES_BATTLEITEMEFFECTEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x126BC30)
#define MX_LOGIC_BATTLES_BATTLEITEMEFFECTEVENTARGS_GET_BATTLEITEM_OFFSET UNITYSDK_OFFSET(0x126F2D0)
#define MX_LOGIC_BATTLES_BATTLEITEMEFFECTEVENTARGS_SET_BATTLEITEM_OFFSET UNITYSDK_OFFSET(0x126F2E0)
#define MX_LOGIC_BATTLES_BATTLEITEMEFFECTEVENTARGS_SET_EFFECTEDENTITY_OFFSET UNITYSDK_OFFSET(0x126F2F0)
#define MX_LOGIC_BATTLES_BATTLEITEMEFFECTEVENTARGS_GET_EFFECTEDENTITY_OFFSET UNITYSDK_OFFSET(0x126F300)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int BattleItemEffectEventArgs_TypeDefinitionIndex = 14017;

	class BattleItemEffectEventArgs : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::BattleItem* _BattleItem_k__BackingField; // 0x10
		::MX::Logic::BattleEntities::BattleEntity* _EffectedEntity_k__BackingField; // 0x18

		::System::Void .ctor(::MX::Logic::BattleEntities::BattleItem* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleItem*, ::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BATTLEITEMEFFECTEVENTARGS_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Logic::BattleEntities::BattleItem* get_BattleItem()
		{
			return ((::MX::Logic::BattleEntities::BattleItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BATTLEITEMEFFECTEVENTARGS_GET_BATTLEITEM_OFFSET))(nullptr);
		}

		::System::Void set_BattleItem(::MX::Logic::BattleEntities::BattleItem* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleItem*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BATTLEITEMEFFECTEVENTARGS_SET_BATTLEITEM_OFFSET))(arg, nullptr);
		}

		::System::Void set_EffectedEntity(::MX::Logic::BattleEntities::BattleEntity* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BATTLEITEMEFFECTEVENTARGS_SET_EFFECTEDENTITY_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::BattleEntity* get_EffectedEntity()
		{
			return ((::MX::Logic::BattleEntities::BattleEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BATTLEITEMEFFECTEVENTARGS_GET_EFFECTEDENTITY_OFFSET))(nullptr);
		}

	};
}

