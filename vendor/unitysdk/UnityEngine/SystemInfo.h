#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class OperatingSystemFamily; }
namespace UnityEngine { class DeviceType; }
namespace UnityEngine::Rendering { class GraphicsDeviceType; }
namespace UnityEngine::Rendering { class CopyTextureSupport; }
namespace UnityEngine { class RenderTextureFormat; }
namespace UnityEngine { class TextureFormat; }
namespace UnityEngine::Rendering { class VertexAttributeFormat; }
namespace UnityEngine { class NPOTSupport; }
namespace UnityEngine::Experimental::Rendering { class GraphicsFormat; }
namespace UnityEngine::Experimental::Rendering { class FormatUsage; }
namespace UnityEngine::Experimental::Rendering { class DefaultFormat; }
namespace UnityEngine { class RenderTextureDescriptor; }
namespace UnityEngine { class RenderTextureDescriptor&; }

#define UNITYENGINE_SYSTEMINFO_GET_OPERATINGSYSTEM_OFFSET UNITYSDK_OFFSET(0xA239300)
#define UNITYENGINE_SYSTEMINFO_GET_OPERATINGSYSTEMFAMILY_OFFSET UNITYSDK_OFFSET(0xA239380)
#define UNITYENGINE_SYSTEMINFO_GET_PROCESSORCOUNT_OFFSET UNITYSDK_OFFSET(0xA239400)
#define UNITYENGINE_SYSTEMINFO_GET_SYSTEMMEMORYSIZE_OFFSET UNITYSDK_OFFSET(0xA239480)
#define UNITYENGINE_SYSTEMINFO_GET_DEVICEUNIQUEIDENTIFIER_OFFSET UNITYSDK_OFFSET(0xA239500)
#define UNITYENGINE_SYSTEMINFO_GET_DEVICENAME_OFFSET UNITYSDK_OFFSET(0xA239580)
#define UNITYENGINE_SYSTEMINFO_GET_DEVICEMODEL_OFFSET UNITYSDK_OFFSET(0xA239600)
#define UNITYENGINE_SYSTEMINFO_GET_DEVICETYPE_OFFSET UNITYSDK_OFFSET(0xA239680)
#define UNITYENGINE_SYSTEMINFO_GET_GRAPHICSMEMORYSIZE_OFFSET UNITYSDK_OFFSET(0xA239700)
#define UNITYENGINE_SYSTEMINFO_GET_GRAPHICSDEVICENAME_OFFSET UNITYSDK_OFFSET(0xA239780)
#define UNITYENGINE_SYSTEMINFO_GET_GRAPHICSDEVICEVENDOR_OFFSET UNITYSDK_OFFSET(0xA239800)
#define UNITYENGINE_SYSTEMINFO_GET_GRAPHICSDEVICETYPE_OFFSET UNITYSDK_OFFSET(0xA239880)
#define UNITYENGINE_SYSTEMINFO_GET_GRAPHICSUVSTARTSATTOP_OFFSET UNITYSDK_OFFSET(0xA239900)
#define UNITYENGINE_SYSTEMINFO_GET_GRAPHICSDEVICEVERSION_OFFSET UNITYSDK_OFFSET(0xA239980)
#define UNITYENGINE_SYSTEMINFO_GET_GRAPHICSSHADERLEVEL_OFFSET UNITYSDK_OFFSET(0xA239A00)
#define UNITYENGINE_SYSTEMINFO_GET_GRAPHICSMULTITHREADED_OFFSET UNITYSDK_OFFSET(0xA239A80)
#define UNITYENGINE_SYSTEMINFO_GET_HASHIDDENSURFACEREMOVALONGPU_OFFSET UNITYSDK_OFFSET(0xA239B00)
#define UNITYENGINE_SYSTEMINFO_GET_SUPPORTSSHADOWS_OFFSET UNITYSDK_OFFSET(0xA239B80)
#define UNITYENGINE_SYSTEMINFO_GET_COPYTEXTURESUPPORT_OFFSET UNITYSDK_OFFSET(0xA239C00)
#define UNITYENGINE_SYSTEMINFO_GET_SUPPORTSCOMPUTESHADERS_OFFSET UNITYSDK_OFFSET(0xA239C80)
#define UNITYENGINE_SYSTEMINFO_GET_SUPPORTSRENDERTARGETARRAYINDEXFROMVERTEXSHADER_OFFSET UNITYSDK_OFFSET(0xA239D00)
#define UNITYENGINE_SYSTEMINFO_GET_SUPPORTSINSTANCING_OFFSET UNITYSDK_OFFSET(0xA239D80)
#define UNITYENGINE_SYSTEMINFO_GET_SUPPORTS32BITSINDEXBUFFER_OFFSET UNITYSDK_OFFSET(0xA239E00)
#define UNITYENGINE_SYSTEMINFO_GET_SUPPORTEDRENDERTARGETCOUNT_OFFSET UNITYSDK_OFFSET(0xA239E80)
#define UNITYENGINE_SYSTEMINFO_GET_SUPPORTSMULTISAMPLEDTEXTURES_OFFSET UNITYSDK_OFFSET(0xA239F00)
#define UNITYENGINE_SYSTEMINFO_GET_SUPPORTSMULTISAMPLEAUTORESOLVE_OFFSET UNITYSDK_OFFSET(0xA239F80)
#define UNITYENGINE_SYSTEMINFO_GET_USESREVERSEDZBUFFER_OFFSET UNITYSDK_OFFSET(0xA23A000)
#define UNITYENGINE_SYSTEMINFO_ISVALIDENUMVALUE_OFFSET UNITYSDK_OFFSET(0xA23A080)
#define UNITYENGINE_SYSTEMINFO_SUPPORTSRENDERTEXTUREFORMAT_OFFSET UNITYSDK_OFFSET(0xA23A0F0)
#define UNITYENGINE_SYSTEMINFO_SUPPORTSTEXTUREFORMAT_OFFSET UNITYSDK_OFFSET(0xA23A250)
#define UNITYENGINE_SYSTEMINFO_SUPPORTSVERTEXATTRIBUTEFORMAT_OFFSET UNITYSDK_OFFSET(0xA23A3B0)
#define UNITYENGINE_SYSTEMINFO_GET_NPOTSUPPORT_OFFSET UNITYSDK_OFFSET(0xA23A550)
#define UNITYENGINE_SYSTEMINFO_GET_MAXTEXTURESIZE_OFFSET UNITYSDK_OFFSET(0xA23A5D0)
#define UNITYENGINE_SYSTEMINFO_GET_MAXCUBEMAPSIZE_OFFSET UNITYSDK_OFFSET(0xA23A650)
#define UNITYENGINE_SYSTEMINFO_GET_MAXRENDERTEXTURESIZE_OFFSET UNITYSDK_OFFSET(0xA23A6D0)
#define UNITYENGINE_SYSTEMINFO_GET_MAXCOMPUTEWORKGROUPSIZE_OFFSET UNITYSDK_OFFSET(0xA23A750)
#define UNITYENGINE_SYSTEMINFO_GET_MAXCOMPUTEWORKGROUPSIZEX_OFFSET UNITYSDK_OFFSET(0xA23A7D0)
#define UNITYENGINE_SYSTEMINFO_GET_MAXCOMPUTEWORKGROUPSIZEY_OFFSET UNITYSDK_OFFSET(0xA23A850)
#define UNITYENGINE_SYSTEMINFO_GET_MAXCOMPUTEWORKGROUPSIZEZ_OFFSET UNITYSDK_OFFSET(0xA23A8D0)
#define UNITYENGINE_SYSTEMINFO_GET_SUPPORTSGRAPHICSFENCE_OFFSET UNITYSDK_OFFSET(0xA23A950)
#define UNITYENGINE_SYSTEMINFO_GET_MAXGRAPHICSBUFFERSIZE_OFFSET UNITYSDK_OFFSET(0xA237560)
#define UNITYENGINE_SYSTEMINFO_GET_SUPPORTSMULTIVIEW_OFFSET UNITYSDK_OFFSET(0xA23AA10)
#define UNITYENGINE_SYSTEMINFO_GET_SUPPORTSSTOREANDRESOLVEACTION_OFFSET UNITYSDK_OFFSET(0xA23AA90)
#define UNITYENGINE_SYSTEMINFO_GETOPERATINGSYSTEM_OFFSET UNITYSDK_OFFSET(0xA239340)
#define UNITYENGINE_SYSTEMINFO_GETOPERATINGSYSTEMFAMILY_OFFSET UNITYSDK_OFFSET(0xA2393C0)
#define UNITYENGINE_SYSTEMINFO_GETPROCESSORCOUNT_OFFSET UNITYSDK_OFFSET(0xA239440)
#define UNITYENGINE_SYSTEMINFO_GETPHYSICALMEMORYMB_OFFSET UNITYSDK_OFFSET(0xA2394C0)
#define UNITYENGINE_SYSTEMINFO_GETDEVICEUNIQUEIDENTIFIER_OFFSET UNITYSDK_OFFSET(0xA239540)
#define UNITYENGINE_SYSTEMINFO_GETDEVICENAME_OFFSET UNITYSDK_OFFSET(0xA2395C0)
#define UNITYENGINE_SYSTEMINFO_GETDEVICEMODEL_OFFSET UNITYSDK_OFFSET(0xA239640)
#define UNITYENGINE_SYSTEMINFO_GETDEVICETYPE_OFFSET UNITYSDK_OFFSET(0xA2396C0)
#define UNITYENGINE_SYSTEMINFO_GETGRAPHICSMEMORYSIZE_OFFSET UNITYSDK_OFFSET(0xA239740)
#define UNITYENGINE_SYSTEMINFO_GETGRAPHICSDEVICENAME_OFFSET UNITYSDK_OFFSET(0xA2397C0)
#define UNITYENGINE_SYSTEMINFO_GETGRAPHICSDEVICEVENDOR_OFFSET UNITYSDK_OFFSET(0xA239840)
#define UNITYENGINE_SYSTEMINFO_GETGRAPHICSDEVICETYPE_OFFSET UNITYSDK_OFFSET(0xA2398C0)
#define UNITYENGINE_SYSTEMINFO_GETGRAPHICSUVSTARTSATTOP_OFFSET UNITYSDK_OFFSET(0xA239940)
#define UNITYENGINE_SYSTEMINFO_GETGRAPHICSDEVICEVERSION_OFFSET UNITYSDK_OFFSET(0xA2399C0)
#define UNITYENGINE_SYSTEMINFO_GETGRAPHICSSHADERLEVEL_OFFSET UNITYSDK_OFFSET(0xA239A40)
#define UNITYENGINE_SYSTEMINFO_GETGRAPHICSMULTITHREADED_OFFSET UNITYSDK_OFFSET(0xA239AC0)
#define UNITYENGINE_SYSTEMINFO_HASHIDDENSURFACEREMOVALONGPU_OFFSET UNITYSDK_OFFSET(0xA239B40)
#define UNITYENGINE_SYSTEMINFO_SUPPORTSSHADOWS_OFFSET UNITYSDK_OFFSET(0xA239BC0)
#define UNITYENGINE_SYSTEMINFO_GETCOPYTEXTURESUPPORT_OFFSET UNITYSDK_OFFSET(0xA239C40)
#define UNITYENGINE_SYSTEMINFO_SUPPORTSCOMPUTESHADERS_OFFSET UNITYSDK_OFFSET(0xA239CC0)
#define UNITYENGINE_SYSTEMINFO_SUPPORTSRENDERTARGETARRAYINDEXFROMVERTEXSHADER_OFFSET UNITYSDK_OFFSET(0xA239D40)
#define UNITYENGINE_SYSTEMINFO_SUPPORTSINSTANCING_OFFSET UNITYSDK_OFFSET(0xA239DC0)
#define UNITYENGINE_SYSTEMINFO_SUPPORTS32BITSINDEXBUFFER_OFFSET UNITYSDK_OFFSET(0xA239E40)
#define UNITYENGINE_SYSTEMINFO_SUPPORTEDRENDERTARGETCOUNT_OFFSET UNITYSDK_OFFSET(0xA239EC0)
#define UNITYENGINE_SYSTEMINFO_SUPPORTSMULTISAMPLEDTEXTURES_OFFSET UNITYSDK_OFFSET(0xA239F40)
#define UNITYENGINE_SYSTEMINFO_SUPPORTSMULTISAMPLEAUTORESOLVE_OFFSET UNITYSDK_OFFSET(0xA239FC0)
#define UNITYENGINE_SYSTEMINFO_USESREVERSEDZBUFFER_OFFSET UNITYSDK_OFFSET(0xA23A040)
#define UNITYENGINE_SYSTEMINFO_HASRENDERTEXTURENATIVE_OFFSET UNITYSDK_OFFSET(0xA23A210)
#define UNITYENGINE_SYSTEMINFO_SUPPORTSTEXTUREFORMATNATIVE_OFFSET UNITYSDK_OFFSET(0xA23A370)
#define UNITYENGINE_SYSTEMINFO_SUPPORTSVERTEXATTRIBUTEFORMATNATIVE_OFFSET UNITYSDK_OFFSET(0xA23A510)
#define UNITYENGINE_SYSTEMINFO_GETNPOTSUPPORT_OFFSET UNITYSDK_OFFSET(0xA23A590)
#define UNITYENGINE_SYSTEMINFO_GETMAXTEXTURESIZE_OFFSET UNITYSDK_OFFSET(0xA23A610)
#define UNITYENGINE_SYSTEMINFO_GETMAXCUBEMAPSIZE_OFFSET UNITYSDK_OFFSET(0xA23A690)
#define UNITYENGINE_SYSTEMINFO_GETMAXRENDERTEXTURESIZE_OFFSET UNITYSDK_OFFSET(0xA23A710)
#define UNITYENGINE_SYSTEMINFO_GETMAXCOMPUTEWORKGROUPSIZE_OFFSET UNITYSDK_OFFSET(0xA23A790)
#define UNITYENGINE_SYSTEMINFO_GETMAXCOMPUTEWORKGROUPSIZEX_OFFSET UNITYSDK_OFFSET(0xA23A810)
#define UNITYENGINE_SYSTEMINFO_GETMAXCOMPUTEWORKGROUPSIZEY_OFFSET UNITYSDK_OFFSET(0xA23A890)
#define UNITYENGINE_SYSTEMINFO_GETMAXCOMPUTEWORKGROUPSIZEZ_OFFSET UNITYSDK_OFFSET(0xA23A910)
#define UNITYENGINE_SYSTEMINFO_SUPPORTSGPUFENCE_OFFSET UNITYSDK_OFFSET(0xA23A990)
#define UNITYENGINE_SYSTEMINFO_MAXGRAPHICSBUFFERSIZE_OFFSET UNITYSDK_OFFSET(0xA23A9D0)
#define UNITYENGINE_SYSTEMINFO_ISFORMATSUPPORTED_OFFSET UNITYSDK_OFFSET(0xA23AB10)
#define UNITYENGINE_SYSTEMINFO_GETCOMPATIBLEFORMAT_OFFSET UNITYSDK_OFFSET(0xA23AB50)
#define UNITYENGINE_SYSTEMINFO_GETGRAPHICSFORMAT_OFFSET UNITYSDK_OFFSET(0xA23AB90)
#define UNITYENGINE_SYSTEMINFO_GETRENDERTEXTURESUPPORTEDMSAASAMPLECOUNT_OFFSET UNITYSDK_OFFSET(0xA23ABD0)
#define UNITYENGINE_SYSTEMINFO_SUPPORTSMULTIVIEW_OFFSET UNITYSDK_OFFSET(0xA23AA50)
#define UNITYENGINE_SYSTEMINFO_SUPPORTSSTOREANDRESOLVEACTION_OFFSET UNITYSDK_OFFSET(0xA23AAD0)
#define UNITYENGINE_SYSTEMINFO_GETRENDERTEXTURESUPPORTEDMSAASAMPLECOUNT_INJECTED_OFFSET UNITYSDK_OFFSET(0xA23AC10)

