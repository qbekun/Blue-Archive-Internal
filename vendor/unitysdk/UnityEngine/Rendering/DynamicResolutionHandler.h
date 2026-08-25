#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Vector2Int; }
namespace UnityEngine::Rendering { class DynamicResScalerSlot; }
namespace UnityEngine::Rendering { class DynamicResUpscaleFilter; }
namespace UnityEngine::Rendering { class DynamicResolutionType; }
namespace UnityEngine::Rendering { class GlobalDynamicResolutionSettings; }
namespace UnityEngine::Rendering { class DynamicResolutionHandler; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine::Rendering { class PerformDynamicRes; }
namespace UnityEngine::Rendering { class DynamicResScalePolicyType; }

#define UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_RESET_OFFSET UNITYSDK_OFFSET(0x9FA88D0)
#define UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_GET_FILTER_OFFSET UNITYSDK_OFFSET(0x9FA8910)
#define UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_SET_FILTER_OFFSET UNITYSDK_OFFSET(0x9FA8920)
#define UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_GET_FINALVIEWPORT_OFFSET UNITYSDK_OFFSET(0x9FA8930)
#define UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_SET_FINALVIEWPORT_OFFSET UNITYSDK_OFFSET(0x9FA8940)
#define UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_SET_RUNUPSCALERFILTERONFULLRESOLUTION_OFFSET UNITYSDK_OFFSET(0x9FA8950)
#define UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_GET_RUNUPSCALERFILTERONFULLRESOLUTION_OFFSET UNITYSDK_OFFSET(0x9FA8960)
#define UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_FLUSHSCALABLEBUFFERMANAGERSTATE_OFFSET UNITYSDK_OFFSET(0x9FA8970)
#define UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_GETORCREATEDRSINSTANCEHANDLER_OFFSET UNITYSDK_OFFSET(0x9FA8B10)
#define UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_SET_UPSAMPLERSCHEDULE_OFFSET UNITYSDK_OFFSET(0x9FA9170)
#define UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_GET_UPSAMPLERSCHEDULE_OFFSET UNITYSDK_OFFSET(0x9FA9180)
#define UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x9FA9190)
#define UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FA90C0)
#define UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_DEFAULTDYNAMICRESMETHOD_OFFSET UNITYSDK_OFFSET(0x9FA9230)
#define UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_PROCESSSETTINGS_OFFSET UNITYSDK_OFFSET(0x9FA9240)
#define UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_GETRESOLVEDSCALE_OFFSET UNITYSDK_OFFSET(0x9FA9420)
#define UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_CALCULATEMIPBIAS_OFFSET UNITYSDK_OFFSET(0x9FA9490)
#define UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_SETDYNAMICRESSCALER_OFFSET UNITYSDK_OFFSET(0x9FA9510)
#define UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_SETSYSTEMDYNAMICRESSCALER_OFFSET UNITYSDK_OFFSET(0x9FA95C0)
#define UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_SETACTIVEDYNAMICSCALERSLOT_OFFSET UNITYSDK_OFFSET(0x9FA9670)
#define UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_CLEARSELECTEDCAMERA_OFFSET UNITYSDK_OFFSET(0x9FA96C0)
#define UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_SETUPSCALEFILTER_OFFSET UNITYSDK_OFFSET(0x9FA9740)
#define UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_SETCURRENTCAMERAREQUEST_OFFSET UNITYSDK_OFFSET(0x9FA9870)
#define UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_UPDATEANDUSECAMERA_OFFSET UNITYSDK_OFFSET(0x9FA9880)
#define UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x9FA9AB0)
#define UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_SOFTWAREDYNAMICRESISENABLED_OFFSET UNITYSDK_OFFSET(0x9FA9D90)
#define UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_HARDWAREDYNAMICRESISENABLED_OFFSET UNITYSDK_OFFSET(0x9FA8AF0)
#define UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_REQUESTSHARDWAREDYNAMICRESOLUTION_OFFSET UNITYSDK_OFFSET(0x9FA9DD0)
#define UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_DYNAMICRESOLUTIONENABLED_OFFSET UNITYSDK_OFFSET(0x9FA9DF0)
#define UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_FORCESOFTWAREFALLBACK_OFFSET UNITYSDK_OFFSET(0x9FA9E20)
#define UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_GETSCALEDSIZE_OFFSET UNITYSDK_OFFSET(0x9FA9E30)
#define UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_APPLYSCALESONSIZE_OFFSET UNITYSDK_OFFSET(0x9FA9EC0)
#define UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_APPLYSCALESONSIZE_OFFSET UNITYSDK_OFFSET(0x9FA9F40)
#define UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_GETCURRENTSCALE_OFFSET UNITYSDK_OFFSET(0x9FAA0B0)
#define UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_GETLASTSCALEDSIZE_OFFSET UNITYSDK_OFFSET(0x9FAA0D0)
#define UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_GETLOWRESMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x9FAA0E0)
#define UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9FAA1A0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int DynamicResolutionHandler_TypeDefinitionIndex = 33906;

