#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class Light2D; }
namespace UnityEngine { class Color&; }

#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2DMANAGER_GETCACHEDSORTINGLAYER_OFFSET UNITYSDK_OFFSET(0xA0110B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2DMANAGER_CONTAINSDUPLICATEGLOBALLIGHT_OFFSET UNITYSDK_OFFSET(0xA015340)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2DMANAGER_GET_LIGHTS_OFFSET UNITYSDK_OFFSET(0xA0155E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2DMANAGER_REGISTERLIGHT_OFFSET UNITYSDK_OFFSET(0xA013250)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2DMANAGER_GETGLOBALCOLOR_OFFSET UNITYSDK_OFFSET(0xA015630)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2DMANAGER_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA0158D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2DMANAGER_ERRORIFDUPLICATEGLOBALLIGHT_OFFSET UNITYSDK_OFFSET(0xA010DB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2DMANAGER_DEREGISTERLIGHT_OFFSET UNITYSDK_OFFSET(0xA0140E0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int Light2DManager_TypeDefinitionIndex = 32472;

	class Light2DManager : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* s_SortingLayers; // 0x0
		Il2CppObject* _lights_k__BackingField; // 0x8

		::Il2CppArray<::System::Object*>* GetCachedSortingLayer()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2DMANAGER_GETCACHEDSORTINGLAYER_OFFSET))(nullptr);
		}

		::System::Boolean ContainsDuplicateGlobalLight(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2DMANAGER_CONTAINSDUPLICATEGLOBALLIGHT_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* get_lights()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2DMANAGER_GET_LIGHTS_OFFSET))(nullptr);
		}

		::System::Void RegisterLight(::UnityEngine::Rendering::Universal::Light2D* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::Light2D*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2DMANAGER_REGISTERLIGHT_OFFSET))(arg, nullptr);
		}

		::System::Boolean GetGlobalColor(::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::Color&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::Int32, ::UnityEngine::Color&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2DMANAGER_GETGLOBALCOLOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2DMANAGER_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void ErrorIfDuplicateGlobalLight(::UnityEngine::Rendering::Universal::Light2D* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::Light2D*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2DMANAGER_ERRORIFDUPLICATEGLOBALLIGHT_OFFSET))(arg, nullptr);
		}

		::System::Void DeregisterLight(::UnityEngine::Rendering::Universal::Light2D* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::Light2D*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2DMANAGER_DEREGISTERLIGHT_OFFSET))(arg, nullptr);
		}

	};
}

