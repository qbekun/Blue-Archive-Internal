#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class RandomNumberArgs; }

#define MX_LOGIC_BATTLES_GROUNDCONDITIONCHECKRANDOMNUMBER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1351D50)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONCHECKRANDOMNUMBER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1351DA0)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONCHECKRANDOMNUMBER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x13529B0)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONCHECKRANDOMNUMBER_BATTLE_RANDOMNUMBERCREATED_OFFSET UNITYSDK_OFFSET(0x1352B60)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONCHECKRANDOMNUMBER_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x13529C0)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONCHECKRANDOMNUMBER_START_OFFSET UNITYSDK_OFFSET(0x1352CB0)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONCHECKRANDOMNUMBER_END_OFFSET UNITYSDK_OFFSET(0x1352DA0)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONCHECKRANDOMNUMBER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1352EB0)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONCHECKRANDOMNUMBER_CHECKRANDOM_OFFSET UNITYSDK_OFFSET(0x1352B80)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int GroundConditionCheckRandomNumber_TypeDefinitionIndex = 14328;

	class GroundConditionCheckRandomNumber : public Il2CppObject
	{
	public:
		::System::Int32 NumberToCheck; // 0x28
		::System::Int32 MaxTriggerCount; // 0x2C
		::System::Int32 currentTriggerCount; // 0x30

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONCHECKRANDOMNUMBER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundConditionCheckRandomNumber&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundConditionCheckRandomNumber&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONCHECKRANDOMNUMBER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONCHECKRANDOMNUMBER_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Battle_RandomNumberCreated(::System::Object* arg, ::MX::Logic::Battles::RandomNumberArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::RandomNumberArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONCHECKRANDOMNUMBER_BATTLE_RANDOMNUMBERCREATED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONCHECKRANDOMNUMBER_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONCHECKRANDOMNUMBER_START_OFFSET))(nullptr);
		}

		::System::Void End()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONCHECKRANDOMNUMBER_END_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundConditionCheckRandomNumber&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundConditionCheckRandomNumber&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONCHECKRANDOMNUMBER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void CheckRandom(::System::String* str, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONCHECKRANDOMNUMBER_CHECKRANDOM_OFFSET))(str, arg, nullptr);
		}

	};
}

