#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class BattleItem; }

#define MX_LOGIC_BATTLES_BATTLEITEMACTIVATEDEVENTARGS_GET_BATTLEITEM_OFFSET UNITYSDK_OFFSET(0x126F270)
#define MX_LOGIC_BATTLES_BATTLEITEMACTIVATEDEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x126BDD0)
#define MX_LOGIC_BATTLES_BATTLEITEMACTIVATEDEVENTARGS_SET_BATTLEITEM_OFFSET UNITYSDK_OFFSET(0x126F280)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int BattleItemActivatedEventArgs_TypeDefinitionIndex = 14015;

	class BattleItemActivatedEventArgs : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::BattleItem* _BattleItem_k__BackingField; // 0x10

		::MX::Logic::BattleEntities::BattleItem* get_BattleItem()
		{
			return ((::MX::Logic::BattleEntities::BattleItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BATTLEITEMACTIVATEDEVENTARGS_GET_BATTLEITEM_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::BattleItem* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleItem*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BATTLEITEMACTIVATEDEVENTARGS_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void set_BattleItem(::MX::Logic::BattleEntities::BattleItem* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleItem*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BATTLEITEMACTIVATEDEVENTARGS_SET_BATTLEITEM_OFFSET))(arg, nullptr);
		}

	};
}

