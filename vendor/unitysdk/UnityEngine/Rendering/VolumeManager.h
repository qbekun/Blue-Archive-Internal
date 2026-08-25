#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class VolumeStack; }
namespace UnityEngine::Rendering { class VolumeManager; }
namespace UnityEngine::Rendering { class Volume; }
namespace UnityEngine { class LayerMask; }
namespace UnityEngine { class Transform; }
namespace UnityEngine { class Camera; }

#define UNITYENGINE_RENDERING_VOLUMEMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x9FDF0E0)
#define UNITYENGINE_RENDERING_VOLUMEMANAGER_GET_STACK_OFFSET UNITYSDK_OFFSET(0x9FE18F0)
#define UNITYENGINE_RENDERING_VOLUMEMANAGER_SET_STACK_OFFSET UNITYSDK_OFFSET(0x9FE1900)
#define UNITYENGINE_RENDERING_VOLUMEMANAGER_GET_BASECOMPONENTTYPES_OFFSET UNITYSDK_OFFSET(0x9FE1910)
#define UNITYENGINE_RENDERING_VOLUMEMANAGER_SET_BASECOMPONENTTYPES_OFFSET UNITYSDK_OFFSET(0x9FE1920)
#define UNITYENGINE_RENDERING_VOLUMEMANAGER_GET_BASECOMPONENTTYPEARRAY_OFFSET UNITYSDK_OFFSET(0x9FE1970)
#define UNITYENGINE_RENDERING_VOLUMEMANAGER_SET_BASECOMPONENTTYPEARRAY_OFFSET UNITYSDK_OFFSET(0x9FE1980)
#define UNITYENGINE_RENDERING_VOLUMEMANAGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FE1990)
#define UNITYENGINE_RENDERING_VOLUMEMANAGER_CREATESTACK_OFFSET UNITYSDK_OFFSET(0x9FE1F50)
#define UNITYENGINE_RENDERING_VOLUMEMANAGER_RESETMAINSTACK_OFFSET UNITYSDK_OFFSET(0x9FE1FC0)
#define UNITYENGINE_RENDERING_VOLUMEMANAGER_DESTROYSTACK_OFFSET UNITYSDK_OFFSET(0x9FE1FE0)
#define UNITYENGINE_RENDERING_VOLUMEMANAGER_RELOADBASETYPES_OFFSET UNITYSDK_OFFSET(0x9FE1BD0)
#define UNITYENGINE_RENDERING_VOLUMEMANAGER_REGISTER_OFFSET UNITYSDK_OFFSET(0x9FDF770)
#define UNITYENGINE_RENDERING_VOLUMEMANAGER_UNREGISTER_OFFSET UNITYSDK_OFFSET(0x9FDF3B0)
#define UNITYENGINE_RENDERING_VOLUMEMANAGER_ISCOMPONENTACTIVEINMASK_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_VOLUMEMANAGER_SETLAYERDIRTY_OFFSET UNITYSDK_OFFSET(0x9FDFED0)
#define UNITYENGINE_RENDERING_VOLUMEMANAGER_UPDATEVOLUMELAYER_OFFSET UNITYSDK_OFFSET(0x9FDF170)
#define UNITYENGINE_RENDERING_VOLUMEMANAGER_OVERRIDEDATA_OFFSET UNITYSDK_OFFSET(0x9FE2000)
#define UNITYENGINE_RENDERING_VOLUMEMANAGER_REPLACEDATA_OFFSET UNITYSDK_OFFSET(0x9FE21E0)
#define UNITYENGINE_RENDERING_VOLUMEMANAGER_CHECKBASETYPES_OFFSET UNITYSDK_OFFSET(0x9FE2280)
#define UNITYENGINE_RENDERING_VOLUMEMANAGER_CHECKSTACK_OFFSET UNITYSDK_OFFSET(0x9FE2320)
#define UNITYENGINE_RENDERING_VOLUMEMANAGER_CHECKUPDATEREQUIRED_OFFSET UNITYSDK_OFFSET(0x9FE2550)
#define UNITYENGINE_RENDERING_VOLUMEMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x9FE25C0)
#define UNITYENGINE_RENDERING_VOLUMEMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x9FE25E0)
#define UNITYENGINE_RENDERING_VOLUMEMANAGER_GETVOLUMES_OFFSET UNITYSDK_OFFSET(0x9FE3320)
#define UNITYENGINE_RENDERING_VOLUMEMANAGER_GRABVOLUMES_OFFSET UNITYSDK_OFFSET(0x9FE2F00)
#define UNITYENGINE_RENDERING_VOLUMEMANAGER_SORTBYPRIORITY_OFFSET UNITYSDK_OFFSET(0x9FE3460)
#define UNITYENGINE_RENDERING_VOLUMEMANAGER_ISVOLUMERENDEREDBYCAMERA_OFFSET UNITYSDK_OFFSET(0x9FE3580)
#define UNITYENGINE_RENDERING_VOLUMEMANAGER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9FE3590)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int VolumeManager_TypeDefinitionIndex = 34090;

	class VolumeManager : public Il2CppObject
	{
	public:
		Il2CppObject* s_Instance; // 0x0
		::UnityEngine::Rendering::VolumeStack* _stack_k__BackingField; // 0x10
		::Il2CppArray<::System::Object*>* _baseComponentTypeArray_k__BackingField; // 0x18
		::System::Int32 k_MaxLayerCount; // 0x0
		Il2CppObject* m_SortedVolumes; // 0x20
		Il2CppObject* m_Volumes; // 0x28
		Il2CppObject* m_SortNeeded; // 0x30
		Il2CppObject* m_ComponentsDefaultState; // 0x38
		Il2CppObject* m_TempColliders; // 0x40
		::UnityEngine::Rendering::VolumeStack* m_DefaultStack; // 0x48

		::UnityEngine::Rendering::VolumeManager* get_instance()
		{
			return (return (::UnityEngine::Rendering::VolumeManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEMANAGER_GET_INSTANCE_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::VolumeStack* get_stack()
		{
			return (return (::UnityEngine::Rendering::VolumeStack*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEMANAGER_GET_STACK_OFFSET))(nullptr);
		}

		::System::Void set_stack(::UnityEngine::Rendering::VolumeStack* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::VolumeStack*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEMANAGER_SET_STACK_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_baseComponentTypes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEMANAGER_GET_BASECOMPONENTTYPES_OFFSET))(nullptr);
		}

		::System::Void set_baseComponentTypes(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEMANAGER_SET_BASECOMPONENTTYPES_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_baseComponentTypeArray()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEMANAGER_GET_BASECOMPONENTTYPEARRAY_OFFSET))(nullptr);
		}

		::System::Void set_baseComponentTypeArray(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEMANAGER_SET_BASECOMPONENTTYPEARRAY_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEMANAGER_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::VolumeStack* CreateStack()
		{
			return (return (::UnityEngine::Rendering::VolumeStack*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEMANAGER_CREATESTACK_OFFSET))(nullptr);
		}

		::System::Void ResetMainStack()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEMANAGER_RESETMAINSTACK_OFFSET))(nullptr);
		}

		::System::Void DestroyStack(::UnityEngine::Rendering::VolumeStack* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::VolumeStack*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEMANAGER_DESTROYSTACK_OFFSET))(arg, nullptr);
		}

		::System::Void ReloadBaseTypes()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEMANAGER_RELOADBASETYPES_OFFSET))(nullptr);
		}

		::System::Void Register(::UnityEngine::Rendering::Volume* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Volume*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEMANAGER_REGISTER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Unregister(::UnityEngine::Rendering::Volume* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Volume*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEMANAGER_UNREGISTER_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsComponentActiveInMask(::UnityEngine::LayerMask* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::LayerMask*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEMANAGER_ISCOMPONENTACTIVEINMASK_OFFSET))(arg, nullptr);
		}

		::System::Void SetLayerDirty(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEMANAGER_SETLAYERDIRTY_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateVolumeLayer(::UnityEngine::Rendering::Volume* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Volume*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEMANAGER_UPDATEVOLUMELAYER_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void OverrideData(::UnityEngine::Rendering::VolumeStack* arg, Il2CppObject* arg, ::System::Single arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::VolumeStack*, Il2CppObject*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEMANAGER_OVERRIDEDATA_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ReplaceData(::UnityEngine::Rendering::VolumeStack* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::VolumeStack*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEMANAGER_REPLACEDATA_OFFSET))(arg, nullptr);
		}

		::System::Void CheckBaseTypes()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEMANAGER_CHECKBASETYPES_OFFSET))(nullptr);
		}

		::System::Void CheckStack(::UnityEngine::Rendering::VolumeStack* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::VolumeStack*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEMANAGER_CHECKSTACK_OFFSET))(arg, nullptr);
		}

		::System::Boolean CheckUpdateRequired(::UnityEngine::Rendering::VolumeStack* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::VolumeStack*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEMANAGER_CHECKUPDATEREQUIRED_OFFSET))(arg, nullptr);
		}

		::System::Void Update(::UnityEngine::Transform* arg, ::UnityEngine::LayerMask* arg)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::UnityEngine::LayerMask*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEMANAGER_UPDATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Update(::UnityEngine::Rendering::VolumeStack* arg, ::UnityEngine::Transform* arg, ::UnityEngine::LayerMask* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::VolumeStack*, ::UnityEngine::Transform*, ::UnityEngine::LayerMask*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEMANAGER_UPDATE_OFFSET))(arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetVolumes(::UnityEngine::LayerMask* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::UnityEngine::LayerMask*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEMANAGER_GETVOLUMES_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GrabVolumes(::UnityEngine::LayerMask* arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::LayerMask*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEMANAGER_GRABVOLUMES_OFFSET))(arg, nullptr);
		}

		::System::Void SortByPriority(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEMANAGER_SORTBYPRIORITY_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsVolumeRenderedByCamera(::UnityEngine::Rendering::Volume* arg, ::UnityEngine::Camera* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::Volume*, ::UnityEngine::Camera*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEMANAGER_ISVOLUMERENDEREDBYCAMERA_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEMANAGER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

