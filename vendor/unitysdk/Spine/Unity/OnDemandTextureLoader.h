#pragma once
#include "../../unitysdk.h"

namespace Spine::Unity { class AtlasAssetBase; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Material&; }
namespace UnityEngine { class Texture; }
namespace UnityEngine { class Texture&; }

#define SPINE_UNITY_ONDEMANDTEXTURELOADER_ONTEXTUREREQUESTED_OFFSET UNITYSDK_OFFSET(0x95EA7A0)
#define SPINE_UNITY_ONDEMANDTEXTURELOADER_GETPLACEHOLDERTEXTURENAME_OFFSET UNITYSDK_OFFSET(0x000000)
#define SPINE_UNITY_ONDEMANDTEXTURELOADER_ADD_ONTEXTURELOADFAILED_OFFSET UNITYSDK_OFFSET(0x95EA7D0)
#define SPINE_UNITY_ONDEMANDTEXTURELOADER_ADD_TEXTUREUNLOADED_OFFSET UNITYSDK_OFFSET(0x95EA870)
#define SPINE_UNITY_ONDEMANDTEXTURELOADER_ONTEXTURELOADFAILED_OFFSET UNITYSDK_OFFSET(0x95EA9B0)
#define SPINE_UNITY_ONDEMANDTEXTURELOADER_BEGINCUSTOMTEXTURELOADING_OFFSET UNITYSDK_OFFSET(0x000000)
#define SPINE_UNITY_ONDEMANDTEXTURELOADER_ADD_ONTEXTUREUNLOADED_OFFSET UNITYSDK_OFFSET(0x95EA910)
#define SPINE_UNITY_ONDEMANDTEXTURELOADER_HASNULLMAINTEXTURESASSIGNED_OFFSET UNITYSDK_OFFSET(0x95EA9E0)
#define SPINE_UNITY_ONDEMANDTEXTURELOADER_ASSIGNTARGETTEXTURES_OFFSET UNITYSDK_OFFSET(0x000000)
#define SPINE_UNITY_ONDEMANDTEXTURELOADER_CLEAR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SPINE_UNITY_ONDEMANDTEXTURELOADER_ONTEXTUREUNLOADED_OFFSET UNITYSDK_OFFSET(0x95EAEC0)
#define SPINE_UNITY_ONDEMANDTEXTURELOADER_REMOVE_ONTEXTUREUNLOADED_OFFSET UNITYSDK_OFFSET(0x95EAEF0)
#define SPINE_UNITY_ONDEMANDTEXTURELOADER_HASPLACEHOLDERTEXTURESASSIGNED_OFFSET UNITYSDK_OFFSET(0x000000)
#define SPINE_UNITY_ONDEMANDTEXTURELOADER_.CTOR_OFFSET UNITYSDK_OFFSET(0x95EAF90)
#define SPINE_UNITY_ONDEMANDTEXTURELOADER_ADD_ONTEXTUREREQUESTED_OFFSET UNITYSDK_OFFSET(0x95EAFA0)
#define SPINE_UNITY_ONDEMANDTEXTURELOADER_REMOVE_TEXTURELOADFAILED_OFFSET UNITYSDK_OFFSET(0x95EB040)
#define SPINE_UNITY_ONDEMANDTEXTURELOADER_ADD_TEXTURELOADFAILED_OFFSET UNITYSDK_OFFSET(0x95EB180)
#define SPINE_UNITY_ONDEMANDTEXTURELOADER_ADD_TEXTURELOADED_OFFSET UNITYSDK_OFFSET(0x95EB220)
#define SPINE_UNITY_ONDEMANDTEXTURELOADER_REQUESTLOADMATERIALTEXTURES_OFFSET UNITYSDK_OFFSET(0x000000)
#define SPINE_UNITY_ONDEMANDTEXTURELOADER_REMOVE_TEXTUREREQUESTED_OFFSET UNITYSDK_OFFSET(0x95EB360)
#define SPINE_UNITY_ONDEMANDTEXTURELOADER_REQUESTLOADTEXTURE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SPINE_UNITY_ONDEMANDTEXTURELOADER_REMOVE_ONTEXTURELOADED_OFFSET UNITYSDK_OFFSET(0x95EB4A0)
#define SPINE_UNITY_ONDEMANDTEXTURELOADER_HASPLACEHOLDERASSIGNED_OFFSET UNITYSDK_OFFSET(0x000000)
#define SPINE_UNITY_ONDEMANDTEXTURELOADER_REMOVE_ONTEXTURELOADFAILED_OFFSET UNITYSDK_OFFSET(0x95EB0E0)
#define SPINE_UNITY_ONDEMANDTEXTURELOADER_REMOVE_TEXTURELOADED_OFFSET UNITYSDK_OFFSET(0x95EB540)
#define SPINE_UNITY_ONDEMANDTEXTURELOADER_ADD_ONTEXTURELOADED_OFFSET UNITYSDK_OFFSET(0x95EB2C0)
#define SPINE_UNITY_ONDEMANDTEXTURELOADER_ENDCUSTOMTEXTURELOADING_OFFSET UNITYSDK_OFFSET(0x000000)
#define SPINE_UNITY_ONDEMANDTEXTURELOADER_REMOVE_TEXTUREUNLOADED_OFFSET UNITYSDK_OFFSET(0x95EB5E0)
#define SPINE_UNITY_ONDEMANDTEXTURELOADER_ONTEXTURELOADED_OFFSET UNITYSDK_OFFSET(0x95EB680)
#define SPINE_UNITY_ONDEMANDTEXTURELOADER_ASSIGNPLACEHOLDERTEXTURES_OFFSET UNITYSDK_OFFSET(0x000000)
#define SPINE_UNITY_ONDEMANDTEXTURELOADER_ADD_TEXTUREREQUESTED_OFFSET UNITYSDK_OFFSET(0x95EB6B0)
#define SPINE_UNITY_ONDEMANDTEXTURELOADER_REMOVE_ONTEXTUREREQUESTED_OFFSET UNITYSDK_OFFSET(0x95EB400)

