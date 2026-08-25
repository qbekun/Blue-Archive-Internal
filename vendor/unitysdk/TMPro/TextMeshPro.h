#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Renderer; }
namespace UnityEngine { class MeshFilter; }
namespace TMPro { class MaskingTypes; }
namespace UnityEngine { class Matrix4x4; }
namespace Unity::Profiling { class ProfilerMarker; }
namespace TMPro { class TextContainer; }
namespace UnityEngine { class Transform; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Vector4; }
namespace UnityEngine::UI { class CanvasUpdate; }
namespace TMPro { class TMP_TextInfo; }
namespace TMPro { class TMP_VertexDataUpdateFlags; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Color32; }
namespace UnityEngine { class Bounds; }

#define TMPRO_TEXTMESHPRO_GET_SORTINGLAYERID_OFFSET UNITYSDK_OFFSET(0xA10C370)
#define TMPRO_TEXTMESHPRO_SET_SORTINGLAYERID_OFFSET UNITYSDK_OFFSET(0xA10C490)
#define TMPRO_TEXTMESHPRO_GET_SORTINGORDER_OFFSET UNITYSDK_OFFSET(0xA10C640)
#define TMPRO_TEXTMESHPRO_SET_SORTINGORDER_OFFSET UNITYSDK_OFFSET(0xA10C6C0)
#define TMPRO_TEXTMESHPRO_GET_AUTOSIZETEXTCONTAINER_OFFSET UNITYSDK_OFFSET(0xA10C870)
#define TMPRO_TEXTMESHPRO_SET_AUTOSIZETEXTCONTAINER_OFFSET UNITYSDK_OFFSET(0xA10C880)
#define TMPRO_TEXTMESHPRO_GET_TEXTCONTAINER_OFFSET UNITYSDK_OFFSET(0xA10C910)
#define TMPRO_TEXTMESHPRO_GET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0xA10C920)
#define TMPRO_TEXTMESHPRO_GET_RENDERER_OFFSET UNITYSDK_OFFSET(0xA10C3F0)
#define TMPRO_TEXTMESHPRO_GET_MESH_OFFSET UNITYSDK_OFFSET(0xA10C9C0)
#define TMPRO_TEXTMESHPRO_GET_MESHFILTER_OFFSET UNITYSDK_OFFSET(0xA10CA80)
#define TMPRO_TEXTMESHPRO_GET_MASKTYPE_OFFSET UNITYSDK_OFFSET(0xA10CBA0)
#define TMPRO_TEXTMESHPRO_SET_MASKTYPE_OFFSET UNITYSDK_OFFSET(0xA10CBB0)
#define TMPRO_TEXTMESHPRO_SETMASK_OFFSET UNITYSDK_OFFSET(0xA10CD60)
#define TMPRO_TEXTMESHPRO_SETMASK_OFFSET UNITYSDK_OFFSET(0xA10CEB0)
#define TMPRO_TEXTMESHPRO_SETVERTICESDIRTY_OFFSET UNITYSDK_OFFSET(0xA10D030)
#define TMPRO_TEXTMESHPRO_SETLAYOUTDIRTY_OFFSET UNITYSDK_OFFSET(0xA10D0D0)
#define TMPRO_TEXTMESHPRO_SETMATERIALDIRTY_OFFSET UNITYSDK_OFFSET(0xA10D190)
#define TMPRO_TEXTMESHPRO_SETALLDIRTY_OFFSET UNITYSDK_OFFSET(0xA10D1B0)
#define TMPRO_TEXTMESHPRO_REBUILD_OFFSET UNITYSDK_OFFSET(0xA10D200)
#define TMPRO_TEXTMESHPRO_UPDATEMATERIAL_OFFSET UNITYSDK_OFFSET(0xA10D5A0)
#define TMPRO_TEXTMESHPRO_UPDATEMESHPADDING_OFFSET UNITYSDK_OFFSET(0xA10D6D0)
#define TMPRO_TEXTMESHPRO_FORCEMESHUPDATE_OFFSET UNITYSDK_OFFSET(0xA10D7F0)
#define TMPRO_TEXTMESHPRO_GETTEXTINFO_OFFSET UNITYSDK_OFFSET(0xA10D810)
#define TMPRO_TEXTMESHPRO_CLEARMESH_OFFSET UNITYSDK_OFFSET(0xA10D890)
#define TMPRO_TEXTMESHPRO_ADD_ONPRERENDERTEXT_OFFSET UNITYSDK_OFFSET(0xA10D970)
#define TMPRO_TEXTMESHPRO_REMOVE_ONPRERENDERTEXT_OFFSET UNITYSDK_OFFSET(0xA10DA10)
#define TMPRO_TEXTMESHPRO_UPDATEGEOMETRY_OFFSET UNITYSDK_OFFSET(0xA10DAB0)
#define TMPRO_TEXTMESHPRO_UPDATEVERTEXDATA_OFFSET UNITYSDK_OFFSET(0xA10DAD0)
#define TMPRO_TEXTMESHPRO_UPDATEVERTEXDATA_OFFSET UNITYSDK_OFFSET(0xA10DE00)
#define TMPRO_TEXTMESHPRO_UPDATEFONTASSET_OFFSET UNITYSDK_OFFSET(0xA10E0F0)
#define TMPRO_TEXTMESHPRO_CALCULATELAYOUTINPUTHORIZONTAL_OFFSET UNITYSDK_OFFSET(0xA10E110)
#define TMPRO_TEXTMESHPRO_CALCULATELAYOUTINPUTVERTICAL_OFFSET UNITYSDK_OFFSET(0xA10E120)
#define TMPRO_TEXTMESHPRO_AWAKE_OFFSET UNITYSDK_OFFSET(0xA10E130)
#define TMPRO_TEXTMESHPRO_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA10E5A0)
#define TMPRO_TEXTMESHPRO_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xA10E690)
#define TMPRO_TEXTMESHPRO_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xA10E730)
#define TMPRO_TEXTMESHPRO_LOADFONTASSET_OFFSET UNITYSDK_OFFSET(0xA10E7F0)
#define TMPRO_TEXTMESHPRO_UPDATEENVMAPMATRIX_OFFSET UNITYSDK_OFFSET(0xA10EFE0)
#define TMPRO_TEXTMESHPRO_SETMASK_OFFSET UNITYSDK_OFFSET(0xA10CBC0)
#define TMPRO_TEXTMESHPRO_SETMASKCOORDINATES_OFFSET UNITYSDK_OFFSET(0xA10CE10)
#define TMPRO_TEXTMESHPRO_SETMASKCOORDINATES_OFFSET UNITYSDK_OFFSET(0xA10CF10)
#define TMPRO_TEXTMESHPRO_ENABLEMASKING_OFFSET UNITYSDK_OFFSET(0xA10F310)
#define TMPRO_TEXTMESHPRO_DISABLEMASKING_OFFSET UNITYSDK_OFFSET(0xA10F540)
#define TMPRO_TEXTMESHPRO_UPDATEMASK_OFFSET UNITYSDK_OFFSET(0xA10F4C0)
#define TMPRO_TEXTMESHPRO_GETMATERIAL_OFFSET UNITYSDK_OFFSET(0xA10F7C0)
#define TMPRO_TEXTMESHPRO_GETMATERIALS_OFFSET UNITYSDK_OFFSET(0xA10F8F0)
#define TMPRO_TEXTMESHPRO_SETSHAREDMATERIAL_OFFSET UNITYSDK_OFFSET(0xA10FB00)
#define TMPRO_TEXTMESHPRO_GETSHAREDMATERIALS_OFFSET UNITYSDK_OFFSET(0xA10FB60)
#define TMPRO_TEXTMESHPRO_SETSHAREDMATERIALS_OFFSET UNITYSDK_OFFSET(0xA10FD30)
#define TMPRO_TEXTMESHPRO_SETOUTLINETHICKNESS_OFFSET UNITYSDK_OFFSET(0xA110170)
#define TMPRO_TEXTMESHPRO_SETFACECOLOR_OFFSET UNITYSDK_OFFSET(0xA110300)
#define TMPRO_TEXTMESHPRO_SETOUTLINECOLOR_OFFSET UNITYSDK_OFFSET(0xA110450)
#define TMPRO_TEXTMESHPRO_CREATEMATERIALINSTANCE_OFFSET UNITYSDK_OFFSET(0xA10F6F0)
#define TMPRO_TEXTMESHPRO_SETSHADERDEPTH_OFFSET UNITYSDK_OFFSET(0xA1105A0)
#define TMPRO_TEXTMESHPRO_SETCULLING_OFFSET UNITYSDK_OFFSET(0xA1106E0)
#define TMPRO_TEXTMESHPRO_SETPERSPECTIVECORRECTION_OFFSET UNITYSDK_OFFSET(0xA110A60)
#define TMPRO_TEXTMESHPRO_SETARRAYSIZES_OFFSET UNITYSDK_OFFSET(0xA110B10)
#define TMPRO_TEXTMESHPRO_COMPUTEMARGINSIZE_OFFSET UNITYSDK_OFFSET(0xA113240)
#define TMPRO_TEXTMESHPRO_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0xA113380)
#define TMPRO_TEXTMESHPRO_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0xA1133B0)
#define TMPRO_TEXTMESHPRO_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0xA1133F0)
#define TMPRO_TEXTMESHPRO_INTERNALUPDATE_OFFSET UNITYSDK_OFFSET(0xA1135B0)
#define TMPRO_TEXTMESHPRO_ONPRERENDEROBJECT_OFFSET UNITYSDK_OFFSET(0xA10D2D0)
#define TMPRO_TEXTMESHPRO_GENERATETEXTMESH_OFFSET UNITYSDK_OFFSET(0xA0F37B0)
#define TMPRO_TEXTMESHPRO_GETTEXTCONTAINERLOCALCORNERS_OFFSET UNITYSDK_OFFSET(0xA113A30)
#define TMPRO_TEXTMESHPRO_SETMESHFILTERS_OFFSET UNITYSDK_OFFSET(0xA113AE0)
#define TMPRO_TEXTMESHPRO_SETACTIVESUBMESHES_OFFSET UNITYSDK_OFFSET(0xA113D00)
#define TMPRO_TEXTMESHPRO_SETACTIVESUBTEXTOBJECTRENDERERS_OFFSET UNITYSDK_OFFSET(0xA1138E0)
#define TMPRO_TEXTMESHPRO_DESTROYSUBMESHOBJECTS_OFFSET UNITYSDK_OFFSET(0xA113E30)
#define TMPRO_TEXTMESHPRO_UPDATESUBMESHSORTINGLAYERID_OFFSET UNITYSDK_OFFSET(0xA10C530)
#define TMPRO_TEXTMESHPRO_UPDATESUBMESHSORTINGORDER_OFFSET UNITYSDK_OFFSET(0xA10C760)
#define TMPRO_TEXTMESHPRO_GETCOMPOUNDBOUNDS_OFFSET UNITYSDK_OFFSET(0xA113F20)
#define TMPRO_TEXTMESHPRO_UPDATESDFSCALE_OFFSET UNITYSDK_OFFSET(0xA113670)
#define TMPRO_TEXTMESHPRO_.CTOR_OFFSET UNITYSDK_OFFSET(0xA114310)
#define TMPRO_TEXTMESHPRO_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA1143E0)