	class DynamicResolutionHandler : public Il2CppObject
	{
	public:
		::System::Boolean m_Enabled; // 0x10
		::System::Boolean m_UseMipBias; // 0x11
		::System::Single m_MinScreenFraction; // 0x14
		::System::Single m_MaxScreenFraction; // 0x18
		::System::Single m_CurrentFraction; // 0x1C
		::System::Boolean m_ForcingRes; // 0x20
		::System::Boolean m_CurrentCameraRequest; // 0x21
		::System::Single m_PrevFraction; // 0x24
		::System::Boolean m_ForceSoftwareFallback; // 0x28
		::System::Boolean m_RunUpscalerFilterOnFullResolution; // 0x29
		::System::Single m_PrevHWScaleWidth; // 0x2C
		::System::Single m_PrevHWScaleHeight; // 0x30
		::UnityEngine::Vector2Int* m_LastScaledSize; // 0x34
		::UnityEngine::Rendering::DynamicResScalerSlot* s_ActiveScalerSlot; // 0x0
		::Il2CppArray<::System::Object*>* s_ScalerContainers; // 0x8
		::UnityEngine::Vector2Int* cachedOriginalSize; // 0x3C
		::UnityEngine::Rendering::DynamicResUpscaleFilter* _filter_k__BackingField; // 0x44
		Il2CppObject* s_CameraUpscaleFilters; // 0x10
		::UnityEngine::Vector2Int* _finalViewport_k__BackingField; // 0x48
		::UnityEngine::Rendering::DynamicResolutionType* type; // 0x50
		::UnityEngine::Rendering::GlobalDynamicResolutionSettings* m_CachedSettings; // 0x54
		::System::Int32 CameraDictionaryMaxcCapacity; // 0x0
		::System::WeakReference* m_OwnerCameraWeakRef; // 0x80
		Il2CppObject* s_CameraInstances; // 0x18
		::UnityEngine::Rendering::DynamicResolutionHandler* s_DefaultInstance; // 0x20
		::System::Int32 s_ActiveCameraId; // 0x28
		::UnityEngine::Rendering::DynamicResolutionHandler* s_ActiveInstance; // 0x30
		::System::Boolean s_ActiveInstanceDirty; // 0x38
		::System::Single s_GlobalHwFraction; // 0x3C
		::System::Boolean s_GlobalHwUpresActive; // 0x40
		UpsamplerScheduleType* m_UpsamplerSchedule; // 0x88

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_RESET_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::DynamicResUpscaleFilter* get_filter()
		{
			return (return (::UnityEngine::Rendering::DynamicResUpscaleFilter*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_GET_FILTER_OFFSET))(nullptr);
		}

		::System::Void set_filter(::UnityEngine::Rendering::DynamicResUpscaleFilter* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::DynamicResUpscaleFilter*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_SET_FILTER_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2Int* get_finalViewport()
		{
			return (return (::UnityEngine::Vector2Int*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_GET_FINALVIEWPORT_OFFSET))(nullptr);
		}

		::System::Void set_finalViewport(::UnityEngine::Vector2Int* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2Int*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_SET_FINALVIEWPORT_OFFSET))(arg, nullptr);
		}

