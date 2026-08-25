#pragma once
#include "../../unitysdk.h"

#define MXFIELD_ACTIONS_AMBIENCESOUNDCONTROLACTION_EXECUTE_OFFSET UNITYSDK_OFFSET(0xEE7FD0)
#define MXFIELD_ACTIONS_AMBIENCESOUNDCONTROLACTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xEE8090)

namespace MXField::Actions
{
	inline static constexpr unsigned int AmbienceSoundControlAction_TypeDefinitionIndex = 11030;

	class AmbienceSoundControlAction : public Il2CppObject
	{
	public:
		::System::Boolean _mute; // 0x30

		::System::Void Execute()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_AMBIENCESOUNDCONTROLACTION_EXECUTE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_AMBIENCESOUNDCONTROLACTION_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

