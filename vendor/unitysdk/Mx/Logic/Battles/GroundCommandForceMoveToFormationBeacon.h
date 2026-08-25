#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Vector2; }
namespace MX::Logic::BattleEntities { class O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4; }
namespace MX::Logic::Battles { class Battle; }

#define MX_LOGIC_BATTLES_GROUNDCOMMANDFORCEMOVETOFORMATIONBEACON_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x12DD420)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDFORCEMOVETOFORMATIONBEACON__EXECUTE_G__SETFORCEMOVECOMMANDINFO|5_0_OFFSET UNITYSDK_OFFSET(0x12DE240)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDFORCEMOVETOFORMATIONBEACON_.CTOR_OFFSET UNITYSDK_OFFSET(0x12DE1F0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDFORCEMOVETOFORMATIONBEACON_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x12DE440)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDFORCEMOVETOFORMATIONBEACON_EXECUTE_OFFSET UNITYSDK_OFFSET(0x12DED60)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDFORCEMOVETOFORMATIONBEACON_.CCTOR_OFFSET UNITYSDK_OFFSET(0x12DEFA0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDFORCEMOVETOFORMATIONBEACON_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x12DEFB0)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int GroundCommandForceMoveToFormationBeacon_TypeDefinitionIndex = 14175;

	class GroundCommandForceMoveToFormationBeacon : public Il2CppObject
	{
	public:
		::System::Boolean IsInstantMove; // 0x30
		::System::Boolean IsInterruptCurrentAction; // 0x31
		::System::Boolean KeepRelativePosition; // 0x32
		::UnityEngine::Vector2* DatumPointBeforeMove; // 0x34
		::UnityEngine::Vector2* DatumPointAfterMove; // 0x3C

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundCommandForceMoveToFormationBeacon&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundCommandForceMoveToFormationBeacon&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDFORCEMOVETOFORMATIONBEACON_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void _Execute_g__SetForceMoveCommandInfo|5_0(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg, <>c__DisplayClass5_0&* arg2)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, <>c__DisplayClass5_0&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDFORCEMOVETOFORMATIONBEACON__EXECUTE_G__SETFORCEMOVECOMMANDINFO|5_0_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDFORCEMOVETOFORMATIONBEACON_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundCommandForceMoveToFormationBeacon&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundCommandForceMoveToFormationBeacon&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDFORCEMOVETOFORMATIONBEACON_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Execute(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDFORCEMOVETOFORMATIONBEACON_EXECUTE_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDFORCEMOVETOFORMATIONBEACON_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDFORCEMOVETOFORMATIONBEACON_REGISTERFORMATTER_OFFSET))(nullptr);
		}

	};
}

