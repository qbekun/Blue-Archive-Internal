#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class Battle; }

#define MX_LOGIC_BATTLES_GROUNDCOMMANDCREATERANDOMNUMBER_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x12CD7B0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDCREATERANDOMNUMBER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x12CD9B0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDCREATERANDOMNUMBER_.CTOR_OFFSET UNITYSDK_OFFSET(0x12CE970)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDCREATERANDOMNUMBER_EXECUTE_OFFSET UNITYSDK_OFFSET(0x12CE9C0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDCREATERANDOMNUMBER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x12CE9F0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDCREATERANDOMNUMBER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x12CFE70)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int GroundCommandCreateRandomNumber_TypeDefinitionIndex = 14154;

	class GroundCommandCreateRandomNumber : public Il2CppObject
	{
	public:
		::System::String* EntityConditionId; // 0x30
		::System::Int32 Range; // 0x38

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDCREATERANDOMNUMBER_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundCommandCreateRandomNumber&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundCommandCreateRandomNumber&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDCREATERANDOMNUMBER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDCREATERANDOMNUMBER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Execute(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDCREATERANDOMNUMBER_EXECUTE_OFFSET))(arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundCommandCreateRandomNumber&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundCommandCreateRandomNumber&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDCREATERANDOMNUMBER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDCREATERANDOMNUMBER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

