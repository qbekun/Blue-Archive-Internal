#pragma once
#include "../../../unitysdk.h"

namespace MXField::Core::State { class IEntityState; }
namespace UnityEngine { class Quaternion; }
namespace MXField::Core { class FieldEntityController; }

#define MXFIELD_CORE_STATE_ROTATESTATE_SET_NEXTSTATE_OFFSET UNITYSDK_OFFSET(0xEDC080)
#define MXFIELD_CORE_STATE_ROTATESTATE_GET_TARGETROTATION_OFFSET UNITYSDK_OFFSET(0xEDC090)
#define MXFIELD_CORE_STATE_ROTATESTATE_UPDATE_OFFSET UNITYSDK_OFFSET(0xEDC0A0)
#define MXFIELD_CORE_STATE_ROTATESTATE_.CTOR_OFFSET UNITYSDK_OFFSET(0xED0170)
#define MXFIELD_CORE_STATE_ROTATESTATE_GET_ONARRIVED_OFFSET UNITYSDK_OFFSET(0xEDC2F0)
#define MXFIELD_CORE_STATE_ROTATESTATE_EXIT_OFFSET UNITYSDK_OFFSET(0xEDC300)
#define MXFIELD_CORE_STATE_ROTATESTATE_GET_NEXTSTATE_OFFSET UNITYSDK_OFFSET(0xEDC3E0)
#define MXFIELD_CORE_STATE_ROTATESTATE_ENTER_OFFSET UNITYSDK_OFFSET(0xEDC3F0)

namespace MXField::Core::State
{
	inline static constexpr unsigned int RotateState_TypeDefinitionIndex = 10982;

	class RotateState : public Il2CppObject
	{
	public:
		::System::Single turnSpeedMultiplier; // 0x10
		::MXField::Core::State::IEntityState* _NextState_k__BackingField; // 0x18
		::UnityEngine::Quaternion* _TargetRotation_k__BackingField; // 0x20
		Il2CppObject* _OnArrived_k__BackingField; // 0x30

		::System::Void set_NextState(::MXField::Core::State::IEntityState* arg)
		{
			((::System::Void(*)(::MXField::Core::State::IEntityState*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_STATE_ROTATESTATE_SET_NEXTSTATE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Quaternion* get_TargetRotation()
		{
			return ((::UnityEngine::Quaternion*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_STATE_ROTATESTATE_GET_TARGETROTATION_OFFSET))(nullptr);
		}

		::System::Void Update(::MXField::Core::FieldEntityController* arg)
		{
			((::System::Void(*)(::MXField::Core::FieldEntityController*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_STATE_ROTATESTATE_UPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::Quaternion* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::UnityEngine::Quaternion*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_STATE_ROTATESTATE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* get_OnArrived()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_STATE_ROTATESTATE_GET_ONARRIVED_OFFSET))(nullptr);
		}

		::System::Void Exit(::MXField::Core::FieldEntityController* arg)
		{
			((::System::Void(*)(::MXField::Core::FieldEntityController*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_STATE_ROTATESTATE_EXIT_OFFSET))(arg, nullptr);
		}

		::MXField::Core::State::IEntityState* get_NextState()
		{
			return ((::MXField::Core::State::IEntityState*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_STATE_ROTATESTATE_GET_NEXTSTATE_OFFSET))(nullptr);
		}

		::System::Void Enter(::MXField::Core::FieldEntityController* arg)
		{
			((::System::Void(*)(::MXField::Core::FieldEntityController*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_STATE_ROTATESTATE_ENTER_OFFSET))(arg, nullptr);
		}

	};
}

