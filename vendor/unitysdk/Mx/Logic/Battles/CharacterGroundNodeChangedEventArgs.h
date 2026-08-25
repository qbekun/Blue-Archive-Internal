#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class EntityId; }
namespace MX::Logic::BattleEntities { class O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4; }

#define MX_LOGIC_BATTLES_CHARACTERGROUNDNODECHANGEDEVENTARGS_GET_PREVIOUSX_OFFSET UNITYSDK_OFFSET(0x126F360)
#define MX_LOGIC_BATTLES_CHARACTERGROUNDNODECHANGEDEVENTARGS_GET_CHARACTER_OFFSET UNITYSDK_OFFSET(0x126F370)
#define MX_LOGIC_BATTLES_CHARACTERGROUNDNODECHANGEDEVENTARGS_SET_CHARACTER_OFFSET UNITYSDK_OFFSET(0x126F380)
#define MX_LOGIC_BATTLES_CHARACTERGROUNDNODECHANGEDEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x126F390)
#define MX_LOGIC_BATTLES_CHARACTERGROUNDNODECHANGEDEVENTARGS_SET_ENTITYID_OFFSET UNITYSDK_OFFSET(0x126F410)
#define MX_LOGIC_BATTLES_CHARACTERGROUNDNODECHANGEDEVENTARGS_SET_PREVIOUSY_OFFSET UNITYSDK_OFFSET(0x126F420)
#define MX_LOGIC_BATTLES_CHARACTERGROUNDNODECHANGEDEVENTARGS_SET_PREVIOUSX_OFFSET UNITYSDK_OFFSET(0x126F430)
#define MX_LOGIC_BATTLES_CHARACTERGROUNDNODECHANGEDEVENTARGS_GET_ENTITYID_OFFSET UNITYSDK_OFFSET(0x126F440)
#define MX_LOGIC_BATTLES_CHARACTERGROUNDNODECHANGEDEVENTARGS_GET_PREVIOUSY_OFFSET UNITYSDK_OFFSET(0x126F450)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int CharacterGroundNodeChangedEventArgs_TypeDefinitionIndex = 14020;

	class CharacterGroundNodeChangedEventArgs : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::EntityId* _EntityId_k__BackingField; // 0x10
		::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* _Character_k__BackingField; // 0x18
		::System::Int32 _PreviousX_k__BackingField; // 0x20
		::System::Int32 _PreviousY_k__BackingField; // 0x24

		::System::Int32 get_PreviousX()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUNDNODECHANGEDEVENTARGS_GET_PREVIOUSX_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* get_Character()
		{
			return ((::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUNDNODECHANGEDEVENTARGS_GET_CHARACTER_OFFSET))(nullptr);
		}

		::System::Void set_Character(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUNDNODECHANGEDEVENTARGS_SET_CHARACTER_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::EntityId* arg, ::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg2, ::System::Int32 arg3, ::System::Int32 arg4)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, ::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUNDNODECHANGEDEVENTARGS_.CTOR_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void set_EntityId(::MX::Logic::BattleEntities::EntityId* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUNDNODECHANGEDEVENTARGS_SET_ENTITYID_OFFSET))(arg, nullptr);
		}

		::System::Void set_PreviousY(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUNDNODECHANGEDEVENTARGS_SET_PREVIOUSY_OFFSET))(arg, nullptr);
		}

		::System::Void set_PreviousX(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUNDNODECHANGEDEVENTARGS_SET_PREVIOUSX_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::EntityId* get_EntityId()
		{
			return ((::MX::Logic::BattleEntities::EntityId*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUNDNODECHANGEDEVENTARGS_GET_ENTITYID_OFFSET))(nullptr);
		}

		::System::Int32 get_PreviousY()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUNDNODECHANGEDEVENTARGS_GET_PREVIOUSY_OFFSET))(nullptr);
		}

	};
}

