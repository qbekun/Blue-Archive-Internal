#pragma once
#include "unitysdk.h"

namespace UnityEngine::Video { class VideoPlayer; }

#define FRAMEREADYEVENTHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA4AAEA0)
#define FRAMEREADYEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0xA4AAF70)

	inline static constexpr unsigned int FrameReadyEventHandler_TypeDefinitionIndex = 37737;

	class FrameReadyEventHandler : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FRAMEREADYEVENTHANDLER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::UnityEngine::Video::VideoPlayer* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::UnityEngine::Video::VideoPlayer*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FRAMEREADYEVENTHANDLER_INVOKE_OFFSET))(arg, arg, nullptr);
		}

	};

