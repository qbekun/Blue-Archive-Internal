#pragma once
#include "unitysdk.h"

namespace UnityEngine::Experimental::Audio { class AudioSampleProvider; }

#define SAMPLEFRAMESHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1DF7D0)
#define SAMPLEFRAMESHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0xA1DF8E0)

	inline static constexpr unsigned int SampleFramesHandler_TypeDefinitionIndex = 37484;

	class SampleFramesHandler : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SAMPLEFRAMESHANDLER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::UnityEngine::Experimental::Audio::AudioSampleProvider* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::UnityEngine::Experimental::Audio::AudioSampleProvider*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + SAMPLEFRAMESHANDLER_INVOKE_OFFSET))(arg, arg, nullptr);
		}

	};

