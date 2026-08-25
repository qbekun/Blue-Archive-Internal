#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class Battle; }

#define MX_LOGIC_BATTLES_GROUNDCOMMANDSPAWNENTITY_.CTOR_OFFSET UNITYSDK_OFFSET(0x131EA80)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDSPAWNENTITY_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x131EAD0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDSPAWNENTITY_.CCTOR_OFFSET UNITYSDK_OFFSET(0x131F700)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDSPAWNENTITY_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x131F710)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDSPAWNENTITY_EXECUTE_OFFSET UNITYSDK_OFFSET(0x131F910)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDSPAWNENTITY_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x131F950)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int GroundCommandSpawnEntity_TypeDefinitionIndex = 14244;

	class GroundCommandSpawnEntity : public Il2CppObject
	{
	public:
		::System::Int64 Interval; // 0x30

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDSPAWNENTITY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundCommandSpawnEntity&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundCommandSpawnEntity&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDSPAWNENTITY_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDSPAWNENTITY_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDSPAWNENTITY_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Execute(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDSPAWNENTITY_EXECUTE_OFFSET))(arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundCommandSpawnEntity&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundCommandSpawnEntity&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDSPAWNENTITY_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};
}

