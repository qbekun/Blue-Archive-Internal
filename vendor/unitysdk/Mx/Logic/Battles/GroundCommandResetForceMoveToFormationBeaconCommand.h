#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class Battle; }

#define MX_LOGIC_BATTLES_GROUNDCOMMANDRESETFORCEMOVETOFORMATIONBEACONCOMMAND_EXECUTE_OFFSET UNITYSDK_OFFSET(0x12F4EB0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDRESETFORCEMOVETOFORMATIONBEACONCOMMAND_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x12F5130)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDRESETFORCEMOVETOFORMATIONBEACONCOMMAND_.CCTOR_OFFSET UNITYSDK_OFFSET(0x12F5A30)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDRESETFORCEMOVETOFORMATIONBEACONCOMMAND_.CTOR_OFFSET UNITYSDK_OFFSET(0x12F5C00)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDRESETFORCEMOVETOFORMATIONBEACONCOMMAND_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x12F5C50)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDRESETFORCEMOVETOFORMATIONBEACONCOMMAND_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x12F5A40)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int GroundCommandResetForceMoveToFormationBeaconCommand_TypeDefinitionIndex = 14201;

	class GroundCommandResetForceMoveToFormationBeaconCommand : public Il2CppObject
	{
	public:
		::System::Boolean IsInstantMove; // 0x30
		::System::Boolean IsInterruptCurrentAction; // 0x31

		::System::Void Execute(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDRESETFORCEMOVETOFORMATIONBEACONCOMMAND_EXECUTE_OFFSET))(arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundCommandResetForceMoveToFormationBeaconCommand&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundCommandResetForceMoveToFormationBeaconCommand&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDRESETFORCEMOVETOFORMATIONBEACONCOMMAND_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDRESETFORCEMOVETOFORMATIONBEACONCOMMAND_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDRESETFORCEMOVETOFORMATIONBEACONCOMMAND_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundCommandResetForceMoveToFormationBeaconCommand&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundCommandResetForceMoveToFormationBeaconCommand&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDRESETFORCEMOVETOFORMATIONBEACONCOMMAND_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDRESETFORCEMOVETOFORMATIONBEACONCOMMAND_REGISTERFORMATTER_OFFSET))(nullptr);
		}

	};
}

