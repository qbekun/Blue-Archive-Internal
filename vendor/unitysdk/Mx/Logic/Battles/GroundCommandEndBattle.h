#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class BattleEndType; }
namespace MX::Logic::Battles { class Battle; }

#define MX_LOGIC_BATTLES_GROUNDCOMMANDENDBATTLE_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x12D4D20)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDENDBATTLE_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x12D5610)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDENDBATTLE_EXECUTE_OFFSET UNITYSDK_OFFSET(0x12D6280)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDENDBATTLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x12D6230)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDENDBATTLE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x12D62B0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDENDBATTLE_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x12D62C0)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int GroundCommandEndBattle_TypeDefinitionIndex = 14162;

	class GroundCommandEndBattle : public Il2CppObject
	{
	public:
		::MX::Logic::Battles::BattleEndType* BattleEndType; // 0x30

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundCommandEndBattle&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundCommandEndBattle&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDENDBATTLE_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundCommandEndBattle&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundCommandEndBattle&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDENDBATTLE_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Execute(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDENDBATTLE_EXECUTE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDENDBATTLE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDENDBATTLE_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDENDBATTLE_REGISTERFORMATTER_OFFSET))(nullptr);
		}

	};
}

