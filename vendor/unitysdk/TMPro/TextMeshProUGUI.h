#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class Rect; }
namespace UnityEngine { class CanvasRenderer; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Vector4; }
namespace UnityEngine { class Matrix4x4; }
namespace Unity::Profiling { class ProfilerMarker; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine::UI { class CanvasUpdate; }
namespace UnityEngine { class Color; }
namespace TMPro { class TMP_TextInfo; }
namespace TMPro { class TMP_VertexDataUpdateFlags; }
namespace UnityEngine { class Color32; }
namespace UnityEngine { class Bounds; }

#define TMPRO_TEXTMESHPROUGUI_GET_MATERIALFORRENDERING_OFFSET UNITYSDK_OFFSET(0xA1148E0)
#define TMPRO_TEXTMESHPROUGUI_GET_AUTOSIZETEXTCONTAINER_OFFSET UNITYSDK_OFFSET(0xA114940)
#define TMPRO_TEXTMESHPROUGUI_SET_AUTOSIZETEXTCONTAINER_OFFSET UNITYSDK_OFFSET(0xA114950)
#define TMPRO_TEXTMESHPROUGUI_GET_MESH_OFFSET UNITYSDK_OFFSET(0xA1149E0)
#define TMPRO_TEXTMESHPROUGUI_GET_CANVASRENDERER_OFFSET UNITYSDK_OFFSET(0xA1149F0)
#define TMPRO_TEXTMESHPROUGUI_CALCULATELAYOUTINPUTHORIZONTAL_OFFSET UNITYSDK_OFFSET(0xA114A90)
#define TMPRO_TEXTMESHPROUGUI_CALCULATELAYOUTINPUTVERTICAL_OFFSET UNITYSDK_OFFSET(0xA114AA0)
#define TMPRO_TEXTMESHPROUGUI_SETVERTICESDIRTY_OFFSET UNITYSDK_OFFSET(0xA114AB0)
#define TMPRO_TEXTMESHPROUGUI_SETLAYOUTDIRTY_OFFSET UNITYSDK_OFFSET(0xA114BA0)
#define TMPRO_TEXTMESHPROUGUI_SETMATERIALDIRTY_OFFSET UNITYSDK_OFFSET(0xA114C80)
#define TMPRO_TEXTMESHPROUGUI_SETALLDIRTY_OFFSET UNITYSDK_OFFSET(0xA114D70)
#define TMPRO_TEXTMESHPROUGUI_DELAYEDGRAPHICREBUILD_OFFSET UNITYSDK_OFFSET(0xA114DC0)
#define TMPRO_TEXTMESHPROUGUI_DELAYEDMATERIALREBUILD_OFFSET UNITYSDK_OFFSET(0xA114E50)
#define TMPRO_TEXTMESHPROUGUI_REBUILD_OFFSET UNITYSDK_OFFSET(0xA114EE0)
#define TMPRO_TEXTMESHPROUGUI_UPDATESUBOBJECTPIVOT_OFFSET UNITYSDK_OFFSET(0xA115280)
#define TMPRO_TEXTMESHPROUGUI_GETMODIFIEDMATERIAL_OFFSET UNITYSDK_OFFSET(0xA115370)
#define TMPRO_TEXTMESHPROUGUI_UPDATEMATERIAL_OFFSET UNITYSDK_OFFSET(0xA1154C0)
#define TMPRO_TEXTMESHPROUGUI_GET_MASKOFFSET_OFFSET UNITYSDK_OFFSET(0xA1155A0)
#define TMPRO_TEXTMESHPROUGUI_SET_MASKOFFSET_OFFSET UNITYSDK_OFFSET(0xA1155B0)
#define TMPRO_TEXTMESHPROUGUI_RECALCULATECLIPPING_OFFSET UNITYSDK_OFFSET(0xA115B20)
#define TMPRO_TEXTMESHPROUGUI_CULL_OFFSET UNITYSDK_OFFSET(0xA115B30)
#define TMPRO_TEXTMESHPROUGUI_UPDATECULLING_OFFSET UNITYSDK_OFFSET(0xA115DA0)
#define TMPRO_TEXTMESHPROUGUI_UPDATEMESHPADDING_OFFSET UNITYSDK_OFFSET(0xA115FC0)
#define TMPRO_TEXTMESHPROUGUI_INTERNALCROSSFADECOLOR_OFFSET UNITYSDK_OFFSET(0xA1160E0)
#define TMPRO_TEXTMESHPROUGUI_INTERNALCROSSFADEALPHA_OFFSET UNITYSDK_OFFSET(0xA1161B0)
#define TMPRO_TEXTMESHPROUGUI_FORCEMESHUPDATE_OFFSET UNITYSDK_OFFSET(0xA116260)
#define TMPRO_TEXTMESHPROUGUI_GETTEXTINFO_OFFSET UNITYSDK_OFFSET(0xA116310)
#define TMPRO_TEXTMESHPROUGUI_CLEARMESH_OFFSET UNITYSDK_OFFSET(0xA116400)
#define TMPRO_TEXTMESHPROUGUI_ADD_ONPRERENDERTEXT_OFFSET UNITYSDK_OFFSET(0xA116510)
#define TMPRO_TEXTMESHPROUGUI_REMOVE_ONPRERENDERTEXT_OFFSET UNITYSDK_OFFSET(0xA1165B0)
#define TMPRO_TEXTMESHPROUGUI_UPDATEGEOMETRY_OFFSET UNITYSDK_OFFSET(0xA116650)
#define TMPRO_TEXTMESHPROUGUI_UPDATEVERTEXDATA_OFFSET UNITYSDK_OFFSET(0xA1166D0)
#define TMPRO_TEXTMESHPROUGUI_UPDATEVERTEXDATA_OFFSET UNITYSDK_OFFSET(0xA116A70)
#define TMPRO_TEXTMESHPROUGUI_UPDATEFONTASSET_OFFSET UNITYSDK_OFFSET(0xA116DC0)
#define TMPRO_TEXTMESHPROUGUI_AWAKE_OFFSET UNITYSDK_OFFSET(0xA116DE0)
#define TMPRO_TEXTMESHPROUGUI_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA117220)
#define TMPRO_TEXTMESHPROUGUI_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xA1174B0)
#define TMPRO_TEXTMESHPROUGUI_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xA117640)
#define TMPRO_TEXTMESHPROUGUI_LOADFONTASSET_OFFSET UNITYSDK_OFFSET(0xA1177A0)
#define TMPRO_TEXTMESHPROUGUI_GETCANVAS_OFFSET UNITYSDK_OFFSET(0xA117360)
#define TMPRO_TEXTMESHPROUGUI_UPDATEENVMAPMATRIX_OFFSET UNITYSDK_OFFSET(0xA117E90)
#define TMPRO_TEXTMESHPROUGUI_ENABLEMASKING_OFFSET UNITYSDK_OFFSET(0xA1181C0)
#define TMPRO_TEXTMESHPROUGUI_DISABLEMASKING_OFFSET UNITYSDK_OFFSET(0xA1183D0)
#define TMPRO_TEXTMESHPROUGUI_UPDATEMASK_OFFSET UNITYSDK_OFFSET(0xA1155E0)
#define TMPRO_TEXTMESHPROUGUI_GETMATERIAL_OFFSET UNITYSDK_OFFSET(0xA1183E0)
#define TMPRO_TEXTMESHPROUGUI_GETMATERIALS_OFFSET UNITYSDK_OFFSET(0xA118540)
#define TMPRO_TEXTMESHPROUGUI_SETSHAREDMATERIAL_OFFSET UNITYSDK_OFFSET(0xA118760)
#define TMPRO_TEXTMESHPROUGUI_GETSHAREDMATERIALS_OFFSET UNITYSDK_OFFSET(0xA1187C0)
#define TMPRO_TEXTMESHPROUGUI_SETSHAREDMATERIALS_OFFSET UNITYSDK_OFFSET(0xA118990)
#define TMPRO_TEXTMESHPROUGUI_SETOUTLINETHICKNESS_OFFSET UNITYSDK_OFFSET(0xA118EA0)
#define TMPRO_TEXTMESHPROUGUI_SETFACECOLOR_OFFSET UNITYSDK_OFFSET(0xA1190E0)
#define TMPRO_TEXTMESHPROUGUI_SETOUTLINECOLOR_OFFSET UNITYSDK_OFFSET(0xA119240)
#define TMPRO_TEXTMESHPROUGUI_SETSHADERDEPTH_OFFSET UNITYSDK_OFFSET(0xA1193A0)
#define TMPRO_TEXTMESHPROUGUI_SETCULLING_OFFSET UNITYSDK_OFFSET(0xA1194F0)
#define TMPRO_TEXTMESHPROUGUI_SETPERSPECTIVECORRECTION_OFFSET UNITYSDK_OFFSET(0xA119870)
#define TMPRO_TEXTMESHPROUGUI_SETMESHARRAYS_OFFSET UNITYSDK_OFFSET(0xA119920)
#define TMPRO_TEXTMESHPROUGUI_SETARRAYSIZES_OFFSET UNITYSDK_OFFSET(0xA1199D0)
#define TMPRO_TEXTMESHPROUGUI_COMPUTEMARGINSIZE_OFFSET UNITYSDK_OFFSET(0xA11C270)
#define TMPRO_TEXTMESHPROUGUI_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0xA11C3B0)
#define TMPRO_TEXTMESHPROUGUI_ONCANVASHIERARCHYCHANGED_OFFSET UNITYSDK_OFFSET(0xA11C3F0)
#define TMPRO_TEXTMESHPROUGUI_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0xA11C510)
#define TMPRO_TEXTMESHPROUGUI_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0xA11C560)
#define TMPRO_TEXTMESHPROUGUI_INTERNALUPDATE_OFFSET UNITYSDK_OFFSET(0xA11C7D0)
#define TMPRO_TEXTMESHPROUGUI_ONPRERENDERCANVAS_OFFSET UNITYSDK_OFFSET(0xA114FB0)
#define TMPRO_TEXTMESHPROUGUI_GENERATETEXTMESH_OFFSET UNITYSDK_OFFSET(0xA0FE7C0)
#define TMPRO_TEXTMESHPROUGUI_GETTEXTCONTAINERLOCALCORNERS_OFFSET UNITYSDK_OFFSET(0xA11CB90)
#define TMPRO_TEXTMESHPROUGUI_SETACTIVESUBMESHES_OFFSET UNITYSDK_OFFSET(0xA11CC40)
#define TMPRO_TEXTMESHPROUGUI_DESTROYSUBMESHOBJECTS_OFFSET UNITYSDK_OFFSET(0xA11CD70)
#define TMPRO_TEXTMESHPROUGUI_GETCOMPOUNDBOUNDS_OFFSET UNITYSDK_OFFSET(0xA11CE60)
#define TMPRO_TEXTMESHPROUGUI_GETCANVASSPACECLIPPINGRECT_OFFSET UNITYSDK_OFFSET(0xA11D250)
#define TMPRO_TEXTMESHPROUGUI_UPDATESDFSCALE_OFFSET UNITYSDK_OFFSET(0xA11C890)
#define TMPRO_TEXTMESHPROUGUI_.CTOR_OFFSET UNITYSDK_OFFSET(0xA11D4F0)
#define TMPRO_TEXTMESHPROUGUI_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA11D5C0)

namespace TMPro
{
	inline static constexpr unsigned int TextMeshProUGUI_TypeDefinitionIndex = 33612;

