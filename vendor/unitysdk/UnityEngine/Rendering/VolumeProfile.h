#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class VolumeComponent; }

#define UNITYENGINE_RENDERING_VOLUMEPROFILE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x9FE52D0)
#define UNITYENGINE_RENDERING_VOLUMEPROFILE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x9FE53F0)
#define UNITYENGINE_RENDERING_VOLUMEPROFILE_RESET_OFFSET UNITYSDK_OFFSET(0x9FE54C0)
#define UNITYENGINE_RENDERING_VOLUMEPROFILE_ADD_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_VOLUMEPROFILE_ADD_OFFSET UNITYSDK_OFFSET(0x9FE54D0)
#define UNITYENGINE_RENDERING_VOLUMEPROFILE_REMOVE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_VOLUMEPROFILE_REMOVE_OFFSET UNITYSDK_OFFSET(0x9FE5830)
#define UNITYENGINE_RENDERING_VOLUMEPROFILE_HAS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_VOLUMEPROFILE_HAS_OFFSET UNITYSDK_OFFSET(0x9FE5650)
#define UNITYENGINE_RENDERING_VOLUMEPROFILE_HASSUBCLASSOF_OFFSET UNITYSDK_OFFSET(0x9FE5920)
#define UNITYENGINE_RENDERING_VOLUMEPROFILE_TRYGET_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_VOLUMEPROFILE_TRYGET_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_VOLUMEPROFILE_TRYGETSUBCLASSOF_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_VOLUMEPROFILE_TRYGETALLSUBCLASSOF_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_VOLUMEPROFILE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9FE5AE0)
#define UNITYENGINE_RENDERING_VOLUMEPROFILE_GETCOMPONENTLISTHASHCODE_OFFSET UNITYSDK_OFFSET(0x9FE5B90)
#define UNITYENGINE_RENDERING_VOLUMEPROFILE_SANITIZE_OFFSET UNITYSDK_OFFSET(0x9FE5C50)
#define UNITYENGINE_RENDERING_VOLUMEPROFILE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FE5D20)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int VolumeProfile_TypeDefinitionIndex = 34134;

	class VolumeProfile : public Il2CppObject
	{
	public:
		Il2CppObject* components; // 0x18
		::System::Boolean isDirty; // 0x20

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPROFILE_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPROFILE_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPROFILE_RESET_OFFSET))(nullptr);
		}

		Il2CppObject* Add(::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPROFILE_ADD_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::VolumeComponent* Add(::System::Type* arg, ::System::Boolean arg)
		{
			return (return (::UnityEngine::Rendering::VolumeComponent*(*)(::System::Type*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPROFILE_ADD_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Remove()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPROFILE_REMOVE_OFFSET))(nullptr);
		}

		::System::Void Remove(::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPROFILE_REMOVE_OFFSET))(arg, nullptr);
		}

		::System::Boolean Has()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPROFILE_HAS_OFFSET))(nullptr);
		}

		::System::Boolean Has(::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPROFILE_HAS_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasSubclassOf(::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPROFILE_HASSUBCLASSOF_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGet(Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPROFILE_TRYGET_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGet(::System::Type* arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPROFILE_TRYGET_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetSubclassOf(::System::Type* arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPROFILE_TRYGETSUBCLASSOF_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetAllSubclassOf(::System::Type* arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPROFILE_TRYGETALLSUBCLASSOF_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPROFILE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Int32 GetComponentListHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPROFILE_GETCOMPONENTLISTHASHCODE_OFFSET))(nullptr);
		}

		::System::Void Sanitize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPROFILE_SANITIZE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPROFILE_.CTOR_OFFSET))(nullptr);
		}

	};
}

