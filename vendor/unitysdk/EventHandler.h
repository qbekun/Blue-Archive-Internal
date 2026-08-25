#pragma once
#include "unitysdk.h"

namespace UnityEngine::Video { class VideoPlayer; }

#define EVENTHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA4AACE0)
#define EVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0xA4AADB0)

	inline static constexpr unsigned int EventHandler_TypeDefinitionIndex = 37735;

	class EventHandler : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + EVENTHANDLER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::UnityEngine::Video::VideoPlayer* arg)
		{
			((::System::Void(*)(::UnityEngine::Video::VideoPlayer*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTHANDLER_INVOKE_OFFSET))(arg, nullptr);
		}

	};

