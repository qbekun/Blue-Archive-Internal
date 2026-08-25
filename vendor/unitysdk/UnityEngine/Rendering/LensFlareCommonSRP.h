#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class LensFlareCommonSRP; }
namespace UnityEngine::Rendering { class RTHandle; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Matrix4x4; }
namespace UnityEngine::Rendering { class LensFlareComponentSRP; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Material; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine { class Vector4; }
namespace UnityEngine::Rendering { class RenderTargetIdentifier; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine::Rendering { class LensFlareDataSRP; }

#define UNITYENGINE_RENDERING_LENSFLARECOMMONSRP_CALCVIEWEXTENTS_OFFSET UNITYSDK_OFFSET(0x9FB6AB0)
#define UNITYENGINE_RENDERING_LENSFLARECOMMONSRP_WORLDTOVIEWPORTLOCAL_OFFSET UNITYSDK_OFFSET(0x9FB6B10)
#define UNITYENGINE_RENDERING_LENSFLARECOMMONSRP_ADDDATA_OFFSET UNITYSDK_OFFSET(0x9FB6BF0)
#define UNITYENGINE_RENDERING_LENSFLARECOMMONSRP_SHAPEATTENUATIONSPOTCONELIGHT_OFFSET UNITYSDK_OFFSET(0x9FB6D40)
#define UNITYENGINE_RENDERING_LENSFLARECOMMONSRP_GETLENSFLARERAYOFFSET_OFFSET UNITYSDK_OFFSET(0x9FB6E30)
#define UNITYENGINE_RENDERING_LENSFLARECOMMONSRP_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FB6E90)
#define UNITYENGINE_RENDERING_LENSFLARECOMMONSRP_WORLDTOVIEWPORTDISTANCE_OFFSET UNITYSDK_OFFSET(0x9FB6EA0)
#define UNITYENGINE_RENDERING_LENSFLARECOMMONSRP_COMPUTEOCCLUSION_OFFSET UNITYSDK_OFFSET(0x9FB7000)
#define UNITYENGINE_RENDERING_LENSFLARECOMMONSRP_DOPANINIPROJECTION_OFFSET UNITYSDK_OFFSET(0x9FB8830)
#define UNITYENGINE_RENDERING_LENSFLARECOMMONSRP_CALCCROPEXTENTS_OFFSET UNITYSDK_OFFSET(0x9FB8EB0)
#define UNITYENGINE_RENDERING_LENSFLARECOMMONSRP_SHAPEATTENUATIONDIRLIGHT_OFFSET UNITYSDK_OFFSET(0x9FB9010)
#define UNITYENGINE_RENDERING_LENSFLARECOMMONSRP_GETFLAREDATA0_OFFSET UNITYSDK_OFFSET(0x9FB8B80)
#define UNITYENGINE_RENDERING_LENSFLARECOMMONSRP__SHAPEATTENUATIONAREATUBELIGHT_G__DIFFLINEINTEGRAL|23_2_OFFSET UNITYSDK_OFFSET(0x9FB9040)
#define UNITYENGINE_RENDERING_LENSFLARECOMMONSRP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9FB94D0)
#define UNITYENGINE_RENDERING_LENSFLARECOMMONSRP_SHAPEATTENUATIONPOINTLIGHT_OFFSET UNITYSDK_OFFSET(0x9FB9710)
#define UNITYENGINE_RENDERING_LENSFLARECOMMONSRP_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x9FB9720)
#define UNITYENGINE_RENDERING_LENSFLARECOMMONSRP__SHAPEATTENUATIONAREATUBELIGHT_G__FPO|23_0_OFFSET UNITYSDK_OFFSET(0x9FB9450)
#define UNITYENGINE_RENDERING_LENSFLARECOMMONSRP_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x9FB83D0)
#define UNITYENGINE_RENDERING_LENSFLARECOMMONSRP__SHAPEATTENUATIONAREATUBELIGHT_G__FWT|23_1_OFFSET UNITYSDK_OFFSET(0x9FB94B0)
#define UNITYENGINE_RENDERING_LENSFLARECOMMONSRP_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x9FB9940)
#define UNITYENGINE_RENDERING_LENSFLARECOMMONSRP_SHAPEATTENUATIONAREARECTANGLELIGHT_OFFSET UNITYSDK_OFFSET(0x9FB9D70)
#define UNITYENGINE_RENDERING_LENSFLARECOMMONSRP_GET_DATA_OFFSET UNITYSDK_OFFSET(0x9FB9E20)
#define UNITYENGINE_RENDERING_LENSFLARECOMMONSRP_PANINI_GENERIC_INV_OFFSET UNITYSDK_OFFSET(0x9FB8FB0)
#define UNITYENGINE_RENDERING_LENSFLARECOMMONSRP_REMOVEDATA_OFFSET UNITYSDK_OFFSET(0x9FB9E70)
#define UNITYENGINE_RENDERING_LENSFLARECOMMONSRP_DOLENSFLAREDATADRIVENCOMMON_OFFSET UNITYSDK_OFFSET(0x9FB9F60)
#define UNITYENGINE_RENDERING_LENSFLARECOMMONSRP_WORLDTOVIEWPORT_OFFSET UNITYSDK_OFFSET(0x9FB85F0)
#define UNITYENGINE_RENDERING_LENSFLARECOMMONSRP__DOLENSFLAREDATADRIVENCOMMON_G__RANDOMRANGE|33_1_OFFSET UNITYSDK_OFFSET(0x9FBD720)
#define UNITYENGINE_RENDERING_LENSFLARECOMMONSRP_SHAPEATTENUATIONSPOTBOXLIGHT_OFFSET UNITYSDK_OFFSET(0x9FBD730)
#define UNITYENGINE_RENDERING_LENSFLARECOMMONSRP__DOLENSFLAREDATADRIVENCOMMON_G__COMPUTELOCALSIZE|33_0_OFFSET UNITYSDK_OFFSET(0x9FBD470)
#define UNITYENGINE_RENDERING_LENSFLARECOMMONSRP_SHAPEATTENUATIONAREADISCLIGHT_OFFSET UNITYSDK_OFFSET(0x9FBD770)
#define UNITYENGINE_RENDERING_LENSFLARECOMMONSRP_ISLENSFLARESRPHIDDEN_OFFSET UNITYSDK_OFFSET(0x9FB84D0)
#define UNITYENGINE_RENDERING_LENSFLARECOMMONSRP_SHAPEATTENUATIONSPOTPYRAMIDLIGHT_OFFSET UNITYSDK_OFFSET(0x9FBD820)
#define UNITYENGINE_RENDERING_LENSFLARECOMMONSRP_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9FBD8E0)
#define UNITYENGINE_RENDERING_LENSFLARECOMMONSRP_GETDATA_OFFSET UNITYSDK_OFFSET(0x9FB8480)
#define UNITYENGINE_RENDERING_LENSFLARECOMMONSRP_SHAPEATTENUATIONAREATUBELIGHT_OFFSET UNITYSDK_OFFSET(0x9FBDA60)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int LensFlareCommonSRP_TypeDefinitionIndex = 33994;

