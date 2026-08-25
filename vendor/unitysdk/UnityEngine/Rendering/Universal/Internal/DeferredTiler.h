#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine { class FrustumPlanes; }
namespace UnityEngine { class Matrix4x4; }
namespace Unity::Mathematics { class float3; }
namespace UnityEngine::Rendering::Universal { class PreTile&; }
namespace Unity::Mathematics { class float4; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDTILER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA0AD1B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDTILER_GET_TILERLEVEL_OFFSET UNITYSDK_OFFSET(0xA0AD200)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDTILER_GET_TILEXCOUNT_OFFSET UNITYSDK_OFFSET(0xA0AD210)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDTILER_GET_TILEYCOUNT_OFFSET UNITYSDK_OFFSET(0xA0AD220)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDTILER_GET_TILEPIXELWIDTH_OFFSET UNITYSDK_OFFSET(0xA0AD230)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDTILER_GET_TILEPIXELHEIGHT_OFFSET UNITYSDK_OFFSET(0xA0AD240)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDTILER_GET_TILEHEADERSIZE_OFFSET UNITYSDK_OFFSET(0xA0AD250)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDTILER_GET_MAXLIGHTPERTILE_OFFSET UNITYSDK_OFFSET(0xA0AD260)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDTILER_GET_TILEDATACAPACITY_OFFSET UNITYSDK_OFFSET(0xA0AD2B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDTILER_GET_TILES_OFFSET UNITYSDK_OFFSET(0xA0AD300)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDTILER_GET_TILEHEADERS_OFFSET UNITYSDK_OFFSET(0xA0AD310)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDTILER_GETTILEOFFSETANDCOUNT_OFFSET UNITYSDK_OFFSET(0xA0AD320)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDTILER_GETTILEHEADEROFFSET_OFFSET UNITYSDK_OFFSET(0xA0AD360)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDTILER_SETUP_OFFSET UNITYSDK_OFFSET(0xA0AD370)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDTILER_ONCAMERACLEANUP_OFFSET UNITYSDK_OFFSET(0xA0AD490)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDTILER_PRECOMPUTETILES_OFFSET UNITYSDK_OFFSET(0xA0AD560)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDTILER_CULLFINALLIGHTS_OFFSET UNITYSDK_OFFSET(0xA0AC410)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDTILER_CULLINTERMEDIATELIGHTS_OFFSET UNITYSDK_OFFSET(0xA0ABAF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDTILER_ADDTILEDATA_OFFSET UNITYSDK_OFFSET(0xA0AE2F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDTILER_INTERSECTIONLINESPHERE_OFFSET UNITYSDK_OFFSET(0xA0AE3C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDTILER_CLIP_OFFSET UNITYSDK_OFFSET(0xA0AE590)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDTILER_CLIPPARTIAL_OFFSET UNITYSDK_OFFSET(0xA0AEB80)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDTILER_MAKEPLANE_OFFSET UNITYSDK_OFFSET(0xA0AECC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDTILER_MAKEPLANE_OFFSET UNITYSDK_OFFSET(0xA0AEDD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDTILER_DISTANCETOPLANE_OFFSET UNITYSDK_OFFSET(0xA0AEF40)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDTILER_SIGNEDSQ_OFFSET UNITYSDK_OFFSET(0xA0AEF70)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDTILER_MIN2_OFFSET UNITYSDK_OFFSET(0xA0AEF90)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDTILER_MAX2_OFFSET UNITYSDK_OFFSET(0xA0AEFA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDTILER_MAX3_OFFSET UNITYSDK_OFFSET(0xA0AEFB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDTILER__F32TOF16_OFFSET UNITYSDK_OFFSET(0xA0AEFD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDTILER_ALIGN_OFFSET UNITYSDK_OFFSET(0xA0AF030)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int DeferredTiler_TypeDefinitionIndex = 32857;

	class DeferredTiler : public Il2CppObject
	{
	public:
		::System::Int32 m_TilePixelWidth; // 0x10
		::System::Int32 m_TilePixelHeight; // 0x14
		::System::Int32 m_TileXCount; // 0x18
		::System::Int32 m_TileYCount; // 0x1C
		::System::Int32 m_TileHeaderSize; // 0x20
		::System::Int32 m_AvgLightPerTile; // 0x24
		::System::Int32 m_TilerLevel; // 0x28
		::UnityEngine::FrustumPlanes* m_FrustumPlanes; // 0x2C
		::System::Boolean m_IsOrthographic; // 0x44
		Il2CppObject* m_Counters; // 0x48
		Il2CppObject* m_TileData; // 0x58
		Il2CppObject* m_TileHeaders; // 0x68
		Il2CppObject* m_PreTiles; // 0x78

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDTILER_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 get_TilerLevel()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDTILER_GET_TILERLEVEL_OFFSET))(nullptr);
		}

		::System::Int32 get_TileXCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDTILER_GET_TILEXCOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_TileYCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDTILER_GET_TILEYCOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_TilePixelWidth()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDTILER_GET_TILEPIXELWIDTH_OFFSET))(nullptr);
		}

		::System::Int32 get_TilePixelHeight()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDTILER_GET_TILEPIXELHEIGHT_OFFSET))(nullptr);
		}

		::System::Int32 get_TileHeaderSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDTILER_GET_TILEHEADERSIZE_OFFSET))(nullptr);
		}

		::System::Int32 get_MaxLightPerTile()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDTILER_GET_MAXLIGHTPERTILE_OFFSET))(nullptr);
		}

		::System::Int32 get_TileDataCapacity()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDTILER_GET_TILEDATACAPACITY_OFFSET))(nullptr);
		}

		Il2CppObject* get_Tiles()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDTILER_GET_TILES_OFFSET))(nullptr);
		}

		Il2CppObject* get_TileHeaders()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDTILER_GET_TILEHEADERS_OFFSET))(nullptr);
		}

		::System::Void GetTileOffsetAndCount(::System::Int32 arg, ::System::Int32 arg, int32_t&* arg, int32_t&* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, int32_t&*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDTILER_GETTILEOFFSETANDCOUNT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 GetTileHeaderOffset(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDTILER_GETTILEHEADEROFFSET_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Setup(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDTILER_SETUP_OFFSET))(arg, nullptr);
		}

		::System::Void OnCameraCleanup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDTILER_ONCAMERACLEANUP_OFFSET))(nullptr);
		}

		::System::Void PrecomputeTiles(::UnityEngine::Matrix4x4* arg, ::System::Boolean arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Matrix4x4*, ::System::Boolean, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDTILER_PRECOMPUTETILES_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void CullFinalLights(Il2CppObject&* arg, Il2CppObject&* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(Il2CppObject&*, Il2CppObject&*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDTILER_CULLFINALLIGHTS_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void CullIntermediateLights(Il2CppObject&* arg, Il2CppObject&* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(Il2CppObject&*, Il2CppObject&*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDTILER_CULLINTERMEDIATELIGHTS_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 AddTileData(::System::Object** arg, int32_t&* arg)
		{
			return (return (::System::Int32(*)(::System::Object**, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDTILER_ADDTILEDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IntersectionLineSphere(::Unity::Mathematics::float3* arg, ::System::Single arg, ::Unity::Mathematics::float3* arg, ::Unity::Mathematics::float3* arg, float&* arg, float&* arg)
		{
			return (return (::System::Boolean(*)(::Unity::Mathematics::float3*, ::System::Single, ::Unity::Mathematics::float3*, ::Unity::Mathematics::float3*, float&*, float&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDTILER_INTERSECTIONLINESPHERE_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean Clip(::UnityEngine::Rendering::Universal::PreTile&* arg, ::Unity::Mathematics::float3* arg, ::System::Single arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::Universal::PreTile&*, ::Unity::Mathematics::float3*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDTILER_CLIP_OFFSET))(arg, arg, arg, nullptr);
		}

		ClipResult* ClipPartial(::Unity::Mathematics::float4* arg, ::Unity::Mathematics::float4* arg, ::Unity::Mathematics::float4* arg, ::Unity::Mathematics::float3* arg, ::System::Single arg, ::System::Single arg, int32_t&* arg)
		{
			return (return (ClipResult*(*)(::Unity::Mathematics::float4*, ::Unity::Mathematics::float4*, ::Unity::Mathematics::float4*, ::Unity::Mathematics::float3*, ::System::Single, ::System::Single, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDTILER_CLIPPARTIAL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::Unity::Mathematics::float4* MakePlane(::Unity::Mathematics::float3* arg, ::Unity::Mathematics::float3* arg)
		{
			return (return (::Unity::Mathematics::float4*(*)(::Unity::Mathematics::float3*, ::Unity::Mathematics::float3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDTILER_MAKEPLANE_OFFSET))(arg, arg, nullptr);
		}

		::Unity::Mathematics::float4* MakePlane(::Unity::Mathematics::float3* arg, ::Unity::Mathematics::float3* arg, ::Unity::Mathematics::float3* arg)
		{
			return (return (::Unity::Mathematics::float4*(*)(::Unity::Mathematics::float3*, ::Unity::Mathematics::float3*, ::Unity::Mathematics::float3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDTILER_MAKEPLANE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Single DistanceToPlane(::Unity::Mathematics::float4* arg, ::Unity::Mathematics::float3* arg)
		{
			return (return (::System::Single(*)(::Unity::Mathematics::float4*, ::Unity::Mathematics::float3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDTILER_DISTANCETOPLANE_OFFSET))(arg, arg, nullptr);
		}

		::System::Single SignedSq(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDTILER_SIGNEDSQ_OFFSET))(arg, nullptr);
		}

		::System::Single min2(::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDTILER_MIN2_OFFSET))(arg, arg, nullptr);
		}

		::System::Single max2(::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDTILER_MAX2_OFFSET))(arg, arg, nullptr);
		}

		::System::Single max3(::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDTILER_MAX3_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::UInt32 _f32tof16(::System::Single arg)
		{
			return (return (::System::UInt32(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDTILER__F32TOF16_OFFSET))(arg, nullptr);
		}

		::System::Int32 Align(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDTILER_ALIGN_OFFSET))(arg, arg, nullptr);
		}

	};
}

