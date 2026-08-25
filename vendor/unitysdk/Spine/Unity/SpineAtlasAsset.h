#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class TextAsset; }
namespace Spine { class TextureLoader; }
namespace Spine { class Atlas; }
namespace UnityEngine { class Material; }
namespace Spine::Unity { class SpineAtlasAsset; }
namespace UnityEngine { class Shader; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Material&; }

#define SPINE_UNITY_SPINEATLASASSET_GET_ISLOADED_OFFSET UNITYSDK_OFFSET(0x95ECAC0)
#define SPINE_UNITY_SPINEATLASASSET_GET_MATERIALS_OFFSET UNITYSDK_OFFSET(0x95ECAD0)
#define SPINE_UNITY_SPINEATLASASSET_GET_MATERIALCOUNT_OFFSET UNITYSDK_OFFSET(0x95ECAE0)
#define SPINE_UNITY_SPINEATLASASSET_GET_PRIMARYMATERIAL_OFFSET UNITYSDK_OFFSET(0x95ECAF0)
#define SPINE_UNITY_SPINEATLASASSET_CREATERUNTIMEINSTANCE_OFFSET UNITYSDK_OFFSET(0x95ECB20)
#define SPINE_UNITY_SPINEATLASASSET_CREATERUNTIMEINSTANCE_OFFSET UNITYSDK_OFFSET(0x95ECC20)
#define SPINE_UNITY_SPINEATLASASSET_CREATERUNTIMEINSTANCE_OFFSET UNITYSDK_OFFSET(0x95ED0D0)
#define SPINE_UNITY_SPINEATLASASSET_RESET_OFFSET UNITYSDK_OFFSET(0x95ECC00)
#define SPINE_UNITY_SPINEATLASASSET_CLEAR_OFFSET UNITYSDK_OFFSET(0x95ED1B0)
#define SPINE_UNITY_SPINEATLASASSET_GETATLAS_OFFSET UNITYSDK_OFFSET(0x95ED1D0)
#define SPINE_UNITY_SPINEATLASASSET_GENERATEMESH_OFFSET UNITYSDK_OFFSET(0x95ED6E0)
#define SPINE_UNITY_SPINEATLASASSET_.CTOR_OFFSET UNITYSDK_OFFSET(0x95EDB80)

namespace Spine::Unity
{
	inline static constexpr unsigned int SpineAtlasAsset_TypeDefinitionIndex = 35284;

	class SpineAtlasAsset : public ::UnityEngine::Yoga::Logger
	{
	public:
		::UnityEngine::TextAsset* atlasFile; // 0x28
		::Il2CppArray<::System::Object*>* materials; // 0x30
		::Spine::TextureLoader* customTextureLoader; // 0x38
		::Spine::Atlas* atlas; // 0x40

		::System::Boolean get_IsLoaded()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SPINEATLASASSET_GET_ISLOADED_OFFSET))(nullptr);
		}

		Il2CppObject* get_Materials()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SPINEATLASASSET_GET_MATERIALS_OFFSET))(nullptr);
		}

		::System::Int32 get_MaterialCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SPINEATLASASSET_GET_MATERIALCOUNT_OFFSET))(nullptr);
		}

		::UnityEngine::Material* get_PrimaryMaterial()
		{
			return (return (::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SPINEATLASASSET_GET_PRIMARYMATERIAL_OFFSET))(nullptr);
		}

		::Spine::Unity::SpineAtlasAsset* CreateRuntimeInstance(::UnityEngine::TextAsset* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Boolean arg, Il2CppObject* arg)
		{
			return (return (::Spine::Unity::SpineAtlasAsset*(*)(::UnityEngine::TextAsset*, ::Il2CppArray<::System::Object*>*, ::System::Boolean, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SPINEATLASASSET_CREATERUNTIMEINSTANCE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::Spine::Unity::SpineAtlasAsset* CreateRuntimeInstance(::UnityEngine::TextAsset* arg, ::Il2CppArray<::System::Object*>* arg, ::UnityEngine::Material* arg, ::System::Boolean arg, Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (::Spine::Unity::SpineAtlasAsset*(*)(::UnityEngine::TextAsset*, ::Il2CppArray<::System::Object*>*, ::UnityEngine::Material*, ::System::Boolean, Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SPINEATLASASSET_CREATERUNTIMEINSTANCE_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::Spine::Unity::SpineAtlasAsset* CreateRuntimeInstance(::UnityEngine::TextAsset* arg, ::Il2CppArray<::System::Object*>* arg, ::UnityEngine::Shader* arg, ::System::Boolean arg, Il2CppObject* arg)
		{
			return (return (::Spine::Unity::SpineAtlasAsset*(*)(::UnityEngine::TextAsset*, ::Il2CppArray<::System::Object*>*, ::UnityEngine::Shader*, ::System::Boolean, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SPINEATLASASSET_CREATERUNTIMEINSTANCE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SPINEATLASASSET_RESET_OFFSET))(nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SPINEATLASASSET_CLEAR_OFFSET))(nullptr);
		}

		::Spine::Atlas* GetAtlas(::System::Boolean arg)
		{
			return (return (::Spine::Atlas*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SPINEATLASASSET_GETATLAS_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Mesh* GenerateMesh(::System::String* str, ::UnityEngine::Mesh* arg, ::UnityEngine::Material&* arg, ::System::Single arg)
		{
			return (return (::UnityEngine::Mesh*(*)(::System::String*, ::UnityEngine::Mesh*, ::UnityEngine::Material&*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SPINEATLASASSET_GENERATEMESH_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SPINEATLASASSET_.CTOR_OFFSET))(nullptr);
		}

	};
}

