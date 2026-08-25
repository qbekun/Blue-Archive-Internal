#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_BATTLES_GROUNDCONDITIONBATTLESTARTED_START_OFFSET UNITYSDK_OFFSET(0x134AB90)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONBATTLESTARTED_.CTOR_OFFSET UNITYSDK_OFFSET(0x134ABB0)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONBATTLESTARTED_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x134AC00)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONBATTLESTARTED_END_OFFSET UNITYSDK_OFFSET(0x134B4A0)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONBATTLESTARTED_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x134B4B0)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONBATTLESTARTED_.CCTOR_OFFSET UNITYSDK_OFFSET(0x134B6B0)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONBATTLESTARTED_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x134B6C0)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int GroundConditionBattleStarted_TypeDefinitionIndex = 14319;

	class GroundConditionBattleStarted : public Il2CppObject
	{
	public:
		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONBATTLESTARTED_START_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONBATTLESTARTED_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundConditionBattleStarted&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundConditionBattleStarted&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONBATTLESTARTED_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void End()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONBATTLESTARTED_END_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONBATTLESTARTED_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONBATTLESTARTED_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundConditionBattleStarted&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundConditionBattleStarted&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONBATTLESTARTED_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};
}