		::System::Void set_runUpscalerFilterOnFullResolution(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_SET_RUNUPSCALERFILTERONFULLRESOLUTION_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_runUpscalerFilterOnFullResolution()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_GET_RUNUPSCALERFILTERONFULLRESOLUTION_OFFSET))(nullptr);
		}

		::System::Boolean FlushScalableBufferManagerState()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_FLUSHSCALABLEBUFFERMANAGERSTATE_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::DynamicResolutionHandler* GetOrCreateDrsInstanceHandler(::UnityEngine::Camera* arg)
		{
			return (return (::UnityEngine::Rendering::DynamicResolutionHandler*(*)(::UnityEngine::Camera*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_GETORCREATEDRSINSTANCEHANDLER_OFFSET))(arg, nullptr);
		}

		::System::Void set_upsamplerSchedule(UpsamplerScheduleType* arg)
		{
			((::System::Void(*)(UpsamplerScheduleType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_SET_UPSAMPLERSCHEDULE_OFFSET))(arg, nullptr);
		}

		UpsamplerScheduleType* get_upsamplerSchedule()
		{
			return (return (UpsamplerScheduleType*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_GET_UPSAMPLERSCHEDULE_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::DynamicResolutionHandler* get_instance()
		{
			return (return (::UnityEngine::Rendering::DynamicResolutionHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_GET_INSTANCE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Single DefaultDynamicResMethod()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_DEFAULTDYNAMICRESMETHOD_OFFSET))(nullptr);
		}

		::System::Void ProcessSettings(::UnityEngine::Rendering::GlobalDynamicResolutionSettings* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::GlobalDynamicResolutionSettings*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_PROCESSSETTINGS_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* GetResolvedScale()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_GETRESOLVEDSCALE_OFFSET))(nullptr);
		}

		::System::Single CalculateMipBias(::UnityEngine::Vector2Int* arg, ::UnityEngine::Vector2Int* arg, ::System::Boolean arg)
		{
			return (return (::System::Single(*)(::UnityEngine::Vector2Int*, ::UnityEngine::Vector2Int*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_CALCULATEMIPBIAS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SetDynamicResScaler(::UnityEngine::Rendering::PerformDynamicRes* arg, ::UnityEngine::Rendering::DynamicResScalePolicyType* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::PerformDynamicRes*, ::UnityEngine::Rendering::DynamicResScalePolicyType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_SETDYNAMICRESSCALER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetSystemDynamicResScaler(::UnityEngine::Rendering::PerformDynamicRes* arg, ::UnityEngine::Rendering::DynamicResScalePolicyType* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::PerformDynamicRes*, ::UnityEngine::Rendering::DynamicResScalePolicyType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_SETSYSTEMDYNAMICRESSCALER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetActiveDynamicScalerSlot(::UnityEngine::Rendering::DynamicResScalerSlot* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::DynamicResScalerSlot*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_SETACTIVEDYNAMICSCALERSLOT_OFFSET))(arg, nullptr);
		}

		::System::Void ClearSelectedCamera()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_CLEARSELECTEDCAMERA_OFFSET))(nullptr);
		}

		::System::Void SetUpscaleFilter(::UnityEngine::Camera* arg, ::UnityEngine::Rendering::DynamicResUpscaleFilter* arg)
		{
			((::System::Void(*)(::UnityEngine::Camera*, ::UnityEngine::Rendering::DynamicResUpscaleFilter*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_SETUPSCALEFILTER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetCurrentCameraRequest(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_SETCURRENTCAMERAREQUEST_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateAndUseCamera(::UnityEngine::Camera* arg, Il2CppObject* arg, ::System::Action* arg)
		{
			((::System::Void(*)(::UnityEngine::Camera*, Il2CppObject*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_UPDATEANDUSECAMERA_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Update(::UnityEngine::Rendering::GlobalDynamicResolutionSettings* arg, ::System::Action* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::GlobalDynamicResolutionSettings*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_UPDATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean SoftwareDynamicResIsEnabled()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_SOFTWAREDYNAMICRESISENABLED_OFFSET))(nullptr);
		}

		::System::Boolean HardwareDynamicResIsEnabled()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_HARDWAREDYNAMICRESISENABLED_OFFSET))(nullptr);
		}

		::System::Boolean RequestsHardwareDynamicResolution()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_REQUESTSHARDWAREDYNAMICRESOLUTION_OFFSET))(nullptr);
		}

		::System::Boolean DynamicResolutionEnabled()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_DYNAMICRESOLUTIONENABLED_OFFSET))(nullptr);
		}

		::System::Void ForceSoftwareFallback()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_FORCESOFTWAREFALLBACK_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2Int* GetScaledSize(::UnityEngine::Vector2Int* arg)
		{
			return (return (::UnityEngine::Vector2Int*(*)(::UnityEngine::Vector2Int*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_GETSCALEDSIZE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2Int* ApplyScalesOnSize(::UnityEngine::Vector2Int* arg)
		{
			return (return (::UnityEngine::Vector2Int*(*)(::UnityEngine::Vector2Int*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_APPLYSCALESONSIZE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2Int* ApplyScalesOnSize(::UnityEngine::Vector2Int* arg, ::UnityEngine::Vector2* arg)
		{
			return (return (::UnityEngine::Vector2Int*(*)(::UnityEngine::Vector2Int*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_APPLYSCALESONSIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Single GetCurrentScale()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_GETCURRENTSCALE_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2Int* GetLastScaledSize()
		{
			return (return (::UnityEngine::Vector2Int*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_GETLASTSCALEDSIZE_OFFSET))(nullptr);
		}

		::System::Single GetLowResMultiplier(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_GETLOWRESMULTIPLIER_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DYNAMICRESOLUTIONHANDLER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

