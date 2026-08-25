#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class LogType; }
namespace UnityEngine { class LogOption; }
namespace UnityEngine { class Object; }

#define UNITYENGINE_DEBUGLOGHANDLER_INTERNAL_LOG_OFFSET UNITYSDK_OFFSET(0xA1EABD0)
#define UNITYENGINE_DEBUGLOGHANDLER_INTERNAL_LOGEXCEPTION_OFFSET UNITYSDK_OFFSET(0xA1EAC20)
#define UNITYENGINE_DEBUGLOGHANDLER_LOGFORMAT_OFFSET UNITYSDK_OFFSET(0xA1EAC60)
#define UNITYENGINE_DEBUGLOGHANDLER_LOGEXCEPTION_OFFSET UNITYSDK_OFFSET(0xA1EACC0)
#define UNITYENGINE_DEBUGLOGHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1EAD60)

namespace UnityEngine
{
	inline static constexpr unsigned int DebugLogHandler_TypeDefinitionIndex = 30972;

	class DebugLogHandler : public Il2CppObject
	{
	public:
		::System::Void Internal_Log(::UnityEngine::LogType* arg, ::UnityEngine::LogOption* arg, ::System::String* str, ::UnityEngine::Object* arg)
		{
			((::System::Void(*)(::UnityEngine::LogType*, ::UnityEngine::LogOption*, ::System::String*, ::UnityEngine::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUGLOGHANDLER_INTERNAL_LOG_OFFSET))(arg, arg, str, arg, nullptr);
		}

		::System::Void Internal_LogException(::System::Exception* arg, ::UnityEngine::Object* arg)
		{
			((::System::Void(*)(::System::Exception*, ::UnityEngine::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUGLOGHANDLER_INTERNAL_LOGEXCEPTION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void LogFormat(::UnityEngine::LogType* arg, ::UnityEngine::Object* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::UnityEngine::LogType*, ::UnityEngine::Object*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUGLOGHANDLER_LOGFORMAT_OFFSET))(arg, arg, str, arg, nullptr);
		}

		::System::Void LogException(::System::Exception* arg, ::UnityEngine::Object* arg)
		{
			((::System::Void(*)(::System::Exception*, ::UnityEngine::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUGLOGHANDLER_LOGEXCEPTION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_DEBUGLOGHANDLER_.CTOR_OFFSET))(nullptr);
		}

	};
}

