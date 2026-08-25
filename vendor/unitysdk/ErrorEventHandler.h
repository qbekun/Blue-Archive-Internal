#pragma once
#include "unitysdk.h"

namespace UnityEngine::Video { class VideoPlayer; }

#define ERROREVENTHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA4AADC0)
#define ERROREVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0xA4AAE90)

	inline static constexpr unsigned int ErrorEventHandler_TypeDefinitionIndex = 37736;

	class ErrorEventHandler : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ERROREVENTHANDLER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::UnityEngine::Video::VideoPlayer* arg, ::System::String* str)
		{
			((::System::Void(*)(::UnityEngine::Video::VideoPlayer*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ERROREVENTHANDLER_INVOKE_OFFSET))(arg, str, nullptr);
		}

	};

