#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Rect; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine { class Vector4; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class SpriteMeshType; }
namespace UnityEngine { class Bounds; }
namespace UnityEngine { class SpritePackingMode; }
namespace UnityEngine { class SpritePackingRotation; }
namespace UnityEngine { class Rect&; }
namespace UnityEngine { class Vector2&; }
namespace UnityEngine { class Vector4&; }
namespace UnityEngine { class Bounds&; }

#define UNITYENGINE_SPRITE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA242060)
#define UNITYENGINE_SPRITE_GETPACKINGMODE_OFFSET UNITYSDK_OFFSET(0xA2420B0)
#define UNITYENGINE_SPRITE_GETPACKINGROTATION_OFFSET UNITYSDK_OFFSET(0xA2420F0)
#define UNITYENGINE_SPRITE_GETPACKED_OFFSET UNITYSDK_OFFSET(0xA242130)
#define UNITYENGINE_SPRITE_GETTEXTURERECT_OFFSET UNITYSDK_OFFSET(0xA242170)
#define UNITYENGINE_SPRITE_GETTEXTURERECTOFFSET_OFFSET UNITYSDK_OFFSET(0xA242200)
#define UNITYENGINE_SPRITE_GETINNERUVS_OFFSET UNITYSDK_OFFSET(0xA242290)
#define UNITYENGINE_SPRITE_GETOUTERUVS_OFFSET UNITYSDK_OFFSET(0xA242320)
#define UNITYENGINE_SPRITE_GETPADDING_OFFSET UNITYSDK_OFFSET(0xA2423B0)
#define UNITYENGINE_SPRITE_CREATESPRITEWITHOUTTEXTURESCRIPTING_OFFSET UNITYSDK_OFFSET(0xA242440)
#define UNITYENGINE_SPRITE_CREATESPRITE_OFFSET UNITYSDK_OFFSET(0xA242500)
#define UNITYENGINE_SPRITE_GET_BOUNDS_OFFSET UNITYSDK_OFFSET(0xA242600)
#define UNITYENGINE_SPRITE_GET_RECT_OFFSET UNITYSDK_OFFSET(0xA2426B0)
#define UNITYENGINE_SPRITE_GET_BORDER_OFFSET UNITYSDK_OFFSET(0xA242740)
#define UNITYENGINE_SPRITE_GET_TEXTURE_OFFSET UNITYSDK_OFFSET(0xA2427D0)
#define UNITYENGINE_SPRITE_GETSECONDARYTEXTURE_OFFSET UNITYSDK_OFFSET(0xA242810)
#define UNITYENGINE_SPRITE_GET_PIXELSPERUNIT_OFFSET UNITYSDK_OFFSET(0xA242850)
#define UNITYENGINE_SPRITE_GET_SPRITEATLASTEXTURESCALE_OFFSET UNITYSDK_OFFSET(0xA242890)
#define UNITYENGINE_SPRITE_GET_ASSOCIATEDALPHASPLITTEXTURE_OFFSET UNITYSDK_OFFSET(0xA2428D0)
#define UNITYENGINE_SPRITE_GET_PIVOT_OFFSET UNITYSDK_OFFSET(0xA242910)
#define UNITYENGINE_SPRITE_GET_PACKED_OFFSET UNITYSDK_OFFSET(0xA2429A0)
#define UNITYENGINE_SPRITE_GET_PACKINGMODE_OFFSET UNITYSDK_OFFSET(0xA2429E0)
#define UNITYENGINE_SPRITE_GET_PACKINGROTATION_OFFSET UNITYSDK_OFFSET(0xA242A20)
#define UNITYENGINE_SPRITE_GET_TEXTURERECT_OFFSET UNITYSDK_OFFSET(0xA242A60)
#define UNITYENGINE_SPRITE_GET_TEXTURERECTOFFSET_OFFSET UNITYSDK_OFFSET(0xA242B40)
#define UNITYENGINE_SPRITE_GET_VERTICES_OFFSET UNITYSDK_OFFSET(0xA242C20)
#define UNITYENGINE_SPRITE_GET_TRIANGLES_OFFSET UNITYSDK_OFFSET(0xA242C60)
#define UNITYENGINE_SPRITE_GET_UV_OFFSET UNITYSDK_OFFSET(0xA242CA0)
#define UNITYENGINE_SPRITE_GETPHYSICSSHAPECOUNT_OFFSET UNITYSDK_OFFSET(0xA242CE0)
#define UNITYENGINE_SPRITE_GETPHYSICSSHAPEPOINTCOUNT_OFFSET UNITYSDK_OFFSET(0xA242D20)
#define UNITYENGINE_SPRITE_INTERNAL_GETPHYSICSSHAPEPOINTCOUNT_OFFSET UNITYSDK_OFFSET(0xA242E40)
#define UNITYENGINE_SPRITE_GETPHYSICSSHAPE_OFFSET UNITYSDK_OFFSET(0xA242E80)
#define UNITYENGINE_SPRITE_GETPHYSICSSHAPEIMPL_OFFSET UNITYSDK_OFFSET(0xA242FD0)
#define UNITYENGINE_SPRITE_OVERRIDEPHYSICSSHAPE_OFFSET UNITYSDK_OFFSET(0xA243020)
#define UNITYENGINE_SPRITE_OVERRIDEPHYSICSSHAPECOUNT_OFFSET UNITYSDK_OFFSET(0xA243470)
#define UNITYENGINE_SPRITE_OVERRIDEPHYSICSSHAPE_OFFSET UNITYSDK_OFFSET(0xA2434B0)
#define UNITYENGINE_SPRITE_OVERRIDEGEOMETRY_OFFSET UNITYSDK_OFFSET(0xA243500)
#define UNITYENGINE_SPRITE_CREATE_OFFSET UNITYSDK_OFFSET(0xA243550)
#define UNITYENGINE_SPRITE_CREATE_OFFSET UNITYSDK_OFFSET(0xA2435B0)
#define UNITYENGINE_SPRITE_CREATE_OFFSET UNITYSDK_OFFSET(0xA243610)
#define UNITYENGINE_SPRITE_CREATE_OFFSET UNITYSDK_OFFSET(0xA243AE0)
#define UNITYENGINE_SPRITE_CREATE_OFFSET UNITYSDK_OFFSET(0xA243B40)
#define UNITYENGINE_SPRITE_CREATE_OFFSET UNITYSDK_OFFSET(0xA243C00)
#define UNITYENGINE_SPRITE_CREATE_OFFSET UNITYSDK_OFFSET(0xA243CB0)
#define UNITYENGINE_SPRITE_CREATE_OFFSET UNITYSDK_OFFSET(0xA243D60)
#define UNITYENGINE_SPRITE_GETTEXTURERECT_INJECTED_OFFSET UNITYSDK_OFFSET(0xA2421C0)
#define UNITYENGINE_SPRITE_GETTEXTURERECTOFFSET_INJECTED_OFFSET UNITYSDK_OFFSET(0xA242250)
#define UNITYENGINE_SPRITE_GETINNERUVS_INJECTED_OFFSET UNITYSDK_OFFSET(0xA2422E0)
#define UNITYENGINE_SPRITE_GETOUTERUVS_INJECTED_OFFSET UNITYSDK_OFFSET(0xA242370)
#define UNITYENGINE_SPRITE_GETPADDING_INJECTED_OFFSET UNITYSDK_OFFSET(0xA242400)
#define UNITYENGINE_SPRITE_CREATESPRITEWITHOUTTEXTURESCRIPTING_INJECTED_OFFSET UNITYSDK_OFFSET(0xA2424A0)
#define UNITYENGINE_SPRITE_CREATESPRITE_INJECTED_OFFSET UNITYSDK_OFFSET(0xA2425A0)
#define UNITYENGINE_SPRITE_GET_BOUNDS_INJECTED_OFFSET UNITYSDK_OFFSET(0xA242670)
#define UNITYENGINE_SPRITE_GET_RECT_INJECTED_OFFSET UNITYSDK_OFFSET(0xA242700)
#define UNITYENGINE_SPRITE_GET_BORDER_INJECTED_OFFSET UNITYSDK_OFFSET(0xA242790)
#define UNITYENGINE_SPRITE_GET_PIVOT_INJECTED_OFFSET UNITYSDK_OFFSET(0xA242960)

