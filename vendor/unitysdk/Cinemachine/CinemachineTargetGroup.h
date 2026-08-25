#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Bounds; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class BoundingSphere; }
namespace UnityEngine { class Transform; }
namespace UnityEngine { class Quaternion; }
namespace UnityEngine { class Matrix4x4; }
namespace UnityEngine { class Vector2&; }

#define CINEMACHINE_CINEMACHINETARGETGROUP_FINDMEMBER_OFFSET UNITYSDK_OFFSET(0x283B040)
#define CINEMACHINE_CINEMACHINETARGETGROUP_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x283B110)
#define CINEMACHINE_CINEMACHINETARGETGROUP_CALCULATEAVERAGEORIENTATION_OFFSET UNITYSDK_OFFSET(0x283B250)
#define CINEMACHINE_CINEMACHINETARGETGROUP_DOUPDATE_OFFSET UNITYSDK_OFFSET(0x283B120)
#define CINEMACHINE_CINEMACHINETARGETGROUP_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x283BDF0)
#define CINEMACHINE_CINEMACHINETARGETGROUP_CALCULATEAVERAGEPOSITION_OFFSET UNITYSDK_OFFSET(0x283B5E0)
#define CINEMACHINE_CINEMACHINETARGETGROUP_GET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x283BE70)
#define CINEMACHINE_CINEMACHINETARGETGROUP_GETWEIGHTEDBOUNDSFORMEMBER_OFFSET UNITYSDK_OFFSET(0x283BE80)
#define CINEMACHINE_CINEMACHINETARGETGROUP_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x283C060)
#define CINEMACHINE_CINEMACHINETARGETGROUP_CALCULATEBOUNDINGBOX_OFFSET UNITYSDK_OFFSET(0x283B7C0)
#define CINEMACHINE_CINEMACHINETARGETGROUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x283C070)
#define CINEMACHINE_CINEMACHINETARGETGROUP_SET_BOUNDINGBOX_OFFSET UNITYSDK_OFFSET(0x283C0D0)
#define CINEMACHINE_CINEMACHINETARGETGROUP_GETVIEWSPACEANGULARBOUNDS_OFFSET UNITYSDK_OFFSET(0x283C0E0)
#define CINEMACHINE_CINEMACHINETARGETGROUP_UPDATE_OFFSET UNITYSDK_OFFSET(0x283CD00)
#define CINEMACHINE_CINEMACHINETARGETGROUP_CALCULATEBOUNDINGSPHERE_OFFSET UNITYSDK_OFFSET(0x283BAE0)
#define CINEMACHINE_CINEMACHINETARGETGROUP_WEIGHTEDMEMBERBOUNDS_OFFSET UNITYSDK_OFFSET(0x283BF00)
#define CINEMACHINE_CINEMACHINETARGETGROUP_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x283CD30)
#define CINEMACHINE_CINEMACHINETARGETGROUP_GET_BOUNDINGBOX_OFFSET UNITYSDK_OFFSET(0x283CE10)
#define CINEMACHINE_CINEMACHINETARGETGROUP_ADDMEMBER_OFFSET UNITYSDK_OFFSET(0x283CE30)
#define CINEMACHINE_CINEMACHINETARGETGROUP_GETVIEWSPACEBOUNDINGBOX_OFFSET UNITYSDK_OFFSET(0x283CF50)
#define CINEMACHINE_CINEMACHINETARGETGROUP_GET_SPHERE_OFFSET UNITYSDK_OFFSET(0x283D2B0)
#define CINEMACHINE_CINEMACHINETARGETGROUP_REMOVEMEMBER_OFFSET UNITYSDK_OFFSET(0x283D2C0)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineTargetGroup_TypeDefinitionIndex = 34242;

	class CinemachineTargetGroup : public Il2CppObject
	{
	public:
		PositionMode* m_PositionMode; // 0x18
		RotationMode* m_RotationMode; // 0x1C
		UpdateMethod* m_UpdateMethod; // 0x20
		::Il2CppArray<::System::Object*>* m_Targets; // 0x28
		::UnityEngine::Bounds* _BoundingBox_k__BackingField; // 0x30
		::System::Single m_MaxWeight; // 0x48
		::UnityEngine::Vector3* m_AveragePos; // 0x4C
		::UnityEngine::BoundingSphere* m_BoundingSphere; // 0x58

		::System::Int32 FindMember(::UnityEngine::Transform* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETARGETGROUP_FINDMEMBER_OFFSET))(arg, nullptr);
		}

		::System::Void LateUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETARGETGROUP_LATEUPDATE_OFFSET))(nullptr);
		}

		::UnityEngine::Quaternion* CalculateAverageOrientation()
		{
			return (return (::UnityEngine::Quaternion*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETARGETGROUP_CALCULATEAVERAGEORIENTATION_OFFSET))(nullptr);
		}

		::System::Void DoUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETARGETGROUP_DOUPDATE_OFFSET))(nullptr);
		}

		::System::Void OnValidate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETARGETGROUP_ONVALIDATE_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* CalculateAveragePosition(float&* arg)
		{
			return (return (::UnityEngine::Vector3*(*)(float&*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETARGETGROUP_CALCULATEAVERAGEPOSITION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Transform* get_Transform()
		{
			return (return (::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETARGETGROUP_GET_TRANSFORM_OFFSET))(nullptr);
		}

		::UnityEngine::BoundingSphere* GetWeightedBoundsForMember(::System::Int32 arg)
		{
			return (return (::UnityEngine::BoundingSphere*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETARGETGROUP_GETWEIGHTEDBOUNDSFORMEMBER_OFFSET))(arg, nullptr);
		}

		::System::Void FixedUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETARGETGROUP_FIXEDUPDATE_OFFSET))(nullptr);
		}

		::UnityEngine::Bounds* CalculateBoundingBox(::UnityEngine::Vector3* arg, ::System::Single arg)
		{
			return (return (::UnityEngine::Bounds*(*)(::UnityEngine::Vector3*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETARGETGROUP_CALCULATEBOUNDINGBOX_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETARGETGROUP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_BoundingBox(::UnityEngine::Bounds* arg)
		{
			((::System::Void(*)(::UnityEngine::Bounds*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETARGETGROUP_SET_BOUNDINGBOX_OFFSET))(arg, nullptr);
		}

		::System::Void GetViewSpaceAngularBounds(::UnityEngine::Matrix4x4* arg, ::UnityEngine::Vector2&* arg, ::UnityEngine::Vector2&* arg, ::UnityEngine::Vector2&* arg)
		{
			((::System::Void(*)(::UnityEngine::Matrix4x4*, ::UnityEngine::Vector2&*, ::UnityEngine::Vector2&*, ::UnityEngine::Vector2&*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETARGETGROUP_GETVIEWSPACEANGULARBOUNDS_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETARGETGROUP_UPDATE_OFFSET))(nullptr);
		}

		::UnityEngine::BoundingSphere* CalculateBoundingSphere(::System::Single arg)
		{
			return (return (::UnityEngine::BoundingSphere*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETARGETGROUP_CALCULATEBOUNDINGSPHERE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::BoundingSphere* WeightedMemberBounds(Target* arg, ::UnityEngine::Vector3* arg, ::System::Single arg)
		{
			return (return (::UnityEngine::BoundingSphere*(*)(Target*, ::UnityEngine::Vector3*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETARGETGROUP_WEIGHTEDMEMBERBOUNDS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean get_IsEmpty()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETARGETGROUP_GET_ISEMPTY_OFFSET))(nullptr);
		}

		::UnityEngine::Bounds* get_BoundingBox()
		{
			return (return (::UnityEngine::Bounds*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETARGETGROUP_GET_BOUNDINGBOX_OFFSET))(nullptr);
		}

		::System::Void AddMember(::UnityEngine::Transform* arg, ::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETARGETGROUP_ADDMEMBER_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::Bounds* GetViewSpaceBoundingBox(::UnityEngine::Matrix4x4* arg)
		{
			return (return (::UnityEngine::Bounds*(*)(::UnityEngine::Matrix4x4*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETARGETGROUP_GETVIEWSPACEBOUNDINGBOX_OFFSET))(arg, nullptr);
		}

		::UnityEngine::BoundingSphere* get_Sphere()
		{
			return (return (::UnityEngine::BoundingSphere*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETARGETGROUP_GET_SPHERE_OFFSET))(nullptr);
		}

		::System::Void RemoveMember(::UnityEngine::Transform* arg)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETARGETGROUP_REMOVEMEMBER_OFFSET))(arg, nullptr);
		}

	};
}

