#pragma once
#include "../unitysdk.h"

namespace TMPro { class TMP_FontAsset; }
namespace TMPro { class TMP_SpriteAsset; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace TMPro { class TextMeshProUGUI; }
namespace UnityEngine { class Transform; }
namespace UnityEngine { class Texture; }
namespace TMPro { class TMP_Text; }
namespace TMPro { class TMP_SubMeshUI; }
namespace TMPro { class MaterialReference; }
namespace UnityEngine { class Rect; }
namespace UnityEngine::UI { class CanvasUpdate; }

#define TMPRO_TMP_SUBMESHUI_GET_FONTASSET_OFFSET UNITYSDK_OFFSET(0xA17D020)
#define TMPRO_TMP_SUBMESHUI_SET_FONTASSET_OFFSET UNITYSDK_OFFSET(0xA17D030)
#define TMPRO_TMP_SUBMESHUI_GET_SPRITEASSET_OFFSET UNITYSDK_OFFSET(0xA17D050)
#define TMPRO_TMP_SUBMESHUI_SET_SPRITEASSET_OFFSET UNITYSDK_OFFSET(0xA17D060)
#define TMPRO_TMP_SUBMESHUI_GET_MAINTEXTURE_OFFSET UNITYSDK_OFFSET(0xA17D080)
#define TMPRO_TMP_SUBMESHUI_GET_MATERIAL_OFFSET UNITYSDK_OFFSET(0xA17D130)
#define TMPRO_TMP_SUBMESHUI_SET_MATERIAL_OFFSET UNITYSDK_OFFSET(0xA17D2B0)
#define TMPRO_TMP_SUBMESHUI_GET_SHAREDMATERIAL_OFFSET UNITYSDK_OFFSET(0xA17D4A0)
#define TMPRO_TMP_SUBMESHUI_SET_SHAREDMATERIAL_OFFSET UNITYSDK_OFFSET(0xA17D4B0)
#define TMPRO_TMP_SUBMESHUI_GET_FALLBACKMATERIAL_OFFSET UNITYSDK_OFFSET(0xA17D580)
#define TMPRO_TMP_SUBMESHUI_SET_FALLBACKMATERIAL_OFFSET UNITYSDK_OFFSET(0xA17D590)
#define TMPRO_TMP_SUBMESHUI_GET_FALLBACKSOURCEMATERIAL_OFFSET UNITYSDK_OFFSET(0xA17D6C0)
#define TMPRO_TMP_SUBMESHUI_SET_FALLBACKSOURCEMATERIAL_OFFSET UNITYSDK_OFFSET(0xA17D6D0)
#define TMPRO_TMP_SUBMESHUI_GET_MATERIALFORRENDERING_OFFSET UNITYSDK_OFFSET(0xA17D6F0)
#define TMPRO_TMP_SUBMESHUI_GET_ISDEFAULTMATERIAL_OFFSET UNITYSDK_OFFSET(0xA17D750)
#define TMPRO_TMP_SUBMESHUI_SET_ISDEFAULTMATERIAL_OFFSET UNITYSDK_OFFSET(0xA17D760)
#define TMPRO_TMP_SUBMESHUI_GET_PADDING_OFFSET UNITYSDK_OFFSET(0xA17D770)
#define TMPRO_TMP_SUBMESHUI_SET_PADDING_OFFSET UNITYSDK_OFFSET(0xA17D780)
#define TMPRO_TMP_SUBMESHUI_GET_MESH_OFFSET UNITYSDK_OFFSET(0xA17D790)
#define TMPRO_TMP_SUBMESHUI_SET_MESH_OFFSET UNITYSDK_OFFSET(0xA17D850)
#define TMPRO_TMP_SUBMESHUI_GET_TEXTCOMPONENT_OFFSET UNITYSDK_OFFSET(0xA17D870)
#define TMPRO_TMP_SUBMESHUI_ADDSUBTEXTOBJECT_OFFSET UNITYSDK_OFFSET(0xA17D910)
#define TMPRO_TMP_SUBMESHUI_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA17DCD0)
#define TMPRO_TMP_SUBMESHUI_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xA17DD40)
#define TMPRO_TMP_SUBMESHUI_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xA17DDF0)
#define TMPRO_TMP_SUBMESHUI_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0xA17DFC0)
#define TMPRO_TMP_SUBMESHUI_GETMODIFIEDMATERIAL_OFFSET UNITYSDK_OFFSET(0xA17E020)
#define TMPRO_TMP_SUBMESHUI_GETPADDINGFORMATERIAL_OFFSET UNITYSDK_OFFSET(0xA17D430)
#define TMPRO_TMP_SUBMESHUI_GETPADDINGFORMATERIAL_OFFSET UNITYSDK_OFFSET(0xA17E170)
#define TMPRO_TMP_SUBMESHUI_UPDATEMESHPADDING_OFFSET UNITYSDK_OFFSET(0xA17E1E0)
#define TMPRO_TMP_SUBMESHUI_SETALLDIRTY_OFFSET UNITYSDK_OFFSET(0xA17E250)
#define TMPRO_TMP_SUBMESHUI_SETVERTICESDIRTY_OFFSET UNITYSDK_OFFSET(0xA17E260)
#define TMPRO_TMP_SUBMESHUI_SETLAYOUTDIRTY_OFFSET UNITYSDK_OFFSET(0xA17E320)
#define TMPRO_TMP_SUBMESHUI_SETMATERIALDIRTY_OFFSET UNITYSDK_OFFSET(0xA17E330)
#define TMPRO_TMP_SUBMESHUI_SETPIVOTDIRTY_OFFSET UNITYSDK_OFFSET(0xA17E380)
#define TMPRO_TMP_SUBMESHUI_GETROOTCANVASTRANSFORM_OFFSET UNITYSDK_OFFSET(0xA17E400)
#define TMPRO_TMP_SUBMESHUI_CULL_OFFSET UNITYSDK_OFFSET(0xA17E4B0)
#define TMPRO_TMP_SUBMESHUI_UPDATEGEOMETRY_OFFSET UNITYSDK_OFFSET(0xA17E4C0)
#define TMPRO_TMP_SUBMESHUI_REBUILD_OFFSET UNITYSDK_OFFSET(0xA17E4D0)
#define TMPRO_TMP_SUBMESHUI_REFRESHMATERIAL_OFFSET UNITYSDK_OFFSET(0xA17E510)
#define TMPRO_TMP_SUBMESHUI_UPDATEMATERIAL_OFFSET UNITYSDK_OFFSET(0xA17E530)
#define TMPRO_TMP_SUBMESHUI_RECALCULATECLIPPING_OFFSET UNITYSDK_OFFSET(0xA17E6F0)
#define TMPRO_TMP_SUBMESHUI_GETMATERIAL_OFFSET UNITYSDK_OFFSET(0xA17E700)
#define TMPRO_TMP_SUBMESHUI_GETMATERIAL_OFFSET UNITYSDK_OFFSET(0xA17D140)
#define TMPRO_TMP_SUBMESHUI_CREATEMATERIALINSTANCE_OFFSET UNITYSDK_OFFSET(0xA17E710)
#define TMPRO_TMP_SUBMESHUI_GETSHAREDMATERIAL_OFFSET UNITYSDK_OFFSET(0xA17E7C0)
#define TMPRO_TMP_SUBMESHUI_SETSHAREDMATERIAL_OFFSET UNITYSDK_OFFSET(0xA17D4C0)
#define TMPRO_TMP_SUBMESHUI_.CTOR_OFFSET UNITYSDK_OFFSET(0xA17E7F0)

namespace TMPro
{
	inline static constexpr unsigned int TMP_SubMeshUI_TypeDefinitionIndex = 33729;

