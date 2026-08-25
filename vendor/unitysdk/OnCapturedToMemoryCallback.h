#pragma once
#include "unitysdk.h"

namespace UnityEngine::Windows::WebCam { class PhotoCaptureFrame; }

#define ONCAPTUREDTOMEMORYCALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2479D0)
#define ONCAPTUREDTOMEMORYCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0xA247AA0)

	inline static constexpr unsigned int OnCapturedToMemoryCallback_TypeDefinitionIndex = 31269;

	class OnCapturedToMemoryCallback : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ONCAPTUREDTOMEMORYCALLBACK_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(PhotoCaptureResult* arg, ::UnityEngine::Windows::WebCam::PhotoCaptureFrame* arg)
		{
			((::System::Void(*)(PhotoCaptureResult*, ::UnityEngine::Windows::WebCam::PhotoCaptureFrame*, ::PVOID))((::PBYTE)hIl2Cpp + ONCAPTUREDTOMEMORYCALLBACK_INVOKE_OFFSET))(arg, arg, nullptr);
		}

	};

