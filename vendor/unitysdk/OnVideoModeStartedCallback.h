#pragma once
#include "unitysdk.h"

#define ONVIDEOMODESTARTEDCALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0xA248580)
#define ONVIDEOMODESTARTEDCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0xA248650)

	inline static constexpr unsigned int OnVideoModeStartedCallback_TypeDefinitionIndex = 31275;

	class OnVideoModeStartedCallback : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ONVIDEOMODESTARTEDCALLBACK_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(VideoCaptureResult* arg)
		{
			((::System::Void(*)(VideoCaptureResult*, ::PVOID))((::PBYTE)hIl2Cpp + ONVIDEOMODESTARTEDCALLBACK_INVOKE_OFFSET))(arg, nullptr);
		}

	};