namespace Spine::Unity
{
	inline static constexpr unsigned int OnDemandTextureLoader_TypeDefinitionIndex = 35276;

	class OnDemandTextureLoader : public Il2CppObject
	{
	public:
		::Spine::Unity::AtlasAssetBase* atlasAsset; // 0x18
		TextureLoadDelegate* onTextureRequested; // 0x20
		TextureLoadDelegate* onTextureLoaded; // 0x28
		TextureLoadDelegate* onTextureLoadFailed; // 0x30
		TextureLoadDelegate* onTextureUnloaded; // 0x38

		::System::Void OnTextureRequested(::UnityEngine::Material* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Material*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ONDEMANDTEXTURELOADER_ONTEXTUREREQUESTED_OFFSET))(arg, arg, nullptr);
		}

		::System::String* GetPlaceholderTextureName(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ONDEMANDTEXTURELOADER_GETPLACEHOLDERTEXTURENAME_OFFSET))(str, nullptr);
		}

		::System::Void add_onTextureLoadFailed(TextureLoadDelegate* arg)
		{
			((::System::Void(*)(TextureLoadDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ONDEMANDTEXTURELOADER_ADD_ONTEXTURELOADFAILED_OFFSET))(arg, nullptr);
		}

		::System::Void add_TextureUnloaded(TextureLoadDelegate* arg)
		{
			((::System::Void(*)(TextureLoadDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ONDEMANDTEXTURELOADER_ADD_TEXTUREUNLOADED_OFFSET))(arg, nullptr);
		}

		::System::Void OnTextureLoadFailed(::UnityEngine::Material* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Material*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ONDEMANDTEXTURELOADER_ONTEXTURELOADFAILED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void BeginCustomTextureLoading()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ONDEMANDTEXTURELOADER_BEGINCUSTOMTEXTURELOADING_OFFSET))(nullptr);
		}

		::System::Void add_onTextureUnloaded(TextureLoadDelegate* arg)
		{
			((::System::Void(*)(TextureLoadDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ONDEMANDTEXTURELOADER_ADD_ONTEXTUREUNLOADED_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasNullMainTexturesAssigned(Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ONDEMANDTEXTURELOADER_HASNULLMAINTEXTURESASSIGNED_OFFSET))(arg, nullptr);
		}

		::System::Boolean AssignTargetTextures(Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ONDEMANDTEXTURELOADER_ASSIGNTARGETTEXTURES_OFFSET))(arg, nullptr);
		}

		::System::Void Clear(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ONDEMANDTEXTURELOADER_CLEAR_OFFSET))(arg, nullptr);
		}

		::System::Void OnTextureUnloaded(::UnityEngine::Material* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Material*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ONDEMANDTEXTURELOADER_ONTEXTUREUNLOADED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void remove_onTextureUnloaded(TextureLoadDelegate* arg)
		{
			((::System::Void(*)(TextureLoadDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ONDEMANDTEXTURELOADER_REMOVE_ONTEXTUREUNLOADED_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasPlaceholderTexturesAssigned(Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ONDEMANDTEXTURELOADER_HASPLACEHOLDERTEXTURESASSIGNED_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ONDEMANDTEXTURELOADER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void add_onTextureRequested(TextureLoadDelegate* arg)
		{
			((::System::Void(*)(TextureLoadDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ONDEMANDTEXTURELOADER_ADD_ONTEXTUREREQUESTED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_TextureLoadFailed(TextureLoadDelegate* arg)
		{
			((::System::Void(*)(TextureLoadDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ONDEMANDTEXTURELOADER_REMOVE_TEXTURELOADFAILED_OFFSET))(arg, nullptr);
		}

		::System::Void add_TextureLoadFailed(TextureLoadDelegate* arg)
		{
			((::System::Void(*)(TextureLoadDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ONDEMANDTEXTURELOADER_ADD_TEXTURELOADFAILED_OFFSET))(arg, nullptr);
		}

		::System::Void add_TextureLoaded(TextureLoadDelegate* arg)
		{
			((::System::Void(*)(TextureLoadDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ONDEMANDTEXTURELOADER_ADD_TEXTURELOADED_OFFSET))(arg, nullptr);
		}

		::System::Void RequestLoadMaterialTextures(::UnityEngine::Material* arg, ::UnityEngine::Material&* arg)
		{
			((::System::Void(*)(::UnityEngine::Material*, ::UnityEngine::Material&*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ONDEMANDTEXTURELOADER_REQUESTLOADMATERIALTEXTURES_OFFSET))(arg, arg, nullptr);
		}

		::System::Void remove_TextureRequested(TextureLoadDelegate* arg)
		{
			((::System::Void(*)(TextureLoadDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ONDEMANDTEXTURELOADER_REMOVE_TEXTUREREQUESTED_OFFSET))(arg, nullptr);
		}

		::System::Void RequestLoadTexture(::UnityEngine::Texture* arg, ::UnityEngine::Texture&* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::UnityEngine::Texture*, ::UnityEngine::Texture&*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ONDEMANDTEXTURELOADER_REQUESTLOADTEXTURE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void remove_onTextureLoaded(TextureLoadDelegate* arg)
		{
			((::System::Void(*)(TextureLoadDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ONDEMANDTEXTURELOADER_REMOVE_ONTEXTURELOADED_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasPlaceholderAssigned(::UnityEngine::Material* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ONDEMANDTEXTURELOADER_HASPLACEHOLDERASSIGNED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_onTextureLoadFailed(TextureLoadDelegate* arg)
		{
			((::System::Void(*)(TextureLoadDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ONDEMANDTEXTURELOADER_REMOVE_ONTEXTURELOADFAILED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_TextureLoaded(TextureLoadDelegate* arg)
		{
			((::System::Void(*)(TextureLoadDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ONDEMANDTEXTURELOADER_REMOVE_TEXTURELOADED_OFFSET))(arg, nullptr);
		}

		::System::Void add_onTextureLoaded(TextureLoadDelegate* arg)
		{
			((::System::Void(*)(TextureLoadDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ONDEMANDTEXTURELOADER_ADD_ONTEXTURELOADED_OFFSET))(arg, nullptr);
		}

		::System::Void EndCustomTextureLoading()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ONDEMANDTEXTURELOADER_ENDCUSTOMTEXTURELOADING_OFFSET))(nullptr);
		}

		::System::Void remove_TextureUnloaded(TextureLoadDelegate* arg)
		{
			((::System::Void(*)(TextureLoadDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ONDEMANDTEXTURELOADER_REMOVE_TEXTUREUNLOADED_OFFSET))(arg, nullptr);
		}

		::System::Void OnTextureLoaded(::UnityEngine::Material* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Material*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ONDEMANDTEXTURELOADER_ONTEXTURELOADED_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean AssignPlaceholderTextures(Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ONDEMANDTEXTURELOADER_ASSIGNPLACEHOLDERTEXTURES_OFFSET))(arg, nullptr);
		}

		::System::Void add_TextureRequested(TextureLoadDelegate* arg)
		{
			((::System::Void(*)(TextureLoadDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ONDEMANDTEXTURELOADER_ADD_TEXTUREREQUESTED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_onTextureRequested(TextureLoadDelegate* arg)
		{
			((::System::Void(*)(TextureLoadDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ONDEMANDTEXTURELOADER_REMOVE_ONTEXTUREREQUESTED_OFFSET))(arg, nullptr);
		}

	};
}

