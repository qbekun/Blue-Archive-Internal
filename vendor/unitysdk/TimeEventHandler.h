#pragma once
#include "unitysdk.h"

namespace UnityEngine::Video { class VideoPlayer; }

#define TIMEEVENTHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA4AAF80)
#define TIMEEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0xA4AB050)

	inline static constexpr unsigned int TimeEventHandler_TypeDefinitionIndex = 37738;

	class TimeEventHandler : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TIMEEVENTHANDLER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::UnityEngine::Video::VideoPlayer* arg, ::System::Double arg)
		{
			((::System::Void(*)(::UnityEngine::Video::VideoPlayer*, ::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + TIMEEVENTHANDLER_INVOKE_OFFSET))(arg, arg, nullptr);
		}

	};

