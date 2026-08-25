#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Vector3&; }

#define UNITYENGINE_SPHERECOLLIDER_GET_CENTER_OFFSET UNITYSDK_OFFSET(0xA2A4C70)
#define UNITYENGINE_SPHERECOLLIDER_SET_CENTER_OFFSET UNITYSDK_OFFSET(0xA2A4D10)
#define UNITYENGINE_SPHERECOLLIDER_GET_RADIUS_OFFSET UNITYSDK_OFFSET(0xA2A4D90)
#define UNITYENGINE_SPHERECOLLIDER_SET_RADIUS_OFFSET UNITYSDK_OFFSET(0xA2A4DD0)
#define UNITYENGINE_SPHERECOLLIDER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2A4E20)
#define UNITYENGINE_SPHERECOLLIDER_GET_CENTER_INJECTED_OFFSET UNITYSDK_OFFSET(0xA2A4CD0)
#define UNITYENGINE_SPHERECOLLIDER_SET_CENTER_INJECTED_OFFSET UNITYSDK_OFFSET(0xA2A4D50)

namespace UnityEngine
{
	inline static constexpr unsigned int SphereCollider_TypeDefinitionIndex = 37339;

	class SphereCollider : public Il2CppObject
	{
	public:
		::UnityEngine::Vector3* get_center()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPHERECOLLIDER_GET_CENTER_OFFSET))(nullptr);
		}

		::System::Void set_center(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPHERECOLLIDER_SET_CENTER_OFFSET))(arg, nullptr);
		}

		::System::Single get_radius()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPHERECOLLIDER_GET_RADIUS_OFFSET))(nullptr);
		}

		::System::Void set_radius(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPHERECOLLIDER_SET_RADIUS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPHERECOLLIDER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void get_center_Injected(::UnityEngine::Vector3&* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPHERECOLLIDER_GET_CENTER_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void set_center_Injected(::UnityEngine::Vector3&* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPHERECOLLIDER_SET_CENTER_INJECTED_OFFSET))(arg, nullptr);
		}

	};
}

