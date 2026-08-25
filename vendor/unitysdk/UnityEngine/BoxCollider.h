#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Vector3&; }

#define UNITYENGINE_BOXCOLLIDER_GET_CENTER_OFFSET UNITYSDK_OFFSET(0xA2A4940)
#define UNITYENGINE_BOXCOLLIDER_SET_CENTER_OFFSET UNITYSDK_OFFSET(0xA2A49E0)
#define UNITYENGINE_BOXCOLLIDER_GET_SIZE_OFFSET UNITYSDK_OFFSET(0xA2A4A60)
#define UNITYENGINE_BOXCOLLIDER_SET_SIZE_OFFSET UNITYSDK_OFFSET(0xA2A4B00)
#define UNITYENGINE_BOXCOLLIDER_GET_EXTENTS_OFFSET UNITYSDK_OFFSET(0xA2A4B80)
#define UNITYENGINE_BOXCOLLIDER_SET_EXTENTS_OFFSET UNITYSDK_OFFSET(0xA2A4C00)
#define UNITYENGINE_BOXCOLLIDER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2A4C60)
#define UNITYENGINE_BOXCOLLIDER_GET_CENTER_INJECTED_OFFSET UNITYSDK_OFFSET(0xA2A49A0)
#define UNITYENGINE_BOXCOLLIDER_SET_CENTER_INJECTED_OFFSET UNITYSDK_OFFSET(0xA2A4A20)
#define UNITYENGINE_BOXCOLLIDER_GET_SIZE_INJECTED_OFFSET UNITYSDK_OFFSET(0xA2A4AC0)
#define UNITYENGINE_BOXCOLLIDER_SET_SIZE_INJECTED_OFFSET UNITYSDK_OFFSET(0xA2A4B40)

namespace UnityEngine
{
	inline static constexpr unsigned int BoxCollider_TypeDefinitionIndex = 37338;

	class BoxCollider : public Il2CppObject
	{
	public:
		::UnityEngine::Vector3* get_center()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BOXCOLLIDER_GET_CENTER_OFFSET))(nullptr);
		}

		::System::Void set_center(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BOXCOLLIDER_SET_CENTER_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* get_size()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BOXCOLLIDER_GET_SIZE_OFFSET))(nullptr);
		}

		::System::Void set_size(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BOXCOLLIDER_SET_SIZE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* get_extents()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BOXCOLLIDER_GET_EXTENTS_OFFSET))(nullptr);
		}

		::System::Void set_extents(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BOXCOLLIDER_SET_EXTENTS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BOXCOLLIDER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void get_center_Injected(::UnityEngine::Vector3&* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BOXCOLLIDER_GET_CENTER_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void set_center_Injected(::UnityEngine::Vector3&* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BOXCOLLIDER_SET_CENTER_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void get_size_Injected(::UnityEngine::Vector3&* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BOXCOLLIDER_GET_SIZE_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void set_size_Injected(::UnityEngine::Vector3&* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BOXCOLLIDER_SET_SIZE_INJECTED_OFFSET))(arg, nullptr);
		}

	};
}

