#pragma once
#include "../../../unitysdk.h"

namespace MXField::Core { class FieldAIController; }
namespace UnityEngine { class Transform; }

#define MXFIELD_CORE_CONTROLMODE_AICONTROLMODE_GET_ISPAUSED_OFFSET UNITYSDK_OFFSET(0xEE2CF0)
#define MXFIELD_CORE_CONTROLMODE_AICONTROLMODE_PAUSE_OFFSET UNITYSDK_OFFSET(0xEE2D00)
#define MXFIELD_CORE_CONTROLMODE_AICONTROLMODE_UPDATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXFIELD_CORE_CONTROLMODE_AICONTROLMODE_GET_CONTROLLER_OFFSET UNITYSDK_OFFSET(0xEE2D10)
#define MXFIELD_CORE_CONTROLMODE_AICONTROLMODE_.CTOR_OFFSET UNITYSDK_OFFSET(0xEE2D20)
#define MXFIELD_CORE_CONTROLMODE_AICONTROLMODE_SET_ISPAUSED_OFFSET UNITYSDK_OFFSET(0xEE2D30)
#define MXFIELD_CORE_CONTROLMODE_AICONTROLMODE_DRAWGIZMOS_OFFSET UNITYSDK_OFFSET(0xEE2D40)
#define MXFIELD_CORE_CONTROLMODE_AICONTROLMODE_RESUME_OFFSET UNITYSDK_OFFSET(0xEE2D50)
#define MXFIELD_CORE_CONTROLMODE_AICONTROLMODE_SET_CONTROLLER_OFFSET UNITYSDK_OFFSET(0xEE2D60)
#define MXFIELD_CORE_CONTROLMODE_AICONTROLMODE_ONSTART_OFFSET UNITYSDK_OFFSET(0xEE2D70)

namespace MXField::Core::ControlMode
{
	inline static constexpr unsigned int AIControlMode_TypeDefinitionIndex = 11003;

	class AIControlMode : public Il2CppObject
	{
	public:
		::System::Boolean _IsPaused_k__BackingField; // 0x10
		::MXField::Core::FieldAIController* _Controller_k__BackingField; // 0x18

		::System::Boolean get_IsPaused()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_CONTROLMODE_AICONTROLMODE_GET_ISPAUSED_OFFSET))(nullptr);
		}

		::System::Void Pause()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_CONTROLMODE_AICONTROLMODE_PAUSE_OFFSET))(nullptr);
		}

		::System::Void Update(::MXField::Core::FieldAIController* arg)
		{
			((::System::Void(*)(::MXField::Core::FieldAIController*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_CONTROLMODE_AICONTROLMODE_UPDATE_OFFSET))(arg, nullptr);
		}

		::MXField::Core::FieldAIController* get_Controller()
		{
			return ((::MXField::Core::FieldAIController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_CONTROLMODE_AICONTROLMODE_GET_CONTROLLER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_CONTROLMODE_AICONTROLMODE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_IsPaused(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_CONTROLMODE_AICONTROLMODE_SET_ISPAUSED_OFFSET))(arg, nullptr);
		}

		::System::Void DrawGizmos(::UnityEngine::Transform* arg)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_CONTROLMODE_AICONTROLMODE_DRAWGIZMOS_OFFSET))(arg, nullptr);
		}

		::System::Void Resume()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_CONTROLMODE_AICONTROLMODE_RESUME_OFFSET))(nullptr);
		}

		::System::Void set_Controller(::MXField::Core::FieldAIController* arg)
		{
			((::System::Void(*)(::MXField::Core::FieldAIController*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_CONTROLMODE_AICONTROLMODE_SET_CONTROLLER_OFFSET))(arg, nullptr);
		}

		::System::Void OnStart(::MXField::Core::FieldAIController* arg)
		{
			((::System::Void(*)(::MXField::Core::FieldAIController*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_CONTROLMODE_AICONTROLMODE_ONSTART_OFFSET))(arg, nullptr);
		}

	};
}

