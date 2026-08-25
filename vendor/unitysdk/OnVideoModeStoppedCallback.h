#pragma once
#include "unitysdk.h"

#define ONVIDEOMODESTOPPEDCALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0xA248680)
#define ONVIDEOMODESTOPPEDCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0xA248750)

	inline static constexpr unsigned int OnVideoModeStoppedCallback_TypeDefinitionIndex = 31276;

	class OnVideoModeStoppedCallback : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ONVIDEOMODESTOPPEDCALLBACK_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(VideoCaptureResult* arg)
		{
			((::System::Void(*)(VideoCaptureResult*, ::PVOID))((::PBYTE)hIl2Cpp + ONVIDEOMODESTOPPEDCALLBACK_INVOKE_OFFSET))(arg, nullptr);
		}

	};

