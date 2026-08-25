#pragma once
#include "../../../unitysdk.h"

namespace MXField::Core::State { class IEntityState; }
namespace MXField::Core { class FieldEntityController; }

#define MXFIELD_CORE_STATE_IDLESTATE_UPDATE_OFFSET UNITYSDK_OFFSET(0xEDB200)
#define MXFIELD_CORE_STATE_IDLESTATE_UPDATERANDOMTHINKDELAY_OFFSET UNITYSDK_OFFSET(0xEDB340)
#define MXFIELD_CORE_STATE_IDLESTATE_EXIT_OFFSET UNITYSDK_OFFSET(0xEDB3C0)
#define MXFIELD_CORE_STATE_IDLESTATE_SET_NEXTSTATE_OFFSET UNITYSDK_OFFSET(0xEDB3D0)
#define MXFIELD_CORE_STATE_IDLESTATE_ENTER_OFFSET UNITYSDK_OFFSET(0xEDB3E0)
#define MXFIELD_CORE_STATE_IDLESTATE_ONTHINKINGEND_OFFSET UNITYSDK_OFFSET(0xEDB4E0)
#define MXFIELD_CORE_STATE_IDLESTATE_GET_NEXTSTATE_OFFSET UNITYSDK_OFFSET(0xEDB570)
#define MXFIELD_CORE_STATE_IDLESTATE_.CTOR_OFFSET UNITYSDK_OFFSET(0xECA800)

namespace MXField::Core::State
{
	inline static constexpr unsigned int IdleState_TypeDefinitionIndex = 10975;

	class IdleState : public Il2CppObject
	{
	public:
		::MXField::Core::State::IEntityState* _NextState_k__BackingField; // 0x10
		::System::Single elapsedTime; // 0x18
		::System::Single thinkDelay; // 0x1C
		::System::Boolean isThinking; // 0x20

		::System::Void Update(::MXField::Core::FieldEntityController* arg)
		{
			((::System::Void(*)(::MXField::Core::FieldEntityController*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_STATE_IDLESTATE_UPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateRandomThinkDelay()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_STATE_IDLESTATE_UPDATERANDOMTHINKDELAY_OFFSET))(nullptr);
		}

		::System::Void Exit(::MXField::Core::FieldEntityController* arg)
		{
			((::System::Void(*)(::MXField::Core::FieldEntityController*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_STATE_IDLESTATE_EXIT_OFFSET))(arg, nullptr);
		}

		::System::Void set_NextState(::MXField::Core::State::IEntityState* arg)
		{
			((::System::Void(*)(::MXField::Core::State::IEntityState*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_STATE_IDLESTATE_SET_NEXTSTATE_OFFSET))(arg, nullptr);
		}

		::System::Void Enter(::MXField::Core::FieldEntityController* arg)
		{
			((::System::Void(*)(::MXField::Core::FieldEntityController*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_STATE_IDLESTATE_ENTER_OFFSET))(arg, nullptr);
		}

		::System::Void OnThinkingEnd(::MXField::Core::FieldEntityController* arg)
		{
			((::System::Void(*)(::MXField::Core::FieldEntityController*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_STATE_IDLESTATE_ONTHINKINGEND_OFFSET))(arg, nullptr);
		}

		::MXField::Core::State::IEntityState* get_NextState()
		{
			return ((::MXField::Core::State::IEntityState*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_STATE_IDLESTATE_GET_NEXTSTATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_STATE_IDLESTATE_.CTOR_OFFSET))(nullptr);
		}

	};
}