	class TextMeshProUGUI : public Il2CppObject
	{
	public:
		::System::Boolean m_isRebuildingLayout; // 0x6C8
		::UnityEngine::Coroutine* m_DelayedGraphicRebuild; // 0x6D0
		::UnityEngine::Coroutine* m_DelayedMaterialRebuild; // 0x6D8
		::UnityEngine::Rect* m_ClipRect; // 0x6E0
		::System::Boolean m_ValidRect; // 0x6F0
		Il2CppObject* OnPreRenderText; // 0x6F8
		::System::Boolean m_hasFontAssetChanged; // 0x700
		::Il2CppArray<::System::Object*>* m_subTextObjects; // 0x708
		::System::Single m_previousLossyScaleY; // 0x710
		::Il2CppArray<::System::Object*>* m_RectTransformCorners; // 0x718
		::UnityEngine::CanvasRenderer* m_canvasRenderer; // 0x720
		::UnityEngine::Canvas* m_canvas; // 0x728
		::System::Single m_CanvasScaleFactor; // 0x730
		::System::Boolean m_isFirstAllocation; // 0x734
		::System::Int32 m_max_characters; // 0x738
		::UnityEngine::Material* m_baseMaterial; // 0x740
		::System::Boolean m_isScrollRegionSet; // 0x748
		::UnityEngine::Vector4* m_maskOffset; // 0x74C
		::UnityEngine::Matrix4x4* m_EnvMapMatrix; // 0x75C
		::System::Boolean m_isRegisteredForEvents; // 0x79C
		::Unity::Profiling::ProfilerMarker* k_GenerateTextMarker; // 0x0
		::Unity::Profiling::ProfilerMarker* k_SetArraySizesMarker; // 0x8
		::Unity::Profiling::ProfilerMarker* k_GenerateTextPhaseIMarker; // 0x10
		::Unity::Profiling::ProfilerMarker* k_ParseMarkupTextMarker; // 0x18
		::Unity::Profiling::ProfilerMarker* k_CharacterLookupMarker; // 0x20
		::Unity::Profiling::ProfilerMarker* k_HandleGPOSFeaturesMarker; // 0x28
		::Unity::Profiling::ProfilerMarker* k_CalculateVerticesPositionMarker; // 0x30
		::Unity::Profiling::ProfilerMarker* k_ComputeTextMetricsMarker; // 0x38
		::Unity::Profiling::ProfilerMarker* k_HandleVisibleCharacterMarker; // 0x40
		::Unity::Profiling::ProfilerMarker* k_HandleWhiteSpacesMarker; // 0x48
		::Unity::Profiling::ProfilerMarker* k_HandleHorizontalLineBreakingMarker; // 0x50
		::Unity::Profiling::ProfilerMarker* k_HandleVerticalLineBreakingMarker; // 0x58
		::Unity::Profiling::ProfilerMarker* k_SaveGlyphVertexDataMarker; // 0x60
		::Unity::Profiling::ProfilerMarker* k_ComputeCharacterAdvanceMarker; // 0x68
		::Unity::Profiling::ProfilerMarker* k_HandleCarriageReturnMarker; // 0x70
		::Unity::Profiling::ProfilerMarker* k_HandleLineTerminationMarker; // 0x78
		::Unity::Profiling::ProfilerMarker* k_SavePageInfoMarker; // 0x80
		::Unity::Profiling::ProfilerMarker* k_SaveProcessingStatesMarker; // 0x88
		::Unity::Profiling::ProfilerMarker* k_GenerateTextPhaseIIMarker; // 0x90
		::Unity::Profiling::ProfilerMarker* k_GenerateTextPhaseIIIMarker; // 0x98

