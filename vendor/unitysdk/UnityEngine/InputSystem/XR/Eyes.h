#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Quaternion; }

#define UNITYENGINE_INPUTSYSTEM_XR_EYES_GET_RIGHTEYEOPENAMOUNT_OFFSET UNITYSDK_OFFSET(0x9F26CA0)
#define UNITYENGINE_INPUTSYSTEM_XR_EYES_GET_LEFTEYEROTATION_OFFSET UNITYSDK_OFFSET(0x9F26CB0)
#define UNITYENGINE_INPUTSYSTEM_XR_EYES_SET_RIGHTEYEPOSITION_OFFSET UNITYSDK_OFFSET(0x9F26CC0)
#define UNITYENGINE_INPUTSYSTEM_XR_EYES_SET_LEFTEYEOPENAMOUNT_OFFSET UNITYSDK_OFFSET(0x9F26CD0)
#define UNITYENGINE_INPUTSYSTEM_XR_EYES_SET_RIGHTEYEROTATION_OFFSET UNITYSDK_OFFSET(0x9F26CE0)
#define UNITYENGINE_INPUTSYSTEM_XR_EYES_GET_LEFTEYEPOSITION_OFFSET UNITYSDK_OFFSET(0x9F26CF0)
#define UNITYENGINE_INPUTSYSTEM_XR_EYES_SET_FIXATIONPOINT_OFFSET UNITYSDK_OFFSET(0x9F26D00)
#define UNITYENGINE_INPUTSYSTEM_XR_EYES_GET_RIGHTEYEPOSITION_OFFSET UNITYSDK_OFFSET(0x9F26D10)
#define UNITYENGINE_INPUTSYSTEM_XR_EYES_SET_LEFTEYEPOSITION_OFFSET UNITYSDK_OFFSET(0x9F26D30)
#define UNITYENGINE_INPUTSYSTEM_XR_EYES_GET_FIXATIONPOINT_OFFSET UNITYSDK_OFFSET(0x9F26D40)
#define UNITYENGINE_INPUTSYSTEM_XR_EYES_GET_LEFTEYEOPENAMOUNT_OFFSET UNITYSDK_OFFSET(0x9F26D60)
#define UNITYENGINE_INPUTSYSTEM_XR_EYES_SET_RIGHTEYEOPENAMOUNT_OFFSET UNITYSDK_OFFSET(0x9F26D70)
#define UNITYENGINE_INPUTSYSTEM_XR_EYES_GET_RIGHTEYEROTATION_OFFSET UNITYSDK_OFFSET(0x9F26D80)
#define UNITYENGINE_INPUTSYSTEM_XR_EYES_SET_LEFTEYEROTATION_OFFSET UNITYSDK_OFFSET(0x9F26D90)

namespace UnityEngine::InputSystem::XR
{
	inline static constexpr unsigned int Eyes_TypeDefinitionIndex = 28587;

	class Eyes : public Il2CppObject
	{
	public:
		::UnityEngine::Vector3* m_LeftEyePosition; // 0x10
		::UnityEngine::Quaternion* m_LeftEyeRotation; // 0x1C
		::UnityEngine::Vector3* m_RightEyePosition; // 0x2C
		::UnityEngine::Quaternion* m_RightEyeRotation; // 0x38
		::UnityEngine::Vector3* m_FixationPoint; // 0x48
		::System::Single m_LeftEyeOpenAmount; // 0x54
		::System::Single m_RightEyeOpenAmount; // 0x58

		::System::Single get_rightEyeOpenAmount()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_EYES_GET_RIGHTEYEOPENAMOUNT_OFFSET))(nullptr);
		}

		::UnityEngine::Quaternion* get_leftEyeRotation()
		{
			return (return (::UnityEngine::Quaternion*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_EYES_GET_LEFTEYEROTATION_OFFSET))(nullptr);
		}

		::System::Void set_rightEyePosition(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_EYES_SET_RIGHTEYEPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Void set_leftEyeOpenAmount(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_EYES_SET_LEFTEYEOPENAMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void set_rightEyeRotation(::UnityEngine::Quaternion* arg)
		{
			((::System::Void(*)(::UnityEngine::Quaternion*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_EYES_SET_RIGHTEYEROTATION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* get_leftEyePosition()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_EYES_GET_LEFTEYEPOSITION_OFFSET))(nullptr);
		}

		::System::Void set_fixationPoint(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_EYES_SET_FIXATIONPOINT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* get_rightEyePosition()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_EYES_GET_RIGHTEYEPOSITION_OFFSET))(nullptr);
		}

		::System::Void set_leftEyePosition(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_EYES_SET_LEFTEYEPOSITION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* get_fixationPoint()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_EYES_GET_FIXATIONPOINT_OFFSET))(nullptr);
		}

		::System::Single get_leftEyeOpenAmount()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_EYES_GET_LEFTEYEOPENAMOUNT_OFFSET))(nullptr);
		}

		::System::Void set_rightEyeOpenAmount(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_EYES_SET_RIGHTEYEOPENAMOUNT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Quaternion* get_rightEyeRotation()
		{
			return (return (::UnityEngine::Quaternion*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_EYES_GET_RIGHTEYEROTATION_OFFSET))(nullptr);
		}

		::System::Void set_leftEyeRotation(::UnityEngine::Quaternion* arg)
		{
			((::System::Void(*)(::UnityEngine::Quaternion*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_EYES_SET_LEFTEYEROTATION_OFFSET))(arg, nullptr);
		}

	};
}

