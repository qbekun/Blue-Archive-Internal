#pragma once
#include "unitysdk.h"

#define ONSTARTEDRECORDINGVIDEOCALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0xA248780)
#define ONSTARTEDRECORDINGVIDEOCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0xA248850)

	inline static constexpr unsigned int OnStartedRecordingVideoCallback_TypeDefinitionIndex = 31277;

	class OnStartedRecordingVideoCallback : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ONSTARTEDRECORDINGVIDEOCALLBACK_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(VideoCaptureResult* arg)
		{
			((::System::Void(*)(VideoCaptureResult*, ::PVOID))((::PBYTE)hIl2Cpp + ONSTARTEDRECORDINGVIDEOCALLBACK_INVOKE_OFFSET))(arg, nullptr);
		}

	};

