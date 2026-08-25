#pragma once
#include "../../../unitysdk.h"

namespace MXField::Core::ControlMode::RandomMove { class MovePointContainer; }
namespace MXField::Core { class FieldAIController; }
namespace MXField::Core { class FieldEntityController; }

#define MXFIELD_CORE_CONTROLMODE_RANDOMMOVEMODE_UPDATE_OFFSET UNITYSDK_OFFSET(0xEE3E00)
#define MXFIELD_CORE_CONTROLMODE_RANDOMMOVEMODE_RESUME_OFFSET UNITYSDK_OFFSET(0xEE3FD0)
#define MXFIELD_CORE_CONTROLMODE_RANDOMMOVEMODE_ONARRIVED_OFFSET UNITYSDK_OFFSET(0xEE4010)
#define MXFIELD_CORE_CONTROLMODE_RANDOMMOVEMODE_PAUSE_OFFSET UNITYSDK_OFFSET(0xEE4040)
#define MXFIELD_CORE_CONTROLMODE_RANDOMMOVEMODE_.CTOR_OFFSET UNITYSDK_OFFSET(0xEE40F0)

namespace MXField::Core::ControlMode
{
	inline static constexpr unsigned int RandomMoveMode_TypeDefinitionIndex = 11009;

	class RandomMoveMode : public ::Mono::Security::Protocol::Ntlm::ChallengeResponse
	{
	public:
		::System::Single waitTimeMin; // 0x20
		::System::Single waitTimeMax; // 0x24
		::MXField::Core::ControlMode::RandomMove::MovePointContainer* movePointContainer; // 0x28
		::System::Single waitTimer; // 0x30
		::System::Single waitTime; // 0x34
		::System::Boolean isMoving; // 0x38

		::System::Void Update(::MXField::Core::FieldAIController* arg)
		{
			((::System::Void(*)(::MXField::Core::FieldAIController*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_CONTROLMODE_RANDOMMOVEMODE_UPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void Resume()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_CONTROLMODE_RANDOMMOVEMODE_RESUME_OFFSET))(nullptr);
		}

		::System::Void OnArrived(::MXField::Core::FieldEntityController* arg)
		{
			((::System::Void(*)(::MXField::Core::FieldEntityController*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_CONTROLMODE_RANDOMMOVEMODE_ONARRIVED_OFFSET))(arg, nullptr);
		}

		::System::Void Pause()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_CONTROLMODE_RANDOMMOVEMODE_PAUSE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_CONTROLMODE_RANDOMMOVEMODE_.CTOR_OFFSET))(nullptr);
		}

	};
}

