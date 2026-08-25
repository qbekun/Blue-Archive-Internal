#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Vector2; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Quaternion; }
namespace MXField::Core { class FieldEntityController; }
namespace MXField::Dispatch { class PlayerInputBlockDispatch; }
namespace UnityEngine { class Transform; }

#define MXFIELD_CORE_FIELDPLAYERINPUTHANDLER_UPDATE_OFFSET UNITYSDK_OFFSET(0xED2460)
#define MXFIELD_CORE_FIELDPLAYERINPUTHANDLER_ISFIELDINPUTUITOP_OFFSET UNITYSDK_OFFSET(0xED3140)
#define MXFIELD_CORE_FIELDPLAYERINPUTHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0xED1F30)
#define MXFIELD_CORE_FIELDPLAYERINPUTHANDLER_GET_ISINPUTBLOCKED_OFFSET UNITYSDK_OFFSET(0xED1E40)
#define MXFIELD_CORE_FIELDPLAYERINPUTHANDLER_GET_ISMOVING_OFFSET UNITYSDK_OFFSET(0xED2300)
#define MXFIELD_CORE_FIELDPLAYERINPUTHANDLER_ADDINPUTBLOCKER_OFFSET UNITYSDK_OFFSET(0xED2EB0)
#define MXFIELD_CORE_FIELDPLAYERINPUTHANDLER_UPDATETARGETDIRECTION_OFFSET UNITYSDK_OFFSET(0xED3240)
#define MXFIELD_CORE_FIELDPLAYERINPUTHANDLER_REMOVEINPUTBLOCKER_OFFSET UNITYSDK_OFFSET(0xED2F50)
#define MXFIELD_CORE_FIELDPLAYERINPUTHANDLER_CUTOFFJOYSTICKPOWER_OFFSET UNITYSDK_OFFSET(0xED3060)

namespace MXField::Core
{
	inline static constexpr unsigned int FieldPlayerInputHandler_TypeDefinitionIndex = 10933;

	class FieldPlayerInputHandler : public Il2CppObject
	{
	public:
		::System::Boolean useCharacterForward; // 0x10
		::System::Single inputPower; // 0x14
		::UnityEngine::Vector2* input; // 0x18
		::UnityEngine::Vector3* targetDirection; // 0x20
		::UnityEngine::Quaternion* freeRotation; // 0x2C
		::System::Single turnSpeedMultiplier; // 0x3C
		::System::Single inputMagnitude; // 0x40
		Il2CppObject* InputBlockers; // 0x48

		::System::Void Update(::MXField::Core::FieldEntityController* arg)
		{
			((::System::Void(*)(::MXField::Core::FieldEntityController*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDPLAYERINPUTHANDLER_UPDATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsFieldInputUITop()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDPLAYERINPUTHANDLER_ISFIELDINPUTUITOP_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDPLAYERINPUTHANDLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_IsInputBlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDPLAYERINPUTHANDLER_GET_ISINPUTBLOCKED_OFFSET))(nullptr);
		}

		::System::Boolean get_IsMoving()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDPLAYERINPUTHANDLER_GET_ISMOVING_OFFSET))(nullptr);
		}

		::System::Void AddInputBlocker(::MXField::Dispatch::PlayerInputBlockDispatch* arg)
		{
			((::System::Void(*)(::MXField::Dispatch::PlayerInputBlockDispatch*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDPLAYERINPUTHANDLER_ADDINPUTBLOCKER_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateTargetDirection(::UnityEngine::Transform* arg)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDPLAYERINPUTHANDLER_UPDATETARGETDIRECTION_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveInputBlocker(::MXField::Dispatch::PlayerInputBlockDispatch* arg)
		{
			((::System::Void(*)(::MXField::Dispatch::PlayerInputBlockDispatch*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDPLAYERINPUTHANDLER_REMOVEINPUTBLOCKER_OFFSET))(arg, nullptr);
		}

		::System::Void CutoffJoystickPower(::MXField::Core::FieldEntityController* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::MXField::Core::FieldEntityController*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDPLAYERINPUTHANDLER_CUTOFFJOYSTICKPOWER_OFFSET))(arg, arg2, nullptr);
		}

	};
}

