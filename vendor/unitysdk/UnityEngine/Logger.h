#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class ILogHandler; }
namespace UnityEngine { class LogType; }
namespace UnityEngine { class Object; }

#define UNITYENGINE_LOGGER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA21E040)
#define UNITYENGINE_LOGGER_GET_LOGHANDLER_OFFSET UNITYSDK_OFFSET(0xA21E080)
#define UNITYENGINE_LOGGER_SET_LOGHANDLER_OFFSET UNITYSDK_OFFSET(0xA21E090)
#define UNITYENGINE_LOGGER_GET_LOGENABLED_OFFSET UNITYSDK_OFFSET(0xA21E0A0)
#define UNITYENGINE_LOGGER_SET_LOGENABLED_OFFSET UNITYSDK_OFFSET(0xA21E0B0)
#define UNITYENGINE_LOGGER_GET_FILTERLOGTYPE_OFFSET UNITYSDK_OFFSET(0xA21E0C0)
#define UNITYENGINE_LOGGER_SET_FILTERLOGTYPE_OFFSET UNITYSDK_OFFSET(0xA21E0D0)
#define UNITYENGINE_LOGGER_ISLOGTYPEALLOWED_OFFSET UNITYSDK_OFFSET(0xA21E0E0)
#define UNITYENGINE_LOGGER_GETSTRING_OFFSET UNITYSDK_OFFSET(0xA21E110)
#define UNITYENGINE_LOGGER_LOG_OFFSET UNITYSDK_OFFSET(0xA21E240)
#define UNITYENGINE_LOGGER_LOG_OFFSET UNITYSDK_OFFSET(0xA21E3B0)
#define UNITYENGINE_LOGGER_LOGERROR_OFFSET UNITYSDK_OFFSET(0xA21E530)
#define UNITYENGINE_LOGGER_LOGEXCEPTION_OFFSET UNITYSDK_OFFSET(0xA21E6E0)
#define UNITYENGINE_LOGGER_LOGFORMAT_OFFSET UNITYSDK_OFFSET(0xA21E7A0)
#define UNITYENGINE_LOGGER_LOGFORMAT_OFFSET UNITYSDK_OFFSET(0xA21E880)

namespace UnityEngine
{
	inline static constexpr unsigned int Logger_TypeDefinitionIndex = 31088;

	class Logger : public Il2CppObject
	{
	public:
		::UnityEngine::ILogHandler* _logHandler_k__BackingField; // 0x10
		::System::Boolean _logEnabled_k__BackingField; // 0x18
		::UnityEngine::LogType* _filterLogType_k__BackingField; // 0x1C

		::System::Void .ctor(::UnityEngine::ILogHandler* arg)
		{
			((::System::Void(*)(::UnityEngine::ILogHandler*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LOGGER_.CTOR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::ILogHandler* get_logHandler()
		{
			return (return (::UnityEngine::ILogHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LOGGER_GET_LOGHANDLER_OFFSET))(nullptr);
		}

		::System::Void set_logHandler(::UnityEngine::ILogHandler* arg)
		{
			((::System::Void(*)(::UnityEngine::ILogHandler*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LOGGER_SET_LOGHANDLER_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_logEnabled()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LOGGER_GET_LOGENABLED_OFFSET))(nullptr);
		}

		::System::Void set_logEnabled(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LOGGER_SET_LOGENABLED_OFFSET))(arg, nullptr);
		}

		::UnityEngine::LogType* get_filterLogType()
		{
			return (return (::UnityEngine::LogType*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LOGGER_GET_FILTERLOGTYPE_OFFSET))(nullptr);
		}

		::System::Void set_filterLogType(::UnityEngine::LogType* arg)
		{
			((::System::Void(*)(::UnityEngine::LogType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LOGGER_SET_FILTERLOGTYPE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsLogTypeAllowed(::UnityEngine::LogType* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::LogType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LOGGER_ISLOGTYPEALLOWED_OFFSET))(arg, nullptr);
		}

		::System::String* GetString(::System::Object* arg)
		{
			return (return (::System::String*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LOGGER_GETSTRING_OFFSET))(arg, nullptr);
		}

		::System::Void Log(::UnityEngine::LogType* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::UnityEngine::LogType*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LOGGER_LOG_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Log(::UnityEngine::LogType* arg, ::System::Object* arg, ::UnityEngine::Object* arg)
		{
			((::System::Void(*)(::UnityEngine::LogType*, ::System::Object*, ::UnityEngine::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LOGGER_LOG_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void LogError(::System::String* str, ::System::Object* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LOGGER_LOGERROR_OFFSET))(str, arg, nullptr);
		}

		::System::Void LogException(::System::Exception* arg, ::UnityEngine::Object* arg)
		{
			((::System::Void(*)(::System::Exception*, ::UnityEngine::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LOGGER_LOGEXCEPTION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void LogFormat(::UnityEngine::LogType* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::UnityEngine::LogType*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LOGGER_LOGFORMAT_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Void LogFormat(::UnityEngine::LogType* arg, ::UnityEngine::Object* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::UnityEngine::LogType*, ::UnityEngine::Object*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LOGGER_LOGFORMAT_OFFSET))(arg, arg, str, arg, nullptr);
		}

	};
}

