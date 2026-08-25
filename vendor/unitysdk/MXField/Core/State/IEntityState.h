#pragma once
#include "../../../unitysdk.h"

namespace MXField::Core { class FieldEntityController; }
namespace MXField::Core::State { class IEntityState; }

#define MXFIELD_CORE_STATE_IENTITYSTATE_ENTER_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXFIELD_CORE_STATE_IENTITYSTATE_UPDATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXFIELD_CORE_STATE_IENTITYSTATE_GET_NEXTSTATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXFIELD_CORE_STATE_IENTITYSTATE_EXIT_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MXField::Core::State
{
	inline static constexpr unsigned int IEntityState_TypeDefinitionIndex = 10976;

	class IEntityState : public Il2CppObject
	{
	public:
		::System::Void Enter(::MXField::Core::FieldEntityController* arg)
		{
			((::System::Void(*)(::MXField::Core::FieldEntityController*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_STATE_IENTITYSTATE_ENTER_OFFSET))(arg, nullptr);
		}

		::System::Void Update(::MXField::Core::FieldEntityController* arg)
		{
			((::System::Void(*)(::MXField::Core::FieldEntityController*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_STATE_IENTITYSTATE_UPDATE_OFFSET))(arg, nullptr);
		}

		::MXField::Core::State::IEntityState* get_NextState()
		{
			return ((::MXField::Core::State::IEntityState*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_STATE_IENTITYSTATE_GET_NEXTSTATE_OFFSET))(nullptr);
		}

		::System::Void Exit(::MXField::Core::FieldEntityController* arg)
		{
			((::System::Void(*)(::MXField::Core::FieldEntityController*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_STATE_IENTITYSTATE_EXIT_OFFSET))(arg, nullptr);
		}

	};
}

