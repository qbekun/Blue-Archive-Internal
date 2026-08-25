#pragma once
#include "unitysdk.h"

namespace UnityEngine { class LogType; }

#define LOGCALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1E42A0)
#define LOGCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0xA1E4370)

	inline static constexpr unsigned int LogCallback_TypeDefinitionIndex = 30945;

	class LogCallback : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + LOGCALLBACK_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::String* str, ::System::String* str, ::UnityEngine::LogType* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::UnityEngine::LogType*, ::PVOID))((::PBYTE)hIl2Cpp + LOGCALLBACK_INVOKE_OFFSET))(str, str, arg, nullptr);
		}

	};

