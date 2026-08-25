#pragma once
#include "../../../unitysdk.h"

namespace MXField::Core { class FieldAIController; }

#define MXFIELD_CORE_CONTROLMODE_DEFAULTMODE_UPDATE_OFFSET UNITYSDK_OFFSET(0xEE2D80)
#define MXFIELD_CORE_CONTROLMODE_DEFAULTMODE_.CTOR_OFFSET UNITYSDK_OFFSET(0xED0310)

namespace MXField::Core::ControlMode
{
	inline static constexpr unsigned int DefaultMode_TypeDefinitionIndex = 11004;

	class DefaultMode : public ::Mono::Security::Protocol::Ntlm::ChallengeResponse
	{
	public:
		::System::Void Update(::MXField::Core::FieldAIController* arg)
		{
			((::System::Void(*)(::MXField::Core::FieldAIController*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_CONTROLMODE_DEFAULTMODE_UPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_CONTROLMODE_DEFAULTMODE_.CTOR_OFFSET))(nullptr);
		}

	};
}