namespace TMPro
{
	inline static constexpr unsigned int TextMeshPro_TypeDefinitionIndex = 33609;

	class TextMeshPro : public Il2CppObject
	{
	public:
		::System::Int32 _SortingLayer; // 0x6C8
		::System::Int32 _SortingLayerID; // 0x6CC
		::System::Int32 _SortingOrder; // 0x6D0
		Il2CppObject* OnPreRenderText; // 0x6D8
		::System::Boolean m_currentAutoSizeMode; // 0x6E0
		::System::Boolean m_hasFontAssetChanged; // 0x6E1
		::System::Single m_previousLossyScaleY; // 0x6E4
		::UnityEngine::Renderer* m_renderer; // 0x6E8
		::UnityEngine::MeshFilter* m_meshFilter; // 0x6F0
		::System::Boolean m_isFirstAllocation; // 0x6F8
		::System::Int32 m_max_characters; // 0x6FC
		::System::Int32 m_max_numberOfLines; // 0x700
		::Il2CppArray<::System::Object*>* m_subTextObjects; // 0x708
		::TMPro::MaskingTypes* m_maskType; // 0x710
		::UnityEngine::Matrix4x4* m_EnvMapMatrix; // 0x714
		::Il2CppArray<::System::Object*>* m_RectTransformCorners; // 0x758
		::System::Boolean m_isRegisteredForEvents; // 0x760
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

