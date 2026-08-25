#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class EntityId; }

#define MX_LOGIC_BATTLEENTITIES_SKILLUSEPOINT_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x11C82C0)
#define MX_LOGIC_BATTLEENTITIES_SKILLUSEPOINT_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x11C8520)
#define MX_LOGIC_BATTLEENTITIES_SKILLUSEPOINT_.CCTOR_OFFSET UNITYSDK_OFFSET(0x11C8DE0)
#define MX_LOGIC_BATTLEENTITIES_SKILLUSEPOINT_.CTOR_OFFSET UNITYSDK_OFFSET(0x11C8D90)
#define MX_LOGIC_BATTLEENTITIES_SKILLUSEPOINT_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x11C8DF0)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int SkillUsePoint_TypeDefinitionIndex = 13356;

	class SkillUsePoint : public Il2CppObject
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::BattleEntities::SkillUsePoint&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::BattleEntities::SkillUsePoint&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLUSEPOINT_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::BattleEntities::SkillUsePoint&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::BattleEntities::SkillUsePoint&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLUSEPOINT_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLUSEPOINT_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::EntityId* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLUSEPOINT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLUSEPOINT_REGISTERFORMATTER_OFFSET))(nullptr);
		}

	};
}

