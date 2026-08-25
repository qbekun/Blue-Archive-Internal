#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Color; }
namespace UnityEngine { class Vector4; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class CanvasRenderer; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine::Events { class UnityAction; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine::UI { class VertexHelper; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::UI { class CanvasUpdate; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Rect; }
namespace UnityEngine { class Transform; }

#define UNITYENGINE_UI_GRAPHIC_GET_DEFAULTGRAPHICMATERIAL_OFFSET UNITYSDK_OFFSET(0xA2F76B0)
#define UNITYENGINE_UI_GRAPHIC_GET_COLOR_OFFSET UNITYSDK_OFFSET(0xA2F77A0)
#define UNITYENGINE_UI_GRAPHIC_SET_COLOR_OFFSET UNITYSDK_OFFSET(0xA2F77B0)
#define UNITYENGINE_UI_GRAPHIC_GET_RAYCASTTARGET_OFFSET UNITYSDK_OFFSET(0xA2F77F0)
#define UNITYENGINE_UI_GRAPHIC_SET_RAYCASTTARGET_OFFSET UNITYSDK_OFFSET(0xA2F7800)
#define UNITYENGINE_UI_GRAPHIC_GET_RAYCASTPADDING_OFFSET UNITYSDK_OFFSET(0xA2F7D30)
#define UNITYENGINE_UI_GRAPHIC_SET_RAYCASTPADDING_OFFSET UNITYSDK_OFFSET(0xA2F7D40)
#define UNITYENGINE_UI_GRAPHIC_GET_USELEGACYMESHGENERATION_OFFSET UNITYSDK_OFFSET(0xA2F7D50)
#define UNITYENGINE_UI_GRAPHIC_SET_USELEGACYMESHGENERATION_OFFSET UNITYSDK_OFFSET(0xA2F7D60)
#define UNITYENGINE_UI_GRAPHIC_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2F7D70)
#define UNITYENGINE_UI_GRAPHIC_SETALLDIRTY_OFFSET UNITYSDK_OFFSET(0xA2F7E40)
#define UNITYENGINE_UI_GRAPHIC_SETLAYOUTDIRTY_OFFSET UNITYSDK_OFFSET(0xA2F8000)
#define UNITYENGINE_UI_GRAPHIC_SETVERTICESDIRTY_OFFSET UNITYSDK_OFFSET(0xA2F8160)
#define UNITYENGINE_UI_GRAPHIC_SETMATERIALDIRTY_OFFSET UNITYSDK_OFFSET(0xA2F8250)
#define UNITYENGINE_UI_GRAPHIC_SETRAYCASTDIRTY_OFFSET UNITYSDK_OFFSET(0xA2F7EB0)
#define UNITYENGINE_UI_GRAPHIC_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0xA2F8340)
#define UNITYENGINE_UI_GRAPHIC_ONBEFORETRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0xA2F8450)
#define UNITYENGINE_UI_GRAPHIC_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0xA2F8790)
#define UNITYENGINE_UI_GRAPHIC_GET_DEPTH_OFFSET UNITYSDK_OFFSET(0xA2F8BF0)
#define UNITYENGINE_UI_GRAPHIC_GET_RECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0xA2F8100)
#define UNITYENGINE_UI_GRAPHIC_GET_CANVAS_OFFSET UNITYSDK_OFFSET(0xA2F7950)
#define UNITYENGINE_UI_GRAPHIC_CACHECANVAS_OFFSET UNITYSDK_OFFSET(0xA2F8890)
#define UNITYENGINE_UI_GRAPHIC_GET_CANVASRENDERER_OFFSET UNITYSDK_OFFSET(0xA2F8C20)
#define UNITYENGINE_UI_GRAPHIC_GET_DEFAULTMATERIAL_OFFSET UNITYSDK_OFFSET(0xA2F8CD0)
#define UNITYENGINE_UI_GRAPHIC_GET_MATERIAL_OFFSET UNITYSDK_OFFSET(0xA2F8D30)
#define UNITYENGINE_UI_GRAPHIC_SET_MATERIAL_OFFSET UNITYSDK_OFFSET(0xA2F8DB0)
#define UNITYENGINE_UI_GRAPHIC_GET_MATERIALFORRENDERING_OFFSET UNITYSDK_OFFSET(0xA2F8E40)
#define UNITYENGINE_UI_GRAPHIC_GET_MAINTEXTURE_OFFSET UNITYSDK_OFFSET(0xA2F9050)
#define UNITYENGINE_UI_GRAPHIC_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA2F90A0)
#define UNITYENGINE_UI_GRAPHIC_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xA2F9210)
#define UNITYENGINE_UI_GRAPHIC_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xA2F95C0)
#define UNITYENGINE_UI_GRAPHIC_ONCANVASHIERARCHYCHANGED_OFFSET UNITYSDK_OFFSET(0xA2F9740)
#define UNITYENGINE_UI_GRAPHIC_ONCULLINGCHANGED_OFFSET UNITYSDK_OFFSET(0xA2F98D0)
#define UNITYENGINE_UI_GRAPHIC_REBUILD_OFFSET UNITYSDK_OFFSET(0xA2F99B0)
#define UNITYENGINE_UI_GRAPHIC_LAYOUTCOMPLETE_OFFSET UNITYSDK_OFFSET(0xA2F9A80)
#define UNITYENGINE_UI_GRAPHIC_GRAPHICUPDATECOMPLETE_OFFSET UNITYSDK_OFFSET(0xA2F9A90)
#define UNITYENGINE_UI_GRAPHIC_UPDATEMATERIAL_OFFSET UNITYSDK_OFFSET(0xA2F9AA0)
#define UNITYENGINE_UI_GRAPHIC_UPDATEGEOMETRY_OFFSET UNITYSDK_OFFSET(0xA2F9B60)
#define UNITYENGINE_UI_GRAPHIC_DOMESHGENERATION_OFFSET UNITYSDK_OFFSET(0xA2FA050)
#define UNITYENGINE_UI_GRAPHIC_DOLEGACYMESHGENERATION_OFFSET UNITYSDK_OFFSET(0xA2F9B80)
#define UNITYENGINE_UI_GRAPHIC_GET_WORKERMESH_OFFSET UNITYSDK_OFFSET(0xA2FA570)
#define UNITYENGINE_UI_GRAPHIC_ONFILLVBO_OFFSET UNITYSDK_OFFSET(0xA2FA6E0)
#define UNITYENGINE_UI_GRAPHIC_ONPOPULATEMESH_OFFSET UNITYSDK_OFFSET(0xA2FA6F0)
#define UNITYENGINE_UI_GRAPHIC_ONPOPULATEMESH_OFFSET UNITYSDK_OFFSET(0xA2FA780)
#define UNITYENGINE_UI_GRAPHIC_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0xA2FB230)
#define UNITYENGINE_UI_GRAPHIC_SETNATIVESIZE_OFFSET UNITYSDK_OFFSET(0xA2FB250)
#define UNITYENGINE_UI_GRAPHIC_RAYCAST_OFFSET UNITYSDK_OFFSET(0xA2FB260)
#define UNITYENGINE_UI_GRAPHIC_PIXELADJUSTPOINT_OFFSET UNITYSDK_OFFSET(0xA2FB780)
#define UNITYENGINE_UI_GRAPHIC_GETPIXELADJUSTEDRECT_OFFSET UNITYSDK_OFFSET(0xA2FAE80)
#define UNITYENGINE_UI_GRAPHIC_CROSSFADECOLOR_OFFSET UNITYSDK_OFFSET(0xA2FBA50)
#define UNITYENGINE_UI_GRAPHIC_CROSSFADECOLOR_OFFSET UNITYSDK_OFFSET(0xA2FBA90)
#define UNITYENGINE_UI_GRAPHIC_CREATECOLORFROMALPHA_OFFSET UNITYSDK_OFFSET(0xA2FBDE0)
#define UNITYENGINE_UI_GRAPHIC_CROSSFADEALPHA_OFFSET UNITYSDK_OFFSET(0xA2FBE00)
#define UNITYENGINE_UI_GRAPHIC_REGISTERDIRTYLAYOUTCALLBACK_OFFSET UNITYSDK_OFFSET(0xA2FBEB0)
#define UNITYENGINE_UI_GRAPHIC_UNREGISTERDIRTYLAYOUTCALLBACK_OFFSET UNITYSDK_OFFSET(0xA2FBF40)
#define UNITYENGINE_UI_GRAPHIC_REGISTERDIRTYVERTICESCALLBACK_OFFSET UNITYSDK_OFFSET(0xA2FBFD0)
#define UNITYENGINE_UI_GRAPHIC_UNREGISTERDIRTYVERTICESCALLBACK_OFFSET UNITYSDK_OFFSET(0xA2FC060)
#define UNITYENGINE_UI_GRAPHIC_REGISTERDIRTYMATERIALCALLBACK_OFFSET UNITYSDK_OFFSET(0xA2FC0F0)
#define UNITYENGINE_UI_GRAPHIC_UNREGISTERDIRTYMATERIALCALLBACK_OFFSET UNITYSDK_OFFSET(0xA2FC180)
#define UNITYENGINE_UI_GRAPHIC_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA2FC210)
#define UNITYENGINE_UI_GRAPHIC_UNITYENGINE.UI.ICANVASELEMENT.GET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0xA2FC2E0)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int Graphic_TypeDefinitionIndex = 34767;

