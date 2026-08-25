#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::U2D { class SpriteAtlas; }
namespace Spine { class Atlas; }
namespace UnityEngine { class Texture2D; }
namespace Spine::Unity { class SpineSpriteAtlasAsset; }
namespace UnityEngine { class Material; }

#define SPINE_UNITY_SPINESPRITEATLASASSET_RESET_OFFSET UNITYSDK_OFFSET(0x95EDF10)
#define SPINE_UNITY_SPINESPRITEATLASASSET_GET_ISLOADED_OFFSET UNITYSDK_OFFSET(0x95EDF30)
#define SPINE_UNITY_SPINESPRITEATLASASSET_ACCESSPACKEDTEXTURE_OFFSET UNITYSDK_OFFSET(0x95EDF40)
#define SPINE_UNITY_SPINESPRITEATLASASSET_CREATERUNTIMEINSTANCE_OFFSET UNITYSDK_OFFSET(0x95EDF70)
#define SPINE_UNITY_SPINESPRITEATLASASSET_GET_PRIMARYMATERIAL_OFFSET UNITYSDK_OFFSET(0x95EE020)
#define SPINE_UNITY_SPINESPRITEATLASASSET_ASSIGNREGIONSFROMSAVEDREGIONS_OFFSET UNITYSDK_OFFSET(0x95EE050)
#define SPINE_UNITY_SPINESPRITEATLASASSET_GET_MATERIALS_OFFSET UNITYSDK_OFFSET(0x95EE470)
#define SPINE_UNITY_SPINESPRITEATLASASSET_GET_MATERIALCOUNT_OFFSET UNITYSDK_OFFSET(0x95EE480)
#define SPINE_UNITY_SPINESPRITEATLASASSET_ACCESSPACKEDSPRITES_OFFSET UNITYSDK_OFFSET(0x95EE490)
#define SPINE_UNITY_SPINESPRITEATLASASSET_.CTOR_OFFSET UNITYSDK_OFFSET(0x95EE510)
#define SPINE_UNITY_SPINESPRITEATLASASSET_LOADATLAS_OFFSET UNITYSDK_OFFSET(0x95EE520)
#define SPINE_UNITY_SPINESPRITEATLASASSET_GETATLAS_OFFSET UNITYSDK_OFFSET(0x95EEA20)
#define SPINE_UNITY_SPINESPRITEATLASASSET_CLEAR_OFFSET UNITYSDK_OFFSET(0x95EED90)

namespace Spine::Unity
{
	inline static constexpr unsigned int SpineSpriteAtlasAsset_TypeDefinitionIndex = 35288;

	class SpineSpriteAtlasAsset : public ::UnityEngine::Yoga::Logger
	{
	public:
		::UnityEngine::U2D::SpriteAtlas* spriteAtlasFile; // 0x28
		::Il2CppArray<::System::Object*>* materials; // 0x30
		::Spine::Atlas* atlas; // 0x38
		::System::Boolean updateRegionsInPlayMode; // 0x40
		::Il2CppArray<::System::Object*>* savedRegions; // 0x48

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SPINESPRITEATLASASSET_RESET_OFFSET))(nullptr);
		}

		::System::Boolean get_IsLoaded()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SPINESPRITEATLASASSET_GET_ISLOADED_OFFSET))(nullptr);
		}

		::UnityEngine::Texture2D* AccessPackedTexture(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::UnityEngine::Texture2D*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SPINESPRITEATLASASSET_ACCESSPACKEDTEXTURE_OFFSET))(arg, nullptr);
		}

		::Spine::Unity::SpineSpriteAtlasAsset* CreateRuntimeInstance(::UnityEngine::U2D::SpriteAtlas* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Boolean arg)
		{
			return (return (::Spine::Unity::SpineSpriteAtlasAsset*(*)(::UnityEngine::U2D::SpriteAtlas*, ::Il2CppArray<::System::Object*>*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SPINESPRITEATLASASSET_CREATERUNTIMEINSTANCE_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::Material* get_PrimaryMaterial()
		{
			return (return (::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SPINESPRITEATLASASSET_GET_PRIMARYMATERIAL_OFFSET))(nullptr);
		}

		::System::Void AssignRegionsFromSavedRegions(::Il2CppArray<::System::Object*>* arg, ::Spine::Atlas* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Spine::Atlas*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SPINESPRITEATLASASSET_ASSIGNREGIONSFROMSAVEDREGIONS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* get_Materials()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SPINESPRITEATLASASSET_GET_MATERIALS_OFFSET))(nullptr);
		}

		::System::Int32 get_MaterialCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SPINESPRITEATLASASSET_GET_MATERIALCOUNT_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* AccessPackedSprites(::UnityEngine::U2D::SpriteAtlas* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::UnityEngine::U2D::SpriteAtlas*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SPINESPRITEATLASASSET_ACCESSPACKEDSPRITES_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SPINESPRITEATLASASSET_.CTOR_OFFSET))(nullptr);
		}

		::Spine::Atlas* LoadAtlas(::UnityEngine::U2D::SpriteAtlas* arg)
		{
			return (return (::Spine::Atlas*(*)(::UnityEngine::U2D::SpriteAtlas*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SPINESPRITEATLASASSET_LOADATLAS_OFFSET))(arg, nullptr);
		}

		::Spine::Atlas* GetAtlas(::System::Boolean arg)
		{
			return (return (::Spine::Atlas*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SPINESPRITEATLASASSET_GETATLAS_OFFSET))(arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SPINESPRITEATLASASSET_CLEAR_OFFSET))(nullptr);
		}

	};
}

