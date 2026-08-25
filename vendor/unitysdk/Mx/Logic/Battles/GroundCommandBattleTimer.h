#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class Battle; }

#define MX_LOGIC_BATTLES_GROUNDCOMMANDBATTLETIMER_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x12C0570)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDBATTLETIMER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x12C0770)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDBATTLETIMER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x12C13D0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDBATTLETIMER_EXECUTE_OFFSET UNITYSDK_OFFSET(0x12C13E0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDBATTLETIMER_.CTOR_OFFSET UNITYSDK_OFFSET(0x12C1380)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDBATTLETIMER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x12C1410)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int GroundCommandBattleTimer_TypeDefinitionIndex = 14140;

	class GroundCommandBattleTimer : public Il2CppObject
	{
	public:
		::System::Boolean Stop; // 0x30

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDBATTLETIMER_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundCommandBattleTimer&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundCommandBattleTimer&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDBATTLETIMER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDBATTLETIMER_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Execute(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDBATTLETIMER_EXECUTE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDBATTLETIMER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundCommandBattleTimer&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundCommandBattleTimer&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDBATTLETIMER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};
}