	class Graphic : public Il2CppObject
	{
	public:
		::UnityEngine::Material* s_DefaultUI; // 0x0
		::UnityEngine::Texture2D* s_WhiteTexture; // 0x8
		::UnityEngine::Material* m_Material; // 0x18
		::UnityEngine::Color* m_Color; // 0x20
		::System::Boolean m_SkipLayoutUpdate; // 0x30
		::System::Boolean m_SkipMaterialUpdate; // 0x31
		::System::Boolean m_RaycastTarget; // 0x32
		::System::Boolean m_RaycastTargetCache; // 0x33
		::UnityEngine::Vector4* m_RaycastPadding; // 0x34
		::UnityEngine::RectTransform* m_RectTransform; // 0x48
		::UnityEngine::CanvasRenderer* m_CanvasRenderer; // 0x50
		::UnityEngine::Canvas* m_Canvas; // 0x58
		::System::Boolean m_VertsDirty; // 0x60
		::System::Boolean m_MaterialDirty; // 0x61
		::UnityEngine::Events::UnityAction* m_OnDirtyLayoutCallback; // 0x68
		::UnityEngine::Events::UnityAction* m_OnDirtyVertsCallback; // 0x70
		::UnityEngine::Events::UnityAction* m_OnDirtyMaterialCallback; // 0x78
		::UnityEngine::Mesh* s_Mesh; // 0x10
		::UnityEngine::UI::VertexHelper* s_VertexHelper; // 0x18
		::UnityEngine::Mesh* m_CachedMesh; // 0x80
		::Il2CppArray<::System::Object*>* m_CachedUvs; // 0x88
		Il2CppObject* m_ColorTweenRunner; // 0x90
		::System::Boolean _useLegacyMeshGeneration_k__BackingField; // 0x98

