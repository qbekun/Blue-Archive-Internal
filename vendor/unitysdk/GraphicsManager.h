#pragma once
#include "unitysdk.h"

namespace Win32Native { class BorderlessWindow; }
namespace Win32Native { class ResizeWindow; }
namespace Win32Native { class ScreenController; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine::Rendering::Universal { class UniversalRenderPipelineAsset; }
namespace UnityEngine::Rendering::Universal { class UIRenderPassSettings; }
namespace UnityEngine::Rendering::Universal { class MXBloomSettings; }
namespace MX::SaveData { class AntiAliasing; }
class RenderPipelineConfigData;
namespace MX::SaveData { class DeviceOption; }
namespace MX::SaveData { class FPS; }
class ScreenModeType;
class ScreenRatioType;
namespace UnityEngine { class Vector2Int; }
namespace UnityEngine { class Camera; }
namespace MX::SaveData { class Resolution; }
namespace UnityEngine { class Object; }
class BloomOverride;

#define GRAPHICSMANAGER_GET_SCREENCONTROLLER_OFFSET UNITYSDK_OFFSET(0x20C4D40)
#define GRAPHICSMANAGER_INITIALIZEPC_OFFSET UNITYSDK_OFFSET(0x20C4D50)
#define GRAPHICSMANAGER_HANDLEWANTSTOQUIT_OFFSET UNITYSDK_OFFSET(0x20C5100)
#define GRAPHICSMANAGER_ONMONITORCHANGED_OFFSET UNITYSDK_OFFSET(0x20C51F0)
#define GRAPHICSMANAGER_ONDISPLAYCHANGED_OFFSET UNITYSDK_OFFSET(0x20C5460)
#define GRAPHICSMANAGER_COMONITORCHANGEDEBOUNCE_OFFSET UNITYSDK_OFFSET(0x20C53F0)
#define GRAPHICSMANAGER_COADAPTTONEWMONITOR_OFFSET UNITYSDK_OFFSET(0x20C55A0)
#define GRAPHICSMANAGER_SAVECURRENTSETTINGS_OFFSET UNITYSDK_OFFSET(0x20C5110)
#define GRAPHICSMANAGER_ISPORTRAIT_OFFSET UNITYSDK_OFFSET(0x20C5630)
#define GRAPHICSMANAGER_ONRUNTIMEMETHODLOAD_OFFSET UNITYSDK_OFFSET(0x20C5650)
#define GRAPHICSMANAGER_APPLYVSYNCOPTION_OFFSET UNITYSDK_OFFSET(0x20C5800)
#define GRAPHICSMANAGER_SETPCSCREENOPTION_OFFSET UNITYSDK_OFFSET(0x20C5890)
#define GRAPHICSMANAGER_APPLYPCSCREENOPTION_OFFSET UNITYSDK_OFFSET(0x20C58F0)
#define GRAPHICSMANAGER_GETADJUSTWINDOWS_OFFSET UNITYSDK_OFFSET(0x20C5C30)
#define GRAPHICSMANAGER_ISSCREENFULLMODE_OFFSET UNITYSDK_OFFSET(0x20C5D50)
#define GRAPHICSMANAGER_FORCEWINDOWASPECT_OFFSET UNITYSDK_OFFSET(0x20C5D70)
#define GRAPHICSMANAGER_COFORCEWINDOWASPECT_OFFSET UNITYSDK_OFFSET(0x20C5BA0)
#define GRAPHICSMANAGER_STARTSCREENUPDATE_OFFSET UNITYSDK_OFFSET(0x20C6660)
#define GRAPHICSMANAGER_STARTFULLSCREENUPDATE_OFFSET UNITYSDK_OFFSET(0x20C5310)
#define GRAPHICSMANAGER_DELAYSCREENADJUST_OFFSET UNITYSDK_OFFSET(0x20C6670)
#define GRAPHICSMANAGER_CODELAYSCREENADJUST_OFFSET UNITYSDK_OFFSET(0x20C6760)
#define GRAPHICSMANAGER_COINITIALIZEWINDOWMODE_OFFSET UNITYSDK_OFFSET(0x20C5070)
#define GRAPHICSMANAGER_GETFONTSCALEFORCURRENTWINDOW_OFFSET UNITYSDK_OFFSET(0x20C6810)
#define GRAPHICSMANAGER_GET_DEVICEWIDTH_OFFSET UNITYSDK_OFFSET(0x20C6940)
#define GRAPHICSMANAGER_SET_DEVICEWIDTH_OFFSET UNITYSDK_OFFSET(0x20C6950)
#define GRAPHICSMANAGER_GET_DEVICEHEIGHT_OFFSET UNITYSDK_OFFSET(0x20C6960)
#define GRAPHICSMANAGER_SET_DEVICEHEIGHT_OFFSET UNITYSDK_OFFSET(0x20C6970)
#define GRAPHICSMANAGER_GET_DEVICEASPECT_OFFSET UNITYSDK_OFFSET(0x20C6980)
#define GRAPHICSMANAGER_SET_DEVICEASPECT_OFFSET UNITYSDK_OFFSET(0x20C6990)
#define GRAPHICSMANAGER_ONAPPLICATIONQUIT_OFFSET UNITYSDK_OFFSET(0x20C69A0)
#define GRAPHICSMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x20C6C20)
#define GRAPHICSMANAGER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x20C6C30)
#define GRAPHICSMANAGER_APPLYOPTIONS_OFFSET UNITYSDK_OFFSET(0x20C7260)
#define GRAPHICSMANAGER_SETCURSOR_OFFSET UNITYSDK_OFFSET(0x20C7850)
#define GRAPHICSMANAGER_ISSRPBATCHERAVAILABLE_OFFSET UNITYSDK_OFFSET(0x20C3FE0)
#define GRAPHICSMANAGER_GET_USESRPBATCHER_OFFSET UNITYSDK_OFFSET(0x20C7950)
#define GRAPHICSMANAGER_SET_USESRPBATCHER_OFFSET UNITYSDK_OFFSET(0x20C7640)
#define GRAPHICSMANAGER_GET_USEDYNAMICBATCHING_OFFSET UNITYSDK_OFFSET(0x20C79D0)
#define GRAPHICSMANAGER_SET_USEDYNAMICBATCHING_OFFSET UNITYSDK_OFFSET(0x20C76D0)
#define GRAPHICSMANAGER_GET_ALLOWPOSTPROCESSING_OFFSET UNITYSDK_OFFSET(0x20C7740)
#define GRAPHICSMANAGER_SET_ALLOWPOSTPROCESSING_OFFSET UNITYSDK_OFFSET(0x20C7A50)
#define GRAPHICSMANAGER_FORCEENABLEPOSTPROCESSING_OFFSET UNITYSDK_OFFSET(0x20C7A60)
#define GRAPHICSMANAGER_GET_AAMODE_OFFSET UNITYSDK_OFFSET(0x20C7B20)
#define GRAPHICSMANAGER_SET_AAMODE_OFFSET UNITYSDK_OFFSET(0x20C7B30)
#define GRAPHICSMANAGER_ISPOSTPROCESSAAENABLED_OFFSET UNITYSDK_OFFSET(0x20C7B40)
#define GRAPHICSMANAGER_APPLYCAMERAGRAPHICSSETTINGS_OFFSET UNITYSDK_OFFSET(0x20C7760)
#define GRAPHICSMANAGER_INITPIPELINEVARIABLES_OFFSET UNITYSDK_OFFSET(0x20C6EA0)
#define GRAPHICSMANAGER_SETFPS_OFFSET UNITYSDK_OFFSET(0x20C7B50)
#define GRAPHICSMANAGER_SETFPS_OFFSET UNITYSDK_OFFSET(0x20C7B90)
#define GRAPHICSMANAGER_RESETPIPELINECONFIGDATA_OFFSET UNITYSDK_OFFSET(0x20C7BC0)
#define GRAPHICSMANAGER_SAVEINITIALPIPELINECONFIGDATA_OFFSET UNITYSDK_OFFSET(0x20C7170)
#define GRAPHICSMANAGER_APPLYPIPELINECONFIGDATA_OFFSET UNITYSDK_OFFSET(0x20C6B70)
#define GRAPHICSMANAGER_SETPIPELINECONFIGDATA_OFFSET UNITYSDK_OFFSET(0x20C7C20)
#define GRAPHICSMANAGER_RELEASEPIPELINECONFIGDATA_OFFSET UNITYSDK_OFFSET(0x20C7C80)
#define GRAPHICSMANAGER_ADD_ONSCREENRESOLUTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x20C0660)
#define GRAPHICSMANAGER_REMOVE_ONSCREENRESOLUTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x20BFE80)
#define GRAPHICSMANAGER_CACHEDEVICESCREENRESOLUTION_OFFSET UNITYSDK_OFFSET(0x20C61E0)
#define GRAPHICSMANAGER_COSETSCREENRESOLUTION_OFFSET UNITYSDK_OFFSET(0x20C7D60)
#define GRAPHICSMANAGER_ANALYZEANDUPGRADERESOLUTION_OFFSET UNITYSDK_OFFSET(0x20C7E00)
#define GRAPHICSMANAGER_SETRENDERSCALE_OFFSET UNITYSDK_OFFSET(0x20C6210)
#define GRAPHICSMANAGER_GETDOWNSCALEDSCREENSIZE_OFFSET UNITYSDK_OFFSET(0x20C81F0)
#define GRAPHICSMANAGER_ROUNDTONEARESTEVENINT_OFFSET UNITYSDK_OFFSET(0x20C80F0)
#define GRAPHICSMANAGER_NUDGEDOWNTOEVENINT_OFFSET UNITYSDK_OFFSET(0x20C8710)
#define GRAPHICSMANAGER_ONCONFIGCHANGED_OFFSET UNITYSDK_OFFSET(0x20C88C0)
#define GRAPHICSMANAGER_STOPCHANGEWINDOWCOROUTINE_OFFSET UNITYSDK_OFFSET(0x20C5B20)
#define GRAPHICSMANAGER_GETRESOLUTIONSTRING_OFFSET UNITYSDK_OFFSET(0x20C88D0)
#define GRAPHICSMANAGER_GET_NEEDSTOPBOTTOMLETTERBOX_OFFSET UNITYSDK_OFFSET(0x20C8C50)
#define GRAPHICSMANAGER_SET_NEEDSTOPBOTTOMLETTERBOX_OFFSET UNITYSDK_OFFSET(0x20C8CC0)
#define GRAPHICSMANAGER_SET_MOSTNARROWASPECTRATIO_OFFSET UNITYSDK_OFFSET(0x20C8D30)
#define GRAPHICSMANAGER_CHANGEMOSTNARROWASPECTRATIO_OFFSET UNITYSDK_OFFSET(0x20C8DB0)
#define GRAPHICSMANAGER_ENABLEUILAYERDEPTHBUFFER_OFFSET UNITYSDK_OFFSET(0x20C8F30)
#define GRAPHICSMANAGER_RESETUILAYERDEPTHBUFFERSETTINGS_OFFSET UNITYSDK_OFFSET(0x20C8FA0)
#define GRAPHICSMANAGER_REQUESTUSEGRABTEXTURE_OFFSET UNITYSDK_OFFSET(0x20C9010)
#define GRAPHICSMANAGER_FINISHUSEGRABTEXTURE_OFFSET UNITYSDK_OFFSET(0x20C92B0)
#define GRAPHICSMANAGER_REFRESHGRABTEXTURESETTING_OFFSET UNITYSDK_OFFSET(0x20C9180)
#define GRAPHICSMANAGER_APPLYBLOOMOVERRIDE_OFFSET UNITYSDK_OFFSET(0x20C9340)
#define GRAPHICSMANAGER_REQUESTBLOOMOVERRIDE_OFFSET UNITYSDK_OFFSET(0x20BFA40)
#define GRAPHICSMANAGER_RELEASEBLOOMOVERRIDE_OFFSET UNITYSDK_OFFSET(0x20BFBB0)
#define GRAPHICSMANAGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x20C93F0)
#define GRAPHICSMANAGER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x20C95E0)

