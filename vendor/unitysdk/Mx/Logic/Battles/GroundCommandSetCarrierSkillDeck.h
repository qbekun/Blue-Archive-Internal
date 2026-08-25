#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class Battle; }

#define MX_LOGIC_BATTLES_GROUNDCOMMANDSETCARRIERSKILLDECK_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x12FA870)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDSETCARRIERSKILLDECK_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x12FB1E0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDSETCARRIERSKILLDECK_.CCTOR_OFFSET UNITYSDK_OFFSET(0x12FB4A0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDSETCARRIERSKILLDECK_EXECUTE_OFFSET UNITYSDK_OFFSET(0x12FB4B0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDSETCARRIERSKILLDECK_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x12FB5F0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDSETCARRIERSKILLDECK_.CTOR_OFFSET UNITYSDK_OFFSET(0x12FC400)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int GroundCommandSetCarrierSkillDeck_TypeDefinitionIndex = 14207;

	class GroundCommandSetCarrierSkillDeck : public Il2CppObject
	{
	public:
		::System::Int64 characterId; // 0x30
		::System::Int32 characterLevel; // 0x38
		::System::Int32 characterGrade; // 0x3C
		Il2CppObject* carrierDataInfos; // 0x40
		::System::Boolean NotUseDefaultSkillSlotUI; // 0x48

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundCommandSetCarrierSkillDeck&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundCommandSetCarrierSkillDeck&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDSETCARRIERSKILLDECK_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDSETCARRIERSKILLDECK_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDSETCARRIERSKILLDECK_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Execute(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDSETCARRIERSKILLDECK_EXECUTE_OFFSET))(arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundCommandSetCarrierSkillDeck&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundCommandSetCarrierSkillDeck&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDSETCARRIERSKILLDECK_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDSETCARRIERSKILLDECK_.CTOR_OFFSET))(nullptr);
		}

	};
}

