#pragma once
#include "../../../unitysdk.h"

namespace MXField::Core { class FieldAIController; }
namespace MXField::Core { class FieldEntityController; }

#define MXFIELD_CORE_CONTROLMODE_PATROLMODE_UPDATE_OFFSET UNITYSDK_OFFSET(0xEE2D90)
#define MXFIELD_CORE_CONTROLMODE_PATROLMODE_RESUME_OFFSET UNITYSDK_OFFSET(0xEE2F50)
#define MXFIELD_CORE_CONTROLMODE_PATROLMODE_.CTOR_OFFSET UNITYSDK_OFFSET(0xEE2FC0)
#define MXFIELD_CORE_CONTROLMODE_PATROLMODE_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0xEE2F10)
#define MXFIELD_CORE_CONTROLMODE_PATROLMODE_PAUSE_OFFSET UNITYSDK_OFFSET(0xEE3080)
#define MXFIELD_CORE_CONTROLMODE_PATROLMODE_ONARRIVED_OFFSET UNITYSDK_OFFSET(0xEE3130)
#define MXFIELD_CORE_CONTROLMODE_PATROLMODE_ONSTART_OFFSET UNITYSDK_OFFSET(0xEE31A0)

namespace MXField::Core::ControlMode
{
	inline static constexpr unsigned int PatrolMode_TypeDefinitionIndex = 11005;

	class PatrolMode : public ::Mono::Security::Protocol::Ntlm::ChallengeResponse
	{
	public:
		::System::Boolean excludeCharacterPosition; // 0x20
		::System::Single waitTimeMin; // 0x24
		::System::Single waitTimeMax; // 0x28
		Il2CppObject* patrolPoints; // 0x30
		Il2CppObject* points; // 0x38
		::System::Int32 currentPointIndex; // 0x40
		::System::Int32 nextPointIndex; // 0x44
		::System::Single waitTimer; // 0x48
		::System::Single waitTime; // 0x4C

		::System::Void Update(::MXField::Core::FieldAIController* arg)
		{
			((::System::Void(*)(::MXField::Core::FieldAIController*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_CONTROLMODE_PATROLMODE_UPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void Resume()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_CONTROLMODE_PATROLMODE_RESUME_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_CONTROLMODE_PATROLMODE_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_CONTROLMODE_PATROLMODE_GET_ISVALID_OFFSET))(nullptr);
		}

		::System::Void Pause()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_CONTROLMODE_PATROLMODE_PAUSE_OFFSET))(nullptr);
		}

		::System::Void OnArrived(::MXField::Core::FieldEntityController* arg)
		{
			((::System::Void(*)(::MXField::Core::FieldEntityController*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_CONTROLMODE_PATROLMODE_ONARRIVED_OFFSET))(arg, nullptr);
		}

		::System::Void OnStart(::MXField::Core::FieldAIController* arg)
		{
			((::System::Void(*)(::MXField::Core::FieldAIController*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_CONTROLMODE_PATROLMODE_ONSTART_OFFSET))(arg, nullptr);
		}

	};
}

