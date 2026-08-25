#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class GroundPoint; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class SpawnPointBase; }

#define MX_LOGIC_BATTLES_GROUNDCOMMANDFORCEMOVETOGROUNDPOINT_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x12DF250)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDFORCEMOVETOGROUNDPOINT_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x12DF450)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDFORCEMOVETOGROUNDPOINT__EXECUTE_B__9_0_OFFSET UNITYSDK_OFFSET(0x12E0420)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDFORCEMOVETOGROUNDPOINT_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x12E0480)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDFORCEMOVETOGROUNDPOINT_EXECUTE_OFFSET UNITYSDK_OFFSET(0x12E1AE0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDFORCEMOVETOGROUNDPOINT_.CCTOR_OFFSET UNITYSDK_OFFSET(0x12E2450)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDFORCEMOVETOGROUNDPOINT_COWAITFORMOVE_OFFSET UNITYSDK_OFFSET(0x12E23D0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDFORCEMOVETOGROUNDPOINT_.CTOR_OFFSET UNITYSDK_OFFSET(0x12E1A40)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int GroundCommandForceMoveToGroundPoint_TypeDefinitionIndex = 14179;

	class GroundCommandForceMoveToGroundPoint : public Il2CppObject
	{
	public:
		::System::Boolean IsInstantMove; // 0x30
		::System::Boolean IsInterruptCurrentAction; // 0x31
		::System::String* PointCommandID; // 0x38
		::System::Boolean IsCommandWaitForMoveStart; // 0x40
		::System::Boolean IsCommandWaitForMoveEnd; // 0x41
		::System::Boolean UseGroundPointDirection; // 0x42
		Il2CppObject* charactersToApplyList; // 0x48
		::MX::Logic::BattleEntities::GroundPoint* targetPoint; // 0x50
		::MX::Logic::Battles::Battle* battle; // 0x58

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDFORCEMOVETOGROUNDPOINT_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundCommandForceMoveToGroundPoint&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundCommandForceMoveToGroundPoint&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDFORCEMOVETOGROUNDPOINT_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean _Execute_b__9_0(::MX::Logic::BattleEntities::SpawnPointBase* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::SpawnPointBase*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDFORCEMOVETOGROUNDPOINT__EXECUTE_B__9_0_OFFSET))(arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundCommandForceMoveToGroundPoint&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundCommandForceMoveToGroundPoint&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDFORCEMOVETOGROUNDPOINT_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Execute(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDFORCEMOVETOGROUNDPOINT_EXECUTE_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDFORCEMOVETOGROUNDPOINT_.CCTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoWaitForMove(Il2CppObject* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDFORCEMOVETOGROUNDPOINT_COWAITFORMOVE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDFORCEMOVETOGROUNDPOINT_.CTOR_OFFSET))(nullptr);
		}

	};
}

