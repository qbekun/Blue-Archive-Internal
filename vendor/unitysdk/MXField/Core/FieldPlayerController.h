#pragma once
#include "../../unitysdk.h"

namespace MXField::Core { class FieldPlayerInputHandler; }
namespace MXField::Core::State { class ManualMoveState; }
namespace UnityEngine { class Transform; }
namespace MXField::Dispatch { class DispatchType; }
namespace MXField::Core { class FieldEntityController; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Quaternion; }

#define MXFIELD_CORE_FIELDPLAYERCONTROLLER_START_OFFSET UNITYSDK_OFFSET(0xED16E0)
#define MXFIELD_CORE_FIELDPLAYERCONTROLLER_HANDLEBEGINACTIONDISPATCH_OFFSET UNITYSDK_OFFSET(0xED1910)
#define MXFIELD_CORE_FIELDPLAYERCONTROLLER_GET_FLOATINGWIDGETANCHOR_OFFSET UNITYSDK_OFFSET(0xED1CE0)
#define MXFIELD_CORE_FIELDPLAYERCONTROLLER__HANDLEBEGINACTIONDISPATCH_B__9_1_OFFSET UNITYSDK_OFFSET(0xED1DB0)
#define MXFIELD_CORE_FIELDPLAYERCONTROLLER_SETPOSITIONANDROTATION_OFFSET UNITYSDK_OFFSET(0xECC9E0)
#define MXFIELD_CORE_FIELDPLAYERCONTROLLER__HANDLEBEGINACTIONDISPATCH_B__9_0_OFFSET UNITYSDK_OFFSET(0xED1DD0)
#define MXFIELD_CORE_FIELDPLAYERCONTROLLER_GET_ISINPUTBLOCKED_OFFSET UNITYSDK_OFFSET(0xED1DF0)
#define MXFIELD_CORE_FIELDPLAYERCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0xED1E80)
#define MXFIELD_CORE_FIELDPLAYERCONTROLLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xED1FC0)
#define MXFIELD_CORE_FIELDPLAYERCONTROLLER_UPDATEMANUALSTATE_OFFSET UNITYSDK_OFFSET(0xED2210)
#define MXFIELD_CORE_FIELDPLAYERCONTROLLER_AWAKE_OFFSET UNITYSDK_OFFSET(0xED2310)
#define MXFIELD_CORE_FIELDPLAYERCONTROLLER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xED23B0)
#define MXFIELD_CORE_FIELDPLAYERCONTROLLER_MOVETO_OFFSET UNITYSDK_OFFSET(0xECD050)
#define MXFIELD_CORE_FIELDPLAYERCONTROLLER_HANDLEPLAYERINPUTBLOCKDISPATCH_OFFSET UNITYSDK_OFFSET(0xED2D70)

namespace MXField::Core
{
	inline static constexpr unsigned int FieldPlayerController_TypeDefinitionIndex = 10931;

	class FieldPlayerController : public Il2CppObject
	{
	public:
		::MXField::Core::FieldPlayerInputHandler* inputHandler; // 0x40
		::MXField::Core::State::ManualMoveState* manualState; // 0x48
		::UnityEngine::Transform* floatingWidgetAnchor; // 0x50

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDPLAYERCONTROLLER_START_OFFSET))(nullptr);
		}

		::System::Boolean HandleBeginActionDispatch(::MXField::Dispatch::DispatchType* arg)
		{
			return ((::System::Boolean(*)(::MXField::Dispatch::DispatchType*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDPLAYERCONTROLLER_HANDLEBEGINACTIONDISPATCH_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Transform* get_FloatingWidgetAnchor()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDPLAYERCONTROLLER_GET_FLOATINGWIDGETANCHOR_OFFSET))(nullptr);
		}

		::System::Void _HandleBeginActionDispatch_b__9_1(::MXField::Core::FieldEntityController* arg)
		{
			((::System::Void(*)(::MXField::Core::FieldEntityController*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDPLAYERCONTROLLER__HANDLEBEGINACTIONDISPATCH_B__9_1_OFFSET))(arg, nullptr);
		}

		::System::Void SetPositionAndRotation(::UnityEngine::Vector3* arg, ::UnityEngine::Quaternion* arg2)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::UnityEngine::Quaternion*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDPLAYERCONTROLLER_SETPOSITIONANDROTATION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void _HandleBeginActionDispatch_b__9_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDPLAYERCONTROLLER__HANDLEBEGINACTIONDISPATCH_B__9_0_OFFSET))(nullptr);
		}

		::System::Boolean get_IsInputBlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDPLAYERCONTROLLER_GET_ISINPUTBLOCKED_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDPLAYERCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDPLAYERCONTROLLER_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void UpdateManualState()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDPLAYERCONTROLLER_UPDATEMANUALSTATE_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDPLAYERCONTROLLER_AWAKE_OFFSET))(nullptr);
		}

		::System::Void LateUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDPLAYERCONTROLLER_LATEUPDATE_OFFSET))(nullptr);
		}

		::System::Void MoveTo(::UnityEngine::Vector3* arg, ::UnityEngine::Quaternion* arg2)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::UnityEngine::Quaternion*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDPLAYERCONTROLLER_MOVETO_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean HandlePlayerInputBlockDispatch(::MXField::Dispatch::DispatchType* arg)
		{
			return ((::System::Boolean(*)(::MXField::Dispatch::DispatchType*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDPLAYERCONTROLLER_HANDLEPLAYERINPUTBLOCKDISPATCH_OFFSET))(arg, nullptr);
		}

	};
}

