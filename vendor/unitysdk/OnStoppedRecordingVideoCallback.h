#pragma once
#include "unitysdk.h"

#define ONSTOPPEDRECORDINGVIDEOCALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0xA248880)
#define ONSTOPPEDRECORDINGVIDEOCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0xA248950)

	inline static constexpr unsigned int OnStoppedRecordingVideoCallback_TypeDefinitionIndex = 31278;

	class OnStoppedRecordingVideoCallback : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ONSTOPPEDRECORDINGVIDEOCALLBACK_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(VideoCaptureResult* arg)
		{
			((::System::Void(*)(VideoCaptureResult*, ::PVOID))((::PBYTE)hIl2Cpp + ONSTOPPEDRECORDINGVIDEOCALLBACK_INVOKE_OFFSET))(arg, nullptr);
		}

	};

