#pragma once
#include "../unitysdk.h"

namespace TMPro { class TMP_FontAsset; }
namespace TMPro { class TMP_SpriteAsset; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class MeshFilter; }
namespace UnityEngine { class Mesh; }
namespace TMPro { class TextMeshPro; }
namespace TMPro { class TMP_SubMesh; }
namespace TMPro { class MaterialReference; }
namespace TMPro { class TMP_Text; }

#define TMPRO_TMP_SUBMESH_GETSHAREDMATERIAL_OFFSET UNITYSDK_OFFSET(0xA17BC00)
#define TMPRO_TMP_SUBMESH_GET_SPRITEASSET_OFFSET UNITYSDK_OFFSET(0xA17BCA0)
#define TMPRO_TMP_SUBMESH_SETVERTICESDIRTY_OFFSET UNITYSDK_OFFSET(0xA17BCB0)
#define TMPRO_TMP_SUBMESH_SET_SHAREDMATERIAL_OFFSET UNITYSDK_OFFSET(0xA17BD60)
#define TMPRO_TMP_SUBMESH_SET_PADDING_OFFSET UNITYSDK_OFFSET(0xA17BE00)
#define TMPRO_TMP_SUBMESH_SET_FALLBACKMATERIAL_OFFSET UNITYSDK_OFFSET(0xA17BE10)
#define TMPRO_TMP_SUBMESH_ADDSUBTEXTOBJECT_OFFSET UNITYSDK_OFFSET(0xA17BF40)
#define TMPRO_TMP_SUBMESH_SET_FONTASSET_OFFSET UNITYSDK_OFFSET(0xA17C3B0)
#define TMPRO_TMP_SUBMESH_SET_SPRITEASSET_OFFSET UNITYSDK_OFFSET(0xA17C3C0)
#define TMPRO_TMP_SUBMESH_GET_ISDEFAULTMATERIAL_OFFSET UNITYSDK_OFFSET(0xA17C3D0)
#define TMPRO_TMP_SUBMESH_GET_SHAREDMATERIAL_OFFSET UNITYSDK_OFFSET(0xA17C3E0)
#define TMPRO_TMP_SUBMESH_SET_MESH_OFFSET UNITYSDK_OFFSET(0xA17C3F0)
#define TMPRO_TMP_SUBMESH_GET_FONTASSET_OFFSET UNITYSDK_OFFSET(0xA17C400)
#define TMPRO_TMP_SUBMESH_GETMATERIAL_OFFSET UNITYSDK_OFFSET(0xA17C410)
#define TMPRO_TMP_SUBMESH_GET_FALLBACKSOURCEMATERIAL_OFFSET UNITYSDK_OFFSET(0xA17C6D0)
#define TMPRO_TMP_SUBMESH_SET_ISDEFAULTMATERIAL_OFFSET UNITYSDK_OFFSET(0xA17C6E0)
#define TMPRO_TMP_SUBMESH_GETPADDINGFORMATERIAL_OFFSET UNITYSDK_OFFSET(0xA17C650)
#define TMPRO_TMP_SUBMESH_UPDATEMATERIAL_OFFSET UNITYSDK_OFFSET(0xA17C6F0)
#define TMPRO_TMP_SUBMESH_GET_MESHFILTER_OFFSET UNITYSDK_OFFSET(0xA17C920)
#define TMPRO_TMP_SUBMESH_SETMATERIALDIRTY_OFFSET UNITYSDK_OFFSET(0xA17C6C0)
#define TMPRO_TMP_SUBMESH_GET_MATERIAL_OFFSET UNITYSDK_OFFSET(0xA17CA30)
#define TMPRO_TMP_SUBMESH_GET_MESH_OFFSET UNITYSDK_OFFSET(0xA17CA40)
#define TMPRO_TMP_SUBMESH_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xA17CAF0)
#define TMPRO_TMP_SUBMESH_GET_TEXTCOMPONENT_OFFSET UNITYSDK_OFFSET(0xA17C890)
#define TMPRO_TMP_SUBMESH_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xA17CBB0)
#define TMPRO_TMP_SUBMESH_GET_RENDERER_OFFSET UNITYSDK_OFFSET(0xA17C320)
#define TMPRO_TMP_SUBMESH_SET_MATERIAL_OFFSET UNITYSDK_OFFSET(0xA17CD10)
#define TMPRO_TMP_SUBMESH_UPDATEMESHPADDING_OFFSET UNITYSDK_OFFSET(0xA17CE00)
#define TMPRO_TMP_SUBMESH_SETSHAREDMATERIAL_OFFSET UNITYSDK_OFFSET(0xA17BD70)
#define TMPRO_TMP_SUBMESH_GET_PADDING_OFFSET UNITYSDK_OFFSET(0xA17CE60)
#define TMPRO_TMP_SUBMESH_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA17CE70)
#define TMPRO_TMP_SUBMESH_.CTOR_OFFSET UNITYSDK_OFFSET(0xA17CF80)
#define TMPRO_TMP_SUBMESH_DESTROYSELF_OFFSET UNITYSDK_OFFSET(0xA17CF90)
#define TMPRO_TMP_SUBMESH_SET_FALLBACKSOURCEMATERIAL_OFFSET UNITYSDK_OFFSET(0xA17D000)
#define TMPRO_TMP_SUBMESH_GET_FALLBACKMATERIAL_OFFSET UNITYSDK_OFFSET(0xA17D010)
#define TMPRO_TMP_SUBMESH_CREATEMATERIALINSTANCE_OFFSET UNITYSDK_OFFSET(0xA17C5A0)

