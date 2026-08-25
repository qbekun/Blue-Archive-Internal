#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class WaveProcess; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class EntityId; }

#define MX_LOGIC_BATTLES_GROUNDCOMMANDWAVELOOP_SET_CURWAVENUM_OFFSET UNITYSDK_OFFSET(0x1333E60)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDWAVELOOP_ONENEMYCLEARED_OFFSET UNITYSDK_OFFSET(0x1333E70)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDWAVELOOP_GET_CURRPROCESS_OFFSET UNITYSDK_OFFSET(0x1333F00)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDWAVELOOP_COSTARTWAVE_OFFSET UNITYSDK_OFFSET(0x1333F10)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDWAVELOOP_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1333FC0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDWAVELOOP_ONADDENTITY_OFFSET UNITYSDK_OFFSET(0x1334250)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDWAVELOOP_GET_CURWAVENUM_OFFSET UNITYSDK_OFFSET(0x13342F0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDWAVELOOP_ALLSPAWNPOINTCOMMANDIDS_OFFSET UNITYSDK_OFFSET(0x1334300)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDWAVELOOP_SET_CURRPROCESS_OFFSET UNITYSDK_OFFSET(0x1334430)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDWAVELOOP_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1334440)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDWAVELOOP_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1335960)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDWAVELOOP_ONCLEARWAVE_OFFSET UNITYSDK_OFFSET(0x1336920)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDWAVELOOP_CLEARALL_OFFSET UNITYSDK_OFFSET(0x1336A30)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDWAVELOOP_.CTOR_OFFSET UNITYSDK_OFFSET(0x1335910)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDWAVELOOP_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x1333FD0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDWAVELOOP_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1336A90)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int GroundCommandWaveLoop_TypeDefinitionIndex = 14269;

	class GroundCommandWaveLoop : public Il2CppObject
	{
	public:
		::System::String* UniqueId; // 0x30
		::Il2CppArray<::System::Object*>* Waves; // 0x38
		::System::Int32 _CurWaveNum_k__BackingField; // 0x40
		::MX::Logic::Battles::WaveProcess* _CurrProcess_k__BackingField; // 0x48
		::MX::Logic::Battles::Battle* battle; // 0x50
		::System::Action* OnAddEntityAction; // 0x58

		::System::Void set_CurWaveNum(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDWAVELOOP_SET_CURWAVENUM_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnemyCleared(::MX::Logic::Battles::WaveProcess* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::WaveProcess*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDWAVELOOP_ONENEMYCLEARED_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Battles::WaveProcess* get_CurrProcess()
		{
			return ((::MX::Logic::Battles::WaveProcess*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDWAVELOOP_GET_CURRPROCESS_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoStartWave(::System::Int32 arg, ::System::Int64 arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Int32, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDWAVELOOP_COSTARTWAVE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDWAVELOOP_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void OnAddEntity(::MX::Logic::BattleEntities::EntityId* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDWAVELOOP_ONADDENTITY_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_CurWaveNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDWAVELOOP_GET_CURWAVENUM_OFFSET))(nullptr);
		}

		Il2CppObject* AllSpawnPointCommandIds()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDWAVELOOP_ALLSPAWNPOINTCOMMANDIDS_OFFSET))(nullptr);
		}

		::System::Void set_CurrProcess(::MX::Logic::Battles::WaveProcess* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::WaveProcess*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDWAVELOOP_SET_CURRPROCESS_OFFSET))(arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundCommandWaveLoop&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundCommandWaveLoop&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDWAVELOOP_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundCommandWaveLoop&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundCommandWaveLoop&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDWAVELOOP_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnClearWave()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDWAVELOOP_ONCLEARWAVE_OFFSET))(nullptr);
		}

		::System::Void ClearAll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDWAVELOOP_CLEARALL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDWAVELOOP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDWAVELOOP_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Execute(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDWAVELOOP_EXECUTE_OFFSET))(arg, nullptr);
		}

	};
}

