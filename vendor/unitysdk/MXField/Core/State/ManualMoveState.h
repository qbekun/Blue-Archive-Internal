#pragma once
#include "../../../unitysdk.h"

namespace MXField::Core::State { class IEntityState; }
namespace MXField::Core { class FieldEntityController; }

#define MXFIELD_CORE_STATE_MANUALMOVESTATE_.CTOR_OFFSET UNITYSDK_OFFSET(0xED1FB0)
#define MXFIELD_CORE_STATE_MANUALMOVESTATE_EXIT_OFFSET UNITYSDK_OFFSET(0xEDBA00)
#define MXFIELD_CORE_STATE_MANUALMOVESTATE_GET_NEXTSTATE_OFFSET UNITYSDK_OFFSET(0xEDBA20)
#define MXFIELD_CORE_STATE_MANUALMOVESTATE_UPDATE_OFFSET UNITYSDK_OFFSET(0xEDBA30)
#define MXFIELD_CORE_STATE_MANUALMOVESTATE_ENTER_OFFSET UNITYSDK_OFFSET(0xEDBA40)

namespace MXField::Core::State
{
	inline static constexpr unsigned int ManualMoveState_TypeDefinitionIndex = 10979;

	class ManualMoveState : public Il2CppObject
	{
	public:
		::MXField::Core::State::IEntityState* _NextState_k__BackingField; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_STATE_MANUALMOVESTATE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Exit(::MXField::Core::FieldEntityController* arg)
		{
			((::System::Void(*)(::MXField::Core::FieldEntityController*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_STATE_MANUALMOVESTATE_EXIT_OFFSET))(arg, nullptr);
		}

		::MXField::Core::State::IEntityState* get_NextState()
		{
			return ((::MXField::Core::State::IEntityState*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_STATE_MANUALMOVESTATE_GET_NEXTSTATE_OFFSET))(nullptr);
		}

		::System::Void Update(::MXField::Core::FieldEntityController* arg)
		{
			((::System::Void(*)(::MXField::Core::FieldEntityController*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_STATE_MANUALMOVESTATE_UPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void Enter(::MXField::Core::FieldEntityController* arg)
		{
			((::System::Void(*)(::MXField::Core::FieldEntityController*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_STATE_MANUALMOVESTATE_ENTER_OFFSET))(arg, nullptr);
		}

	};
}

