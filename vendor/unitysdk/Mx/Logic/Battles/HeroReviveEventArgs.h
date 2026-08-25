#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class EntityId; }
namespace MX::Logic::BattleEntities { class O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4; }

#define MX_LOGIC_BATTLES_HEROREVIVEEVENTARGS_SET_LOGICFRAME_OFFSET UNITYSDK_OFFSET(0x1271840)
#define MX_LOGIC_BATTLES_HEROREVIVEEVENTARGS_SET_CHARACTER_OFFSET UNITYSDK_OFFSET(0x1271850)
#define MX_LOGIC_BATTLES_HEROREVIVEEVENTARGS_SET_TARGETID_OFFSET UNITYSDK_OFFSET(0x1271860)
#define MX_LOGIC_BATTLES_HEROREVIVEEVENTARGS_GET_LOGICFRAME_OFFSET UNITYSDK_OFFSET(0x1271870)
#define MX_LOGIC_BATTLES_HEROREVIVEEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x1271880)
#define MX_LOGIC_BATTLES_HEROREVIVEEVENTARGS_GET_TARGETID_OFFSET UNITYSDK_OFFSET(0x1271900)
#define MX_LOGIC_BATTLES_HEROREVIVEEVENTARGS_GET_CHARACTER_OFFSET UNITYSDK_OFFSET(0x1271910)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int HeroReviveEventArgs_TypeDefinitionIndex = 14035;

	class HeroReviveEventArgs : public Il2CppObject
	{
	public:
		::System::Int32 _LogicFrame_k__BackingField; // 0x10
		::MX::Logic::BattleEntities::EntityId* _TargetId_k__BackingField; // 0x14
		::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* _Character_k__BackingField; // 0x18

		::System::Void set_LogicFrame(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_HEROREVIVEEVENTARGS_SET_LOGICFRAME_OFFSET))(arg, nullptr);
		}

		::System::Void set_Character(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_HEROREVIVEEVENTARGS_SET_CHARACTER_OFFSET))(arg, nullptr);
		}

		::System::Void set_TargetId(::MX::Logic::BattleEntities::EntityId* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_HEROREVIVEEVENTARGS_SET_TARGETID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_LogicFrame()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_HEROREVIVEEVENTARGS_GET_LOGICFRAME_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg2)
		{
			((::System::Void(*)(::System::Int32, ::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_HEROREVIVEEVENTARGS_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Logic::BattleEntities::EntityId* get_TargetId()
		{
			return ((::MX::Logic::BattleEntities::EntityId*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_HEROREVIVEEVENTARGS_GET_TARGETID_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* get_Character()
		{
			return ((::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_HEROREVIVEEVENTARGS_GET_CHARACTER_OFFSET))(nullptr);
		}

	};
}

