#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine { class Matrix4x4; }
namespace UnityEngine { class Vector3&; }
namespace UnityEngine { class Vector2&; }
namespace UnityEngine { class Matrix4x4&; }

#define UNITYENGINE_CAPSULECOLLIDER_GET_CENTER_OFFSET UNITYSDK_OFFSET(0xA2A4520)
#define UNITYENGINE_CAPSULECOLLIDER_SET_CENTER_OFFSET UNITYSDK_OFFSET(0xA2A45C0)
#define UNITYENGINE_CAPSULECOLLIDER_GET_RADIUS_OFFSET UNITYSDK_OFFSET(0xA2A4640)
#define UNITYENGINE_CAPSULECOLLIDER_SET_RADIUS_OFFSET UNITYSDK_OFFSET(0xA2A4680)
#define UNITYENGINE_CAPSULECOLLIDER_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0xA2A46D0)
#define UNITYENGINE_CAPSULECOLLIDER_SET_HEIGHT_OFFSET UNITYSDK_OFFSET(0xA2A4710)
#define UNITYENGINE_CAPSULECOLLIDER_GET_DIRECTION_OFFSET UNITYSDK_OFFSET(0xA2A4760)
#define UNITYENGINE_CAPSULECOLLIDER_SET_DIRECTION_OFFSET UNITYSDK_OFFSET(0xA2A47A0)
#define UNITYENGINE_CAPSULECOLLIDER_GETGLOBALEXTENTS_OFFSET UNITYSDK_OFFSET(0xA2A47E0)
#define UNITYENGINE_CAPSULECOLLIDER_CALCULATETRANSFORM_OFFSET UNITYSDK_OFFSET(0xA2A4870)
#define UNITYENGINE_CAPSULECOLLIDER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2A4930)
#define UNITYENGINE_CAPSULECOLLIDER_GET_CENTER_INJECTED_OFFSET UNITYSDK_OFFSET(0xA2A4580)
#define UNITYENGINE_CAPSULECOLLIDER_SET_CENTER_INJECTED_OFFSET UNITYSDK_OFFSET(0xA2A4600)
#define UNITYENGINE_CAPSULECOLLIDER_GETGLOBALEXTENTS_INJECTED_OFFSET UNITYSDK_OFFSET(0xA2A4830)
#define UNITYENGINE_CAPSULECOLLIDER_CALCULATETRANSFORM_INJECTED_OFFSET UNITYSDK_OFFSET(0xA2A48F0)

namespace UnityEngine
{
	inline static constexpr unsigned int CapsuleCollider_TypeDefinitionIndex = 37337;

	class CapsuleCollider : public Il2CppObject
	{
	public:
		::UnityEngine::Vector3* get_center()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CAPSULECOLLIDER_GET_CENTER_OFFSET))(nullptr);
		}

		::System::Void set_center(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CAPSULECOLLIDER_SET_CENTER_OFFSET))(arg, nullptr);
		}

		::System::Single get_radius()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CAPSULECOLLIDER_GET_RADIUS_OFFSET))(nullptr);
		}

		::System::Void set_radius(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CAPSULECOLLIDER_SET_RADIUS_OFFSET))(arg, nullptr);
		}

		::System::Single get_height()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CAPSULECOLLIDER_GET_HEIGHT_OFFSET))(nullptr);
		}

		::System::Void set_height(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CAPSULECOLLIDER_SET_HEIGHT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_direction()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CAPSULECOLLIDER_GET_DIRECTION_OFFSET))(nullptr);
		}

		::System::Void set_direction(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CAPSULECOLLIDER_SET_DIRECTION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* GetGlobalExtents()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CAPSULECOLLIDER_GETGLOBALEXTENTS_OFFSET))(nullptr);
		}

		::UnityEngine::Matrix4x4* CalculateTransform()
		{
			return (return (::UnityEngine::Matrix4x4*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CAPSULECOLLIDER_CALCULATETRANSFORM_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CAPSULECOLLIDER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void get_center_Injected(::UnityEngine::Vector3&* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CAPSULECOLLIDER_GET_CENTER_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void set_center_Injected(::UnityEngine::Vector3&* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CAPSULECOLLIDER_SET_CENTER_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void GetGlobalExtents_Injected(::UnityEngine::Vector2&* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CAPSULECOLLIDER_GETGLOBALEXTENTS_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void CalculateTransform_Injected(::UnityEngine::Matrix4x4&* arg)
		{
			((::System::Void(*)(::UnityEngine::Matrix4x4&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CAPSULECOLLIDER_CALCULATETRANSFORM_INJECTED_OFFSET))(arg, nullptr);
		}

	};
}

