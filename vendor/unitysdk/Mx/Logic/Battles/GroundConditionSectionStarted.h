#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_BATTLES_GROUNDCONDITIONSECTIONSTARTED_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1366250)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONSECTIONSTARTED_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1366AF0)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONSECTIONSTARTED_START_OFFSET UNITYSDK_OFFSET(0x1366CC0)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONSECTIONSTARTED_.CTOR_OFFSET UNITYSDK_OFFSET(0x1366CE0)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONSECTIONSTARTED_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x1366B00)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONSECTIONSTARTED_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1366D70)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONSECTIONSTARTED_END_OFFSET UNITYSDK_OFFSET(0x1367840)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int GroundConditionSectionStarted_TypeDefinitionIndex = 14347;

	class GroundConditionSectionStarted : public Il2CppObject
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundConditionSectionStarted&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundConditionSectionStarted&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONSECTIONSTARTED_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONSECTIONSTARTED_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONSECTIONSTARTED_START_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONSECTIONSTARTED_.CTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONSECTIONSTARTED_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundConditionSectionStarted&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundConditionSectionStarted&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONSECTIONSTARTED_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void End()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONSECTIONSTARTED_END_OFFSET))(nullptr);
		}

	};
}