		::UnityEngine::Material* get_materialForRendering()
		{
			return (return (::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_GET_MATERIALFORRENDERING_OFFSET))(nullptr);
		}

		::System::Boolean get_autoSizeTextContainer()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_GET_AUTOSIZETEXTCONTAINER_OFFSET))(nullptr);
		}

		::System::Void set_autoSizeTextContainer(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_SET_AUTOSIZETEXTCONTAINER_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Mesh* get_mesh()
		{
			return (return (::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_GET_MESH_OFFSET))(nullptr);
		}

		::UnityEngine::CanvasRenderer* get_canvasRenderer()
		{
			return (return (::UnityEngine::CanvasRenderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_GET_CANVASRENDERER_OFFSET))(nullptr);
		}

		::System::Void CalculateLayoutInputHorizontal()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_CALCULATELAYOUTINPUTHORIZONTAL_OFFSET))(nullptr);
		}

		::System::Void CalculateLayoutInputVertical()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_CALCULATELAYOUTINPUTVERTICAL_OFFSET))(nullptr);
		}

		::System::Void SetVerticesDirty()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_SETVERTICESDIRTY_OFFSET))(nullptr);
		}

		::System::Void SetLayoutDirty()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_SETLAYOUTDIRTY_OFFSET))(nullptr);
		}

		::System::Void SetMaterialDirty()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_SETMATERIALDIRTY_OFFSET))(nullptr);
		}

		::System::Void SetAllDirty()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_SETALLDIRTY_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* DelayedGraphicRebuild()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_DELAYEDGRAPHICREBUILD_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* DelayedMaterialRebuild()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_DELAYEDMATERIALREBUILD_OFFSET))(nullptr);
		}

		::System::Void Rebuild(::UnityEngine::UI::CanvasUpdate* arg)
		{
			((::System::Void(*)(::UnityEngine::UI::CanvasUpdate*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_REBUILD_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateSubObjectPivot()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_UPDATESUBOBJECTPIVOT_OFFSET))(nullptr);
		}

		::UnityEngine::Material* GetModifiedMaterial(::UnityEngine::Material* arg)
		{
			return (return (::UnityEngine::Material*(*)(::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_GETMODIFIEDMATERIAL_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateMaterial()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_UPDATEMATERIAL_OFFSET))(nullptr);
		}

		::UnityEngine::Vector4* get_maskOffset()
		{
			return (return (::UnityEngine::Vector4*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_GET_MASKOFFSET_OFFSET))(nullptr);
		}

		::System::Void set_maskOffset(::UnityEngine::Vector4* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector4*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_SET_MASKOFFSET_OFFSET))(arg, nullptr);
		}

		::System::Void RecalculateClipping()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_RECALCULATECLIPPING_OFFSET))(nullptr);
		}

		::System::Void Cull(::UnityEngine::Rect* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Rect*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_CULL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void UpdateCulling()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_UPDATECULLING_OFFSET))(nullptr);
		}

		::System::Void UpdateMeshPadding()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_UPDATEMESHPADDING_OFFSET))(nullptr);
		}

		::System::Void InternalCrossFadeColor(::UnityEngine::Color* arg, ::System::Single arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Color*, ::System::Single, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_INTERNALCROSSFADECOLOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void InternalCrossFadeAlpha(::System::Single arg, ::System::Single arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_INTERNALCROSSFADEALPHA_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ForceMeshUpdate(::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_FORCEMESHUPDATE_OFFSET))(arg, arg, nullptr);
		}

		::TMPro::TMP_TextInfo* GetTextInfo(::System::String* str)
		{
			return (return (::TMPro::TMP_TextInfo*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_GETTEXTINFO_OFFSET))(str, nullptr);
		}

		::System::Void ClearMesh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_CLEARMESH_OFFSET))(nullptr);
		}

		::System::Void add_OnPreRenderText(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_ADD_ONPRERENDERTEXT_OFFSET))(arg, nullptr);
		}

		::System::Void remove_OnPreRenderText(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_REMOVE_ONPRERENDERTEXT_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateGeometry(::UnityEngine::Mesh* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Mesh*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_UPDATEGEOMETRY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void UpdateVertexData(::TMPro::TMP_VertexDataUpdateFlags* arg)
		{
			((::System::Void(*)(::TMPro::TMP_VertexDataUpdateFlags*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_UPDATEVERTEXDATA_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateVertexData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_UPDATEVERTEXDATA_OFFSET))(nullptr);
		}

		::System::Void UpdateFontAsset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_UPDATEFONTASSET_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void LoadFontAsset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_LOADFONTASSET_OFFSET))(nullptr);
		}

		::UnityEngine::Canvas* GetCanvas()
		{
			return (return (::UnityEngine::Canvas*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_GETCANVAS_OFFSET))(nullptr);
		}

		::System::Void UpdateEnvMapMatrix()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_UPDATEENVMAPMATRIX_OFFSET))(nullptr);
		}

		::System::Void EnableMasking()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_ENABLEMASKING_OFFSET))(nullptr);
		}

		::System::Void DisableMasking()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_DISABLEMASKING_OFFSET))(nullptr);
		}

		::System::Void UpdateMask()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_UPDATEMASK_OFFSET))(nullptr);
		}

		::UnityEngine::Material* GetMaterial(::UnityEngine::Material* arg)
		{
			return (return (::UnityEngine::Material*(*)(::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_GETMATERIAL_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetMaterials(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_GETMATERIALS_OFFSET))(arg, nullptr);
		}

		::System::Void SetSharedMaterial(::UnityEngine::Material* arg)
		{
			((::System::Void(*)(::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_SETSHAREDMATERIAL_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetSharedMaterials()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_GETSHAREDMATERIALS_OFFSET))(nullptr);
		}

		::System::Void SetSharedMaterials(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_SETSHAREDMATERIALS_OFFSET))(arg, nullptr);
		}

		::System::Void SetOutlineThickness(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_SETOUTLINETHICKNESS_OFFSET))(arg, nullptr);
		}

		::System::Void SetFaceColor(::UnityEngine::Color32* arg)
		{
			((::System::Void(*)(::UnityEngine::Color32*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_SETFACECOLOR_OFFSET))(arg, nullptr);
		}

		::System::Void SetOutlineColor(::UnityEngine::Color32* arg)
		{
			((::System::Void(*)(::UnityEngine::Color32*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_SETOUTLINECOLOR_OFFSET))(arg, nullptr);
		}

		::System::Void SetShaderDepth()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_SETSHADERDEPTH_OFFSET))(nullptr);
		}

		::System::Void SetCulling()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_SETCULLING_OFFSET))(nullptr);
		}

		::System::Void SetPerspectiveCorrection()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_SETPERSPECTIVECORRECTION_OFFSET))(nullptr);
		}

		::System::Void SetMeshArrays(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_SETMESHARRAYS_OFFSET))(arg, nullptr);
		}

		::System::Int32 SetArraySizes(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_SETARRAYSIZES_OFFSET))(arg, nullptr);
		}

		::System::Void ComputeMarginSize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_COMPUTEMARGINSIZE_OFFSET))(nullptr);
		}

		::System::Void OnDidApplyAnimationProperties()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET))(nullptr);
		}

		::System::Void OnCanvasHierarchyChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_ONCANVASHIERARCHYCHANGED_OFFSET))(nullptr);
		}

		::System::Void OnTransformParentChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_ONTRANSFORMPARENTCHANGED_OFFSET))(nullptr);
		}

		::System::Void OnRectTransformDimensionsChange()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET))(nullptr);
		}

		::System::Void InternalUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_INTERNALUPDATE_OFFSET))(nullptr);
		}

		::System::Void OnPreRenderCanvas()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_ONPRERENDERCANVAS_OFFSET))(nullptr);
		}

		::System::Void GenerateTextMesh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_GENERATETEXTMESH_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetTextContainerLocalCorners()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_GETTEXTCONTAINERLOCALCORNERS_OFFSET))(nullptr);
		}

		::System::Void SetActiveSubMeshes(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_SETACTIVESUBMESHES_OFFSET))(arg, nullptr);
		}

		::System::Void DestroySubMeshObjects()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_DESTROYSUBMESHOBJECTS_OFFSET))(nullptr);
		}

		::UnityEngine::Bounds* GetCompoundBounds()
		{
			return (return (::UnityEngine::Bounds*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_GETCOMPOUNDBOUNDS_OFFSET))(nullptr);
		}

		::UnityEngine::Rect* GetCanvasSpaceClippingRect()
		{
			return (return (::UnityEngine::Rect*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_GETCANVASSPACECLIPPINGRECT_OFFSET))(nullptr);
		}

		::System::Void UpdateSDFScale(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_UPDATESDFSCALE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_.CCTOR_OFFSET))(nullptr);
		}

	};
}

