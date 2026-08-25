#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Transform; }
namespace UnityEngine { class Rigidbody; }

#define UNITYENGINE_RAYCASTHIT_GET_COLLIDER_OFFSET UNITYSDK_OFFSET(0xA2A1330)
#define UNITYENGINE_RAYCASTHIT_GET_POINT_OFFSET UNITYSDK_OFFSET(0xA2A13D0)
#define UNITYENGINE_RAYCASTHIT_SET_POINT_OFFSET UNITYSDK_OFFSET(0xA2A13E0)
#define UNITYENGINE_RAYCASTHIT_GET_NORMAL_OFFSET UNITYSDK_OFFSET(0xA2A13F0)
#define UNITYENGINE_RAYCASTHIT_SET_NORMAL_OFFSET UNITYSDK_OFFSET(0xA2A1410)
#define UNITYENGINE_RAYCASTHIT_GET_DISTANCE_OFFSET UNITYSDK_OFFSET(0xA2A1420)
#define UNITYENGINE_RAYCASTHIT_SET_DISTANCE_OFFSET UNITYSDK_OFFSET(0xA2A1430)
#define UNITYENGINE_RAYCASTHIT_GET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0xA2A1440)
#define UNITYENGINE_RAYCASTHIT_GET_RIGIDBODY_OFFSET UNITYSDK_OFFSET(0xA2A1610)

namespace UnityEngine
{
	inline static constexpr unsigned int RaycastHit_TypeDefinitionIndex = 37332;

	class RaycastHit : public Il2CppObject
	{
	public:
		::UnityEngine::Vector3* m_Point; // 0x10
		::UnityEngine::Vector3* m_Normal; // 0x1C
		::System::UInt32 m_FaceID; // 0x28
		::System::Single m_Distance; // 0x2C
		::UnityEngine::Vector2* m_UV; // 0x30
		::System::Int32 m_Collider; // 0x38

		::UnityEngine::Collider* get_collider()
		{
			return (return (::UnityEngine::Collider*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RAYCASTHIT_GET_COLLIDER_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* get_point()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RAYCASTHIT_GET_POINT_OFFSET))(nullptr);
		}

		::System::Void set_point(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RAYCASTHIT_SET_POINT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* get_normal()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RAYCASTHIT_GET_NORMAL_OFFSET))(nullptr);
		}

		::System::Void set_normal(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RAYCASTHIT_SET_NORMAL_OFFSET))(arg, nullptr);
		}

		::System::Single get_distance()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RAYCASTHIT_GET_DISTANCE_OFFSET))(nullptr);
		}

		::System::Void set_distance(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RAYCASTHIT_SET_DISTANCE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Transform* get_transform()
		{
			return (return (::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RAYCASTHIT_GET_TRANSFORM_OFFSET))(nullptr);
		}

		::UnityEngine::Rigidbody* get_rigidbody()
		{
			return (return (::UnityEngine::Rigidbody*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RAYCASTHIT_GET_RIGIDBODY_OFFSET))(nullptr);
		}

	};
}

