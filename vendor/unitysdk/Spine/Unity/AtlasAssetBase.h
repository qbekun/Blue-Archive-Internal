#pragma once
#include "../../unitysdk.h"

namespace Spine::Unity { class OnDemandTextureLoader; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Material&; }
namespace Spine { class Atlas; }
namespace UnityEngine { class Texture; }
namespace UnityEngine { class Texture&; }

#define SPINE_UNITY_ATLASASSETBASE_CLEAR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SPINE_UNITY_ATLASASSETBASE_BEGINCUSTOMTEXTURELOADING_OFFSET UNITYSDK_OFFSET(0x95E7B70)
#define SPINE_UNITY_ATLASASSETBASE_SET_TEXTURELOADINGMODE_OFFSET UNITYSDK_OFFSET(0x95E7BF0)
#define SPINE_UNITY_ATLASASSETBASE_.CTOR_OFFSET UNITYSDK_OFFSET(0x95E7C00)
#define SPINE_UNITY_ATLASASSETBASE_GET_MATERIALS_OFFSET UNITYSDK_OFFSET(0x000000)
#define SPINE_UNITY_ATLASASSETBASE_REQUIRETEXTURESLOADED_OFFSET UNITYSDK_OFFSET(0x95E7C10)
#define SPINE_UNITY_ATLASASSETBASE_GET_ISLOADED_OFFSET UNITYSDK_OFFSET(0x000000)
#define SPINE_UNITY_ATLASASSETBASE_GET_MATERIALCOUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SPINE_UNITY_ATLASASSETBASE_GET_PRIMARYMATERIAL_OFFSET UNITYSDK_OFFSET(0x000000)
#define SPINE_UNITY_ATLASASSETBASE_GETATLAS_OFFSET UNITYSDK_OFFSET(0x000000)
#define SPINE_UNITY_ATLASASSETBASE_GET_TEXTURELOADINGMODE_OFFSET UNITYSDK_OFFSET(0x95E7CB0)
#define SPINE_UNITY_ATLASASSETBASE_SET_ONDEMANDTEXTURELOADER_OFFSET UNITYSDK_OFFSET(0x95E7CC0)
#define SPINE_UNITY_ATLASASSETBASE_ENDCUSTOMTEXTURELOADING_OFFSET UNITYSDK_OFFSET(0x95E7CD0)
#define SPINE_UNITY_ATLASASSETBASE_REQUIRETEXTURELOADED_OFFSET UNITYSDK_OFFSET(0x95E7D50)
#define SPINE_UNITY_ATLASASSETBASE_GET_ONDEMANDTEXTURELOADER_OFFSET UNITYSDK_OFFSET(0x95E7DF0)

namespace Spine::Unity
{
	inline static constexpr unsigned int AtlasAssetBase_TypeDefinitionIndex = 35267;

	class AtlasAssetBase : public Il2CppObject
	{
	public:
		LoadingMode* textureLoadingMode; // 0x18
		::Spine::Unity::OnDemandTextureLoader* onDemandTextureLoader; // 0x20

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATLASASSETBASE_CLEAR_OFFSET))(nullptr);
		}

		::System::Void BeginCustomTextureLoading()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATLASASSETBASE_BEGINCUSTOMTEXTURELOADING_OFFSET))(nullptr);
		}

		::System::Void set_TextureLoadingMode(LoadingMode* arg)
		{
			((::System::Void(*)(LoadingMode*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATLASASSETBASE_SET_TEXTURELOADINGMODE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATLASASSETBASE_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* get_Materials()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATLASASSETBASE_GET_MATERIALS_OFFSET))(nullptr);
		}

		::System::Void RequireTexturesLoaded(::UnityEngine::Material* arg, ::UnityEngine::Material&* arg)
		{
			((::System::Void(*)(::UnityEngine::Material*, ::UnityEngine::Material&*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATLASASSETBASE_REQUIRETEXTURESLOADED_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean get_IsLoaded()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATLASASSETBASE_GET_ISLOADED_OFFSET))(nullptr);
		}

		::System::Int32 get_MaterialCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATLASASSETBASE_GET_MATERIALCOUNT_OFFSET))(nullptr);
		}

		::UnityEngine::Material* get_PrimaryMaterial()
		{
			return (return (::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATLASASSETBASE_GET_PRIMARYMATERIAL_OFFSET))(nullptr);
		}

		::Spine::Atlas* GetAtlas(::System::Boolean arg)
		{
			return (return (::Spine::Atlas*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATLASASSETBASE_GETATLAS_OFFSET))(arg, nullptr);
		}

		LoadingMode* get_TextureLoadingMode()
		{
			return (return (LoadingMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATLASASSETBASE_GET_TEXTURELOADINGMODE_OFFSET))(nullptr);
		}

		::System::Void set_OnDemandTextureLoader(::Spine::Unity::OnDemandTextureLoader* arg)
		{
			((::System::Void(*)(::Spine::Unity::OnDemandTextureLoader*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATLASASSETBASE_SET_ONDEMANDTEXTURELOADER_OFFSET))(arg, nullptr);
		}

		::System::Void EndCustomTextureLoading()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATLASASSETBASE_ENDCUSTOMTEXTURELOADING_OFFSET))(nullptr);
		}

		::System::Void RequireTextureLoaded(::UnityEngine::Texture* arg, ::UnityEngine::Texture&* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::UnityEngine::Texture*, ::UnityEngine::Texture&*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATLASASSETBASE_REQUIRETEXTURELOADED_OFFSET))(arg, arg, arg, nullptr);
		}

		::Spine::Unity::OnDemandTextureLoader* get_OnDemandTextureLoader()
		{
			return (return (::Spine::Unity::OnDemandTextureLoader*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATLASASSETBASE_GET_ONDEMANDTEXTURELOADER_OFFSET))(nullptr);
		}

	};
}

