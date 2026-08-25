#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class Battle; }

#define MX_LOGIC_BATTLES_GROUNDCOMMANDSTARTSECTION_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x1321B70)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDSTARTSECTION_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1321D70)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDSTARTSECTION_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1322A00)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDSTARTSECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x13229B0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDSTARTSECTION_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1322A10)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDSTARTSECTION_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1322A40)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int GroundCommandStartSection_TypeDefinitionIndex = 14248;

	class GroundCommandStartSection : public Il2CppObject
	{
	public:
		::System::Int32 SectionID; // 0x30
		::System::Boolean SetConditionCommandOnly; // 0x34

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDSTARTSECTION_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundCommandStartSection&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundCommandStartSection&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDSTARTSECTION_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDSTARTSECTION_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDSTARTSECTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Execute(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDSTARTSECTION_EXECUTE_OFFSET))(arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundCommandStartSection&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundCommandStartSection&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDSTARTSECTION_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};
}

