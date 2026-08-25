#pragma once
#include "../../../unitysdk.h"

namespace MXField::Core::State { class IEntityState; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Quaternion; }
namespace MXField::Core { class FieldEntityController; }

#define MXFIELD_CORE_STATE_MOVESTATE_GET_NEXTSTATE_OFFSET UNITYSDK_OFFSET(0xEDBB60)
#define MXFIELD_CORE_STATE_MOVESTATE_SET_NEXTSTATE_OFFSET UNITYSDK_OFFSET(0xEDBB70)
#define MXFIELD_CORE_STATE_MOVESTATE_GET_SPEED_OFFSET UNITYSDK_OFFSET(0xEDBB80)
#define MXFIELD_CORE_STATE_MOVESTATE_SET_SPEED_OFFSET UNITYSDK_OFFSET(0xEDBB90)
#define MXFIELD_CORE_STATE_MOVESTATE_GET_ORIGINALSPEED_OFFSET UNITYSDK_OFFSET(0xEDBBA0)
#define MXFIELD_CORE_STATE_MOVESTATE_SET_ORIGINALSPEED_OFFSET UNITYSDK_OFFSET(0xEDBBB0)
#define MXFIELD_CORE_STATE_MOVESTATE_GET_ONARRIVED_OFFSET UNITYSDK_OFFSET(0xEDBBC0)
#define MXFIELD_CORE_STATE_MOVESTATE_SET_ONARRIVED_OFFSET UNITYSDK_OFFSET(0xEDBBD0)
#define MXFIELD_CORE_STATE_MOVESTATE_.CTOR_OFFSET UNITYSDK_OFFSET(0xEDBBE0)
#define MXFIELD_CORE_STATE_MOVESTATE_.CTOR_OFFSET UNITYSDK_OFFSET(0xED0C90)
#define MXFIELD_CORE_STATE_MOVESTATE_.CTOR_OFFSET UNITYSDK_OFFSET(0xECB880)
#define MXFIELD_CORE_STATE_MOVESTATE_EXIT_OFFSET UNITYSDK_OFFSET(0xEDBD20)
#define MXFIELD_CORE_STATE_MOVESTATE_ENTER_OFFSET UNITYSDK_OFFSET(0xEDBD60)
#define MXFIELD_CORE_STATE_MOVESTATE_UPDATE_OFFSET UNITYSDK_OFFSET(0xEDBE50)

namespace MXField::Core::State
{
	inline static constexpr unsigned int MoveState_TypeDefinitionIndex = 10981;

	class MoveState : public Il2CppObject
	{
	public:
		::MXField::Core::State::IEntityState* _NextState_k__BackingField; // 0x10
		::UnityEngine::Vector3* destination; // 0x18
		::System::Single _Speed_k__BackingField; // 0x24
		::System::Single _OriginalSpeed_k__BackingField; // 0x28
		Il2CppObject* _OnArrived_k__BackingField; // 0x30

		::MXField::Core::State::IEntityState* get_NextState()
		{
			return ((::MXField::Core::State::IEntityState*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_STATE_MOVESTATE_GET_NEXTSTATE_OFFSET))(nullptr);
		}

		::System::Void set_NextState(::MXField::Core::State::IEntityState* arg)
		{
			((::System::Void(*)(::MXField::Core::State::IEntityState*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_STATE_MOVESTATE_SET_NEXTSTATE_OFFSET))(arg, nullptr);
		}

		::System::Single get_Speed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_STATE_MOVESTATE_GET_SPEED_OFFSET))(nullptr);
		}

		::System::Void set_Speed(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_STATE_MOVESTATE_SET_SPEED_OFFSET))(arg, nullptr);
		}

		::System::Single get_OriginalSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_STATE_MOVESTATE_GET_ORIGINALSPEED_OFFSET))(nullptr);
		}

		::System::Void set_OriginalSpeed(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_STATE_MOVESTATE_SET_ORIGINALSPEED_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_OnArrived()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_STATE_MOVESTATE_GET_ONARRIVED_OFFSET))(nullptr);
		}

		::System::Void set_OnArrived(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_STATE_MOVESTATE_SET_ONARRIVED_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::Vector3* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_STATE_MOVESTATE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor(::UnityEngine::Vector3* arg, ::System::Single arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::System::Single, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_STATE_MOVESTATE_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor(::UnityEngine::Vector3* arg, ::UnityEngine::Quaternion* arg2, ::System::Single arg3, Il2CppObject* arg4)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::UnityEngine::Quaternion*, ::System::Single, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_STATE_MOVESTATE_.CTOR_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void Exit(::MXField::Core::FieldEntityController* arg)
		{
			((::System::Void(*)(::MXField::Core::FieldEntityController*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_STATE_MOVESTATE_EXIT_OFFSET))(arg, nullptr);
		}

		::System::Void Enter(::MXField::Core::FieldEntityController* arg)
		{
			((::System::Void(*)(::MXField::Core::FieldEntityController*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_STATE_MOVESTATE_ENTER_OFFSET))(arg, nullptr);
		}

		::System::Void Update(::MXField::Core::FieldEntityController* arg)
		{
			((::System::Void(*)(::MXField::Core::FieldEntityController*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_STATE_MOVESTATE_UPDATE_OFFSET))(arg, nullptr);
		}

	};
}

