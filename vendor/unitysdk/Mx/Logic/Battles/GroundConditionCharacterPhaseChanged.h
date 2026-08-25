#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class CharacterPhaseChangedEventArgs; }

#define MX_LOGIC_BATTLES_GROUNDCONDITIONCHARACTERPHASECHANGED_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x134DDB0)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONCHARACTERPHASECHANGED_START_OFFSET UNITYSDK_OFFSET(0x134DFB0)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONCHARACTERPHASECHANGED_.CTOR_OFFSET UNITYSDK_OFFSET(0x134E040)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONCHARACTERPHASECHANGED_END_OFFSET UNITYSDK_OFFSET(0x134E090)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONCHARACTERPHASECHANGED_.CCTOR_OFFSET UNITYSDK_OFFSET(0x134E1A0)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONCHARACTERPHASECHANGED_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x134E1B0)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONCHARACTERPHASECHANGED_BATTLE_PHASECHANGED_OFFSET UNITYSDK_OFFSET(0x134EA90)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONCHARACTERPHASECHANGED_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x134EBF0)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int GroundConditionCharacterPhaseChanged_TypeDefinitionIndex = 14323;

	class GroundConditionCharacterPhaseChanged : public Il2CppObject
	{
	public:
		::System::Int32 Phase; // 0x28
		::System::Int32 MaxTriggerCount; // 0x2C
		::System::Int32 currentTriggerCount; // 0x30

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONCHARACTERPHASECHANGED_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONCHARACTERPHASECHANGED_START_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONCHARACTERPHASECHANGED_.CTOR_OFFSET))(nullptr);
		}

		::System::Void End()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONCHARACTERPHASECHANGED_END_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONCHARACTERPHASECHANGED_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundConditionCharacterPhaseChanged&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundConditionCharacterPhaseChanged&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONCHARACTERPHASECHANGED_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Battle_PhaseChanged(::System::Object* arg, ::MX::Logic::Battles::CharacterPhaseChangedEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::CharacterPhaseChangedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONCHARACTERPHASECHANGED_BATTLE_PHASECHANGED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundConditionCharacterPhaseChanged&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundConditionCharacterPhaseChanged&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONCHARACTERPHASECHANGED_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};
}

