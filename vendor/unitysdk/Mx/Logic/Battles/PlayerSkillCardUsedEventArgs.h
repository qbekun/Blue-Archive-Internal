#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class GroupTag; }
namespace MX::Logic::BattleEntities { class BattleEntity; }

#define MX_LOGIC_BATTLES_PLAYERSKILLCARDUSEDEVENTARGS_GET_GROUPTAG_OFFSET UNITYSDK_OFFSET(0x12737B0)
#define MX_LOGIC_BATTLES_PLAYERSKILLCARDUSEDEVENTARGS_GET_OWNER_OFFSET UNITYSDK_OFFSET(0x12737C0)
#define MX_LOGIC_BATTLES_PLAYERSKILLCARDUSEDEVENTARGS_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x12737D0)
#define MX_LOGIC_BATTLES_PLAYERSKILLCARDUSEDEVENTARGS_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x12737E0)
#define MX_LOGIC_BATTLES_PLAYERSKILLCARDUSEDEVENTARGS_GET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x12737F0)
#define MX_LOGIC_BATTLES_PLAYERSKILLCARDUSEDEVENTARGS_GET_COST_OFFSET UNITYSDK_OFFSET(0x1273800)
#define MX_LOGIC_BATTLES_PLAYERSKILLCARDUSEDEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x1273810)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int PlayerSkillCardUsedEventArgs_TypeDefinitionIndex = 14051;

	class PlayerSkillCardUsedEventArgs : public Il2CppObject
	{
	public:
		::MX::Logic::Battles::GroupTag* _GroupTag_k__BackingField; // 0x10
		::System::Int64 _CharacterId_k__BackingField; // 0x18
		::System::Single _Cost_k__BackingField; // 0x20
		::System::String* _GroupId_k__BackingField; // 0x28
		::System::Int32 _Level_k__BackingField; // 0x30
		::MX::Logic::BattleEntities::BattleEntity* _Owner_k__BackingField; // 0x38

		::MX::Logic::Battles::GroupTag* get_GroupTag()
		{
			return ((::MX::Logic::Battles::GroupTag*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_PLAYERSKILLCARDUSEDEVENTARGS_GET_GROUPTAG_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::BattleEntity* get_Owner()
		{
			return ((::MX::Logic::BattleEntities::BattleEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_PLAYERSKILLCARDUSEDEVENTARGS_GET_OWNER_OFFSET))(nullptr);
		}

		::System::Int32 get_Level()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_PLAYERSKILLCARDUSEDEVENTARGS_GET_LEVEL_OFFSET))(nullptr);
		}

		::System::String* get_GroupId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_PLAYERSKILLCARDUSEDEVENTARGS_GET_GROUPID_OFFSET))(nullptr);
		}

		::System::Int64 get_CharacterId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_PLAYERSKILLCARDUSEDEVENTARGS_GET_CHARACTERID_OFFSET))(nullptr);
		}

		::System::Single get_Cost()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_PLAYERSKILLCARDUSEDEVENTARGS_GET_COST_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::BattleEntity* arg, ::System::Int64 arg2, ::System::Single arg3, ::System::String* str, ::System::Int32 arg4)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleEntity*, ::System::Int64, ::System::Single, ::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_PLAYERSKILLCARDUSEDEVENTARGS_.CTOR_OFFSET))(arg, arg2, arg3, str, arg4, nullptr);
		}

	};
}

