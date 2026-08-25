#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Vector2; }
namespace UnityEngine { class Collider2D; }

#define UNITYENGINE_RAYCASTHIT2D_GET_POINT_OFFSET UNITYSDK_OFFSET(0xA29D090)
#define UNITYENGINE_RAYCASTHIT2D_GET_NORMAL_OFFSET UNITYSDK_OFFSET(0xA29D0A0)
#define UNITYENGINE_RAYCASTHIT2D_GET_DISTANCE_OFFSET UNITYSDK_OFFSET(0xA29D0B0)
#define UNITYENGINE_RAYCASTHIT2D_GET_COLLIDER_OFFSET UNITYSDK_OFFSET(0xA29D0C0)

namespace UnityEngine
{
	inline static constexpr unsigned int RaycastHit2D_TypeDefinitionIndex = 37709;

	class RaycastHit2D : public Il2CppObject
	{
	public:
		::UnityEngine::Vector2* m_Centroid; // 0x10
		::UnityEngine::Vector2* m_Point; // 0x18
		::UnityEngine::Vector2* m_Normal; // 0x20
		::System::Single m_Distance; // 0x28
		::System::Single m_Fraction; // 0x2C
		::System::Int32 m_Collider; // 0x30

		::UnityEngine::Vector2* get_point()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RAYCASTHIT2D_GET_POINT_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_normal()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RAYCASTHIT2D_GET_NORMAL_OFFSET))(nullptr);
		}

		::System::Single get_distance()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RAYCASTHIT2D_GET_DISTANCE_OFFSET))(nullptr);
		}

		::UnityEngine::Collider2D* get_collider()
		{
			return (return (::UnityEngine::Collider2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RAYCASTHIT2D_GET_COLLIDER_OFFSET))(nullptr);
		}

	};
}

