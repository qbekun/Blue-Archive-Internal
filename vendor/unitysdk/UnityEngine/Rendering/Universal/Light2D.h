#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Color; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Bounds; }
namespace UnityEngine { class BoundingSphere; }
namespace UnityEngine { class Vector2; }

#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_SET_LIGHTTYPE_OFFSET UNITYSDK_OFFSET(0xA010AF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_GET_POINTLIGHTDISTANCE_OFFSET UNITYSDK_OFFSET(0xA010F00)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_GET_LIGHTCOOKIESPRITE_OFFSET UNITYSDK_OFFSET(0xA010F10)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_SET_POINTLIGHTINNERRADIUS_OFFSET UNITYSDK_OFFSET(0xA010F20)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_SET_SHADOWVOLUMEINTENSITY_OFFSET UNITYSDK_OFFSET(0xA010F30)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_SET_SHAPELIGHTPARAMETRICRADIUS_OFFSET UNITYSDK_OFFSET(0xA010F70)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_GETTOPMOSTLITLAYER_OFFSET UNITYSDK_OFFSET(0xA010F80)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_GET_COLOR_OFFSET UNITYSDK_OFFSET(0xA0111A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_GET_RENDERVOLUMETRICSHADOWS_OFFSET UNITYSDK_OFFSET(0xA0111B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_SET_VERTICES_OFFSET UNITYSDK_OFFSET(0xA0111D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_GET_SHADOWVOLUMEINTENSITY_OFFSET UNITYSDK_OFFSET(0xA0111F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_GET_VOLUMEINTENSITY_OFFSET UNITYSDK_OFFSET(0xA011200)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_GET_BLENDSTYLEINDEX_OFFSET UNITYSDK_OFFSET(0xA011210)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_GET_OVERLAPOPERATION_OFFSET UNITYSDK_OFFSET(0xA011220)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_SET_INDICES_OFFSET UNITYSDK_OFFSET(0xA011230)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_SETSHAPEPATH_OFFSET UNITYSDK_OFFSET(0xA011250)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_GET_ALPHABLENDONOVERLAP_OFFSET UNITYSDK_OFFSET(0xA011270)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_GET_LIGHTCOOKIESPRITEINSTANCEID_OFFSET UNITYSDK_OFFSET(0xA011280)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_GET_ISPOINTLIGHT_OFFSET UNITYSDK_OFFSET(0xA0112A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0xA0112B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0xA011340)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_GET_NORMALMAPDISTANCE_OFFSET UNITYSDK_OFFSET(0xA011350)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_GET_POINTLIGHTQUALITY_OFFSET UNITYSDK_OFFSET(0xA011360)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_GET_POINTLIGHTINNERRADIUS_OFFSET UNITYSDK_OFFSET(0xA011370)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_UPDATEMESH_OFFSET UNITYSDK_OFFSET(0xA010B70)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA0131D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_AWAKE_OFFSET UNITYSDK_OFFSET(0xA013390)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_GET_INDICES_OFFSET UNITYSDK_OFFSET(0xA013670)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_GET_SHAPELIGHTPARAMETRICSIDES_OFFSET UNITYSDK_OFFSET(0xA013680)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_UPDATESPRITEMESH_OFFSET UNITYSDK_OFFSET(0xA0130C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_GET_SHADOWSENABLED_OFFSET UNITYSDK_OFFSET(0xA013CA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_GET_INTENSITY_OFFSET UNITYSDK_OFFSET(0xA013CB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_ISLITLAYER_OFFSET UNITYSDK_OFFSET(0xA013CC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_GET_FALLOFFINTENSITY_OFFSET UNITYSDK_OFFSET(0xA013D10)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_GET_AFFECTEDSORTINGLAYERS_OFFSET UNITYSDK_OFFSET(0xA013D20)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_SET_INTENSITY_OFFSET UNITYSDK_OFFSET(0xA013D30)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_SET_BLENDSTYLEINDEX_OFFSET UNITYSDK_OFFSET(0xA013D40)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_GET_VOLUMETRICSHADOWSENABLED_OFFSET UNITYSDK_OFFSET(0xA013D50)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_SET_POINTLIGHTOUTERANGLE_OFFSET UNITYSDK_OFFSET(0xA013D60)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_GET_POINTLIGHTINNERANGLE_OFFSET UNITYSDK_OFFSET(0xA013D70)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_GET_VERTICES_OFFSET UNITYSDK_OFFSET(0xA013D80)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_SET_SHADOWINTENSITY_OFFSET UNITYSDK_OFFSET(0xA013D90)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_SET_POINTLIGHTOUTERRADIUS_OFFSET UNITYSDK_OFFSET(0xA013DD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_GET_HASCACHEDMESH_OFFSET UNITYSDK_OFFSET(0xA013580)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_GET_POINTLIGHTOUTERRADIUS_OFFSET UNITYSDK_OFFSET(0xA013DE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_UPDATEBOUNDINGSPHERE_OFFSET UNITYSDK_OFFSET(0xA013DF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xA014090)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_GET_VOLUMEINTENSITYENABLED_OFFSET UNITYSDK_OFFSET(0xA0141D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_GET_BOUNDINGSPHERE_OFFSET UNITYSDK_OFFSET(0xA0141E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_GET_SHAPEPATH_OFFSET UNITYSDK_OFFSET(0xA0141F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_MARKFORUPDATE_OFFSET UNITYSDK_OFFSET(0xA014200)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_GET_LIGHTMESH_OFFSET UNITYSDK_OFFSET(0xA0135C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xA014210)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_SET_BOUNDINGSPHERE_OFFSET UNITYSDK_OFFSET(0xA014240)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_SET_VOLUMEINTENSITYENABLED_OFFSET UNITYSDK_OFFSET(0xA014250)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_SET_SHADOWSENABLED_OFFSET UNITYSDK_OFFSET(0xA014260)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_GET_NORMALMAPQUALITY_OFFSET UNITYSDK_OFFSET(0xA014270)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_SET_SHAPEPATH_OFFSET UNITYSDK_OFFSET(0xA014280)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_GET_SHAPELIGHTPARAMETRICANGLEOFFSET_OFFSET UNITYSDK_OFFSET(0xA0142A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_GET_SHAPELIGHTPARAMETRICRADIUS_OFFSET UNITYSDK_OFFSET(0xA0142B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_GET_POINTLIGHTOUTERANGLE_OFFSET UNITYSDK_OFFSET(0xA0142C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_SET_POINTLIGHTINNERANGLE_OFFSET UNITYSDK_OFFSET(0xA0142D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_SET_VOLUMETRICSHADOWSENABLED_OFFSET UNITYSDK_OFFSET(0xA0142E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_GET_SHADOWINTENSITY_OFFSET UNITYSDK_OFFSET(0xA0142F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_GET_SHAPELIGHTFALLOFFSIZE_OFFSET UNITYSDK_OFFSET(0xA014300)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_GET_LIGHTORDER_OFFSET UNITYSDK_OFFSET(0xA014310)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_GET_LIGHTTYPE_OFFSET UNITYSDK_OFFSET(0xA014320)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_.CTOR_OFFSET UNITYSDK_OFFSET(0xA014330)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_SET_COLOR_OFFSET UNITYSDK_OFFSET(0xA0144C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_GET_VOLUMEOPACITY_OFFSET UNITYSDK_OFFSET(0xA0144D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_SET_LIGHTORDER_OFFSET UNITYSDK_OFFSET(0xA0144E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_CACHEVALUES_OFFSET UNITYSDK_OFFSET(0xA0144F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_SET_OVERLAPOPERATION_OFFSET UNITYSDK_OFFSET(0xA014540)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int Light2D_TypeDefinitionIndex = 32462;

	class Light2D : public Il2CppObject
	{
	public:
		ComponentVersions* k_CurrentComponentVersion; // 0x0
		ComponentVersions* m_ComponentVersion; // 0x18
		LightType* m_LightType; // 0x1C
		::System::Int32 m_BlendStyleIndex; // 0x20
		::System::Single m_FalloffIntensity; // 0x24
		::UnityEngine::Color* m_Color; // 0x28
		::System::Single m_Intensity; // 0x38
		::System::Single m_LightVolumeIntensity; // 0x3C
		::System::Boolean m_LightVolumeIntensityEnabled; // 0x40
		::Il2CppArray<::System::Object*>* m_ApplyToSortingLayers; // 0x48
		::UnityEngine::Sprite* m_LightCookieSprite; // 0x50
		::UnityEngine::Sprite* m_DeprecatedPointLightCookieSprite; // 0x58
		::System::Int32 m_LightOrder; // 0x60
		::System::Boolean m_AlphaBlendOnOverlap; // 0x64
		OverlapOperation* m_OverlapOperation; // 0x68
		::System::Single m_NormalMapDistance; // 0x6C
		NormalMapQuality* m_NormalMapQuality; // 0x70
		::System::Boolean m_UseNormalMap; // 0x74
		::System::Boolean m_ShadowIntensityEnabled; // 0x75
		::System::Single m_ShadowIntensity; // 0x78
		::System::Boolean m_ShadowVolumeIntensityEnabled; // 0x7C
		::System::Single m_ShadowVolumeIntensity; // 0x80
		::UnityEngine::Mesh* m_Mesh; // 0x88
		::Il2CppArray<::System::Object*>* m_Vertices; // 0x90
		::Il2CppArray<::System::Object*>* m_Triangles; // 0x98
		::System::Int32 m_PreviousLightCookieSprite; // 0xA0
		::UnityEngine::Vector3* m_CachedPosition; // 0xA4
		::UnityEngine::Bounds* m_LocalBounds; // 0xB0
		::UnityEngine::BoundingSphere* _boundingSphere_k__BackingField; // 0xC8
		::System::Boolean forceUpdate; // 0xD8
		::System::Single m_PointLightInnerAngle; // 0xDC
		::System::Single m_PointLightOuterAngle; // 0xE0
		::System::Single m_PointLightInnerRadius; // 0xE4
		::System::Single m_PointLightOuterRadius; // 0xE8
		::System::Int32 m_ShapeLightParametricSides; // 0xEC
		::System::Single m_ShapeLightParametricAngleOffset; // 0xF0
		::System::Single m_ShapeLightParametricRadius; // 0xF4
		::System::Single m_ShapeLightFalloffSize; // 0xF8
		::UnityEngine::Vector2* m_ShapeLightFalloffOffset; // 0xFC
		::Il2CppArray<::System::Object*>* m_ShapePath; // 0x108
		::System::Single m_PreviousShapeLightFalloffSize; // 0x110
		::System::Int32 m_PreviousShapeLightParametricSides; // 0x114
		::System::Single m_PreviousShapeLightParametricAngleOffset; // 0x118
		::System::Single m_PreviousShapeLightParametricRadius; // 0x11C
		::System::Int32 m_PreviousShapePathHash; // 0x120
		LightType* m_PreviousLightType; // 0x124

		::System::Void set_lightType(LightType* arg)
		{
			((::System::Void(*)(LightType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_SET_LIGHTTYPE_OFFSET))(arg, nullptr);
		}

		::System::Single get_pointLightDistance()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_GET_POINTLIGHTDISTANCE_OFFSET))(nullptr);
		}

		::UnityEngine::Sprite* get_lightCookieSprite()
		{
			return (return (::UnityEngine::Sprite*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_GET_LIGHTCOOKIESPRITE_OFFSET))(nullptr);
		}

		::System::Void set_pointLightInnerRadius(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_SET_POINTLIGHTINNERRADIUS_OFFSET))(arg, nullptr);
		}

		::System::Void set_shadowVolumeIntensity(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_SET_SHADOWVOLUMEINTENSITY_OFFSET))(arg, nullptr);
		}

		::System::Void set_shapeLightParametricRadius(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_SET_SHAPELIGHTPARAMETRICRADIUS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetTopMostLitLayer()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_GETTOPMOSTLITLAYER_OFFSET))(nullptr);
		}

		::UnityEngine::Color* get_color()
		{
			return (return (::UnityEngine::Color*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_GET_COLOR_OFFSET))(nullptr);
		}

		::System::Boolean get_renderVolumetricShadows()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_GET_RENDERVOLUMETRICSHADOWS_OFFSET))(nullptr);
		}

		::System::Void set_vertices(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_SET_VERTICES_OFFSET))(arg, nullptr);
		}

		::System::Single get_shadowVolumeIntensity()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_GET_SHADOWVOLUMEINTENSITY_OFFSET))(nullptr);
		}

		::System::Single get_volumeIntensity()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_GET_VOLUMEINTENSITY_OFFSET))(nullptr);
		}

		::System::Int32 get_blendStyleIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_GET_BLENDSTYLEINDEX_OFFSET))(nullptr);
		}

		OverlapOperation* get_overlapOperation()
		{
			return (return (OverlapOperation*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_GET_OVERLAPOPERATION_OFFSET))(nullptr);
		}

		::System::Void set_indices(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_SET_INDICES_OFFSET))(arg, nullptr);
		}

		::System::Void SetShapePath(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_SETSHAPEPATH_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_alphaBlendOnOverlap()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_GET_ALPHABLENDONOVERLAP_OFFSET))(nullptr);
		}

		::System::Int32 get_lightCookieSpriteInstanceID()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_GET_LIGHTCOOKIESPRITEINSTANCEID_OFFSET))(nullptr);
		}

		::System::Boolean get_isPointLight()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_GET_ISPOINTLIGHT_OFFSET))(nullptr);
		}

		::System::Void OnAfterDeserialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_ONAFTERDESERIALIZE_OFFSET))(nullptr);
		}

		::System::Void OnBeforeSerialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_ONBEFORESERIALIZE_OFFSET))(nullptr);
		}

		::System::Single get_normalMapDistance()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_GET_NORMALMAPDISTANCE_OFFSET))(nullptr);
		}

		NormalMapQuality* get_pointLightQuality()
		{
			return (return (NormalMapQuality*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_GET_POINTLIGHTQUALITY_OFFSET))(nullptr);
		}

		::System::Single get_pointLightInnerRadius()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_GET_POINTLIGHTINNERRADIUS_OFFSET))(nullptr);
		}

		::System::Void UpdateMesh(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_UPDATEMESH_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_AWAKE_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_indices()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_GET_INDICES_OFFSET))(nullptr);
		}

		::System::Int32 get_shapeLightParametricSides()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_GET_SHAPELIGHTPARAMETRICSIDES_OFFSET))(nullptr);
		}

		::UnityEngine::Bounds* UpdateSpriteMesh()
		{
			return (return (::UnityEngine::Bounds*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_UPDATESPRITEMESH_OFFSET))(nullptr);
		}

		::System::Boolean get_shadowsEnabled()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_GET_SHADOWSENABLED_OFFSET))(nullptr);
		}

		::System::Single get_intensity()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_GET_INTENSITY_OFFSET))(nullptr);
		}

		::System::Boolean IsLitLayer(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_ISLITLAYER_OFFSET))(arg, nullptr);
		}

		::System::Single get_falloffIntensity()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_GET_FALLOFFINTENSITY_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_affectedSortingLayers()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_GET_AFFECTEDSORTINGLAYERS_OFFSET))(nullptr);
		}

		::System::Void set_intensity(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_SET_INTENSITY_OFFSET))(arg, nullptr);
		}

		::System::Void set_blendStyleIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_SET_BLENDSTYLEINDEX_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_volumetricShadowsEnabled()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_GET_VOLUMETRICSHADOWSENABLED_OFFSET))(nullptr);
		}

		::System::Void set_pointLightOuterAngle(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_SET_POINTLIGHTOUTERANGLE_OFFSET))(arg, nullptr);
		}

		::System::Single get_pointLightInnerAngle()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_GET_POINTLIGHTINNERANGLE_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_vertices()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_GET_VERTICES_OFFSET))(nullptr);
		}

		::System::Void set_shadowIntensity(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_SET_SHADOWINTENSITY_OFFSET))(arg, nullptr);
		}

		::System::Void set_pointLightOuterRadius(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_SET_POINTLIGHTOUTERRADIUS_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_hasCachedMesh()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_GET_HASCACHEDMESH_OFFSET))(nullptr);
		}

		::System::Single get_pointLightOuterRadius()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_GET_POINTLIGHTOUTERRADIUS_OFFSET))(nullptr);
		}

		::System::Void UpdateBoundingSphere()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_UPDATEBOUNDINGSPHERE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Boolean get_volumeIntensityEnabled()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_GET_VOLUMEINTENSITYENABLED_OFFSET))(nullptr);
		}

		::UnityEngine::BoundingSphere* get_boundingSphere()
		{
			return (return (::UnityEngine::BoundingSphere*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_GET_BOUNDINGSPHERE_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_shapePath()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_GET_SHAPEPATH_OFFSET))(nullptr);
		}

		::System::Void MarkForUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_MARKFORUPDATE_OFFSET))(nullptr);
		}

		::UnityEngine::Mesh* get_lightMesh()
		{
			return (return (::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_GET_LIGHTMESH_OFFSET))(nullptr);
		}

		::System::Void LateUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_LATEUPDATE_OFFSET))(nullptr);
		}

		::System::Void set_boundingSphere(::UnityEngine::BoundingSphere* arg)
		{
			((::System::Void(*)(::UnityEngine::BoundingSphere*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_SET_BOUNDINGSPHERE_OFFSET))(arg, nullptr);
		}

		::System::Void set_volumeIntensityEnabled(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_SET_VOLUMEINTENSITYENABLED_OFFSET))(arg, nullptr);
		}

		::System::Void set_shadowsEnabled(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_SET_SHADOWSENABLED_OFFSET))(arg, nullptr);
		}

		NormalMapQuality* get_normalMapQuality()
		{
			return (return (NormalMapQuality*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_GET_NORMALMAPQUALITY_OFFSET))(nullptr);
		}

		::System::Void set_shapePath(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_SET_SHAPEPATH_OFFSET))(arg, nullptr);
		}

		::System::Single get_shapeLightParametricAngleOffset()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_GET_SHAPELIGHTPARAMETRICANGLEOFFSET_OFFSET))(nullptr);
		}

		::System::Single get_shapeLightParametricRadius()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_GET_SHAPELIGHTPARAMETRICRADIUS_OFFSET))(nullptr);
		}

		::System::Single get_pointLightOuterAngle()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_GET_POINTLIGHTOUTERANGLE_OFFSET))(nullptr);
		}

		::System::Void set_pointLightInnerAngle(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_SET_POINTLIGHTINNERANGLE_OFFSET))(arg, nullptr);
		}

		::System::Void set_volumetricShadowsEnabled(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_SET_VOLUMETRICSHADOWSENABLED_OFFSET))(arg, nullptr);
		}

		::System::Single get_shadowIntensity()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_GET_SHADOWINTENSITY_OFFSET))(nullptr);
		}

		::System::Single get_shapeLightFalloffSize()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_GET_SHAPELIGHTFALLOFFSIZE_OFFSET))(nullptr);
		}

		::System::Int32 get_lightOrder()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_GET_LIGHTORDER_OFFSET))(nullptr);
		}

		LightType* get_lightType()
		{
			return (return (LightType*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_GET_LIGHTTYPE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_color(::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_SET_COLOR_OFFSET))(arg, nullptr);
		}

		::System::Single get_volumeOpacity()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_GET_VOLUMEOPACITY_OFFSET))(nullptr);
		}

		::System::Void set_lightOrder(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_SET_LIGHTORDER_OFFSET))(arg, nullptr);
		}

		::System::Void CacheValues()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_CACHEVALUES_OFFSET))(nullptr);
		}

		::System::Void set_overlapOperation(OverlapOperation* arg)
		{
			((::System::Void(*)(OverlapOperation*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2D_SET_OVERLAPOPERATION_OFFSET))(arg, nullptr);
		}

	};
}

