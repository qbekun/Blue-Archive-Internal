#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_BATTLES_GROUNDCONDITIONALLYCOSTCOUNT_END_OFFSET UNITYSDK_OFFSET(0x133D270)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONALLYCOSTCOUNT_.CTOR_OFFSET UNITYSDK_OFFSET(0x133D300)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONALLYCOSTCOUNT_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x133D350)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONALLYCOSTCOUNT_START_OFFSET UNITYSDK_OFFSET(0x133DC30)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONALLYCOSTCOUNT_COUPDATE_OFFSET UNITYSDK_OFFSET(0x133DD30)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONALLYCOSTCOUNT_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x133DDC0)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONALLYCOSTCOUNT_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x133E960)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONALLYCOSTCOUNT_.CCTOR_OFFSET UNITYSDK_OFFSET(0x133EB60)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int GroundConditionAllyCostCount_TypeDefinitionIndex = 14286;

	class GroundConditionAllyCostCount : public Il2CppObject
	{
	public:
		::System::Single AllyCostCount; // 0x28
		::System::Collections::IEnumerator* updateEtor; // 0x30

		::System::Void End()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONALLYCOSTCOUNT_END_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONALLYCOSTCOUNT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundConditionAllyCostCount&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundConditionAllyCostCount&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONALLYCOSTCOUNT_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONALLYCOSTCOUNT_START_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoUpdate()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONALLYCOSTCOUNT_COUPDATE_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundConditionAllyCostCount&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundConditionAllyCostCount&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONALLYCOSTCOUNT_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONALLYCOSTCOUNT_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONALLYCOSTCOUNT_.CCTOR_OFFSET))(nullptr);
		}

	};
}

