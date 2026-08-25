#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_BATTLES_GROUNDCOMMANDHIDECARRIERSKILLDECK_.CTOR_OFFSET UNITYSDK_OFFSET(0x12E5D40)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDHIDECARRIERSKILLDECK_.CCTOR_OFFSET UNITYSDK_OFFSET(0x12E5D90)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDHIDECARRIERSKILLDECK_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x12E5F60)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDHIDECARRIERSKILLDECK_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x12E5DA0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDHIDECARRIERSKILLDECK_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x12E68A0)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int GroundCommandHideCarrierSkillDeck_TypeDefinitionIndex = 14185;

	class GroundCommandHideCarrierSkillDeck : public Il2CppObject
	{
	public:
		::System::Boolean HideOn; // 0x30
		::System::Boolean SkillCoolTimeReset; // 0x31

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDHIDECARRIERSKILLDECK_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDHIDECARRIERSKILLDECK_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundCommandHideCarrierSkillDeck&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundCommandHideCarrierSkillDeck&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDHIDECARRIERSKILLDECK_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDHIDECARRIERSKILLDECK_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundCommandHideCarrierSkillDeck&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundCommandHideCarrierSkillDeck&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDHIDECARRIERSKILLDECK_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};
}

