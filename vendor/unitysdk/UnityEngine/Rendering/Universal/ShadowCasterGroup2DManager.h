#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class ShadowCaster2D; }
namespace UnityEngine::Rendering::Universal { class ShadowCasterGroup2D; }
namespace UnityEngine::Rendering::Universal { class ShadowCasterGroup2D&; }
namespace UnityEngine::Rendering::Universal { class CompositeShadowCaster2D; }

#define UNITYENGINE_RENDERING_UNIVERSAL_SHADOWCASTERGROUP2DMANAGER_REMOVEFROMSHADOWCASTERGROUP_OFFSET UNITYSDK_OFFSET(0xA025900)
#define UNITYENGINE_RENDERING_UNIVERSAL_SHADOWCASTERGROUP2DMANAGER_REMOVEGROUP_OFFSET UNITYSDK_OFFSET(0xA0259A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SHADOWCASTERGROUP2DMANAGER_GET_SHADOWCASTERGROUPS_OFFSET UNITYSDK_OFFSET(0xA025AA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SHADOWCASTERGROUP2DMANAGER_REMOVESHADOWCASTERGROUPFROMLIST_OFFSET UNITYSDK_OFFSET(0xA025A50)
#define UNITYENGINE_RENDERING_UNIVERSAL_SHADOWCASTERGROUP2DMANAGER_ADDTOSHADOWCASTERGROUP_OFFSET UNITYSDK_OFFSET(0xA025AE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SHADOWCASTERGROUP2DMANAGER_ADDGROUP_OFFSET UNITYSDK_OFFSET(0xA025CE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SHADOWCASTERGROUP2DMANAGER_CACHEVALUES_OFFSET UNITYSDK_OFFSET(0xA025E90)
#define UNITYENGINE_RENDERING_UNIVERSAL_SHADOWCASTERGROUP2DMANAGER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA026050)
#define UNITYENGINE_RENDERING_UNIVERSAL_SHADOWCASTERGROUP2DMANAGER_ADDSHADOWCASTERGROUPTOLIST_OFFSET UNITYSDK_OFFSET(0xA025DE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SHADOWCASTERGROUP2DMANAGER_FINDTOPMOSTCOMPOSITESHADOWCASTER_OFFSET UNITYSDK_OFFSET(0xA025C00)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ShadowCasterGroup2DManager_TypeDefinitionIndex = 32498;

	class ShadowCasterGroup2DManager : public Il2CppObject
	{
	public:
		Il2CppObject* s_ShadowCasterGroups; // 0x0

		::System::Void RemoveFromShadowCasterGroup(::UnityEngine::Rendering::Universal::ShadowCaster2D* arg, ::UnityEngine::Rendering::Universal::ShadowCasterGroup2D* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::ShadowCaster2D*, ::UnityEngine::Rendering::Universal::ShadowCasterGroup2D*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHADOWCASTERGROUP2DMANAGER_REMOVEFROMSHADOWCASTERGROUP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RemoveGroup(::UnityEngine::Rendering::Universal::ShadowCasterGroup2D* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::ShadowCasterGroup2D*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHADOWCASTERGROUP2DMANAGER_REMOVEGROUP_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_shadowCasterGroups()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHADOWCASTERGROUP2DMANAGER_GET_SHADOWCASTERGROUPS_OFFSET))(nullptr);
		}

		::System::Void RemoveShadowCasterGroupFromList(::UnityEngine::Rendering::Universal::ShadowCasterGroup2D* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::ShadowCasterGroup2D*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHADOWCASTERGROUP2DMANAGER_REMOVESHADOWCASTERGROUPFROMLIST_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean AddToShadowCasterGroup(::UnityEngine::Rendering::Universal::ShadowCaster2D* arg, ::UnityEngine::Rendering::Universal::ShadowCasterGroup2D&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::Universal::ShadowCaster2D*, ::UnityEngine::Rendering::Universal::ShadowCasterGroup2D&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHADOWCASTERGROUP2DMANAGER_ADDTOSHADOWCASTERGROUP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddGroup(::UnityEngine::Rendering::Universal::ShadowCasterGroup2D* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::ShadowCasterGroup2D*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHADOWCASTERGROUP2DMANAGER_ADDGROUP_OFFSET))(arg, nullptr);
		}

		::System::Void CacheValues()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHADOWCASTERGROUP2DMANAGER_CACHEVALUES_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHADOWCASTERGROUP2DMANAGER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void AddShadowCasterGroupToList(::UnityEngine::Rendering::Universal::ShadowCasterGroup2D* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::ShadowCasterGroup2D*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHADOWCASTERGROUP2DMANAGER_ADDSHADOWCASTERGROUPTOLIST_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Rendering::Universal::CompositeShadowCaster2D* FindTopMostCompositeShadowCaster(::UnityEngine::Rendering::Universal::ShadowCaster2D* arg)
		{
			return (return (::UnityEngine::Rendering::Universal::CompositeShadowCaster2D*(*)(::UnityEngine::Rendering::Universal::ShadowCaster2D*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHADOWCASTERGROUP2DMANAGER_FINDTOPMOSTCOMPOSITESHADOWCASTER_OFFSET))(arg, nullptr);
		}

	};
}

