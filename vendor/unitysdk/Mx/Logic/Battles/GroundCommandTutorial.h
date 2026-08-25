#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_BATTLES_GROUNDCOMMANDTUTORIAL_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x1325D00)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDTUTORIAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x1325F00)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDTUTORIAL_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1325F50)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDTUTORIAL_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1326B70)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDTUTORIAL_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1326B80)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int GroundCommandTutorial_TypeDefinitionIndex = 14252;

	class GroundCommandTutorial : public Il2CppObject
	{
	public:
		::System::Int64 CharacterId; // 0x30

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDTUTORIAL_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDTUTORIAL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundCommandTutorial&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundCommandTutorial&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDTUTORIAL_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDTUTORIAL_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundCommandTutorial&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundCommandTutorial&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDTUTORIAL_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};
}

