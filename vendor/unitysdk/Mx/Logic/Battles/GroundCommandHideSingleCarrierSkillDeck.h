#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_BATTLES_GROUNDCOMMANDHIDESINGLECARRIERSKILLDECK_.CTOR_OFFSET UNITYSDK_OFFSET(0x12E7570)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDHIDESINGLECARRIERSKILLDECK_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x12E75C0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDHIDESINGLECARRIERSKILLDECK_.CCTOR_OFFSET UNITYSDK_OFFSET(0x12E81F0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDHIDESINGLECARRIERSKILLDECK_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x12E83C0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDHIDESINGLECARRIERSKILLDECK_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x12E8200)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int GroundCommandHideSingleCarrierSkillDeck_TypeDefinitionIndex = 14187;

	class GroundCommandHideSingleCarrierSkillDeck : public Il2CppObject
	{
	public:
		::System::Boolean HideOn; // 0x30
		::System::Boolean SkillCoolTimeReset; // 0x31

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDHIDESINGLECARRIERSKILLDECK_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundCommandHideSingleCarrierSkillDeck&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundCommandHideSingleCarrierSkillDeck&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDHIDESINGLECARRIERSKILLDECK_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDHIDESINGLECARRIERSKILLDECK_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundCommandHideSingleCarrierSkillDeck&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundCommandHideSingleCarrierSkillDeck&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDHIDESINGLECARRIERSKILLDECK_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDHIDESINGLECARRIERSKILLDECK_REGISTERFORMATTER_OFFSET))(nullptr);
		}

	};
}

