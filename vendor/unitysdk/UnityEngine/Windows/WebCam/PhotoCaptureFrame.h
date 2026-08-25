#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Windows::WebCam { class CapturePixelFormat; }

#define UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTUREFRAME_GET_DATALENGTH_OFFSET UNITYSDK_OFFSET(0xA247AD0)
#define UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTUREFRAME_SET_DATALENGTH_OFFSET UNITYSDK_OFFSET(0xA247AE0)
#define UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTUREFRAME_SET_HASLOCATIONDATA_OFFSET UNITYSDK_OFFSET(0xA247AF0)
#define UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTUREFRAME_SET_PIXELFORMAT_OFFSET UNITYSDK_OFFSET(0xA247B00)
#define UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTUREFRAME_GETDATALENGTH_OFFSET UNITYSDK_OFFSET(0xA247B10)
#define UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTUREFRAME_GETHASLOCATIONDATA_OFFSET UNITYSDK_OFFSET(0xA247B50)
#define UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTUREFRAME_GETCAPTUREPIXELFORMAT_OFFSET UNITYSDK_OFFSET(0xA247B90)
#define UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTUREFRAME_.CTOR_OFFSET UNITYSDK_OFFSET(0xA247BD0)
#define UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTUREFRAME_CLEANUP_OFFSET UNITYSDK_OFFSET(0xA247CB0)
#define UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTUREFRAME_DISPOSE_INTERNAL_OFFSET UNITYSDK_OFFSET(0xA247D70)
#define UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTUREFRAME_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA247DB0)
#define UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTUREFRAME_FINALIZE_OFFSET UNITYSDK_OFFSET(0xA247E00)

namespace UnityEngine::Windows::WebCam
{
	inline static constexpr unsigned int PhotoCaptureFrame_TypeDefinitionIndex = 31271;

	class PhotoCaptureFrame : public Il2CppObject
	{
	public:
		::System::Int32 m_NativePtr; // 0x10
		::System::Int32 _dataLength_k__BackingField; // 0x18
		::System::Boolean _hasLocationData_k__BackingField; // 0x1C
		::UnityEngine::Windows::WebCam::CapturePixelFormat* _pixelFormat_k__BackingField; // 0x20

		::System::Int32 get_dataLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTUREFRAME_GET_DATALENGTH_OFFSET))(nullptr);
		}

		::System::Void set_dataLength(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTUREFRAME_SET_DATALENGTH_OFFSET))(arg, nullptr);
		}

		::System::Void set_hasLocationData(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTUREFRAME_SET_HASLOCATIONDATA_OFFSET))(arg, nullptr);
		}

		::System::Void set_pixelFormat(::UnityEngine::Windows::WebCam::CapturePixelFormat* arg)
		{
			((::System::Void(*)(::UnityEngine::Windows::WebCam::CapturePixelFormat*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTUREFRAME_SET_PIXELFORMAT_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetDataLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTUREFRAME_GETDATALENGTH_OFFSET))(nullptr);
		}

		::System::Boolean GetHasLocationData()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTUREFRAME_GETHASLOCATIONDATA_OFFSET))(nullptr);
		}

		::UnityEngine::Windows::WebCam::CapturePixelFormat* GetCapturePixelFormat()
		{
			return (return (::UnityEngine::Windows::WebCam::CapturePixelFormat*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTUREFRAME_GETCAPTUREPIXELFORMAT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTUREFRAME_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Cleanup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTUREFRAME_CLEANUP_OFFSET))(nullptr);
		}

		::System::Void Dispose_Internal()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTUREFRAME_DISPOSE_INTERNAL_OFFSET))(nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTUREFRAME_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void Finalize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTUREFRAME_FINALIZE_OFFSET))(nullptr);
		}

	};
}

