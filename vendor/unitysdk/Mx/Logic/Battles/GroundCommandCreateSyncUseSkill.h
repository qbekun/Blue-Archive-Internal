#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class Battle; }

#define MX_LOGIC_BATTLES_GROUNDCOMMANDCREATESYNCUSESKILL_.CTOR_OFFSET UNITYSDK_OFFSET(0x12CFF20)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDCREATESYNCUSESKILL_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x12CFF70)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDCREATESYNCUSESKILL_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x12D0870)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDCREATESYNCUSESKILL_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x12D1520)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDCREATESYNCUSESKILL_EXECUTE_OFFSET UNITYSDK_OFFSET(0x12D1720)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDCREATESYNCUSESKILL_.CCTOR_OFFSET UNITYSDK_OFFSET(0x12D17B0)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int GroundCommandCreateSyncUseSkill_TypeDefinitionIndex = 14156;

	class GroundCommandCreateSyncUseSkill : public Il2CppObject
	{
	public:
		::System::Int32 CoolDownInMilliSeconds; // 0x30
		::System::Int32 SyncUseSkillGroupId; // 0x34
		::System::Boolean IsAllyGroup; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDCREATESYNCUSESKILL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundCommandCreateSyncUseSkill&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundCommandCreateSyncUseSkill&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDCREATESYNCUSESKILL_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundCommandCreateSyncUseSkill&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundCommandCreateSyncUseSkill&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDCREATESYNCUSESKILL_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDCREATESYNCUSESKILL_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Execute(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDCREATESYNCUSESKILL_EXECUTE_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDCREATESYNCUSESKILL_.CCTOR_OFFSET))(nullptr);
		}

	};
}

