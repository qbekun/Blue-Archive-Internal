#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class ILogHandler; }
namespace UnityEngine { class LogType; }
namespace UnityEngine { class Object; }

#define UNITYENGINE_ILOGGER_GET_LOGHANDLER_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ILOGGER_GET_LOGENABLED_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ILOGGER_SET_FILTERLOGTYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ILOGGER_LOG_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ILOGGER_LOG_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ILOGGER_LOGERROR_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ILOGGER_LOGFORMAT_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine
{
	inline static constexpr unsigned int ILogger_TypeDefinitionIndex = 31086;

	class ILogger : public Il2CppObject
	{
	public:
		::UnityEngine::ILogHandler* get_logHandler()
		{
			return (return (::UnityEngine::ILogHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ILOGGER_GET_LOGHANDLER_OFFSET))(nullptr);
		}

		::System::Boolean get_logEnabled()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ILOGGER_GET_LOGENABLED_OFFSET))(nullptr);
		}

		::System::Void set_filterLogType(::UnityEngine::LogType* arg)
		{
			((::System::Void(*)(::UnityEngine::LogType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ILOGGER_SET_FILTERLOGTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void Log(::UnityEngine::LogType* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::UnityEngine::LogType*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ILOGGER_LOG_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Log(::UnityEngine::LogType* arg, ::System::Object* arg, ::UnityEngine::Object* arg)
		{
			((::System::Void(*)(::UnityEngine::LogType*, ::System::Object*, ::UnityEngine::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ILOGGER_LOG_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void LogError(::System::String* str, ::System::Object* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ILOGGER_LOGERROR_OFFSET))(str, arg, nullptr);
		}

		::System::Void LogFormat(::UnityEngine::LogType* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::UnityEngine::LogType*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ILOGGER_LOGFORMAT_OFFSET))(arg, str, arg, nullptr);
		}

	};
}

