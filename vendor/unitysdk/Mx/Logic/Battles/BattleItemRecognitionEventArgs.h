#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class BattleItem; }
namespace MX::Logic::BattleEntities { class BattleEntity; }

#define MX_LOGIC_BATTLES_BATTLEITEMRECOGNITIONEVENTARGS_GET_BATTLEITEM_OFFSET UNITYSDK_OFFSET(0x126F290)
#define MX_LOGIC_BATTLES_BATTLEITEMRECOGNITIONEVENTARGS_SET_BATTLEITEM_OFFSET UNITYSDK_OFFSET(0x126F2A0)
#define MX_LOGIC_BATTLES_BATTLEITEMRECOGNITIONEVENTARGS_SET_RECOGNIZEDENTITY_OFFSET UNITYSDK_OFFSET(0x126F2B0)
#define MX_LOGIC_BATTLES_BATTLEITEMRECOGNITIONEVENTARGS_GET_RECOGNIZEDENTITY_OFFSET UNITYSDK_OFFSET(0x126F2C0)
#define MX_LOGIC_BATTLES_BATTLEITEMRECOGNITIONEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x126BA60)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int BattleItemRecognitionEventArgs_TypeDefinitionIndex = 14016;

	class BattleItemRecognitionEventArgs : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::BattleItem* _BattleItem_k__BackingField; // 0x10
		::MX::Logic::BattleEntities::BattleEntity* _RecognizedEntity_k__BackingField; // 0x18

		::MX::Logic::BattleEntities::BattleItem* get_BattleItem()
		{
			return ((::MX::Logic::BattleEntities::BattleItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BATTLEITEMRECOGNITIONEVENTARGS_GET_BATTLEITEM_OFFSET))(nullptr);
		}

		::System::Void set_BattleItem(::MX::Logic::BattleEntities::BattleItem* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleItem*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BATTLEITEMRECOGNITIONEVENTARGS_SET_BATTLEITEM_OFFSET))(arg, nullptr);
		}

		::System::Void set_RecognizedEntity(::MX::Logic::BattleEntities::BattleEntity* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BATTLEITEMRECOGNITIONEVENTARGS_SET_RECOGNIZEDENTITY_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::BattleEntity* get_RecognizedEntity()
		{
			return ((::MX::Logic::BattleEntities::BattleEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BATTLEITEMRECOGNITIONEVENTARGS_GET_RECOGNIZEDENTITY_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::BattleItem* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleItem*, ::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BATTLEITEMRECOGNITIONEVENTARGS_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

	};
}

