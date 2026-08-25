#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Windows::WebCam { class CapturePixelFormat; }

namespace UnityEngine::Windows::WebCam
{
	inline static constexpr unsigned int CapturePixelFormat_TypeDefinitionIndex = 31280;

	class CapturePixelFormat : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Windows::WebCam::CapturePixelFormat* BGRA32; // 0x0
		::UnityEngine::Windows::WebCam::CapturePixelFormat* NV12; // 0x0
		::UnityEngine::Windows::WebCam::CapturePixelFormat* JPEG; // 0x0
		::UnityEngine::Windows::WebCam::CapturePixelFormat* PNG; // 0x0

	};
}