namespace UnityEngine
{
	inline static constexpr unsigned int SystemInfo_TypeDefinitionIndex = 31200;

	class SystemInfo : public Il2CppObject
	{
	public:
		::System::String* get_operatingSystem()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GET_OPERATINGSYSTEM_OFFSET))(nullptr);
		}

		::UnityEngine::OperatingSystemFamily* get_operatingSystemFamily()
		{
			return (return (::UnityEngine::OperatingSystemFamily*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GET_OPERATINGSYSTEMFAMILY_OFFSET))(nullptr);
		}

		::System::Int32 get_processorCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GET_PROCESSORCOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_systemMemorySize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GET_SYSTEMMEMORYSIZE_OFFSET))(nullptr);
		}

		::System::String* get_deviceUniqueIdentifier()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GET_DEVICEUNIQUEIDENTIFIER_OFFSET))(nullptr);
		}

		::System::String* get_deviceName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GET_DEVICENAME_OFFSET))(nullptr);
		}

		::System::String* get_deviceModel()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GET_DEVICEMODEL_OFFSET))(nullptr);
		}

		::UnityEngine::DeviceType* get_deviceType()
		{
			return (return (::UnityEngine::DeviceType*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GET_DEVICETYPE_OFFSET))(nullptr);
		}

		::System::Int32 get_graphicsMemorySize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GET_GRAPHICSMEMORYSIZE_OFFSET))(nullptr);
		}

		::System::String* get_graphicsDeviceName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GET_GRAPHICSDEVICENAME_OFFSET))(nullptr);
		}

		::System::String* get_graphicsDeviceVendor()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GET_GRAPHICSDEVICEVENDOR_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::GraphicsDeviceType* get_graphicsDeviceType()
		{
			return (return (::UnityEngine::Rendering::GraphicsDeviceType*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GET_GRAPHICSDEVICETYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_graphicsUVStartsAtTop()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GET_GRAPHICSUVSTARTSATTOP_OFFSET))(nullptr);
		}

		::System::String* get_graphicsDeviceVersion()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GET_GRAPHICSDEVICEVERSION_OFFSET))(nullptr);
		}

		::System::Int32 get_graphicsShaderLevel()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GET_GRAPHICSSHADERLEVEL_OFFSET))(nullptr);
		}

		::System::Boolean get_graphicsMultiThreaded()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GET_GRAPHICSMULTITHREADED_OFFSET))(nullptr);
		}

		::System::Boolean get_hasHiddenSurfaceRemovalOnGPU()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GET_HASHIDDENSURFACEREMOVALONGPU_OFFSET))(nullptr);
		}

		::System::Boolean get_supportsShadows()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GET_SUPPORTSSHADOWS_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::CopyTextureSupport* get_copyTextureSupport()
		{
			return (return (::UnityEngine::Rendering::CopyTextureSupport*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GET_COPYTEXTURESUPPORT_OFFSET))(nullptr);
		}

		::System::Boolean get_supportsComputeShaders()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GET_SUPPORTSCOMPUTESHADERS_OFFSET))(nullptr);
		}

		::System::Boolean get_supportsRenderTargetArrayIndexFromVertexShader()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GET_SUPPORTSRENDERTARGETARRAYINDEXFROMVERTEXSHADER_OFFSET))(nullptr);
		}

		::System::Boolean get_supportsInstancing()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GET_SUPPORTSINSTANCING_OFFSET))(nullptr);
		}

		::System::Boolean get_supports32bitsIndexBuffer()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GET_SUPPORTS32BITSINDEXBUFFER_OFFSET))(nullptr);
		}

		::System::Int32 get_supportedRenderTargetCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GET_SUPPORTEDRENDERTARGETCOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_supportsMultisampledTextures()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GET_SUPPORTSMULTISAMPLEDTEXTURES_OFFSET))(nullptr);
		}

		::System::Boolean get_supportsMultisampleAutoResolve()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GET_SUPPORTSMULTISAMPLEAUTORESOLVE_OFFSET))(nullptr);
		}

		::System::Boolean get_usesReversedZBuffer()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GET_USESREVERSEDZBUFFER_OFFSET))(nullptr);
		}

		::System::Boolean IsValidEnumValue(::System::Enum* arg)
		{
			return (return (::System::Boolean(*)(::System::Enum*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_ISVALIDENUMVALUE_OFFSET))(arg, nullptr);
		}

		::System::Boolean SupportsRenderTextureFormat(::UnityEngine::RenderTextureFormat* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::RenderTextureFormat*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_SUPPORTSRENDERTEXTUREFORMAT_OFFSET))(arg, nullptr);
		}

		::System::Boolean SupportsTextureFormat(::UnityEngine::TextureFormat* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::TextureFormat*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_SUPPORTSTEXTUREFORMAT_OFFSET))(arg, nullptr);
		}

		::System::Boolean SupportsVertexAttributeFormat(::UnityEngine::Rendering::VertexAttributeFormat* arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::VertexAttributeFormat*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_SUPPORTSVERTEXATTRIBUTEFORMAT_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::NPOTSupport* get_npotSupport()
		{
			return (return (::UnityEngine::NPOTSupport*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GET_NPOTSUPPORT_OFFSET))(nullptr);
		}

		::System::Int32 get_maxTextureSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GET_MAXTEXTURESIZE_OFFSET))(nullptr);
		}

		::System::Int32 get_maxCubemapSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GET_MAXCUBEMAPSIZE_OFFSET))(nullptr);
		}

		::System::Int32 get_maxRenderTextureSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GET_MAXRENDERTEXTURESIZE_OFFSET))(nullptr);
		}

		::System::Int32 get_maxComputeWorkGroupSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GET_MAXCOMPUTEWORKGROUPSIZE_OFFSET))(nullptr);
		}

		::System::Int32 get_maxComputeWorkGroupSizeX()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GET_MAXCOMPUTEWORKGROUPSIZEX_OFFSET))(nullptr);
		}

		::System::Int32 get_maxComputeWorkGroupSizeY()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GET_MAXCOMPUTEWORKGROUPSIZEY_OFFSET))(nullptr);
		}

		::System::Int32 get_maxComputeWorkGroupSizeZ()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GET_MAXCOMPUTEWORKGROUPSIZEZ_OFFSET))(nullptr);
		}

		::System::Boolean get_supportsGraphicsFence()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GET_SUPPORTSGRAPHICSFENCE_OFFSET))(nullptr);
		}

		::System::Int64 get_maxGraphicsBufferSize()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GET_MAXGRAPHICSBUFFERSIZE_OFFSET))(nullptr);
		}

		::System::Boolean get_supportsMultiview()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GET_SUPPORTSMULTIVIEW_OFFSET))(nullptr);
		}

		::System::Boolean get_supportsStoreAndResolveAction()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GET_SUPPORTSSTOREANDRESOLVEACTION_OFFSET))(nullptr);
		}

		::System::String* GetOperatingSystem()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GETOPERATINGSYSTEM_OFFSET))(nullptr);
		}

		::UnityEngine::OperatingSystemFamily* GetOperatingSystemFamily()
		{
			return (return (::UnityEngine::OperatingSystemFamily*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GETOPERATINGSYSTEMFAMILY_OFFSET))(nullptr);
		}

		::System::Int32 GetProcessorCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GETPROCESSORCOUNT_OFFSET))(nullptr);
		}

		::System::Int32 GetPhysicalMemoryMB()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GETPHYSICALMEMORYMB_OFFSET))(nullptr);
		}

		::System::String* GetDeviceUniqueIdentifier()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GETDEVICEUNIQUEIDENTIFIER_OFFSET))(nullptr);
		}

		::System::String* GetDeviceName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GETDEVICENAME_OFFSET))(nullptr);
		}

		::System::String* GetDeviceModel()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GETDEVICEMODEL_OFFSET))(nullptr);
		}

		::UnityEngine::DeviceType* GetDeviceType()
		{
			return (return (::UnityEngine::DeviceType*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GETDEVICETYPE_OFFSET))(nullptr);
		}

		::System::Int32 GetGraphicsMemorySize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GETGRAPHICSMEMORYSIZE_OFFSET))(nullptr);
		}

		::System::String* GetGraphicsDeviceName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GETGRAPHICSDEVICENAME_OFFSET))(nullptr);
		}

		::System::String* GetGraphicsDeviceVendor()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GETGRAPHICSDEVICEVENDOR_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::GraphicsDeviceType* GetGraphicsDeviceType()
		{
			return (return (::UnityEngine::Rendering::GraphicsDeviceType*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GETGRAPHICSDEVICETYPE_OFFSET))(nullptr);
		}

		::System::Boolean GetGraphicsUVStartsAtTop()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GETGRAPHICSUVSTARTSATTOP_OFFSET))(nullptr);
		}

		::System::String* GetGraphicsDeviceVersion()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GETGRAPHICSDEVICEVERSION_OFFSET))(nullptr);
		}

		::System::Int32 GetGraphicsShaderLevel()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GETGRAPHICSSHADERLEVEL_OFFSET))(nullptr);
		}

		::System::Boolean GetGraphicsMultiThreaded()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GETGRAPHICSMULTITHREADED_OFFSET))(nullptr);
		}

		::System::Boolean HasHiddenSurfaceRemovalOnGPU()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_HASHIDDENSURFACEREMOVALONGPU_OFFSET))(nullptr);
		}

		::System::Boolean SupportsShadows()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_SUPPORTSSHADOWS_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::CopyTextureSupport* GetCopyTextureSupport()
		{
			return (return (::UnityEngine::Rendering::CopyTextureSupport*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GETCOPYTEXTURESUPPORT_OFFSET))(nullptr);
		}

		::System::Boolean SupportsComputeShaders()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_SUPPORTSCOMPUTESHADERS_OFFSET))(nullptr);
		}

		::System::Boolean SupportsRenderTargetArrayIndexFromVertexShader()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_SUPPORTSRENDERTARGETARRAYINDEXFROMVERTEXSHADER_OFFSET))(nullptr);
		}

		::System::Boolean SupportsInstancing()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_SUPPORTSINSTANCING_OFFSET))(nullptr);
		}

		::System::Boolean Supports32bitsIndexBuffer()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_SUPPORTS32BITSINDEXBUFFER_OFFSET))(nullptr);
		}

		::System::Int32 SupportedRenderTargetCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_SUPPORTEDRENDERTARGETCOUNT_OFFSET))(nullptr);
		}

		::System::Int32 SupportsMultisampledTextures()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_SUPPORTSMULTISAMPLEDTEXTURES_OFFSET))(nullptr);
		}

		::System::Boolean SupportsMultisampleAutoResolve()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_SUPPORTSMULTISAMPLEAUTORESOLVE_OFFSET))(nullptr);
		}

		::System::Boolean UsesReversedZBuffer()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_USESREVERSEDZBUFFER_OFFSET))(nullptr);
		}

		::System::Boolean HasRenderTextureNative(::UnityEngine::RenderTextureFormat* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::RenderTextureFormat*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_HASRENDERTEXTURENATIVE_OFFSET))(arg, nullptr);
		}

		::System::Boolean SupportsTextureFormatNative(::UnityEngine::TextureFormat* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::TextureFormat*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_SUPPORTSTEXTUREFORMATNATIVE_OFFSET))(arg, nullptr);
		}

		::System::Boolean SupportsVertexAttributeFormatNative(::UnityEngine::Rendering::VertexAttributeFormat* arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::VertexAttributeFormat*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_SUPPORTSVERTEXATTRIBUTEFORMATNATIVE_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::NPOTSupport* GetNPOTSupport()
		{
			return (return (::UnityEngine::NPOTSupport*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GETNPOTSUPPORT_OFFSET))(nullptr);
		}

		::System::Int32 GetMaxTextureSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GETMAXTEXTURESIZE_OFFSET))(nullptr);
		}

		::System::Int32 GetMaxCubemapSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GETMAXCUBEMAPSIZE_OFFSET))(nullptr);
		}

		::System::Int32 GetMaxRenderTextureSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GETMAXRENDERTEXTURESIZE_OFFSET))(nullptr);
		}

		::System::Int32 GetMaxComputeWorkGroupSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GETMAXCOMPUTEWORKGROUPSIZE_OFFSET))(nullptr);
		}

		::System::Int32 GetMaxComputeWorkGroupSizeX()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GETMAXCOMPUTEWORKGROUPSIZEX_OFFSET))(nullptr);
		}

		::System::Int32 GetMaxComputeWorkGroupSizeY()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GETMAXCOMPUTEWORKGROUPSIZEY_OFFSET))(nullptr);
		}

		::System::Int32 GetMaxComputeWorkGroupSizeZ()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GETMAXCOMPUTEWORKGROUPSIZEZ_OFFSET))(nullptr);
		}

		::System::Boolean SupportsGPUFence()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_SUPPORTSGPUFENCE_OFFSET))(nullptr);
		}

		::System::Int64 MaxGraphicsBufferSize()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_MAXGRAPHICSBUFFERSIZE_OFFSET))(nullptr);
		}

		::System::Boolean IsFormatSupported(::UnityEngine::Experimental::Rendering::GraphicsFormat* arg, ::UnityEngine::Experimental::Rendering::FormatUsage* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Experimental::Rendering::GraphicsFormat*, ::UnityEngine::Experimental::Rendering::FormatUsage*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_ISFORMATSUPPORTED_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Experimental::Rendering::GraphicsFormat* GetCompatibleFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat* arg, ::UnityEngine::Experimental::Rendering::FormatUsage* arg)
		{
			return (return (::UnityEngine::Experimental::Rendering::GraphicsFormat*(*)(::UnityEngine::Experimental::Rendering::GraphicsFormat*, ::UnityEngine::Experimental::Rendering::FormatUsage*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GETCOMPATIBLEFORMAT_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Experimental::Rendering::GraphicsFormat* GetGraphicsFormat(::UnityEngine::Experimental::Rendering::DefaultFormat* arg)
		{
			return (return (::UnityEngine::Experimental::Rendering::GraphicsFormat*(*)(::UnityEngine::Experimental::Rendering::DefaultFormat*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GETGRAPHICSFORMAT_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetRenderTextureSupportedMSAASampleCount(::UnityEngine::RenderTextureDescriptor* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::RenderTextureDescriptor*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GETRENDERTEXTURESUPPORTEDMSAASAMPLECOUNT_OFFSET))(arg, nullptr);
		}

		::System::Boolean SupportsMultiview()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_SUPPORTSMULTIVIEW_OFFSET))(nullptr);
		}

		::System::Boolean SupportsStoreAndResolveAction()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_SUPPORTSSTOREANDRESOLVEACTION_OFFSET))(nullptr);
		}

		::System::Int32 GetRenderTextureSupportedMSAASampleCount_Injected(::UnityEngine::RenderTextureDescriptor&* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::RenderTextureDescriptor&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GETRENDERTEXTURESUPPORTEDMSAASAMPLECOUNT_INJECTED_OFFSET))(arg, nullptr);
		}

	};
}