	inline static constexpr unsigned int GraphicsManager_TypeDefinitionIndex = 3676;

	class GraphicsManager : public ::ToyWebViewShared::Messages::NotifyPaintPopup
	{
	public:
		::Win32Native::BorderlessWindow* borderlessWindow; // 0x0
		::Win32Native::ResizeWindow* resizeWindow; // 0x20
		::Win32Native::ScreenController* screenController; // 0x28
		::System::Boolean shouldApplyDefaultSize; // 0x30
		::UnityEngine::Coroutine* monitorDebounceCoroutine; // 0x38
		Il2CppObject* lastAppliedRect; // 0x40
		::System::Int32 HD_TOTAL_PIXELS; // 0x0
		::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset* pipelineAsset; // 0x58
		::UnityEngine::Rendering::Universal::UIRenderPassSettings* uiPassSettings; // 0x60
		::UnityEngine::Rendering::Universal::MXBloomSettings* uiBloomSettings; // 0x68
		::UnityEngine::Coroutine* resizeCoroutine; // 0x70
		::UnityEngine::Coroutine* delayCoroutine; // 0x78
		::UnityEngine::Coroutine* forceWindowAspectCoroutine; // 0x80
		::System::Boolean isInitialized; // 0x88
		::System::Single currentRenderScale; // 0x8C
		::System::Int32 MAX_RENDER_DIMENSION; // 0x0
		::System::Int32 _DeviceWidth_k__BackingField; // 0x90
		::System::Int32 _DeviceHeight_k__BackingField; // 0x94
		::System::Single _DeviceAspect_k__BackingField; // 0x98
		::System::Boolean forceEnablePostProcessing; // 0x9C
		::System::Boolean allowPostProcessing; // 0x9D
		::MX::SaveData::AntiAliasing* _AAMode_k__BackingField; // 0xA0
		RenderPipelineConfigData* initialPipelineConfigData; // 0xA8
		Il2CppObject* pipelineConfigRequestList; // 0xB0
		::System::Action* OnScreenResolutionChanged; // 0xB8
		::UnityEngine::Coroutine* ChangeScreenResolutionCoroutine; // 0xC0
		::System::Single previousScreenAspectRatio; // 0xC8
		Il2CppObject* grabTextureRequesters; // 0xD0
		Il2CppObject* bloomOverrideSettings; // 0xD8

