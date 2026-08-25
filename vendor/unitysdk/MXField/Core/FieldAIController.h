#pragma once
#include "../../unitysdk.h"

namespace MXField::Core::ControlMode { class AIControlMode; }
namespace UnityEngine { class Transform; }
namespace UnityEngine { class Vector3; }
namespace MXField::Core { class IFieldInteractable; }

#define MXFIELD_CORE_FIELDAICONTROLLER_START_OFFSET UNITYSDK_OFFSET(0xECFFC0)
#define MXFIELD_CORE_FIELDAICONTROLLER_ROTATETOWARD_OFFSET UNITYSDK_OFFSET(0xED0050)
#define MXFIELD_CORE_FIELDAICONTROLLER_AWAKE_OFFSET UNITYSDK_OFFSET(0xED0210)
#define MXFIELD_CORE_FIELDAICONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0xED0320)
#define MXFIELD_CORE_FIELDAICONTROLLER_ONEXITINTERACTION_OFFSET UNITYSDK_OFFSET(0xED03A0)
#define MXFIELD_CORE_FIELDAICONTROLLER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xED0430)
#define MXFIELD_CORE_FIELDAICONTROLLER_GET_FLOATINGWIDGETANCHOR_OFFSET UNITYSDK_OFFSET(0xED04F0)
#define MXFIELD_CORE_FIELDAICONTROLLER_ONENTERINTERACTION_OFFSET UNITYSDK_OFFSET(0xED06B0)

namespace MXField::Core
{
	inline static constexpr unsigned int FieldAIController_TypeDefinitionIndex = 10928;

	class FieldAIController : public Il2CppObject
	{
	public:
		::MXField::Core::ControlMode::AIControlMode* controlMode; // 0x40
		::System::Boolean ignoreRotateAction; // 0x48
		::UnityEngine::Transform* floatingWidgetAnchor; // 0x50

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDAICONTROLLER_START_OFFSET))(nullptr);
		}

		::System::Void RotateToward(::UnityEngine::Vector3* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDAICONTROLLER_ROTATETOWARD_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDAICONTROLLER_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDAICONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnExitInteraction(::MXField::Core::IFieldInteractable* arg)
		{
			((::System::Void(*)(::MXField::Core::IFieldInteractable*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDAICONTROLLER_ONEXITINTERACTION_OFFSET))(arg, nullptr);
		}

		::System::Void LateUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDAICONTROLLER_LATEUPDATE_OFFSET))(nullptr);
		}

		::UnityEngine::Transform* get_FloatingWidgetAnchor()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDAICONTROLLER_GET_FLOATINGWIDGETANCHOR_OFFSET))(nullptr);
		}

		::System::Void OnEnterInteraction(::MXField::Core::IFieldInteractable* arg)
		{
			((::System::Void(*)(::MXField::Core::IFieldInteractable*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDAICONTROLLER_ONENTERINTERACTION_OFFSET))(arg, nullptr);
		}

	};
}

