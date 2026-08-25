#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class Battle; }

#define MX_LOGIC_BATTLES_GROUNDCOMMANDSETCHECKSPAWNPOSITIONNOTMOVINGAREA_.CCTOR_OFFSET UNITYSDK_OFFSET(0x12FEBE0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDSETCHECKSPAWNPOSITIONNOTMOVINGAREA_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x12FEDB0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDSETCHECKSPAWNPOSITIONNOTMOVINGAREA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1300210)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDSETCHECKSPAWNPOSITIONNOTMOVINGAREA_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1300260)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDSETCHECKSPAWNPOSITIONNOTMOVINGAREA_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x12FEBF0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDSETCHECKSPAWNPOSITIONNOTMOVINGAREA_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1300620)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int GroundCommandSetCheckSpawnPositionNotMovingArea_TypeDefinitionIndex = 14212;

	class GroundCommandSetCheckSpawnPositionNotMovingArea : public Il2CppObject
	{
	public:
		::System::Boolean SetActive; // 0x30
		::System::String* TargetMovingAreaCommandId; // 0x38

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDSETCHECKSPAWNPOSITIONNOTMOVINGAREA_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundCommandSetCheckSpawnPositionNotMovingArea&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundCommandSetCheckSpawnPositionNotMovingArea&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDSETCHECKSPAWNPOSITIONNOTMOVINGAREA_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDSETCHECKSPAWNPOSITIONNOTMOVINGAREA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Execute(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDSETCHECKSPAWNPOSITIONNOTMOVINGAREA_EXECUTE_OFFSET))(arg, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDSETCHECKSPAWNPOSITIONNOTMOVINGAREA_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundCommandSetCheckSpawnPositionNotMovingArea&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundCommandSetCheckSpawnPositionNotMovingArea&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDSETCHECKSPAWNPOSITIONNOTMOVINGAREA_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};
}

