#pragma once
#include "unitysdk.h"

namespace UnityEngine::Windows::WebCam { class VideoCapture; }

#define ONVIDEOCAPTURERESOURCECREATEDCALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0xA248460)
#define ONVIDEOCAPTURERESOURCECREATEDCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0xA248570)

	inline static constexpr unsigned int OnVideoCaptureResourceCreatedCallback_TypeDefinitionIndex = 31274;

	class OnVideoCaptureResourceCreatedCallback : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ONVIDEOCAPTURERESOURCECREATEDCALLBACK_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::UnityEngine::Windows::WebCam::VideoCapture* arg)
		{
			((::System::Void(*)(::UnityEngine::Windows::WebCam::VideoCapture*, ::PVOID))((::PBYTE)hIl2Cpp + ONVIDEOCAPTURERESOURCECREATEDCALLBACK_INVOKE_OFFSET))(arg, nullptr);
		}

	};