namespace UnityEngine
{
	inline static constexpr unsigned int Sprite_TypeDefinitionIndex = 31223;

	class Sprite : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 GetPackingMode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_GETPACKINGMODE_OFFSET))(nullptr);
		}

		::System::Int32 GetPackingRotation()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_GETPACKINGROTATION_OFFSET))(nullptr);
		}

		::System::Int32 GetPacked()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_GETPACKED_OFFSET))(nullptr);
		}

		::UnityEngine::Rect* GetTextureRect()
		{
			return (return (::UnityEngine::Rect*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_GETTEXTURERECT_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* GetTextureRectOffset()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_GETTEXTURERECTOFFSET_OFFSET))(nullptr);
		}

		::UnityEngine::Vector4* GetInnerUVs()
		{
			return (return (::UnityEngine::Vector4*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_GETINNERUVS_OFFSET))(nullptr);
		}

		::UnityEngine::Vector4* GetOuterUVs()
		{
			return (return (::UnityEngine::Vector4*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_GETOUTERUVS_OFFSET))(nullptr);
		}

		::UnityEngine::Vector4* GetPadding()
		{
			return (return (::UnityEngine::Vector4*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_GETPADDING_OFFSET))(nullptr);
		}

		::UnityEngine::Sprite* CreateSpriteWithoutTextureScripting(::UnityEngine::Rect* arg, ::UnityEngine::Vector2* arg, ::System::Single arg, ::UnityEngine::Texture2D* arg)
		{
			return (return (::UnityEngine::Sprite*(*)(::UnityEngine::Rect*, ::UnityEngine::Vector2*, ::System::Single, ::UnityEngine::Texture2D*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_CREATESPRITEWITHOUTTEXTURESCRIPTING_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::Sprite* CreateSprite(::UnityEngine::Texture2D* arg, ::UnityEngine::Rect* arg, ::UnityEngine::Vector2* arg, ::System::Single arg, ::System::UInt32 arg, ::UnityEngine::SpriteMeshType* arg, ::UnityEngine::Vector4* arg, ::System::Boolean arg)
		{
			return (return (::UnityEngine::Sprite*(*)(::UnityEngine::Texture2D*, ::UnityEngine::Rect*, ::UnityEngine::Vector2*, ::System::Single, ::System::UInt32, ::UnityEngine::SpriteMeshType*, ::UnityEngine::Vector4*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_CREATESPRITE_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::Bounds* get_bounds()
		{
			return (return (::UnityEngine::Bounds*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_GET_BOUNDS_OFFSET))(nullptr);
		}

		::UnityEngine::Rect* get_rect()
		{
			return (return (::UnityEngine::Rect*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_GET_RECT_OFFSET))(nullptr);
		}

		::UnityEngine::Vector4* get_border()
		{
			return (return (::UnityEngine::Vector4*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_GET_BORDER_OFFSET))(nullptr);
		}

		::UnityEngine::Texture2D* get_texture()
		{
			return (return (::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_GET_TEXTURE_OFFSET))(nullptr);
		}

		::UnityEngine::Texture2D* GetSecondaryTexture(::System::Int32 arg)
		{
			return (return (::UnityEngine::Texture2D*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_GETSECONDARYTEXTURE_OFFSET))(arg, nullptr);
		}

		::System::Single get_pixelsPerUnit()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_GET_PIXELSPERUNIT_OFFSET))(nullptr);
		}

		::System::Single get_spriteAtlasTextureScale()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_GET_SPRITEATLASTEXTURESCALE_OFFSET))(nullptr);
		}

		::UnityEngine::Texture2D* get_associatedAlphaSplitTexture()
		{
			return (return (::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_GET_ASSOCIATEDALPHASPLITTEXTURE_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_pivot()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_GET_PIVOT_OFFSET))(nullptr);
		}

		::System::Boolean get_packed()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_GET_PACKED_OFFSET))(nullptr);
		}

		::UnityEngine::SpritePackingMode* get_packingMode()
		{
			return (return (::UnityEngine::SpritePackingMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_GET_PACKINGMODE_OFFSET))(nullptr);
		}

		::UnityEngine::SpritePackingRotation* get_packingRotation()
		{
			return (return (::UnityEngine::SpritePackingRotation*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_GET_PACKINGROTATION_OFFSET))(nullptr);
		}

		::UnityEngine::Rect* get_textureRect()
		{
			return (return (::UnityEngine::Rect*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_GET_TEXTURERECT_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_textureRectOffset()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_GET_TEXTURERECTOFFSET_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_vertices()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_GET_VERTICES_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_triangles()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_GET_TRIANGLES_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_uv()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_GET_UV_OFFSET))(nullptr);
		}

		::System::Int32 GetPhysicsShapeCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_GETPHYSICSSHAPECOUNT_OFFSET))(nullptr);
		}

		::System::Int32 GetPhysicsShapePointCount(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_GETPHYSICSSHAPEPOINTCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 Internal_GetPhysicsShapePointCount(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_INTERNAL_GETPHYSICSSHAPEPOINTCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetPhysicsShape(::System::Int32 arg, Il2CppObject* arg)
		{
			return (return (::System::Int32(*)(::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_GETPHYSICSSHAPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GetPhysicsShapeImpl(::UnityEngine::Sprite* arg, ::System::Int32 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::UnityEngine::Sprite*, ::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_GETPHYSICSSHAPEIMPL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void OverridePhysicsShape(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_OVERRIDEPHYSICSSHAPE_OFFSET))(arg, nullptr);
		}

		::System::Void OverridePhysicsShapeCount(::UnityEngine::Sprite* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Sprite*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_OVERRIDEPHYSICSSHAPECOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OverridePhysicsShape(::UnityEngine::Sprite* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Sprite*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_OVERRIDEPHYSICSSHAPE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void OverrideGeometry(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_OVERRIDEGEOMETRY_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Sprite* Create(::UnityEngine::Rect* arg, ::UnityEngine::Vector2* arg, ::System::Single arg, ::UnityEngine::Texture2D* arg)
		{
			return (return (::UnityEngine::Sprite*(*)(::UnityEngine::Rect*, ::UnityEngine::Vector2*, ::System::Single, ::UnityEngine::Texture2D*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_CREATE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::Sprite* Create(::UnityEngine::Rect* arg, ::UnityEngine::Vector2* arg, ::System::Single arg)
		{
			return (return (::UnityEngine::Sprite*(*)(::UnityEngine::Rect*, ::UnityEngine::Vector2*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_CREATE_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::Sprite* Create(::UnityEngine::Texture2D* arg, ::UnityEngine::Rect* arg, ::UnityEngine::Vector2* arg, ::System::Single arg, ::System::UInt32 arg, ::UnityEngine::SpriteMeshType* arg, ::UnityEngine::Vector4* arg, ::System::Boolean arg)
		{
			return (return (::UnityEngine::Sprite*(*)(::UnityEngine::Texture2D*, ::UnityEngine::Rect*, ::UnityEngine::Vector2*, ::System::Single, ::System::UInt32, ::UnityEngine::SpriteMeshType*, ::UnityEngine::Vector4*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_CREATE_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::Sprite* Create(::UnityEngine::Texture2D* arg, ::UnityEngine::Rect* arg, ::UnityEngine::Vector2* arg, ::System::Single arg, ::System::UInt32 arg, ::UnityEngine::SpriteMeshType* arg, ::UnityEngine::Vector4* arg)
		{
			return (return (::UnityEngine::Sprite*(*)(::UnityEngine::Texture2D*, ::UnityEngine::Rect*, ::UnityEngine::Vector2*, ::System::Single, ::System::UInt32, ::UnityEngine::SpriteMeshType*, ::UnityEngine::Vector4*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_CREATE_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::Sprite* Create(::UnityEngine::Texture2D* arg, ::UnityEngine::Rect* arg, ::UnityEngine::Vector2* arg, ::System::Single arg, ::System::UInt32 arg, ::UnityEngine::SpriteMeshType* arg)
		{
			return (return (::UnityEngine::Sprite*(*)(::UnityEngine::Texture2D*, ::UnityEngine::Rect*, ::UnityEngine::Vector2*, ::System::Single, ::System::UInt32, ::UnityEngine::SpriteMeshType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_CREATE_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::Sprite* Create(::UnityEngine::Texture2D* arg, ::UnityEngine::Rect* arg, ::UnityEngine::Vector2* arg, ::System::Single arg, ::System::UInt32 arg)
		{
			return (return (::UnityEngine::Sprite*(*)(::UnityEngine::Texture2D*, ::UnityEngine::Rect*, ::UnityEngine::Vector2*, ::System::Single, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_CREATE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::Sprite* Create(::UnityEngine::Texture2D* arg, ::UnityEngine::Rect* arg, ::UnityEngine::Vector2* arg, ::System::Single arg)
		{
			return (return (::UnityEngine::Sprite*(*)(::UnityEngine::Texture2D*, ::UnityEngine::Rect*, ::UnityEngine::Vector2*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_CREATE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::Sprite* Create(::UnityEngine::Texture2D* arg, ::UnityEngine::Rect* arg, ::UnityEngine::Vector2* arg)
		{
			return (return (::UnityEngine::Sprite*(*)(::UnityEngine::Texture2D*, ::UnityEngine::Rect*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_CREATE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void GetTextureRect_Injected(::UnityEngine::Rect&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rect&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_GETTEXTURERECT_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void GetTextureRectOffset_Injected(::UnityEngine::Vector2&* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_GETTEXTURERECTOFFSET_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void GetInnerUVs_Injected(::UnityEngine::Vector4&* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector4&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_GETINNERUVS_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void GetOuterUVs_Injected(::UnityEngine::Vector4&* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector4&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_GETOUTERUVS_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void GetPadding_Injected(::UnityEngine::Vector4&* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector4&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_GETPADDING_INJECTED_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Sprite* CreateSpriteWithoutTextureScripting_Injected(::UnityEngine::Rect&* arg, ::UnityEngine::Vector2&* arg, ::System::Single arg, ::UnityEngine::Texture2D* arg)
		{
			return (return (::UnityEngine::Sprite*(*)(::UnityEngine::Rect&*, ::UnityEngine::Vector2&*, ::System::Single, ::UnityEngine::Texture2D*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_CREATESPRITEWITHOUTTEXTURESCRIPTING_INJECTED_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::Sprite* CreateSprite_Injected(::UnityEngine::Texture2D* arg, ::UnityEngine::Rect&* arg, ::UnityEngine::Vector2&* arg, ::System::Single arg, ::System::UInt32 arg, ::UnityEngine::SpriteMeshType* arg, ::UnityEngine::Vector4&* arg, ::System::Boolean arg)
		{
			return (return (::UnityEngine::Sprite*(*)(::UnityEngine::Texture2D*, ::UnityEngine::Rect&*, ::UnityEngine::Vector2&*, ::System::Single, ::System::UInt32, ::UnityEngine::SpriteMeshType*, ::UnityEngine::Vector4&*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_CREATESPRITE_INJECTED_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void get_bounds_Injected(::UnityEngine::Bounds&* arg)
		{
			((::System::Void(*)(::UnityEngine::Bounds&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_GET_BOUNDS_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void get_rect_Injected(::UnityEngine::Rect&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rect&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_GET_RECT_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void get_border_Injected(::UnityEngine::Vector4&* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector4&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_GET_BORDER_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void get_pivot_Injected(::UnityEngine::Vector2&* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_GET_PIVOT_INJECTED_OFFSET))(arg, nullptr);
		}

	};
}

