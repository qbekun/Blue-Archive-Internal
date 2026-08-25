#pragma once
#include "../../../../unitysdk.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDCONFIG_SET_ISOPENGL_OFFSET UNITYSDK_OFFSET(0xA09D020)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDCONFIG_GET_USECBUFFERFORLIGHTLIST_OFFSET UNITYSDK_OFFSET(0xA09D060)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDCONFIG_GET_USECBUFFERFORLIGHTDATA_OFFSET UNITYSDK_OFFSET(0xA09D0A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDCONFIG_GET_ISDX10_OFFSET UNITYSDK_OFFSET(0xA09D0B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDCONFIG_GET_USECBUFFERFORTILELIST_OFFSET UNITYSDK_OFFSET(0xA09D0F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDCONFIG_GET_ISOPENGL_OFFSET UNITYSDK_OFFSET(0xA09D130)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDCONFIG_GET_USECBUFFERFORDEPTHRANGE_OFFSET UNITYSDK_OFFSET(0xA09D170)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDCONFIG_SET_ISDX10_OFFSET UNITYSDK_OFFSET(0xA09D1B0)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int DeferredConfig_TypeDefinitionIndex = 32844;

	class DeferredConfig : public Il2CppObject
	{
	public:
		::System::Boolean _IsOpenGL_k__BackingField; // 0x0
		::System::Boolean _IsDX10_k__BackingField; // 0x1
		::System::Int32 kPreferredCBufferSize; // 0x0
		::System::Int32 kPreferredStructuredBufferSize; // 0x0
		::System::Int32 kTilePixelWidth; // 0x0
		::System::Int32 kTilePixelHeight; // 0x0
		::System::Int32 kTilerDepth; // 0x0
		::System::Int32 kTilerSubdivisions; // 0x0
		::System::Int32 kAvgLightPerTile; // 0x0
		::System::Int32 kTileDepthInfoIntermediateLevel; // 0x0
		::System::Boolean kHasNativeQuadSupport; // 0x0

		::System::Void set_IsOpenGL(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDCONFIG_SET_ISOPENGL_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_UseCBufferForLightList()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDCONFIG_GET_USECBUFFERFORLIGHTLIST_OFFSET))(nullptr);
		}

		::System::Boolean get_UseCBufferForLightData()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDCONFIG_GET_USECBUFFERFORLIGHTDATA_OFFSET))(nullptr);
		}

		::System::Boolean get_IsDX10()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDCONFIG_GET_ISDX10_OFFSET))(nullptr);
		}

		::System::Boolean get_UseCBufferForTileList()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDCONFIG_GET_USECBUFFERFORTILELIST_OFFSET))(nullptr);
		}

		::System::Boolean get_IsOpenGL()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDCONFIG_GET_ISOPENGL_OFFSET))(nullptr);
		}

		::System::Boolean get_UseCBufferForDepthRange()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDCONFIG_GET_USECBUFFERFORDEPTHRANGE_OFFSET))(nullptr);
		}

		::System::Void set_IsDX10(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDCONFIG_SET_ISDX10_OFFSET))(arg, nullptr);
		}

	};
}

