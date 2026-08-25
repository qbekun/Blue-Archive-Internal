#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::Battles { class WaveData; }
namespace MX::Logic::Battles { class KillEventArgs; }
namespace MX::Logic::BattleEntities { class O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4; }

#define MX_LOGIC_BATTLES_WAVEPROCESS_ONCHARACTERDIED_OFFSET UNITYSDK_OFFSET(0x1333AC0)
#define MX_LOGIC_BATTLES_WAVEPROCESS_ENDPROCESS_OFFSET UNITYSDK_OFFSET(0x132E6F0)
#define MX_LOGIC_BATTLES_WAVEPROCESS_.CTOR_OFFSET UNITYSDK_OFFSET(0x1330240)
#define MX_LOGIC_BATTLES_WAVEPROCESS_GET_WAVEUNITCOUNT_OFFSET UNITYSDK_OFFSET(0x1333CD0)
#define MX_LOGIC_BATTLES_WAVEPROCESS_ADDENTITYID_OFFSET UNITYSDK_OFFSET(0x1333CE0)
#define MX_LOGIC_BATTLES_WAVEPROCESS_SET_WAVEDATA_OFFSET UNITYSDK_OFFSET(0x1333D60)
#define MX_LOGIC_BATTLES_WAVEPROCESS_GET_STEP_OFFSET UNITYSDK_OFFSET(0x1333D70)
#define MX_LOGIC_BATTLES_WAVEPROCESS_GET_WAVEDATA_OFFSET UNITYSDK_OFFSET(0x1333D80)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int WaveProcess_TypeDefinitionIndex = 14266;

	class WaveProcess : public Il2CppObject
	{
	public:
		Il2CppObject* DeadTable; // 0x10
		::System::Action* ClearAction; // 0x18
		Il2CppObject* EnemyClearedAction; // 0x20
		Il2CppObject* AddEntityAction; // 0x28
		::MX::Logic::Battles::Battle* battle; // 0x30
		::MX::Logic::Battles::WaveData* _WaveData_k__BackingField; // 0x38
		::System::Int32 _WaveUnitCount_k__BackingField; // 0x40
		::System::Int32 _Step_k__BackingField; // 0x44

		::System::Void OnCharacterDied(::System::Object* arg, ::MX::Logic::Battles::KillEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::KillEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_WAVEPROCESS_ONCHARACTERDIED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void EndProcess()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_WAVEPROCESS_ENDPROCESS_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Battles::WaveData* arg2, ::System::Int32 arg3)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Battles::WaveData*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_WAVEPROCESS_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Int32 get_WaveUnitCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_WAVEPROCESS_GET_WAVEUNITCOUNT_OFFSET))(nullptr);
		}

		::System::Void AddEntityId(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_WAVEPROCESS_ADDENTITYID_OFFSET))(arg, nullptr);
		}

		::System::Void set_WaveData(::MX::Logic::Battles::WaveData* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::WaveData*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_WAVEPROCESS_SET_WAVEDATA_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Step()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_WAVEPROCESS_GET_STEP_OFFSET))(nullptr);
		}

		::MX::Logic::Battles::WaveData* get_WaveData()
		{
			return ((::MX::Logic::Battles::WaveData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_WAVEPROCESS_GET_WAVEDATA_OFFSET))(nullptr);
		}

	};
}