	class LensFlareCommonSRP : public Il2CppObject
	{
	public:
		::UnityEngine::Rendering::LensFlareCommonSRP* m_Instance; // 0x0
		::System::Object* m_Padlock; // 0x8
		Il2CppObject* m_Data; // 0x10
		::System::Int32 maxLensFlareWithOcclusion; // 0x18
		::System::Int32 maxLensFlareWithOcclusionTemporalSample; // 0x1C
		::System::Int32 mergeNeeded; // 0x20
		::UnityEngine::Rendering::RTHandle* occlusionRT; // 0x28
		::System::Int32 frameIdx; // 0x30

		::UnityEngine::Vector2* CalcViewExtents(::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LENSFLARECOMMONSRP_CALCVIEWEXTENTS_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::Vector3* WorldToViewportLocal(::System::Boolean arg, ::UnityEngine::Matrix4x4* arg, ::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::System::Boolean, ::UnityEngine::Matrix4x4*, ::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LENSFLARECOMMONSRP_WORLDTOVIEWPORTLOCAL_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void AddData(::UnityEngine::Rendering::LensFlareComponentSRP* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::LensFlareComponentSRP*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LENSFLARECOMMONSRP_ADDDATA_OFFSET))(arg, nullptr);
		}

		::System::Single ShapeAttenuationSpotConeLight(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LENSFLARECOMMONSRP_SHAPEATTENUATIONSPOTCONELIGHT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::Vector2* GetLensFlareRayOffset(::UnityEngine::Vector2* arg, ::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::UnityEngine::Vector2*, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LENSFLARECOMMONSRP_GETLENSFLARERAYOFFSET_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LENSFLARECOMMONSRP_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* WorldToViewportDistance(::UnityEngine::Camera* arg, ::UnityEngine::Vector3* arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::UnityEngine::Camera*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LENSFLARECOMMONSRP_WORLDTOVIEWPORTDISTANCE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ComputeOcclusion(::UnityEngine::Material* arg, ::UnityEngine::Rendering::LensFlareCommonSRP* arg, ::UnityEngine::Camera* arg, ::System::Single arg, ::System::Single arg, ::System::Boolean arg, ::System::Single arg, ::System::Single arg, ::System::Boolean arg, ::UnityEngine::Vector3* arg, ::UnityEngine::Matrix4x4* arg, ::UnityEngine::Rendering::CommandBuffer* arg, ::System::Boolean arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Material*, ::UnityEngine::Rendering::LensFlareCommonSRP*, ::UnityEngine::Camera*, ::System::Single, ::System::Single, ::System::Boolean, ::System::Single, ::System::Single, ::System::Boolean, ::UnityEngine::Vector3*, ::UnityEngine::Matrix4x4*, ::UnityEngine::Rendering::CommandBuffer*, ::System::Boolean, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LENSFLARECOMMONSRP_COMPUTEOCCLUSION_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::Vector2* DoPaniniProjection(::UnityEngine::Vector2* arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::UnityEngine::Vector2*, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LENSFLARECOMMONSRP_DOPANINIPROJECTION_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::Vector2* CalcCropExtents(::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LENSFLARECOMMONSRP_CALCCROPEXTENTS_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Single ShapeAttenuationDirLight(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg)
		{
			return (return (::System::Single(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LENSFLARECOMMONSRP_SHAPEATTENUATIONDIRLIGHT_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Vector4* GetFlareData0(::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::UnityEngine::Vector2* arg, ::System::Boolean arg)
		{
			return (return (::UnityEngine::Vector4*(*)(::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::Vector2*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LENSFLARECOMMONSRP_GETFLAREDATA0_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Single _ShapeAttenuationAreaTubeLight_g__DiffLineIntegral|23_2(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg)
		{
			return (return (::System::Single(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LENSFLARECOMMONSRP__SHAPEATTENUATIONAREATUBELIGHT_G__DIFFLINEINTEGRAL|23_2_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LENSFLARECOMMONSRP_DISPOSE_OFFSET))(nullptr);
		}

		::System::Single ShapeAttenuationPointLight()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LENSFLARECOMMONSRP_SHAPEATTENUATIONPOINTLIGHT_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::LensFlareCommonSRP* get_Instance()
		{
			return (return (::UnityEngine::Rendering::LensFlareCommonSRP*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LENSFLARECOMMONSRP_GET_INSTANCE_OFFSET))(nullptr);
		}

		::System::Single _ShapeAttenuationAreaTubeLight_g__Fpo|23_0(::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LENSFLARECOMMONSRP__SHAPEATTENUATIONAREATUBELIGHT_G__FPO|23_0_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsEmpty()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LENSFLARECOMMONSRP_ISEMPTY_OFFSET))(nullptr);
		}

		::System::Single _ShapeAttenuationAreaTubeLight_g__Fwt|23_1(::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LENSFLARECOMMONSRP__SHAPEATTENUATIONAREATUBELIGHT_G__FWT|23_1_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LENSFLARECOMMONSRP_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Single ShapeAttenuationAreaRectangleLight(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg)
		{
			return (return (::System::Single(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LENSFLARECOMMONSRP_SHAPEATTENUATIONAREARECTANGLELIGHT_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* get_Data()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LENSFLARECOMMONSRP_GET_DATA_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* Panini_Generic_Inv(::UnityEngine::Vector2* arg, ::System::Single arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::UnityEngine::Vector2*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LENSFLARECOMMONSRP_PANINI_GENERIC_INV_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RemoveData(::UnityEngine::Rendering::LensFlareComponentSRP* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::LensFlareComponentSRP*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LENSFLARECOMMONSRP_REMOVEDATA_OFFSET))(arg, nullptr);
		}

		::System::Void DoLensFlareDataDrivenCommon(::UnityEngine::Material* arg, ::UnityEngine::Rendering::LensFlareCommonSRP* arg, ::UnityEngine::Camera* arg, ::System::Single arg, ::System::Single arg, ::System::Boolean arg, ::System::Single arg, ::System::Single arg, ::System::Boolean arg, ::UnityEngine::Vector3* arg, ::UnityEngine::Matrix4x4* arg, ::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::RenderTargetIdentifier* arg, Il2CppObject* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Material*, ::UnityEngine::Rendering::LensFlareCommonSRP*, ::UnityEngine::Camera*, ::System::Single, ::System::Single, ::System::Boolean, ::System::Single, ::System::Single, ::System::Boolean, ::UnityEngine::Vector3*, ::UnityEngine::Matrix4x4*, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier*, Il2CppObject*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LENSFLARECOMMONSRP_DOLENSFLAREDATADRIVENCOMMON_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::Vector3* WorldToViewport(::UnityEngine::Camera* arg, ::System::Boolean arg, ::System::Boolean arg, ::UnityEngine::Matrix4x4* arg, ::UnityEngine::Vector3* arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::UnityEngine::Camera*, ::System::Boolean, ::System::Boolean, ::UnityEngine::Matrix4x4*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LENSFLARECOMMONSRP_WORLDTOVIEWPORT_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Single _DoLensFlareDataDrivenCommon_g__RandomRange|33_1(::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LENSFLARECOMMONSRP__DOLENSFLAREDATADRIVENCOMMON_G__RANDOMRANGE|33_1_OFFSET))(arg, arg, nullptr);
		}

		::System::Single ShapeAttenuationSpotBoxLight(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg)
		{
			return (return (::System::Single(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LENSFLARECOMMONSRP_SHAPEATTENUATIONSPOTBOXLIGHT_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Vector2* _DoLensFlareDataDrivenCommon_g__ComputeLocalSize|33_0(::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg, ::UnityEngine::AnimationCurve* arg, <>c__DisplayClass33_0&* arg, <>c__DisplayClass33_1&* arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::UnityEngine::AnimationCurve*, <>c__DisplayClass33_0&*, <>c__DisplayClass33_1&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LENSFLARECOMMONSRP__DOLENSFLAREDATADRIVENCOMMON_G__COMPUTELOCALSIZE|33_0_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Single ShapeAttenuationAreaDiscLight(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg)
		{
			return (return (::System::Single(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LENSFLARECOMMONSRP_SHAPEATTENUATIONAREADISCLIGHT_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsLensFlareSRPHidden(::UnityEngine::Camera* arg, ::UnityEngine::Rendering::LensFlareComponentSRP* arg, ::UnityEngine::Rendering::LensFlareDataSRP* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Camera*, ::UnityEngine::Rendering::LensFlareComponentSRP*, ::UnityEngine::Rendering::LensFlareDataSRP*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LENSFLARECOMMONSRP_ISLENSFLARESRPHIDDEN_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Single ShapeAttenuationSpotPyramidLight(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg)
		{
			return (return (::System::Single(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LENSFLARECOMMONSRP_SHAPEATTENUATIONSPOTPYRAMIDLIGHT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LENSFLARECOMMONSRP_.CCTOR_OFFSET))(nullptr);
		}

		Il2CppObject* GetData()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LENSFLARECOMMONSRP_GETDATA_OFFSET))(nullptr);
		}

		::System::Single ShapeAttenuationAreaTubeLight(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg, ::System::Single arg, ::UnityEngine::Camera* arg)
		{
			return (return (::System::Single(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::System::Single, ::UnityEngine::Camera*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LENSFLARECOMMONSRP_SHAPEATTENUATIONAREATUBELIGHT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

