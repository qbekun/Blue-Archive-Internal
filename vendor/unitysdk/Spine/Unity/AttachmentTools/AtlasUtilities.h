#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class TextureFormat; }
namespace Spine { class AtlasRegion; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Shader; }
namespace Spine { class AtlasPage; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine { class Material&; }
namespace UnityEngine { class Texture2D&; }
namespace Spine { class Skin; }
namespace UnityEngine { class Rect; }
namespace Spine { class Attachment; }

#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_INIT_OFFSET UNITYSDK_OFFSET(0x96213B0)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_TOATLASREGION_OFFSET UNITYSDK_OFFSET(0x9621660)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_TOATLASREGION_OFFSET UNITYSDK_OFFSET(0x96216E0)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_TOATLASREGIONPMACLONE_OFFSET UNITYSDK_OFFSET(0x9621A40)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_TOATLASREGIONPMACLONE_OFFSET UNITYSDK_OFFSET(0x9621AD0)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_TOSPINEATLASPAGE_OFFSET UNITYSDK_OFFSET(0x9621930)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_TOATLASREGION_OFFSET UNITYSDK_OFFSET(0x9621EA0)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_TOATLASREGION_OFFSET UNITYSDK_OFFSET(0x9622420)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_TOATLASREGIONPMACLONE_OFFSET UNITYSDK_OFFSET(0x96224A0)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_TOATLASREGIONPMACLONE_OFFSET UNITYSDK_OFFSET(0x9622530)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_TOATLASREGION_OFFSET UNITYSDK_OFFSET(0x9621F80)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_GETREPACKEDATTACHMENTS_OFFSET UNITYSDK_OFFSET(0x9622D50)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_GETREPACKEDATTACHMENTS_OFFSET UNITYSDK_OFFSET(0x9622F00)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_ADDREGIONTEXTURESTOPACK_OFFSET UNITYSDK_OFFSET(0x9624AB0)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_GETREPACKEDSKIN_OFFSET UNITYSDK_OFFSET(0x9625A50)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_GETREPACKEDSKIN_OFFSET UNITYSDK_OFFSET(0x9625B70)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_TOSPRITE_OFFSET UNITYSDK_OFFSET(0x96264D0)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_CLEARCACHE_OFFSET UNITYSDK_OFFSET(0x9621410)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_TOTEXTURE_OFFSET UNITYSDK_OFFSET(0x9625670)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_TOTEXTURE_OFFSET UNITYSDK_OFFSET(0x9622710)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_GETCLONE_OFFSET UNITYSDK_OFFSET(0x9621CC0)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_COPYTEXTURE_OFFSET UNITYSDK_OFFSET(0x9626950)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_COPYTEXTUREAPPLYPMA_OFFSET UNITYSDK_OFFSET(0x9626820)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_ISRENDERABLE_OFFSET UNITYSDK_OFFSET(0x9626B40)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_SPINEUNITYFLIPRECT_OFFSET UNITYSDK_OFFSET(0x9622B30)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_GETUNITYRECT_OFFSET UNITYSDK_OFFSET(0x9626610)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_GETUNITYRECT_OFFSET UNITYSDK_OFFSET(0x9626C00)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_GETSPINEATLASRECT_OFFSET UNITYSDK_OFFSET(0x9626B90)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_UVRECTTOTEXTURERECT_OFFSET UNITYSDK_OFFSET(0x9626D10)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_TEXTURERECTTOUVRECT_OFFSET UNITYSDK_OFFSET(0x9622B90)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_UVRECTTOATLASREGION_OFFSET UNITYSDK_OFFSET(0x9624E90)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_GETMAINTEXTURE_OFFSET UNITYSDK_OFFSET(0x9626560)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_GETTEXTURE_OFFSET UNITYSDK_OFFSET(0x9626DC0)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_GETTEXTURE_OFFSET UNITYSDK_OFFSET(0x9626770)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_COPYTEXTUREATTRIBUTESFROM_OFFSET UNITYSDK_OFFSET(0x9624DF0)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_INVERSELERP_OFFSET UNITYSDK_OFFSET(0x9621A30)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9626E70)

namespace Spine::Unity::AttachmentTools
{
	inline static constexpr unsigned int AtlasUtilities_TypeDefinitionIndex = 35387;

