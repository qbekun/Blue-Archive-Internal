#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class HeroStatus; }
namespace MX::Logic::Battles { class Battle; }

#define MX_LOGIC_BATTLES_GROUNDCOMMANDSETSTATUSIMMUNE_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x1317830)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDSETSTATUSIMMUNE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1317AF0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDSETSTATUSIMMUNE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1317B00)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDSETSTATUSIMMUNE_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1317B50)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDSETSTATUSIMMUNE_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1318790)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDSETSTATUSIMMUNE_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1318B30)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int GroundCommandSetStatusImmune_TypeDefinitionIndex = 14234;

	class GroundCommandSetStatusImmune : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::HeroStatus* heroStatus; // 0x30
		::System::Boolean isAdd; // 0x34

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDSETSTATUSIMMUNE_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDSETSTATUSIMMUNE_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDSETSTATUSIMMUNE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundCommandSetStatusImmune&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundCommandSetStatusImmune&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDSETSTATUSIMMUNE_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Execute(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDSETSTATUSIMMUNE_EXECUTE_OFFSET))(arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundCommandSetStatusImmune&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundCommandSetStatusImmune&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDSETSTATUSIMMUNE_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};
}

