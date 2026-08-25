#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class LogType; }
namespace UnityEngine { class Object; }

#define UNITYENGINE_ILOGHANDLER_LOGFORMAT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ILOGHANDLER_LOGEXCEPTION_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine
{
	inline static constexpr unsigned int ILogHandler_TypeDefinitionIndex = 31087;

	class ILogHandler : public Il2CppObject
	{
	public:
		::System::Void LogFormat(::UnityEngine::LogType* arg, ::UnityEngine::Object* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::UnityEngine::LogType*, ::UnityEngine::Object*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ILOGHANDLER_LOGFORMAT_OFFSET))(arg, arg, str, arg, nullptr);
		}

		::System::Void LogException(::System::Exception* arg, ::UnityEngine::Object* arg)
		{
			((::System::Void(*)(::System::Exception*, ::UnityEngine::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ILOGHANDLER_LOGEXCEPTION_OFFSET))(arg, arg, nullptr);
		}

	};
}

