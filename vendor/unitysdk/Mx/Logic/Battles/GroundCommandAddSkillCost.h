#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class Battle; }

#define MX_LOGIC_BATTLES_GROUNDCOMMANDADDSKILLCOST_EXECUTE_OFFSET UNITYSDK_OFFSET(0x12B79D0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDADDSKILLCOST_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x12B7AA0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDADDSKILLCOST_.CCTOR_OFFSET UNITYSDK_OFFSET(0x12B7CA0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDADDSKILLCOST_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x12B7CB0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDADDSKILLCOST_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x12B85A0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDADDSKILLCOST_.CTOR_OFFSET UNITYSDK_OFFSET(0x12B91C0)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int GroundCommandAddSkillCost_TypeDefinitionIndex = 14134;

	class GroundCommandAddSkillCost : public Il2CppObject
	{
	public:
		::System::Int32 cost; // 0x30

		::System::Void Execute(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDADDSKILLCOST_EXECUTE_OFFSET))(arg, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDADDSKILLCOST_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDADDSKILLCOST_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundCommandAddSkillCost&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundCommandAddSkillCost&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDADDSKILLCOST_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundCommandAddSkillCost&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundCommandAddSkillCost&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDADDSKILLCOST_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDADDSKILLCOST_.CTOR_OFFSET))(nullptr);
		}

	};
}

