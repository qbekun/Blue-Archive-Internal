#pragma once
#include "../../../unitysdk.h"

namespace MXField::Core { class FieldEntityController; }

#define MXFIELD_CORE_STATE_MOVEENDSTATE_ENTER_IMPL_OFFSET UNITYSDK_OFFSET(0xEDBAC0)
#define MXFIELD_CORE_STATE_MOVEENDSTATE_.CTOR_OFFSET UNITYSDK_OFFSET(0xEDBB50)

namespace MXField::Core::State
{
	inline static constexpr unsigned int MoveEndState_TypeDefinitionIndex = 10980;

	class MoveEndState : public Il2CppObject
	{
	public:
		::System::Void Enter_Impl(::MXField::Core::FieldEntityController* arg)
		{
			((::System::Void(*)(::MXField::Core::FieldEntityController*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_STATE_MOVEENDSTATE_ENTER_IMPL_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_STATE_MOVEENDSTATE_.CTOR_OFFSET))(nullptr);
		}

	};
}

