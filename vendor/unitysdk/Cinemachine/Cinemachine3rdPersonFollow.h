#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Vector3; }
namespace UnityEngine { class LayerMask; }
namespace UnityEngine { class Quaternion; }
namespace UnityEngine { class Vector3&; }
namespace Cinemachine { class CameraState&; }
namespace UnityEngine { class Transform; }

#define CINEMACHINE_CINEMACHINE3RDPERSONFOLLOW_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x2840560)
#define CINEMACHINE_CINEMACHINE3RDPERSONFOLLOW_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x28405D0)
#define CINEMACHINE_CINEMACHINE3RDPERSONFOLLOW_RESET_OFFSET UNITYSDK_OFFSET(0x2840650)
#define CINEMACHINE_CINEMACHINE3RDPERSONFOLLOW_GETRAWRIGPOSITIONS_OFFSET UNITYSDK_OFFSET(0x28406A0)
#define CINEMACHINE_CINEMACHINE3RDPERSONFOLLOW_GETHEADING_OFFSET UNITYSDK_OFFSET(0x2840800)
#define CINEMACHINE_CINEMACHINE3RDPERSONFOLLOW_POSITIONCAMERA_OFFSET UNITYSDK_OFFSET(0x2840A90)
#define CINEMACHINE_CINEMACHINE3RDPERSONFOLLOW_MUTATECAMERASTATE_OFFSET UNITYSDK_OFFSET(0x2841370)
#define CINEMACHINE_CINEMACHINE3RDPERSONFOLLOW_GETMAXDAMPTIME_OFFSET UNITYSDK_OFFSET(0x2841400)
#define CINEMACHINE_CINEMACHINE3RDPERSONFOLLOW_.CTOR_OFFSET UNITYSDK_OFFSET(0x2841430)
#define CINEMACHINE_CINEMACHINE3RDPERSONFOLLOW_RESOLVECOLLISIONS_OFFSET UNITYSDK_OFFSET(0x2840FA0)
#define CINEMACHINE_CINEMACHINE3RDPERSONFOLLOW_GET_STAGE_OFFSET UNITYSDK_OFFSET(0x2841490)
#define CINEMACHINE_CINEMACHINE3RDPERSONFOLLOW_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x28414A0)
#define CINEMACHINE_CINEMACHINE3RDPERSONFOLLOW_GETRIGPOSITIONS_OFFSET UNITYSDK_OFFSET(0x2841500)
#define CINEMACHINE_CINEMACHINE3RDPERSONFOLLOW_ONTARGETOBJECTWARPED_OFFSET UNITYSDK_OFFSET(0x28416C0)

namespace Cinemachine
{
	inline static constexpr unsigned int Cinemachine3rdPersonFollow_TypeDefinitionIndex = 34247;

	class Cinemachine3rdPersonFollow : public Il2CppObject
	{
	public:
		::UnityEngine::Vector3* Damping; // 0x20
		::UnityEngine::Vector3* ShoulderOffset; // 0x2C
		::System::Single VerticalArmLength; // 0x38
		::System::Single CameraSide; // 0x3C
		::System::Single CameraDistance; // 0x40
		::UnityEngine::LayerMask* CameraCollisionFilter; // 0x44
		::System::String* IgnoreTag; // 0x48
		::System::Single CameraRadius; // 0x50
		::System::Single DampingIntoCollision; // 0x54
		::System::Single DampingFromCollision; // 0x58
		::UnityEngine::Vector3* m_PreviousFollowTargetPosition; // 0x5C
		::UnityEngine::Vector3* m_DampingCorrection; // 0x68
		::System::Single m_CamPosCollisionCorrection; // 0x74

		::System::Boolean get_IsValid()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINE3RDPERSONFOLLOW_GET_ISVALID_OFFSET))(nullptr);
		}

		::System::Void OnValidate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINE3RDPERSONFOLLOW_ONVALIDATE_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINE3RDPERSONFOLLOW_RESET_OFFSET))(nullptr);
		}

		::System::Void GetRawRigPositions(::UnityEngine::Vector3* arg, ::UnityEngine::Quaternion* arg, ::UnityEngine::Quaternion* arg, ::UnityEngine::Vector3&* arg, ::UnityEngine::Vector3&* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::UnityEngine::Quaternion*, ::UnityEngine::Quaternion*, ::UnityEngine::Vector3&*, ::UnityEngine::Vector3&*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINE3RDPERSONFOLLOW_GETRAWRIGPOSITIONS_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::Quaternion* GetHeading(::UnityEngine::Quaternion* arg, ::UnityEngine::Vector3* arg)
		{
			return (return (::UnityEngine::Quaternion*(*)(::UnityEngine::Quaternion*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINE3RDPERSONFOLLOW_GETHEADING_OFFSET))(arg, arg, nullptr);
		}

		::System::Void PositionCamera(::Cinemachine::CameraState&* arg, ::System::Single arg)
		{
			((::System::Void(*)(::Cinemachine::CameraState&*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINE3RDPERSONFOLLOW_POSITIONCAMERA_OFFSET))(arg, arg, nullptr);
		}

		::System::Void MutateCameraState(::Cinemachine::CameraState&* arg, ::System::Single arg)
		{
			((::System::Void(*)(::Cinemachine::CameraState&*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINE3RDPERSONFOLLOW_MUTATECAMERASTATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Single GetMaxDampTime()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINE3RDPERSONFOLLOW_GETMAXDAMPTIME_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINE3RDPERSONFOLLOW_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* ResolveCollisions(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg, ::System::Single arg, ::System::Single arg, float&* arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::System::Single, ::System::Single, float&*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINE3RDPERSONFOLLOW_RESOLVECOLLISIONS_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		Stage* get_Stage()
		{
			return (return (Stage*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINE3RDPERSONFOLLOW_GET_STAGE_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINE3RDPERSONFOLLOW_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void GetRigPositions(::UnityEngine::Vector3&* arg, ::UnityEngine::Vector3&* arg, ::UnityEngine::Vector3&* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3&*, ::UnityEngine::Vector3&*, ::UnityEngine::Vector3&*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINE3RDPERSONFOLLOW_GETRIGPOSITIONS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void OnTargetObjectWarped(::UnityEngine::Transform* arg, ::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINE3RDPERSONFOLLOW_ONTARGETOBJECTWARPED_OFFSET))(arg, arg, nullptr);
		}

	};
}

