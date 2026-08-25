#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class HeroStatus; }
namespace MX::Logic::Battles { class Battle; }

#define MX_LOGIC_BATTLES_GROUNDCOMMANDSETSTATUS_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1315C00)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDSETSTATUS_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1315F30)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDSETSTATUS_.CTOR_OFFSET UNITYSDK_OFFSET(0x13161C0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDSETSTATUS_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1316210)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDSETSTATUS_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1316B10)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDSETSTATUS_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x1315F40)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int GroundCommandSetStatus_TypeDefinitionIndex = 14232;

	class GroundCommandSetStatus : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::HeroStatus* heroStatus; // 0x30
		::System::Boolean isAdd; // 0x34

		::System::Void Execute(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDSETSTATUS_EXECUTE_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDSETSTATUS_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDSETSTATUS_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundCommandSetStatus&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundCommandSetStatus&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDSETSTATUS_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundCommandSetStatus&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundCommandSetStatus&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDSETSTATUS_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDSETSTATUS_REGISTERFORMATTER_OFFSET))(nullptr);
		}

	};
}

