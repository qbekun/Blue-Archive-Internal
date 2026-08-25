#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class Battle; }

#define MX_LOGIC_BATTLES_GROUNDCOMMANDFORMATIONCHANGE_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x12E42C0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDFORMATIONCHANGE_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x12E4BC0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDFORMATIONCHANGE_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x12E58C0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDFORMATIONCHANGE_EXECUTE_OFFSET UNITYSDK_OFFSET(0x12E5AC0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDFORMATIONCHANGE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x12E5C90)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDFORMATIONCHANGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x12E5870)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int GroundCommandFormationChange_TypeDefinitionIndex = 14183;

	class GroundCommandFormationChange : public Il2CppObject
	{
	public:
		::System::Int32 TargetBeaconSectionIndex; // 0x30
		::System::Int32 TargetBeaconIndex; // 0x34
		::System::Int32 FormationGroupIdToChange; // 0x38

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundCommandFormationChange&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundCommandFormationChange&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDFORMATIONCHANGE_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundCommandFormationChange&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundCommandFormationChange&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDFORMATIONCHANGE_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDFORMATIONCHANGE_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Execute(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDFORMATIONCHANGE_EXECUTE_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDFORMATIONCHANGE_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDFORMATIONCHANGE_.CTOR_OFFSET))(nullptr);
		}

	};
}