	class AtlasUtilities : public Il2CppObject
	{
	public:
		::UnityEngine::TextureFormat* SpineTextureFormat; // 0x0
		::System::Single DefaultMipmapBias; // 0x0
		::System::Boolean UseMipMaps; // 0x0
		::System::Single DefaultScale; // 0x0
		::System::Int32 NonrenderingRegion; // 0x0
		Il2CppObject* existingRegions; // 0x0
		Il2CppObject* regionIndices; // 0x8
		Il2CppObject* originalRegions; // 0x10
		Il2CppObject* repackedRegions; // 0x18
		::Il2CppArray<::System::Object*>* texturesToPackAtParam; // 0x20
		Il2CppObject* inoutAttachments; // 0x28
		Il2CppObject* CachedRegionTextures; // 0x30
		Il2CppObject* CachedRegionTexturesList; // 0x38

		::System::Void Init()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_INIT_OFFSET))(nullptr);
		}

		::Spine::AtlasRegion* ToAtlasRegion(::UnityEngine::Texture2D* arg, ::UnityEngine::Material* arg, ::System::Single arg)
		{
			return (return (::Spine::AtlasRegion*(*)(::UnityEngine::Texture2D*, ::UnityEngine::Material*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_TOATLASREGION_OFFSET))(arg, arg, arg, nullptr);
		}

		::Spine::AtlasRegion* ToAtlasRegion(::UnityEngine::Texture2D* arg, ::UnityEngine::Shader* arg, ::System::Single arg, ::UnityEngine::Material* arg)
		{
			return (return (::Spine::AtlasRegion*(*)(::UnityEngine::Texture2D*, ::UnityEngine::Shader*, ::System::Single, ::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_TOATLASREGION_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::Spine::AtlasRegion* ToAtlasRegionPMAClone(::UnityEngine::Texture2D* arg, ::UnityEngine::Material* arg, ::UnityEngine::TextureFormat* arg, ::System::Boolean arg)
		{
			return (return (::Spine::AtlasRegion*(*)(::UnityEngine::Texture2D*, ::UnityEngine::Material*, ::UnityEngine::TextureFormat*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_TOATLASREGIONPMACLONE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::Spine::AtlasRegion* ToAtlasRegionPMAClone(::UnityEngine::Texture2D* arg, ::UnityEngine::Shader* arg, ::UnityEngine::TextureFormat* arg, ::System::Boolean arg, ::UnityEngine::Material* arg)
		{
			return (return (::Spine::AtlasRegion*(*)(::UnityEngine::Texture2D*, ::UnityEngine::Shader*, ::UnityEngine::TextureFormat*, ::System::Boolean, ::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_TOATLASREGIONPMACLONE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::Spine::AtlasPage* ToSpineAtlasPage(::UnityEngine::Material* arg)
		{
			return (return (::Spine::AtlasPage*(*)(::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_TOSPINEATLASPAGE_OFFSET))(arg, nullptr);
		}

		::Spine::AtlasRegion* ToAtlasRegion(::UnityEngine::Sprite* arg, ::Spine::AtlasPage* arg)
		{
			return (return (::Spine::AtlasRegion*(*)(::UnityEngine::Sprite*, ::Spine::AtlasPage*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_TOATLASREGION_OFFSET))(arg, arg, nullptr);
		}

		::Spine::AtlasRegion* ToAtlasRegion(::UnityEngine::Sprite* arg, ::UnityEngine::Material* arg)
		{
			return (return (::Spine::AtlasRegion*(*)(::UnityEngine::Sprite*, ::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_TOATLASREGION_OFFSET))(arg, arg, nullptr);
		}

		::Spine::AtlasRegion* ToAtlasRegionPMAClone(::UnityEngine::Sprite* arg, ::UnityEngine::Material* arg, ::UnityEngine::TextureFormat* arg, ::System::Boolean arg)
		{
			return (return (::Spine::AtlasRegion*(*)(::UnityEngine::Sprite*, ::UnityEngine::Material*, ::UnityEngine::TextureFormat*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_TOATLASREGIONPMACLONE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::Spine::AtlasRegion* ToAtlasRegionPMAClone(::UnityEngine::Sprite* arg, ::UnityEngine::Shader* arg, ::UnityEngine::TextureFormat* arg, ::System::Boolean arg, ::UnityEngine::Material* arg)
		{
			return (return (::Spine::AtlasRegion*(*)(::UnityEngine::Sprite*, ::UnityEngine::Shader*, ::UnityEngine::TextureFormat*, ::System::Boolean, ::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_TOATLASREGIONPMACLONE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::Spine::AtlasRegion* ToAtlasRegion(::UnityEngine::Sprite* arg, ::System::Boolean arg)
		{
			return (return (::Spine::AtlasRegion*(*)(::UnityEngine::Sprite*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_TOATLASREGION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GetRepackedAttachments(Il2CppObject* arg, Il2CppObject* arg, ::UnityEngine::Material* arg, ::UnityEngine::Material&* arg, ::UnityEngine::Texture2D&* arg, ::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::TextureFormat* arg, ::System::Boolean arg, ::System::String* str, ::System::Boolean arg, ::System::Boolean arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::UnityEngine::Material*, ::UnityEngine::Material&*, ::UnityEngine::Texture2D&*, ::System::Int32, ::System::Int32, ::UnityEngine::TextureFormat*, ::System::Boolean, ::System::String*, ::System::Boolean, ::System::Boolean, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_GETREPACKEDATTACHMENTS_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, str, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void GetRepackedAttachments(Il2CppObject* arg, Il2CppObject* arg, ::UnityEngine::Shader* arg, ::UnityEngine::Material&* arg, ::UnityEngine::Texture2D&* arg, ::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::TextureFormat* arg, ::System::Boolean arg, ::System::String* str, ::UnityEngine::Material* arg, ::System::Boolean arg, ::System::Boolean arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::UnityEngine::Shader*, ::UnityEngine::Material&*, ::UnityEngine::Texture2D&*, ::System::Int32, ::System::Int32, ::UnityEngine::TextureFormat*, ::System::Boolean, ::System::String*, ::UnityEngine::Material*, ::System::Boolean, ::System::Boolean, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_GETREPACKEDATTACHMENTS_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, str, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void AddRegionTexturesToPack(::System::Int32 arg, ::Spine::AtlasRegion* arg, ::UnityEngine::TextureFormat* arg, ::System::Boolean arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Int32, ::Spine::AtlasRegion*, ::UnityEngine::TextureFormat*, ::System::Boolean, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_ADDREGIONTEXTURESTOPACK_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::Spine::Skin* GetRepackedSkin(::Spine::Skin* arg, ::System::String* str, ::UnityEngine::Material* arg, ::UnityEngine::Material&* arg, ::UnityEngine::Texture2D&* arg, ::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::TextureFormat* arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Spine::Skin*(*)(::Spine::Skin*, ::System::String*, ::UnityEngine::Material*, ::UnityEngine::Material&*, ::UnityEngine::Texture2D&*, ::System::Int32, ::System::Int32, ::UnityEngine::TextureFormat*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_GETREPACKEDSKIN_OFFSET))(arg, str, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::Spine::Skin* GetRepackedSkin(::Spine::Skin* arg, ::System::String* str, ::UnityEngine::Shader* arg, ::UnityEngine::Material&* arg, ::UnityEngine::Texture2D&* arg, ::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::TextureFormat* arg, ::System::Boolean arg, ::UnityEngine::Material* arg, ::System::Boolean arg, ::System::Boolean arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Spine::Skin*(*)(::Spine::Skin*, ::System::String*, ::UnityEngine::Shader*, ::UnityEngine::Material&*, ::UnityEngine::Texture2D&*, ::System::Int32, ::System::Int32, ::UnityEngine::TextureFormat*, ::System::Boolean, ::UnityEngine::Material*, ::System::Boolean, ::System::Boolean, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_GETREPACKEDSKIN_OFFSET))(arg, str, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::Sprite* ToSprite(::Spine::AtlasRegion* arg, ::System::Single arg)
		{
			return (return (::UnityEngine::Sprite*(*)(::Spine::AtlasRegion*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_TOSPRITE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ClearCache()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_CLEARCACHE_OFFSET))(nullptr);
		}

		::UnityEngine::Texture2D* ToTexture(::Spine::AtlasRegion* arg, ::UnityEngine::TextureFormat* arg, ::System::Boolean arg, ::System::Int32 arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			return (return (::UnityEngine::Texture2D*(*)(::Spine::AtlasRegion*, ::UnityEngine::TextureFormat*, ::System::Boolean, ::System::Int32, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_TOTEXTURE_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::Texture2D* ToTexture(::UnityEngine::Sprite* arg, ::UnityEngine::TextureFormat* arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			return (return (::UnityEngine::Texture2D*(*)(::UnityEngine::Sprite*, ::UnityEngine::TextureFormat*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_TOTEXTURE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::Texture2D* GetClone(::UnityEngine::Texture2D* arg, ::UnityEngine::TextureFormat* arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			return (return (::UnityEngine::Texture2D*(*)(::UnityEngine::Texture2D*, ::UnityEngine::TextureFormat*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_GETCLONE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void CopyTexture(::UnityEngine::Texture2D* arg, ::UnityEngine::Rect* arg, ::UnityEngine::Texture2D* arg)
		{
			((::System::Void(*)(::UnityEngine::Texture2D*, ::UnityEngine::Rect*, ::UnityEngine::Texture2D*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_COPYTEXTURE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void CopyTextureApplyPMA(::UnityEngine::Texture2D* arg, ::UnityEngine::Rect* arg, ::UnityEngine::Texture2D* arg)
		{
			((::System::Void(*)(::UnityEngine::Texture2D*, ::UnityEngine::Rect*, ::UnityEngine::Texture2D*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_COPYTEXTUREAPPLYPMA_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean IsRenderable(::Spine::Attachment* arg)
		{
			return (return (::System::Boolean(*)(::Spine::Attachment*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_ISRENDERABLE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rect* SpineUnityFlipRect(::UnityEngine::Rect* arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::Rect*(*)(::UnityEngine::Rect*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_SPINEUNITYFLIPRECT_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Rect* GetUnityRect(::Spine::AtlasRegion* arg)
		{
			return (return (::UnityEngine::Rect*(*)(::Spine::AtlasRegion*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_GETUNITYRECT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rect* GetUnityRect(::Spine::AtlasRegion* arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::Rect*(*)(::Spine::AtlasRegion*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_GETUNITYRECT_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Rect* GetSpineAtlasRect(::Spine::AtlasRegion* arg, ::System::Boolean arg)
		{
			return (return (::UnityEngine::Rect*(*)(::Spine::AtlasRegion*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_GETSPINEATLASRECT_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Rect* UVRectToTextureRect(::UnityEngine::Rect* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::Rect*(*)(::UnityEngine::Rect*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_UVRECTTOTEXTURERECT_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::Rect* TextureRectToUVRect(::UnityEngine::Rect* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::Rect*(*)(::UnityEngine::Rect*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_TEXTURERECTTOUVRECT_OFFSET))(arg, arg, arg, nullptr);
		}

		::Spine::AtlasRegion* UVRectToAtlasRegion(::UnityEngine::Rect* arg, ::Spine::AtlasRegion* arg, ::Spine::AtlasPage* arg)
		{
			return (return (::Spine::AtlasRegion*(*)(::UnityEngine::Rect*, ::Spine::AtlasRegion*, ::Spine::AtlasPage*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_UVRECTTOATLASREGION_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::Texture2D* GetMainTexture(::Spine::AtlasRegion* arg)
		{
			return (return (::UnityEngine::Texture2D*(*)(::Spine::AtlasRegion*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_GETMAINTEXTURE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Texture2D* GetTexture(::Spine::AtlasRegion* arg, ::System::String* str)
		{
			return (return (::UnityEngine::Texture2D*(*)(::Spine::AtlasRegion*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_GETTEXTURE_OFFSET))(arg, str, nullptr);
		}

		::UnityEngine::Texture2D* GetTexture(::Spine::AtlasRegion* arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::Texture2D*(*)(::Spine::AtlasRegion*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_GETTEXTURE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void CopyTextureAttributesFrom(::UnityEngine::Texture2D* arg, ::UnityEngine::Texture2D* arg)
		{
			((::System::Void(*)(::UnityEngine::Texture2D*, ::UnityEngine::Texture2D*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_COPYTEXTUREATTRIBUTESFROM_OFFSET))(arg, arg, nullptr);
		}

		::System::Single InverseLerp(::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_INVERSELERP_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_.CCTOR_OFFSET))(nullptr);
		}

	};
}