namespace TMPro
{
	inline static constexpr unsigned int TMP_SubMesh_TypeDefinitionIndex = 33728;

	class TMP_SubMesh : public Il2CppObject
	{
	public:
		::TMPro::TMP_FontAsset* m_fontAsset; // 0x18
		::TMPro::TMP_SpriteAsset* m_spriteAsset; // 0x20
		::UnityEngine::Material* m_material; // 0x28
		::UnityEngine::Material* m_sharedMaterial; // 0x30
		::UnityEngine::Material* m_fallbackMaterial; // 0x38
		::UnityEngine::Material* m_fallbackSourceMaterial; // 0x40
		::System::Boolean m_isDefaultMaterial; // 0x48
		::System::Single m_padding; // 0x4C
		::UnityEngine::Renderer* m_renderer; // 0x50
		::UnityEngine::MeshFilter* m_meshFilter; // 0x58
		::UnityEngine::Mesh* m_mesh; // 0x60
		::TMPro::TextMeshPro* m_TextComponent; // 0x68
		::System::Boolean m_isRegisteredForEvents; // 0x70

		::UnityEngine::Material* GetSharedMaterial()
		{
			return (return (::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESH_GETSHAREDMATERIAL_OFFSET))(nullptr);
		}

		::TMPro::TMP_SpriteAsset* get_spriteAsset()
		{
			return (return (::TMPro::TMP_SpriteAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESH_GET_SPRITEASSET_OFFSET))(nullptr);
		}

