#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class Battle; }

#define MX_LOGIC_BATTLES_GROUNDCOMMANDFORCEHOLD_EXECUTE_OFFSET UNITYSDK_OFFSET(0x12D9F60)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDFORCEHOLD__EXECUTE_B__2_0_OFFSET UNITYSDK_OFFSET(0x12DA1F0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDFORCEHOLD_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x12DA210)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDFORCEHOLD_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x12DAB10)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDFORCEHOLD_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x12DB790)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDFORCEHOLD_.CCTOR_OFFSET UNITYSDK_OFFSET(0x12DB990)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDFORCEHOLD_.CTOR_OFFSET UNITYSDK_OFFSET(0x12DB740)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int GroundCommandForceHold_TypeDefinitionIndex = 14170;

	class GroundCommandForceHold : public Il2CppObject
	{
	public:
		::System::Boolean AllowBattleItemMove; // 0x30
		::System::Boolean IsHold; // 0x31

		::System::Void Execute(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDFORCEHOLD_EXECUTE_OFFSET))(arg, nullptr);
		}

		::System::Boolean _Execute_b__2_0(::System::String* str)
		{
			return ((::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDFORCEHOLD__EXECUTE_B__2_0_OFFSET))(str, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundCommandForceHold&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundCommandForceHold&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDFORCEHOLD_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundCommandForceHold&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundCommandForceHold&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDFORCEHOLD_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDFORCEHOLD_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDFORCEHOLD_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDFORCEHOLD_.CTOR_OFFSET))(nullptr);
		}

	};
}

