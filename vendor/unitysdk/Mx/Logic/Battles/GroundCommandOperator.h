#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_BATTLES_GROUNDCOMMANDOPERATOR_.CCTOR_OFFSET UNITYSDK_OFFSET(0x12EA5B0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDOPERATOR_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x12EA780)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDOPERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x12EB720)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDOPERATOR_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x12EB770)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDOPERATOR_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x12EA5C0)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int GroundCommandOperator_TypeDefinitionIndex = 14191;

	class GroundCommandOperator : public Il2CppObject
	{
	public:
		::System::String* GroupId; // 0x30

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDOPERATOR_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundCommandOperator&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundCommandOperator&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDOPERATOR_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDOPERATOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundCommandOperator&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundCommandOperator&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDOPERATOR_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDOPERATOR_REGISTERFORMATTER_OFFSET))(nullptr);
		}

	};
}

