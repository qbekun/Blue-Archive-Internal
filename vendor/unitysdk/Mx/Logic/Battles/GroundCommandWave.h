#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class AllClearCondition; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::Battles { class WaveProcess; }
namespace MX::Logic::Battles { class KillEventArgs; }
namespace MX::Logic::BattleEntities { class EntityId; }

#define MX_LOGIC_BATTLES_GROUNDCOMMANDWAVE_COSTARTWAVE_OFFSET UNITYSDK_OFFSET(0x132CA50)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDWAVE_CLEARALL_OFFSET UNITYSDK_OFFSET(0x132CB00)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDWAVE_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x132CBA0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDWAVE_SET_CURWAVENUM_OFFSET UNITYSDK_OFFSET(0x132DC20)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDWAVE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x132DC30)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDWAVE_ONCHARACTERDIED_OFFSET UNITYSDK_OFFSET(0x132DF70)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDWAVE_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x132DC40)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDWAVE_GET_BATTLE_OFFSET UNITYSDK_OFFSET(0x132E030)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDWAVE_SET_CURRPROCESS_OFFSET UNITYSDK_OFFSET(0x132E040)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDWAVE_ONCLEARWAVE_OFFSET UNITYSDK_OFFSET(0x132E050)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDWAVE_EXECUTE_OFFSET UNITYSDK_OFFSET(0x132E220)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDWAVE_GET_CURRPROCESS_OFFSET UNITYSDK_OFFSET(0x132E480)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDWAVE_ONADDENTITY_OFFSET UNITYSDK_OFFSET(0x132E490)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDWAVE_.CTOR_OFFSET UNITYSDK_OFFSET(0x132E5B0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDWAVE_ONENEMYCLEARED_OFFSET UNITYSDK_OFFSET(0x132E660)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDWAVE_GET_TOTALCOUNT_OFFSET UNITYSDK_OFFSET(0x132E770)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDWAVE_SET_BATTLE_OFFSET UNITYSDK_OFFSET(0x132E780)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDWAVE_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x132E790)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDWAVE_ALLSPAWNPOINTCOMMANDIDS_OFFSET UNITYSDK_OFFSET(0x132FD90)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDWAVE_SET_TOTALCOUNT_OFFSET UNITYSDK_OFFSET(0x132FEC0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDWAVE_GET_CURWAVENUM_OFFSET UNITYSDK_OFFSET(0x132FED0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDWAVE_GET_ISCLEARLASTWAVE_OFFSET UNITYSDK_OFFSET(0x132DBF0)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int GroundCommandWave_TypeDefinitionIndex = 14262;

	class GroundCommandWave : public Il2CppObject
	{
	public:
		::System::String* UniqueId; // 0x30
		::MX::Logic::Battles::AllClearCondition* ClearCondition; // 0x38
		::Il2CppArray<::System::Object*>* Waves; // 0x40
		::MX::Logic::Battles::Battle* _battle_k__BackingField; // 0x48
		::System::Int32 _CurWaveNum_k__BackingField; // 0x50
		::MX::Logic::Battles::WaveProcess* _CurrProcess_k__BackingField; // 0x58
		Il2CppObject* StartWaveAction; // 0x60
		Il2CppObject* ClearWaveAction; // 0x68
		::System::Int32 _TotalCount_k__BackingField; // 0x70
		::System::Action* TotalCountChangedAction; // 0x78
		::System::Action* AllClearAction; // 0x80
		Il2CppObject* spawnedEntities; // 0x88
		::System::Action* OnAddEntityAction; // 0x90

		::System::Collections::IEnumerator* CoStartWave(::System::Int32 arg, ::System::Int64 arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Int32, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDWAVE_COSTARTWAVE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void ClearAll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDWAVE_CLEARALL_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundCommandWave&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundCommandWave&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDWAVE_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_CurWaveNum(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDWAVE_SET_CURWAVENUM_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDWAVE_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void OnCharacterDied(::System::Object* arg, ::MX::Logic::Battles::KillEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::KillEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDWAVE_ONCHARACTERDIED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDWAVE_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::MX::Logic::Battles::Battle* get_battle()
		{
			return ((::MX::Logic::Battles::Battle*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDWAVE_GET_BATTLE_OFFSET))(nullptr);
		}

		::System::Void set_CurrProcess(::MX::Logic::Battles::WaveProcess* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::WaveProcess*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDWAVE_SET_CURRPROCESS_OFFSET))(arg, nullptr);
		}

		::System::Void OnClearWave()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDWAVE_ONCLEARWAVE_OFFSET))(nullptr);
		}

		::System::Void Execute(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDWAVE_EXECUTE_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Battles::WaveProcess* get_CurrProcess()
		{
			return ((::MX::Logic::Battles::WaveProcess*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDWAVE_GET_CURRPROCESS_OFFSET))(nullptr);
		}

		::System::Void OnAddEntity(::MX::Logic::BattleEntities::EntityId* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDWAVE_ONADDENTITY_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDWAVE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnEnemyCleared(::MX::Logic::Battles::WaveProcess* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::WaveProcess*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDWAVE_ONENEMYCLEARED_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_TotalCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDWAVE_GET_TOTALCOUNT_OFFSET))(nullptr);
		}

		::System::Void set_battle(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDWAVE_SET_BATTLE_OFFSET))(arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundCommandWave&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundCommandWave&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDWAVE_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* AllSpawnPointCommandIds()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDWAVE_ALLSPAWNPOINTCOMMANDIDS_OFFSET))(nullptr);
		}

		::System::Void set_TotalCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDWAVE_SET_TOTALCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_CurWaveNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDWAVE_GET_CURWAVENUM_OFFSET))(nullptr);
		}

		::System::Boolean get_IsClearLastWave()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDWAVE_GET_ISCLEARLASTWAVE_OFFSET))(nullptr);
		}

	};
}

