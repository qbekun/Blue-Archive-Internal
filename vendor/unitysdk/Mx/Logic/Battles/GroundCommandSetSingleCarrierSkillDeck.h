#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class Battle; }

#define MX_LOGIC_BATTLES_GROUNDCOMMANDSETSINGLECARRIERSKILLDECK_INITSINGLECARRIERSKILLCARD_OFFSET UNITYSDK_OFFSET(0x130B8C0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDSETSINGLECARRIERSKILLDECK_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x130B9D0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDSETSINGLECARRIERSKILLDECK_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x130D010)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDSETSINGLECARRIERSKILLDECK_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x130E010)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDSETSINGLECARRIERSKILLDECK_.CCTOR_OFFSET UNITYSDK_OFFSET(0x130E2D0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDSETSINGLECARRIERSKILLDECK_.CTOR_OFFSET UNITYSDK_OFFSET(0x130CFC0)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int GroundCommandSetSingleCarrierSkillDeck_TypeDefinitionIndex = 14223;

	class GroundCommandSetSingleCarrierSkillDeck : public Il2CppObject
	{
	public:
		::System::String* prefabPath; // 0x30
		::System::Int64 characterId; // 0x38
		::System::Int32 characterLevel; // 0x40
		::System::Int32 characterGrade; // 0x44
		Il2CppObject* carrierDataInfos; // 0x48

		::System::Void InitSingleCarrierSkillCard(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDSETSINGLECARRIERSKILLDECK_INITSINGLECARRIERSKILLCARD_OFFSET))(arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundCommandSetSingleCarrierSkillDeck&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundCommandSetSingleCarrierSkillDeck&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDSETSINGLECARRIERSKILLDECK_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundCommandSetSingleCarrierSkillDeck&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundCommandSetSingleCarrierSkillDeck&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDSETSINGLECARRIERSKILLDECK_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDSETSINGLECARRIERSKILLDECK_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDSETSINGLECARRIERSKILLDECK_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDSETSINGLECARRIERSKILLDECK_.CTOR_OFFSET))(nullptr);
		}

	};
}