		::System::Int32 get_sortingLayerID()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_GET_SORTINGLAYERID_OFFSET))(nullptr);
		}

		::System::Void set_sortingLayerID(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_SET_SORTINGLAYERID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_sortingOrder()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_GET_SORTINGORDER_OFFSET))(nullptr);
		}

		::System::Void set_sortingOrder(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_SET_SORTINGORDER_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_autoSizeTextContainer()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_GET_AUTOSIZETEXTCONTAINER_OFFSET))(nullptr);
		}

		::System::Void set_autoSizeTextContainer(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_SET_AUTOSIZETEXTCONTAINER_OFFSET))(arg, nullptr);
		}

		::TMPro::TextContainer* get_textContainer()
		{
			return (return (::TMPro::TextContainer*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_GET_TEXTCONTAINER_OFFSET))(nullptr);
		}

		::UnityEngine::Transform* get_transform()
		{
			return (return (::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_GET_TRANSFORM_OFFSET))(nullptr);
		}

		::UnityEngine::Renderer* get_renderer()
		{
			return (return (::UnityEngine::Renderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_GET_RENDERER_OFFSET))(nullptr);
		}

		::UnityEngine::Mesh* get_mesh()
		{
			return (return (::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_GET_MESH_OFFSET))(nullptr);
		}

		::UnityEngine::MeshFilter* get_meshFilter()
		{
			return (return (::UnityEngine::MeshFilter*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_GET_MESHFILTER_OFFSET))(nullptr);
		}

		::TMPro::MaskingTypes* get_maskType()
		{
			return (return (::TMPro::MaskingTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_GET_MASKTYPE_OFFSET))(nullptr);
		}

		::System::Void set_maskType(::TMPro::MaskingTypes* arg)
		{
			((::System::Void(*)(::TMPro::MaskingTypes*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_SET_MASKTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void SetMask(::TMPro::MaskingTypes* arg, ::UnityEngine::Vector4* arg)
		{
			((::System::Void(*)(::TMPro::MaskingTypes*, ::UnityEngine::Vector4*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_SETMASK_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetMask(::TMPro::MaskingTypes* arg, ::UnityEngine::Vector4* arg, ::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::TMPro::MaskingTypes*, ::UnityEngine::Vector4*, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_SETMASK_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void SetVerticesDirty()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_SETVERTICESDIRTY_OFFSET))(nullptr);
		}

		::System::Void SetLayoutDirty()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_SETLAYOUTDIRTY_OFFSET))(nullptr);
		}

		::System::Void SetMaterialDirty()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_SETMATERIALDIRTY_OFFSET))(nullptr);
		}

		::System::Void SetAllDirty()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_SETALLDIRTY_OFFSET))(nullptr);
		}

		::System::Void Rebuild(::UnityEngine::UI::CanvasUpdate* arg)
		{
			((::System::Void(*)(::UnityEngine::UI::CanvasUpdate*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_REBUILD_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateMaterial()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_UPDATEMATERIAL_OFFSET))(nullptr);
		}

		::System::Void UpdateMeshPadding()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_UPDATEMESHPADDING_OFFSET))(nullptr);
		}

		::System::Void ForceMeshUpdate(::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_FORCEMESHUPDATE_OFFSET))(arg, arg, nullptr);
		}

		::TMPro::TMP_TextInfo* GetTextInfo(::System::String* str)
		{
			return (return (::TMPro::TMP_TextInfo*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_GETTEXTINFO_OFFSET))(str, nullptr);
		}

		::System::Void ClearMesh(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_CLEARMESH_OFFSET))(arg, nullptr);
		}

		::System::Void add_OnPreRenderText(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_ADD_ONPRERENDERTEXT_OFFSET))(arg, nullptr);
		}

		::System::Void remove_OnPreRenderText(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_REMOVE_ONPRERENDERTEXT_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateGeometry(::UnityEngine::Mesh* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Mesh*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_UPDATEGEOMETRY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void UpdateVertexData(::TMPro::TMP_VertexDataUpdateFlags* arg)
		{
			((::System::Void(*)(::TMPro::TMP_VertexDataUpdateFlags*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_UPDATEVERTEXDATA_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateVertexData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_UPDATEVERTEXDATA_OFFSET))(nullptr);
		}

		::System::Void UpdateFontAsset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_UPDATEFONTASSET_OFFSET))(nullptr);
		}

		::System::Void CalculateLayoutInputHorizontal()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_CALCULATELAYOUTINPUTHORIZONTAL_OFFSET))(nullptr);
		}

		::System::Void CalculateLayoutInputVertical()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_CALCULATELAYOUTINPUTVERTICAL_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void LoadFontAsset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_LOADFONTASSET_OFFSET))(nullptr);
		}

		::System::Void UpdateEnvMapMatrix()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_UPDATEENVMAPMATRIX_OFFSET))(nullptr);
		}

		::System::Void SetMask(::TMPro::MaskingTypes* arg)
		{
			((::System::Void(*)(::TMPro::MaskingTypes*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_SETMASK_OFFSET))(arg, nullptr);
		}

		::System::Void SetMaskCoordinates(::UnityEngine::Vector4* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector4*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_SETMASKCOORDINATES_OFFSET))(arg, nullptr);
		}

		::System::Void SetMaskCoordinates(::UnityEngine::Vector4* arg, ::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::UnityEngine::Vector4*, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_SETMASKCOORDINATES_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void EnableMasking()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_ENABLEMASKING_OFFSET))(nullptr);
		}

		::System::Void DisableMasking()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_DISABLEMASKING_OFFSET))(nullptr);
		}

		::System::Void UpdateMask()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_UPDATEMASK_OFFSET))(nullptr);
		}

		::UnityEngine::Material* GetMaterial(::UnityEngine::Material* arg)
		{
			return (return (::UnityEngine::Material*(*)(::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_GETMATERIAL_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetMaterials(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_GETMATERIALS_OFFSET))(arg, nullptr);
		}

		::System::Void SetSharedMaterial(::UnityEngine::Material* arg)
		{
			((::System::Void(*)(::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_SETSHAREDMATERIAL_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetSharedMaterials()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_GETSHAREDMATERIALS_OFFSET))(nullptr);
		}

		::System::Void SetSharedMaterials(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_SETSHAREDMATERIALS_OFFSET))(arg, nullptr);
		}

		::System::Void SetOutlineThickness(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_SETOUTLINETHICKNESS_OFFSET))(arg, nullptr);
		}

		::System::Void SetFaceColor(::UnityEngine::Color32* arg)
		{
			((::System::Void(*)(::UnityEngine::Color32*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_SETFACECOLOR_OFFSET))(arg, nullptr);
		}

		::System::Void SetOutlineColor(::UnityEngine::Color32* arg)
		{
			((::System::Void(*)(::UnityEngine::Color32*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_SETOUTLINECOLOR_OFFSET))(arg, nullptr);
		}

		::System::Void CreateMaterialInstance()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_CREATEMATERIALINSTANCE_OFFSET))(nullptr);
		}

		::System::Void SetShaderDepth()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_SETSHADERDEPTH_OFFSET))(nullptr);
		}

		::System::Void SetCulling()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_SETCULLING_OFFSET))(nullptr);
		}

		::System::Void SetPerspectiveCorrection()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_SETPERSPECTIVECORRECTION_OFFSET))(nullptr);
		}

		::System::Int32 SetArraySizes(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_SETARRAYSIZES_OFFSET))(arg, nullptr);
		}

		::System::Void ComputeMarginSize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_COMPUTEMARGINSIZE_OFFSET))(nullptr);
		}

		::System::Void OnDidApplyAnimationProperties()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET))(nullptr);
		}

		::System::Void OnTransformParentChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_ONTRANSFORMPARENTCHANGED_OFFSET))(nullptr);
		}

		::System::Void OnRectTransformDimensionsChange()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET))(nullptr);
		}

		::System::Void InternalUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_INTERNALUPDATE_OFFSET))(nullptr);
		}

		::System::Void OnPreRenderObject()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_ONPRERENDEROBJECT_OFFSET))(nullptr);
		}

		::System::Void GenerateTextMesh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_GENERATETEXTMESH_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetTextContainerLocalCorners()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_GETTEXTCONTAINERLOCALCORNERS_OFFSET))(nullptr);
		}

		::System::Void SetMeshFilters(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_SETMESHFILTERS_OFFSET))(arg, nullptr);
		}

		::System::Void SetActiveSubMeshes(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_SETACTIVESUBMESHES_OFFSET))(arg, nullptr);
		}

		::System::Void SetActiveSubTextObjectRenderers(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_SETACTIVESUBTEXTOBJECTRENDERERS_OFFSET))(arg, nullptr);
		}

		::System::Void DestroySubMeshObjects()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_DESTROYSUBMESHOBJECTS_OFFSET))(nullptr);
		}

		::System::Void UpdateSubMeshSortingLayerID(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_UPDATESUBMESHSORTINGLAYERID_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateSubMeshSortingOrder(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_UPDATESUBMESHSORTINGORDER_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Bounds* GetCompoundBounds()
		{
			return (return (::UnityEngine::Bounds*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_GETCOMPOUNDBOUNDS_OFFSET))(nullptr);
		}

		::System::Void UpdateSDFScale(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_UPDATESDFSCALE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_.CCTOR_OFFSET))(nullptr);
		}

	};
}