	class TMP_SubMeshUI : public Il2CppObject
	{
	public:
		::TMPro::TMP_FontAsset* m_fontAsset; // 0xD8
		::TMPro::TMP_SpriteAsset* m_spriteAsset; // 0xE0
		::UnityEngine::Material* m_material; // 0xE8
		::UnityEngine::Material* m_sharedMaterial; // 0xF0
		::UnityEngine::Material* m_fallbackMaterial; // 0xF8
		::UnityEngine::Material* m_fallbackSourceMaterial; // 0x100
		::System::Boolean m_isDefaultMaterial; // 0x108
		::System::Single m_padding; // 0x10C
		::UnityEngine::Mesh* m_mesh; // 0x110
		::TMPro::TextMeshProUGUI* m_TextComponent; // 0x118
		::System::Boolean m_isRegisteredForEvents; // 0x120
		::System::Boolean m_materialDirty; // 0x121
		::System::Int32 m_materialReferenceIndex; // 0x124
		::UnityEngine::Transform* m_RootCanvasTransform; // 0x128

		::TMPro::TMP_FontAsset* get_fontAsset()
		{
			return (return (::TMPro::TMP_FontAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_GET_FONTASSET_OFFSET))(nullptr);
		}

		::System::Void set_fontAsset(::TMPro::TMP_FontAsset* arg)
		{
			((::System::Void(*)(::TMPro::TMP_FontAsset*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_SET_FONTASSET_OFFSET))(arg, nullptr);
		}

		::TMPro::TMP_SpriteAsset* get_spriteAsset()
		{
			return (return (::TMPro::TMP_SpriteAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_GET_SPRITEASSET_OFFSET))(nullptr);
		}

		::System::Void set_spriteAsset(::TMPro::TMP_SpriteAsset* arg)
		{
			((::System::Void(*)(::TMPro::TMP_SpriteAsset*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_SET_SPRITEASSET_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Texture* get_mainTexture()
		{
			return (return (::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_GET_MAINTEXTURE_OFFSET))(nullptr);
		}

		::UnityEngine::Material* get_material()
		{
			return (return (::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_GET_MATERIAL_OFFSET))(nullptr);
		}

		::System::Void set_material(::UnityEngine::Material* arg)
		{
			((::System::Void(*)(::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_SET_MATERIAL_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Material* get_sharedMaterial()
		{
			return (return (::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_GET_SHAREDMATERIAL_OFFSET))(nullptr);
		}

		::System::Void set_sharedMaterial(::UnityEngine::Material* arg)
		{
			((::System::Void(*)(::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_SET_SHAREDMATERIAL_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Material* get_fallbackMaterial()
		{
			return (return (::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_GET_FALLBACKMATERIAL_OFFSET))(nullptr);
		}

		::System::Void set_fallbackMaterial(::UnityEngine::Material* arg)
		{
			((::System::Void(*)(::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_SET_FALLBACKMATERIAL_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Material* get_fallbackSourceMaterial()
		{
			return (return (::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_GET_FALLBACKSOURCEMATERIAL_OFFSET))(nullptr);
		}

		::System::Void set_fallbackSourceMaterial(::UnityEngine::Material* arg)
		{
			((::System::Void(*)(::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_SET_FALLBACKSOURCEMATERIAL_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Material* get_materialForRendering()
		{
			return (return (::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_GET_MATERIALFORRENDERING_OFFSET))(nullptr);
		}

		::System::Boolean get_isDefaultMaterial()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_GET_ISDEFAULTMATERIAL_OFFSET))(nullptr);
		}

		::System::Void set_isDefaultMaterial(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_SET_ISDEFAULTMATERIAL_OFFSET))(arg, nullptr);
		}

		::System::Single get_padding()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_GET_PADDING_OFFSET))(nullptr);
		}

		::System::Void set_padding(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_SET_PADDING_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Mesh* get_mesh()
		{
			return (return (::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_GET_MESH_OFFSET))(nullptr);
		}

		::System::Void set_mesh(::UnityEngine::Mesh* arg)
		{
			((::System::Void(*)(::UnityEngine::Mesh*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_SET_MESH_OFFSET))(arg, nullptr);
		}

		::TMPro::TMP_Text* get_textComponent()
		{
			return (return (::TMPro::TMP_Text*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_GET_TEXTCOMPONENT_OFFSET))(nullptr);
		}

		::TMPro::TMP_SubMeshUI* AddSubTextObject(::TMPro::TextMeshProUGUI* arg, ::TMPro::MaterialReference* arg)
		{
			return (return (::TMPro::TMP_SubMeshUI*(*)(::TMPro::TextMeshProUGUI*, ::TMPro::MaterialReference*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_ADDSUBTEXTOBJECT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void OnTransformParentChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_ONTRANSFORMPARENTCHANGED_OFFSET))(nullptr);
		}

		::UnityEngine::Material* GetModifiedMaterial(::UnityEngine::Material* arg)
		{
			return (return (::UnityEngine::Material*(*)(::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_GETMODIFIEDMATERIAL_OFFSET))(arg, nullptr);
		}

		::System::Single GetPaddingForMaterial()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_GETPADDINGFORMATERIAL_OFFSET))(nullptr);
		}

		::System::Single GetPaddingForMaterial(::UnityEngine::Material* arg)
		{
			return (return (::System::Single(*)(::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_GETPADDINGFORMATERIAL_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateMeshPadding(::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_UPDATEMESHPADDING_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetAllDirty()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_SETALLDIRTY_OFFSET))(nullptr);
		}

		::System::Void SetVerticesDirty()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_SETVERTICESDIRTY_OFFSET))(nullptr);
		}

		::System::Void SetLayoutDirty()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_SETLAYOUTDIRTY_OFFSET))(nullptr);
		}

		::System::Void SetMaterialDirty()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_SETMATERIALDIRTY_OFFSET))(nullptr);
		}

		::System::Void SetPivotDirty()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_SETPIVOTDIRTY_OFFSET))(nullptr);
		}

		::UnityEngine::Transform* GetRootCanvasTransform()
		{
			return (return (::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_GETROOTCANVASTRANSFORM_OFFSET))(nullptr);
		}

		::System::Void Cull(::UnityEngine::Rect* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Rect*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_CULL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void UpdateGeometry()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_UPDATEGEOMETRY_OFFSET))(nullptr);
		}

		::System::Void Rebuild(::UnityEngine::UI::CanvasUpdate* arg)
		{
			((::System::Void(*)(::UnityEngine::UI::CanvasUpdate*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_REBUILD_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshMaterial()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_REFRESHMATERIAL_OFFSET))(nullptr);
		}

		::System::Void UpdateMaterial()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_UPDATEMATERIAL_OFFSET))(nullptr);
		}

		::System::Void RecalculateClipping()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_RECALCULATECLIPPING_OFFSET))(nullptr);
		}

		::UnityEngine::Material* GetMaterial()
		{
			return (return (::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_GETMATERIAL_OFFSET))(nullptr);
		}

		::UnityEngine::Material* GetMaterial(::UnityEngine::Material* arg)
		{
			return (return (::UnityEngine::Material*(*)(::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_GETMATERIAL_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Material* CreateMaterialInstance(::UnityEngine::Material* arg)
		{
			return (return (::UnityEngine::Material*(*)(::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_CREATEMATERIALINSTANCE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Material* GetSharedMaterial()
		{
			return (return (::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_GETSHAREDMATERIAL_OFFSET))(nullptr);
		}

		::System::Void SetSharedMaterial(::UnityEngine::Material* arg)
		{
			((::System::Void(*)(::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_SETSHAREDMATERIAL_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_.CTOR_OFFSET))(nullptr);
		}

	};
}

