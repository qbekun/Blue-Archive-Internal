#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class Battle; }

#define MX_LOGIC_BATTLES_GROUNDCOMMANDSKIPUNTARGETABLECHECKINMOVE_.CTOR_OFFSET UNITYSDK_OFFSET(0x131D230)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDSKIPUNTARGETABLECHECKINMOVE_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x131D280)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDSKIPUNTARGETABLECHECKINMOVE_EXECUTE_OFFSET UNITYSDK_OFFSET(0x131D480)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDSKIPUNTARGETABLECHECKINMOVE_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x131D4D0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDSKIPUNTARGETABLECHECKINMOVE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x131DDC0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDSKIPUNTARGETABLECHECKINMOVE_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x131DDD0)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int GroundCommandSkipUntargetableCheckInMove_TypeDefinitionIndex = 14242;

	class GroundCommandSkipUntargetableCheckInMove : public Il2CppObject
	{
	public:
		::System::Boolean Skip; // 0x30

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDSKIPUNTARGETABLECHECKINMOVE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDSKIPUNTARGETABLECHECKINMOVE_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Execute(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDSKIPUNTARGETABLECHECKINMOVE_EXECUTE_OFFSET))(arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundCommandSkipUntargetableCheckInMove&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundCommandSkipUntargetableCheckInMove&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDSKIPUNTARGETABLECHECKINMOVE_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDSKIPUNTARGETABLECHECKINMOVE_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundCommandSkipUntargetableCheckInMove&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundCommandSkipUntargetableCheckInMove&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDSKIPUNTARGETABLECHECKINMOVE_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};
}

