#pragma once
#include "../../../unitysdk.h"

#define UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTURE_MAKECAPTURERESULT_OFFSET UNITYSDK_OFFSET(0xA246FA0)
#define UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTURE_INVOKEONCREATEDRESOURCEDELEGATE_OFFSET UNITYSDK_OFFSET(0xA247000)
#define UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTURE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2470B0)
#define UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTURE_INVOKEONPHOTOMODESTARTEDDELEGATE_OFFSET UNITYSDK_OFFSET(0xA2470D0)
#define UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTURE_INVOKEONPHOTOMODESTOPPEDDELEGATE_OFFSET UNITYSDK_OFFSET(0xA247150)
#define UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTURE_INVOKEONCAPTUREDPHOTOTODISKDELEGATE_OFFSET UNITYSDK_OFFSET(0xA2471D0)
#define UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTURE_INVOKEONCAPTUREDPHOTOTOMEMORYDELEGATE_OFFSET UNITYSDK_OFFSET(0xA247250)
#define UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTURE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA247340)
#define UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTURE_DISPOSE_INTERNAL_OFFSET UNITYSDK_OFFSET(0xA2473F0)
#define UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTURE_FINALIZE_OFFSET UNITYSDK_OFFSET(0xA247430)
#define UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTURE_DISPOSETHREADED_INTERNAL_OFFSET UNITYSDK_OFFSET(0xA247570)

namespace UnityEngine::Windows::WebCam
{
	inline static constexpr unsigned int PhotoCapture_TypeDefinitionIndex = 31270;

	class PhotoCapture : public Il2CppObject
	{
	public:
		::System::Int32 m_NativePtr; // 0x10
		::System::Int64 HR_SUCCESS; // 0x0

		PhotoCaptureResult* MakeCaptureResult(::System::Int64 arg)
		{
			return (return (PhotoCaptureResult*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTURE_MAKECAPTURERESULT_OFFSET))(arg, nullptr);
		}

		::System::Void InvokeOnCreatedResourceDelegate(OnCaptureResourceCreatedCallback* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(OnCaptureResourceCreatedCallback*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTURE_INVOKEONCREATEDRESOURCEDELEGATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTURE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void InvokeOnPhotoModeStartedDelegate(OnPhotoModeStartedCallback* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(OnPhotoModeStartedCallback*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTURE_INVOKEONPHOTOMODESTARTEDDELEGATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void InvokeOnPhotoModeStoppedDelegate(OnPhotoModeStoppedCallback* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(OnPhotoModeStoppedCallback*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTURE_INVOKEONPHOTOMODESTOPPEDDELEGATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void InvokeOnCapturedPhotoToDiskDelegate(OnCapturedToDiskCallback* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(OnCapturedToDiskCallback*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTURE_INVOKEONCAPTUREDPHOTOTODISKDELEGATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void InvokeOnCapturedPhotoToMemoryDelegate(OnCapturedToMemoryCallback* arg, ::System::Int64 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(OnCapturedToMemoryCallback*, ::System::Int64, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTURE_INVOKEONCAPTUREDPHOTOTOMEMORYDELEGATE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTURE_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void Dispose_Internal()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTURE_DISPOSE_INTERNAL_OFFSET))(nullptr);
		}

		::System::Void Finalize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTURE_FINALIZE_OFFSET))(nullptr);
		}

		::System::Void DisposeThreaded_Internal()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTURE_DISPOSETHREADED_INTERNAL_OFFSET))(nullptr);
		}

	};
}

