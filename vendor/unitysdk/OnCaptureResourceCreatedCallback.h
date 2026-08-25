#pragma once
#include "unitysdk.h"

namespace UnityEngine::Windows::WebCam { class PhotoCapture; }

#define ONCAPTURERESOURCECREATEDCALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2475B0)
#define ONCAPTURERESOURCECREATEDCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0xA2476C0)

	inline static constexpr unsigned int OnCaptureResourceCreatedCallback_TypeDefinitionIndex = 31265;

	class OnCaptureResourceCreatedCallback : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ONCAPTURERESOURCECREATEDCALLBACK_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::UnityEngine::Windows::WebCam::PhotoCapture* arg)
		{
			((::System::Void(*)(::UnityEngine::Windows::WebCam::PhotoCapture*, ::PVOID))((::PBYTE)hIl2Cpp + ONCAPTURERESOURCECREATEDCALLBACK_INVOKE_OFFSET))(arg, nullptr);
		}

	};

