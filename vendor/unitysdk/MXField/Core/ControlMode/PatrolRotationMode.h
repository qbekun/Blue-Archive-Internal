#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Matrix4x4; }
namespace MXField::Core { class FieldAIController; }
namespace MXField::Core { class FieldEntityController; }

#define MXFIELD_CORE_CONTROLMODE_PATROLROTATIONMODE_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0xEE3370)
#define MXFIELD_CORE_CONTROLMODE_PATROLROTATIONMODE_ONSTART_OFFSET UNITYSDK_OFFSET(0xEE33B0)
#define MXFIELD_CORE_CONTROLMODE_PATROLROTATIONMODE_ONARRIVED_OFFSET UNITYSDK_OFFSET(0xEE3790)
#define MXFIELD_CORE_CONTROLMODE_PATROLROTATIONMODE_RESUME_OFFSET UNITYSDK_OFFSET(0xEE3800)
#define MXFIELD_CORE_CONTROLMODE_PATROLROTATIONMODE_.CTOR_OFFSET UNITYSDK_OFFSET(0xEE3870)
#define MXFIELD_CORE_CONTROLMODE_PATROLROTATIONMODE_UPDATE_OFFSET UNITYSDK_OFFSET(0xEE3980)
#define MXFIELD_CORE_CONTROLMODE_PATROLROTATIONMODE_PAUSE_OFFSET UNITYSDK_OFFSET(0xEE3D50)

namespace MXField::Core::ControlMode
{
	inline static constexpr unsigned int PatrolRotationMode_TypeDefinitionIndex = 11007;

	class PatrolRotationMode : public ::Mono::Security::Protocol::Ntlm::ChallengeResponse
	{
	public:
		::System::Boolean isRelativePoints; // 0x20
		::System::Boolean excludeCharacterPosition; // 0x21
		::System::Single waitTimeMin; // 0x24
		::System::Single waitTimeMax; // 0x28
		Il2CppObject* patrolPoints; // 0x30
		Il2CppObject* points; // 0x38
		::System::Int32 currentPointIndex; // 0x40
		::System::Int32 nextPointIndex; // 0x44
		::System::Single waitTimer; // 0x48
		::System::Single waitTime; // 0x4C
		::UnityEngine::Matrix4x4* startMatrix; // 0x50

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_CONTROLMODE_PATROLROTATIONMODE_GET_ISVALID_OFFSET))(nullptr);
		}

		::System::Void OnStart(::MXField::Core::FieldAIController* arg)
		{
			((::System::Void(*)(::MXField::Core::FieldAIController*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_CONTROLMODE_PATROLROTATIONMODE_ONSTART_OFFSET))(arg, nullptr);
		}

		::System::Void OnArrived(::MXField::Core::FieldEntityController* arg)
		{
			((::System::Void(*)(::MXField::Core::FieldEntityController*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_CONTROLMODE_PATROLROTATIONMODE_ONARRIVED_OFFSET))(arg, nullptr);
		}

		::System::Void Resume()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_CONTROLMODE_PATROLROTATIONMODE_RESUME_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_CONTROLMODE_PATROLROTATIONMODE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Update(::MXField::Core::FieldAIController* arg)
		{
			((::System::Void(*)(::MXField::Core::FieldAIController*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_CONTROLMODE_PATROLROTATIONMODE_UPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void Pause()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_CONTROLMODE_PATROLROTATIONMODE_PAUSE_OFFSET))(nullptr);
		}

	};
}

