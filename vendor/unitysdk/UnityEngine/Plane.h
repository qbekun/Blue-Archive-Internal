#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Ray; }

#define UNITYENGINE_PLANE_GET_NORMAL_OFFSET UNITYSDK_OFFSET(0xA1EE390)
#define UNITYENGINE_PLANE_SET_NORMAL_OFFSET UNITYSDK_OFFSET(0xA1EE3A0)
#define UNITYENGINE_PLANE_GET_DISTANCE_OFFSET UNITYSDK_OFFSET(0xA1EE3B0)
#define UNITYENGINE_PLANE_SET_DISTANCE_OFFSET UNITYSDK_OFFSET(0xA1EE3C0)
#define UNITYENGINE_PLANE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1EE3D0)
#define UNITYENGINE_PLANE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1EE4E0)
#define UNITYENGINE_PLANE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1EE5E0)
#define UNITYENGINE_PLANE_SETNORMALANDPOSITION_OFFSET UNITYSDK_OFFSET(0xA1EE770)
#define UNITYENGINE_PLANE_GETDISTANCETOPOINT_OFFSET UNITYSDK_OFFSET(0xA1EE890)
#define UNITYENGINE_PLANE_RAYCAST_OFFSET UNITYSDK_OFFSET(0xA1EE8C0)
#define UNITYENGINE_PLANE_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA1EE9F0)
#define UNITYENGINE_PLANE_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA1EEA00)

namespace UnityEngine
{
	inline static constexpr unsigned int Plane_TypeDefinitionIndex = 30979;

	class Plane : public Il2CppObject
	{
	public:
		::System::Int32 size; // 0x0
		::UnityEngine::Vector3* m_Normal; // 0x10
		::System::Single m_Distance; // 0x1C

		::UnityEngine::Vector3* get_normal()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLANE_GET_NORMAL_OFFSET))(nullptr);
		}

		::System::Void set_normal(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLANE_SET_NORMAL_OFFSET))(arg, nullptr);
		}

		::System::Single get_distance()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLANE_GET_DISTANCE_OFFSET))(nullptr);
		}

		::System::Void set_distance(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLANE_SET_DISTANCE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLANE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::Vector3* arg, ::System::Single arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLANE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLANE_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SetNormalAndPosition(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLANE_SETNORMALANDPOSITION_OFFSET))(arg, arg, nullptr);
		}

		::System::Single GetDistanceToPoint(::UnityEngine::Vector3* arg)
		{
			return (return (::System::Single(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLANE_GETDISTANCETOPOINT_OFFSET))(arg, nullptr);
		}

		::System::Boolean Raycast(::UnityEngine::Ray* arg, float&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Ray*, float&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLANE_RAYCAST_OFFSET))(arg, arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLANE_TOSTRING_OFFSET))(nullptr);
		}

		::System::String* ToString(::System::String* str, ::System::IFormatProvider* arg)
		{
			return (return (::System::String*(*)(::System::String*, ::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLANE_TOSTRING_OFFSET))(str, arg, nullptr);
		}

	};
}

