#pragma once
#include "../../../unitysdk.h"

#define UNITYENGINE_WINDOWS_WEBCAM_VIDEOCAPTURE_MAKECAPTURERESULT_OFFSET UNITYSDK_OFFSET(0xA247EC0)
#define UNITYENGINE_WINDOWS_WEBCAM_VIDEOCAPTURE_INVOKEONCREATEDVIDEOCAPTURERESOURCEDELEGATE_OFFSET UNITYSDK_OFFSET(0xA247F20)
#define UNITYENGINE_WINDOWS_WEBCAM_VIDEOCAPTURE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA247FD0)
#define UNITYENGINE_WINDOWS_WEBCAM_VIDEOCAPTURE_INVOKEONVIDEOMODESTARTEDDELEGATE_OFFSET UNITYSDK_OFFSET(0xA247FF0)
#define UNITYENGINE_WINDOWS_WEBCAM_VIDEOCAPTURE_INVOKEONVIDEOMODESTOPPEDDELEGATE_OFFSET UNITYSDK_OFFSET(0xA248070)
#define UNITYENGINE_WINDOWS_WEBCAM_VIDEOCAPTURE_INVOKEONSTARTEDRECORDINGVIDEOTODISKDELEGATE_OFFSET UNITYSDK_OFFSET(0xA2480F0)
#define UNITYENGINE_WINDOWS_WEBCAM_VIDEOCAPTURE_INVOKEONSTOPPEDRECORDINGVIDEOTODISKDELEGATE_OFFSET UNITYSDK_OFFSET(0xA248170)
#define UNITYENGINE_WINDOWS_WEBCAM_VIDEOCAPTURE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA2481F0)
#define UNITYENGINE_WINDOWS_WEBCAM_VIDEOCAPTURE_DISPOSE_INTERNAL_OFFSET UNITYSDK_OFFSET(0xA2482A0)
#define UNITYENGINE_WINDOWS_WEBCAM_VIDEOCAPTURE_FINALIZE_OFFSET UNITYSDK_OFFSET(0xA2482E0)
#define UNITYENGINE_WINDOWS_WEBCAM_VIDEOCAPTURE_DISPOSETHREADED_INTERNAL_OFFSET UNITYSDK_OFFSET(0xA248420)

namespace UnityEngine::Windows::WebCam
{
	inline static constexpr unsigned int VideoCapture_TypeDefinitionIndex = 31279;

	class VideoCapture : public Il2CppObject
	{
	public:
		::System::Int32 m_NativePtr; // 0x10
		::System::Int64 HR_SUCCESS; // 0x0

		VideoCaptureResult* MakeCaptureResult(::System::Int64 arg)
		{
			return (return (VideoCaptureResult*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_WEBCAM_VIDEOCAPTURE_MAKECAPTURERESULT_OFFSET))(arg, nullptr);
		}

		::System::Void InvokeOnCreatedVideoCaptureResourceDelegate(OnVideoCaptureResourceCreatedCallback* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(OnVideoCaptureResourceCreatedCallback*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_WEBCAM_VIDEOCAPTURE_INVOKEONCREATEDVIDEOCAPTURERESOURCEDELEGATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_WEBCAM_VIDEOCAPTURE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void InvokeOnVideoModeStartedDelegate(OnVideoModeStartedCallback* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(OnVideoModeStartedCallback*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_WEBCAM_VIDEOCAPTURE_INVOKEONVIDEOMODESTARTEDDELEGATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void InvokeOnVideoModeStoppedDelegate(OnVideoModeStoppedCallback* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(OnVideoModeStoppedCallback*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_WEBCAM_VIDEOCAPTURE_INVOKEONVIDEOMODESTOPPEDDELEGATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void InvokeOnStartedRecordingVideoToDiskDelegate(OnStartedRecordingVideoCallback* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(OnStartedRecordingVideoCallback*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_WEBCAM_VIDEOCAPTURE_INVOKEONSTARTEDRECORDINGVIDEOTODISKDELEGATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void InvokeOnStoppedRecordingVideoToDiskDelegate(OnStoppedRecordingVideoCallback* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(OnStoppedRecordingVideoCallback*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_WEBCAM_VIDEOCAPTURE_INVOKEONSTOPPEDRECORDINGVIDEOTODISKDELEGATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_WEBCAM_VIDEOCAPTURE_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void Dispose_Internal()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_WEBCAM_VIDEOCAPTURE_DISPOSE_INTERNAL_OFFSET))(nullptr);
		}

		::System::Void Finalize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_WEBCAM_VIDEOCAPTURE_FINALIZE_OFFSET))(nullptr);
		}

		::System::Void DisposeThreaded_Internal()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_WEBCAM_VIDEOCAPTURE_DISPOSETHREADED_INTERNAL_OFFSET))(nullptr);
		}

	};
}