		::System::Void SetVerticesDirty()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESH_SETVERTICESDIRTY_OFFSET))(nullptr);
		}

		::System::Void set_sharedMaterial(::UnityEngine::Material* arg)
		{
			((::System::Void(*)(::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESH_SET_SHAREDMATERIAL_OFFSET))(arg, nullptr);
		}

		::System::Void set_padding(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESH_SET_PADDING_OFFSET))(arg, nullptr);
		}

		::System::Void set_fallbackMaterial(::UnityEngine::Material* arg)
		{
			((::System::Void(*)(::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESH_SET_FALLBACKMATERIAL_OFFSET))(arg, nullptr);
		}

		::TMPro::TMP_SubMesh* AddSubTextObject(::TMPro::TextMeshPro* arg, ::TMPro::MaterialReference* arg)
		{
			return (return (::TMPro::TMP_SubMesh*(*)(::TMPro::TextMeshPro*, ::TMPro::MaterialReference*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESH_ADDSUBTEXTOBJECT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void set_fontAsset(::TMPro::TMP_FontAsset* arg)
		{
			((::System::Void(*)(::TMPro::TMP_FontAsset*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESH_SET_FONTASSET_OFFSET))(arg, nullptr);
		}

		::System::Void set_spriteAsset(::TMPro::TMP_SpriteAsset* arg)
		{
			((::System::Void(*)(::TMPro::TMP_SpriteAsset*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESH_SET_SPRITEASSET_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_isDefaultMaterial()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESH_GET_ISDEFAULTMATERIAL_OFFSET))(nullptr);
		}

		::UnityEngine::Material* get_sharedMaterial()
		{
			return (return (::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESH_GET_SHAREDMATERIAL_OFFSET))(nullptr);
		}

		::System::Void set_mesh(::UnityEngine::Mesh* arg)
		{
			((::System::Void(*)(::UnityEngine::Mesh*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESH_SET_MESH_OFFSET))(arg, nullptr);
		}

		::TMPro::TMP_FontAsset* get_fontAsset()
		{
			return (return (::TMPro::TMP_FontAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESH_GET_FONTASSET_OFFSET))(nullptr);
		}

		::UnityEngine::Material* GetMaterial(::UnityEngine::Material* arg)
		{
			return (return (::UnityEngine::Material*(*)(::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESH_GETMATERIAL_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Material* get_fallbackSourceMaterial()
		{
			return (return (::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESH_GET_FALLBACKSOURCEMATERIAL_OFFSET))(nullptr);
		}

		::System::Void set_isDefaultMaterial(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESH_SET_ISDEFAULTMATERIAL_OFFSET))(arg, nullptr);
		}

		::System::Single GetPaddingForMaterial()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESH_GETPADDINGFORMATERIAL_OFFSET))(nullptr);
		}

		::System::Void UpdateMaterial()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESH_UPDATEMATERIAL_OFFSET))(nullptr);
		}

		::UnityEngine::MeshFilter* get_meshFilter()
		{
			return (return (::UnityEngine::MeshFilter*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESH_GET_MESHFILTER_OFFSET))(nullptr);
		}

		::System::Void SetMaterialDirty()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESH_SETMATERIALDIRTY_OFFSET))(nullptr);
		}

		::UnityEngine::Material* get_material()
		{
			return (return (::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESH_GET_MATERIAL_OFFSET))(nullptr);
		}

		::UnityEngine::Mesh* get_mesh()
		{
			return (return (::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESH_GET_MESH_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESH_ONDISABLE_OFFSET))(nullptr);
		}

		::TMPro::TMP_Text* get_textComponent()
		{
			return (return (::TMPro::TMP_Text*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESH_GET_TEXTCOMPONENT_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESH_ONDESTROY_OFFSET))(nullptr);
		}

		::UnityEngine::Renderer* get_renderer()
		{
			return (return (::UnityEngine::Renderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESH_GET_RENDERER_OFFSET))(nullptr);
		}

		::System::Void set_material(::UnityEngine::Material* arg)
		{
			((::System::Void(*)(::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESH_SET_MATERIAL_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateMeshPadding(::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESH_UPDATEMESHPADDING_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetSharedMaterial(::UnityEngine::Material* arg)
		{
			((::System::Void(*)(::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESH_SETSHAREDMATERIAL_OFFSET))(arg, nullptr);
		}

		::System::Single get_padding()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESH_GET_PADDING_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESH_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESH_.CTOR_OFFSET))(nullptr);
		}

		::System::Void DestroySelf()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESH_DESTROYSELF_OFFSET))(nullptr);
		}

		::System::Void set_fallbackSourceMaterial(::UnityEngine::Material* arg)
		{
			((::System::Void(*)(::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESH_SET_FALLBACKSOURCEMATERIAL_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Material* get_fallbackMaterial()
		{
			return (return (::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESH_GET_FALLBACKMATERIAL_OFFSET))(nullptr);
		}

		::UnityEngine::Material* CreateMaterialInstance(::UnityEngine::Material* arg)
		{
			return (return (::UnityEngine::Material*(*)(::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESH_CREATEMATERIALINSTANCE_OFFSET))(arg, nullptr);
		}

	};
}