		::Win32Native::ScreenController* get_ScreenController()
		{
			return ((::Win32Native::ScreenController*(*)(::PVOID))((::PBYTE)hIl2Cpp + GRAPHICSMANAGER_GET_SCREENCONTROLLER_OFFSET))(nullptr);
		}

		::System::Void InitializePC(::MX::SaveData::DeviceOption* arg)
		{
			((::System::Void(*)(::MX::SaveData::DeviceOption*, ::PVOID))((::PBYTE)hIl2Cpp + GRAPHICSMANAGER_INITIALIZEPC_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleWantsToQuit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GRAPHICSMANAGER_HANDLEWANTSTOQUIT_OFFSET))(nullptr);
		}

		::System::Void OnMonitorChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GRAPHICSMANAGER_ONMONITORCHANGED_OFFSET))(nullptr);
		}

		::System::Void OnDisplayChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GRAPHICSMANAGER_ONDISPLAYCHANGED_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoMonitorChangeDebounce()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + GRAPHICSMANAGER_COMONITORCHANGEDEBOUNCE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoAdaptToNewMonitor()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + GRAPHICSMANAGER_COADAPTTONEWMONITOR_OFFSET))(nullptr);
		}

		::System::Void SaveCurrentSettings()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GRAPHICSMANAGER_SAVECURRENTSETTINGS_OFFSET))(nullptr);
		}

		::System::Boolean IsPortrait()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GRAPHICSMANAGER_ISPORTRAIT_OFFSET))(nullptr);
		}

		::System::Void OnRuntimeMethodLoad()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GRAPHICSMANAGER_ONRUNTIMEMETHODLOAD_OFFSET))(nullptr);
		}

		::System::Void ApplyVSyncOption(::System::Boolean arg, ::MX::SaveData::FPS* arg2)
		{
			((::System::Void(*)(::System::Boolean, ::MX::SaveData::FPS*, ::PVOID))((::PBYTE)hIl2Cpp + GRAPHICSMANAGER_APPLYVSYNCOPTION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetPCScreenOption(ScreenModeType* arg, ScreenRatioType* arg2)
		{
			((::System::Void(*)(ScreenModeType*, ScreenRatioType*, ::PVOID))((::PBYTE)hIl2Cpp + GRAPHICSMANAGER_SETPCSCREENOPTION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void ApplyPCScreenOption()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GRAPHICSMANAGER_APPLYPCSCREENOPTION_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2Int* GetAdjustWindows(::System::Single arg, ::System::Boolean arg2)
		{
			return ((::UnityEngine::Vector2Int*(*)(::System::Single, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + GRAPHICSMANAGER_GETADJUSTWINDOWS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean IsScreenFullMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GRAPHICSMANAGER_ISSCREENFULLMODE_OFFSET))(nullptr);
		}

		::System::Void ForceWindowAspect(::System::Single arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Single, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + GRAPHICSMANAGER_FORCEWINDOWASPECT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Collections::IEnumerator* CoForceWindowAspect(::System::Single arg, ::System::Boolean arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Single, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + GRAPHICSMANAGER_COFORCEWINDOWASPECT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartScreenUpdate(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + GRAPHICSMANAGER_STARTSCREENUPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void StartFullScreenUpdate(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + GRAPHICSMANAGER_STARTFULLSCREENUPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void DelayScreenAdjust()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GRAPHICSMANAGER_DELAYSCREENADJUST_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoDelayScreenAdjust()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + GRAPHICSMANAGER_CODELAYSCREENADJUST_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoInitializeWindowMode(::MX::SaveData::DeviceOption* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::SaveData::DeviceOption*, ::PVOID))((::PBYTE)hIl2Cpp + GRAPHICSMANAGER_COINITIALIZEWINDOWMODE_OFFSET))(arg, nullptr);
		}

		::System::Single GetFontScaleForCurrentWindow()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + GRAPHICSMANAGER_GETFONTSCALEFORCURRENTWINDOW_OFFSET))(nullptr);
		}

		::System::Int32 get_DeviceWidth()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GRAPHICSMANAGER_GET_DEVICEWIDTH_OFFSET))(nullptr);
		}

		::System::Void set_DeviceWidth(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + GRAPHICSMANAGER_SET_DEVICEWIDTH_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_DeviceHeight()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GRAPHICSMANAGER_GET_DEVICEHEIGHT_OFFSET))(nullptr);
		}

		::System::Void set_DeviceHeight(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + GRAPHICSMANAGER_SET_DEVICEHEIGHT_OFFSET))(arg, nullptr);
		}

		::System::Single get_DeviceAspect()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + GRAPHICSMANAGER_GET_DEVICEASPECT_OFFSET))(nullptr);
		}

		::System::Void set_DeviceAspect(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + GRAPHICSMANAGER_SET_DEVICEASPECT_OFFSET))(arg, nullptr);
		}

		::System::Void OnApplicationQuit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GRAPHICSMANAGER_ONAPPLICATIONQUIT_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GRAPHICSMANAGER_UPDATE_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GRAPHICSMANAGER_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void ApplyOptions(::MX::SaveData::DeviceOption* arg)
		{
			((::System::Void(*)(::MX::SaveData::DeviceOption*, ::PVOID))((::PBYTE)hIl2Cpp + GRAPHICSMANAGER_APPLYOPTIONS_OFFSET))(arg, nullptr);
		}

		::System::Void SetCursor(::MX::SaveData::DeviceOption* arg)
		{
			((::System::Void(*)(::MX::SaveData::DeviceOption*, ::PVOID))((::PBYTE)hIl2Cpp + GRAPHICSMANAGER_SETCURSOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsSRPBatcherAvailable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GRAPHICSMANAGER_ISSRPBATCHERAVAILABLE_OFFSET))(nullptr);
		}

		::System::Boolean get_UseSRPBatcher()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GRAPHICSMANAGER_GET_USESRPBATCHER_OFFSET))(nullptr);
		}

		::System::Void set_UseSRPBatcher(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + GRAPHICSMANAGER_SET_USESRPBATCHER_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_UseDynamicBatching()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GRAPHICSMANAGER_GET_USEDYNAMICBATCHING_OFFSET))(nullptr);
		}

		::System::Void set_UseDynamicBatching(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + GRAPHICSMANAGER_SET_USEDYNAMICBATCHING_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_AllowPostProcessing()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GRAPHICSMANAGER_GET_ALLOWPOSTPROCESSING_OFFSET))(nullptr);
		}

		::System::Void set_AllowPostProcessing(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + GRAPHICSMANAGER_SET_ALLOWPOSTPROCESSING_OFFSET))(arg, nullptr);
		}

		::System::Void ForceEnablePostProcessing(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + GRAPHICSMANAGER_FORCEENABLEPOSTPROCESSING_OFFSET))(arg, nullptr);
		}

		::MX::SaveData::AntiAliasing* get_AAMode()
		{
			return ((::MX::SaveData::AntiAliasing*(*)(::PVOID))((::PBYTE)hIl2Cpp + GRAPHICSMANAGER_GET_AAMODE_OFFSET))(nullptr);
		}

		::System::Void set_AAMode(::MX::SaveData::AntiAliasing* arg)
		{
			((::System::Void(*)(::MX::SaveData::AntiAliasing*, ::PVOID))((::PBYTE)hIl2Cpp + GRAPHICSMANAGER_SET_AAMODE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsPostProcessAAEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GRAPHICSMANAGER_ISPOSTPROCESSAAENABLED_OFFSET))(nullptr);
		}

		::System::Void ApplyCameraGraphicsSettings(::UnityEngine::Camera* arg)
		{
			((::System::Void(*)(::UnityEngine::Camera*, ::PVOID))((::PBYTE)hIl2Cpp + GRAPHICSMANAGER_APPLYCAMERAGRAPHICSSETTINGS_OFFSET))(arg, nullptr);
		}

		::System::Void InitPipelineVariables()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GRAPHICSMANAGER_INITPIPELINEVARIABLES_OFFSET))(nullptr);
		}

		::System::Void SetFPS(::MX::SaveData::FPS* arg)
		{
			((::System::Void(*)(::MX::SaveData::FPS*, ::PVOID))((::PBYTE)hIl2Cpp + GRAPHICSMANAGER_SETFPS_OFFSET))(arg, nullptr);
		}

		::System::Void SetFPS(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + GRAPHICSMANAGER_SETFPS_OFFSET))(arg, nullptr);
		}

		::System::Void ResetPipelineConfigData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GRAPHICSMANAGER_RESETPIPELINECONFIGDATA_OFFSET))(nullptr);
		}

		::System::Void SaveInitialPipelineConfigData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GRAPHICSMANAGER_SAVEINITIALPIPELINECONFIGDATA_OFFSET))(nullptr);
		}

		::System::Void ApplyPipelineConfigData(RenderPipelineConfigData* arg)
		{
			((::System::Void(*)(RenderPipelineConfigData*, ::PVOID))((::PBYTE)hIl2Cpp + GRAPHICSMANAGER_APPLYPIPELINECONFIGDATA_OFFSET))(arg, nullptr);
		}

		::System::Void SetPipelineConfigData(RenderPipelineConfigData* arg)
		{
			((::System::Void(*)(RenderPipelineConfigData*, ::PVOID))((::PBYTE)hIl2Cpp + GRAPHICSMANAGER_SETPIPELINECONFIGDATA_OFFSET))(arg, nullptr);
		}

		::System::Void ReleasePipelineConfigData(RenderPipelineConfigData* arg)
		{
			((::System::Void(*)(RenderPipelineConfigData*, ::PVOID))((::PBYTE)hIl2Cpp + GRAPHICSMANAGER_RELEASEPIPELINECONFIGDATA_OFFSET))(arg, nullptr);
		}

		::System::Void add_OnScreenResolutionChanged(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + GRAPHICSMANAGER_ADD_ONSCREENRESOLUTIONCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_OnScreenResolutionChanged(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + GRAPHICSMANAGER_REMOVE_ONSCREENRESOLUTIONCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void CacheDeviceScreenResolution(::System::Int32 arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + GRAPHICSMANAGER_CACHEDEVICESCREENRESOLUTION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Collections::IEnumerator* CoSetScreenResolution(::MX::SaveData::Resolution* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::SaveData::Resolution*, ::PVOID))((::PBYTE)hIl2Cpp + GRAPHICSMANAGER_COSETSCREENRESOLUTION_OFFSET))(arg, nullptr);
		}

		::System::Void AnalyzeAndUpgradeResolution(::System::Int32 arg, ::System::Int32 arg2, int32_t&* arg3, int32_t&* arg4)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, int32_t&*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + GRAPHICSMANAGER_ANALYZEANDUPGRADERESOLUTION_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void SetRenderScale(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + GRAPHICSMANAGER_SETRENDERSCALE_OFFSET))(arg, nullptr);
		}

		::System::Void GetDownscaledScreenSize(::System::Int32 arg, int32_t&* arg2, int32_t&* arg3)
		{
			((::System::Void(*)(::System::Int32, int32_t&*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + GRAPHICSMANAGER_GETDOWNSCALEDSCREENSIZE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Int32 RoundToNearestEvenInt(::System::Single arg)
		{
			return ((::System::Int32(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + GRAPHICSMANAGER_ROUNDTONEARESTEVENINT_OFFSET))(arg, nullptr);
		}

		::System::Int32 NudgeDownToEvenInt(::System::Single arg)
		{
			return ((::System::Int32(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + GRAPHICSMANAGER_NUDGEDOWNTOEVENINT_OFFSET))(arg, nullptr);
		}

		::System::Void OnConfigChanged(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + GRAPHICSMANAGER_ONCONFIGCHANGED_OFFSET))(str, nullptr);
		}

		::System::Void StopChangeWindowCoroutine()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GRAPHICSMANAGER_STOPCHANGEWINDOWCOROUTINE_OFFSET))(nullptr);
		}

		::System::String* GetResolutionString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GRAPHICSMANAGER_GETRESOLUTIONSTRING_OFFSET))(nullptr);
		}

		::System::Boolean get_NeedsTopBottomLetterBox()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GRAPHICSMANAGER_GET_NEEDSTOPBOTTOMLETTERBOX_OFFSET))(nullptr);
		}

		::System::Void set_NeedsTopBottomLetterBox(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + GRAPHICSMANAGER_SET_NEEDSTOPBOTTOMLETTERBOX_OFFSET))(arg, nullptr);
		}

		::System::Void set_MostNarrowAspectRatio(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + GRAPHICSMANAGER_SET_MOSTNARROWASPECTRATIO_OFFSET))(arg, nullptr);
		}

		::System::Void ChangeMostNarrowAspectRatio(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + GRAPHICSMANAGER_CHANGEMOSTNARROWASPECTRATIO_OFFSET))(arg, nullptr);
		}

		::System::Void EnableUILayerDepthBuffer()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GRAPHICSMANAGER_ENABLEUILAYERDEPTHBUFFER_OFFSET))(nullptr);
		}

		::System::Void ResetUILayerDepthBufferSettings()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GRAPHICSMANAGER_RESETUILAYERDEPTHBUFFERSETTINGS_OFFSET))(nullptr);
		}

		::System::Void RequestUseGrabTexture(::UnityEngine::Object* arg)
		{
			((::System::Void(*)(::UnityEngine::Object*, ::PVOID))((::PBYTE)hIl2Cpp + GRAPHICSMANAGER_REQUESTUSEGRABTEXTURE_OFFSET))(arg, nullptr);
		}

		::System::Void FinishUseGrabTexture(::UnityEngine::Object* arg)
		{
			((::System::Void(*)(::UnityEngine::Object*, ::PVOID))((::PBYTE)hIl2Cpp + GRAPHICSMANAGER_FINISHUSEGRABTEXTURE_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshGrabTextureSetting()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GRAPHICSMANAGER_REFRESHGRABTEXTURESETTING_OFFSET))(nullptr);
		}

		::System::Void ApplyBloomOverride(BloomOverride* arg)
		{
			((::System::Void(*)(BloomOverride*, ::PVOID))((::PBYTE)hIl2Cpp + GRAPHICSMANAGER_APPLYBLOOMOVERRIDE_OFFSET))(arg, nullptr);
		}

		::System::Void RequestBloomOverride(BloomOverride* arg, ::System::Object&* arg2)
		{
			((::System::Void(*)(BloomOverride*, ::System::Object&*, ::PVOID))((::PBYTE)hIl2Cpp + GRAPHICSMANAGER_REQUESTBLOOMOVERRIDE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void ReleaseBloomOverride(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + GRAPHICSMANAGER_RELEASEBLOOMOVERRIDE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GRAPHICSMANAGER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GRAPHICSMANAGER_.CCTOR_OFFSET))(nullptr);
		}

	};

