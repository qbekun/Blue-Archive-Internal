#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class TemporaryCanUseSkillArea; }
namespace MX::Logic::Battles { class Battle; }

#define MX_LOGIC_BATTLES_GROUNDCOMMANDTEMPORARYCANUSESKILLAREA__EXECUTE_B__2_0_OFFSET UNITYSDK_OFFSET(0x13233E0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDTEMPORARYCANUSESKILLAREA_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1323410)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDTEMPORARYCANUSESKILLAREA_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x13243B0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDTEMPORARYCANUSESKILLAREA_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x1325860)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDTEMPORARYCANUSESKILLAREA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1325810)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDTEMPORARYCANUSESKILLAREA_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1325A60)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDTEMPORARYCANUSESKILLAREA_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1325A70)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int GroundCommandTemporaryCanUseSkillArea_TypeDefinitionIndex = 14250;

	class GroundCommandTemporaryCanUseSkillArea : public Il2CppObject
	{
	public:
		::System::Boolean OnOff; // 0x30
		::System::String* TemporaryCanUseSkillAreaCommandId; // 0x38

		::System::Boolean _Execute_b__2_0(::MX::Logic::BattleEntities::TemporaryCanUseSkillArea* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::TemporaryCanUseSkillArea*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDTEMPORARYCANUSESKILLAREA__EXECUTE_B__2_0_OFFSET))(arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundCommandTemporaryCanUseSkillArea&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundCommandTemporaryCanUseSkillArea&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDTEMPORARYCANUSESKILLAREA_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundCommandTemporaryCanUseSkillArea&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundCommandTemporaryCanUseSkillArea&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDTEMPORARYCANUSESKILLAREA_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDTEMPORARYCANUSESKILLAREA_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDTEMPORARYCANUSESKILLAREA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDTEMPORARYCANUSESKILLAREA_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Execute(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDTEMPORARYCANUSESKILLAREA_EXECUTE_OFFSET))(arg, nullptr);
		}

	};
}