		::UnityEngine::Material* get_defaultGraphicMaterial()
		{
			return (return (::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_GET_DEFAULTGRAPHICMATERIAL_OFFSET))(nullptr);
		}

		::UnityEngine::Color* get_color()
		{
			return (return (::UnityEngine::Color*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_GET_COLOR_OFFSET))(nullptr);
		}

		::System::Void set_color(::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_SET_COLOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_raycastTarget()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_GET_RAYCASTTARGET_OFFSET))(nullptr);
		}

		::System::Void set_raycastTarget(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_SET_RAYCASTTARGET_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector4* get_raycastPadding()
		{
			return (return (::UnityEngine::Vector4*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_GET_RAYCASTPADDING_OFFSET))(nullptr);
		}

		::System::Void set_raycastPadding(::UnityEngine::Vector4* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector4*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_SET_RAYCASTPADDING_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_useLegacyMeshGeneration()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_GET_USELEGACYMESHGENERATION_OFFSET))(nullptr);
		}

		::System::Void set_useLegacyMeshGeneration(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_SET_USELEGACYMESHGENERATION_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetAllDirty()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_SETALLDIRTY_OFFSET))(nullptr);
		}

		::System::Void SetLayoutDirty()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_SETLAYOUTDIRTY_OFFSET))(nullptr);
		}

		::System::Void SetVerticesDirty()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_SETVERTICESDIRTY_OFFSET))(nullptr);
		}

		::System::Void SetMaterialDirty()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_SETMATERIALDIRTY_OFFSET))(nullptr);
		}

		::System::Void SetRaycastDirty()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_SETRAYCASTDIRTY_OFFSET))(nullptr);
		}

		::System::Void OnRectTransformDimensionsChange()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET))(nullptr);
		}

		::System::Void OnBeforeTransformParentChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_ONBEFORETRANSFORMPARENTCHANGED_OFFSET))(nullptr);
		}

		::System::Void OnTransformParentChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_ONTRANSFORMPARENTCHANGED_OFFSET))(nullptr);
		}

		::System::Int32 get_depth()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_GET_DEPTH_OFFSET))(nullptr);
		}

		::UnityEngine::RectTransform* get_rectTransform()
		{
			return (return (::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_GET_RECTTRANSFORM_OFFSET))(nullptr);
		}

		::UnityEngine::Canvas* get_canvas()
		{
			return (return (::UnityEngine::Canvas*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_GET_CANVAS_OFFSET))(nullptr);
		}

		::System::Void CacheCanvas()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_CACHECANVAS_OFFSET))(nullptr);
		}

		::UnityEngine::CanvasRenderer* get_canvasRenderer()
		{
			return (return (::UnityEngine::CanvasRenderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_GET_CANVASRENDERER_OFFSET))(nullptr);
		}

		::UnityEngine::Material* get_defaultMaterial()
		{
			return (return (::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_GET_DEFAULTMATERIAL_OFFSET))(nullptr);
		}

		::UnityEngine::Material* get_material()
		{
			return (return (::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_GET_MATERIAL_OFFSET))(nullptr);
		}

		::System::Void set_material(::UnityEngine::Material* arg)
		{
			((::System::Void(*)(::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_SET_MATERIAL_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Material* get_materialForRendering()
		{
			return (return (::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_GET_MATERIALFORRENDERING_OFFSET))(nullptr);
		}

		::UnityEngine::Texture* get_mainTexture()
		{
			return (return (::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_GET_MAINTEXTURE_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void OnCanvasHierarchyChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_ONCANVASHIERARCHYCHANGED_OFFSET))(nullptr);
		}

		::System::Void OnCullingChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_ONCULLINGCHANGED_OFFSET))(nullptr);
		}

		::System::Void Rebuild(::UnityEngine::UI::CanvasUpdate* arg)
		{
			((::System::Void(*)(::UnityEngine::UI::CanvasUpdate*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_REBUILD_OFFSET))(arg, nullptr);
		}

		::System::Void LayoutComplete()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_LAYOUTCOMPLETE_OFFSET))(nullptr);
		}

		::System::Void GraphicUpdateComplete()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_GRAPHICUPDATECOMPLETE_OFFSET))(nullptr);
		}

		::System::Void UpdateMaterial()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_UPDATEMATERIAL_OFFSET))(nullptr);
		}

		::System::Void UpdateGeometry()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_UPDATEGEOMETRY_OFFSET))(nullptr);
		}

		::System::Void DoMeshGeneration()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_DOMESHGENERATION_OFFSET))(nullptr);
		}

		::System::Void DoLegacyMeshGeneration()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_DOLEGACYMESHGENERATION_OFFSET))(nullptr);
		}

		::UnityEngine::Mesh* get_workerMesh()
		{
			return (return (::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_GET_WORKERMESH_OFFSET))(nullptr);
		}

		::System::Void OnFillVBO(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_ONFILLVBO_OFFSET))(arg, nullptr);
		}

		::System::Void OnPopulateMesh(::UnityEngine::Mesh* arg)
		{
			((::System::Void(*)(::UnityEngine::Mesh*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_ONPOPULATEMESH_OFFSET))(arg, nullptr);
		}

		::System::Void OnPopulateMesh(::UnityEngine::UI::VertexHelper* arg)
		{
			((::System::Void(*)(::UnityEngine::UI::VertexHelper*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_ONPOPULATEMESH_OFFSET))(arg, nullptr);
		}

		::System::Void OnDidApplyAnimationProperties()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET))(nullptr);
		}

		::System::Void SetNativeSize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_SETNATIVESIZE_OFFSET))(nullptr);
		}

		::System::Boolean Raycast(::UnityEngine::Vector2* arg, ::UnityEngine::Camera* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Vector2*, ::UnityEngine::Camera*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_RAYCAST_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Vector2* PixelAdjustPoint(::UnityEngine::Vector2* arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_PIXELADJUSTPOINT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rect* GetPixelAdjustedRect()
		{
			return (return (::UnityEngine::Rect*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_GETPIXELADJUSTEDRECT_OFFSET))(nullptr);
		}

		::System::Void CrossFadeColor(::UnityEngine::Color* arg, ::System::Single arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Color*, ::System::Single, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_CROSSFADECOLOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void CrossFadeColor(::UnityEngine::Color* arg, ::System::Single arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Color*, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_CROSSFADECOLOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::Color* CreateColorFromAlpha(::System::Single arg)
		{
			return (return (::UnityEngine::Color*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_CREATECOLORFROMALPHA_OFFSET))(arg, nullptr);
		}

		::System::Void CrossFadeAlpha(::System::Single arg, ::System::Single arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_CROSSFADEALPHA_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void RegisterDirtyLayoutCallback(::UnityEngine::Events::UnityAction* arg)
		{
			((::System::Void(*)(::UnityEngine::Events::UnityAction*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_REGISTERDIRTYLAYOUTCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void UnregisterDirtyLayoutCallback(::UnityEngine::Events::UnityAction* arg)
		{
			((::System::Void(*)(::UnityEngine::Events::UnityAction*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_UNREGISTERDIRTYLAYOUTCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void RegisterDirtyVerticesCallback(::UnityEngine::Events::UnityAction* arg)
		{
			((::System::Void(*)(::UnityEngine::Events::UnityAction*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_REGISTERDIRTYVERTICESCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void UnregisterDirtyVerticesCallback(::UnityEngine::Events::UnityAction* arg)
		{
			((::System::Void(*)(::UnityEngine::Events::UnityAction*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_UNREGISTERDIRTYVERTICESCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void RegisterDirtyMaterialCallback(::UnityEngine::Events::UnityAction* arg)
		{
			((::System::Void(*)(::UnityEngine::Events::UnityAction*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_REGISTERDIRTYMATERIALCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void UnregisterDirtyMaterialCallback(::UnityEngine::Events::UnityAction* arg)
		{
			((::System::Void(*)(::UnityEngine::Events::UnityAction*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_UNREGISTERDIRTYMATERIALCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_.CCTOR_OFFSET))(nullptr);
		}

		::UnityEngine::Transform* UnityEngine.UI.ICanvasElement.get_transform()
		{
			return (return (::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHIC_UNITYENGINE.UI.ICANVASELEMENT.GET_TRANSFORM_OFFSET))(nullptr);
		}

	};
}

