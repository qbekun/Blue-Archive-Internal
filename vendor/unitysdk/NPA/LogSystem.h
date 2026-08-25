#pragma once
#include "../unitysdk.h"

namespace NPA::Logging { class LogMessageFunc; }
namespace NPA::Logging { class LogCategory; }
namespace NPA::Logging { class LogLevel; }
namespace NPA::Logging { class LogMessage&; }
namespace NPA { class ILogConsumerType; }
namespace NPA { class ILogConsumer; }

#define NPA_LOGSYSTEM_TRACE_OFFSET UNITYSDK_OFFSET(0x9BC5F50)
#define NPA_LOGSYSTEM_DEBUG_OFFSET UNITYSDK_OFFSET(0x9BC6090)
#define NPA_LOGSYSTEM_INFO_OFFSET UNITYSDK_OFFSET(0x9BC61D0)
#define NPA_LOGSYSTEM_WARNING_OFFSET UNITYSDK_OFFSET(0x9BC6310)
#define NPA_LOGSYSTEM_ERROR_OFFSET UNITYSDK_OFFSET(0x9BC6450)
#define NPA_LOGSYSTEM_FATAL_OFFSET UNITYSDK_OFFSET(0x9BC6590)
#define NPA_LOGSYSTEM_SETLEVEL_OFFSET UNITYSDK_OFFSET(0x9BC66D0)
#define NPA_LOGSYSTEM_SETCALLBACK_OFFSET UNITYSDK_OFFSET(0x9BC6AD0)
#define NPA_LOGSYSTEM_ONLOGMESSAGEDEFAULT_OFFSET UNITYSDK_OFFSET(0x9BC6B40)
#define NPA_LOGSYSTEM_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9BC6D60)
#define NPA_LOGSYSTEM_ONDOMAINRELOAD_OFFSET UNITYSDK_OFFSET(0x9BC6EC0)
#define NPA_LOGSYSTEM_REGISTERDEFAULTIMPL_OFFSET UNITYSDK_OFFSET(0x9BC6E00)
#define NPA_LOGSYSTEM_SETCONSUMER_OFFSET UNITYSDK_OFFSET(0x9BC6F20)

namespace NPA
{
	inline static constexpr unsigned int LogSystem_TypeDefinitionIndex = 25600;

	class LogSystem : public Il2CppObject
	{
	public:
		Il2CppObject* LogLevelMap; // 0x0
		::NPA::Logging::LogMessageFunc* logMessageDelegate; // 0x8

		::System::Void Trace(::NPA::Logging::LogCategory* arg, ::System::String* str)
		{
			((::System::Void(*)(::NPA::Logging::LogCategory*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_LOGSYSTEM_TRACE_OFFSET))(arg, str, nullptr);
		}

		::System::Void Debug(::NPA::Logging::LogCategory* arg, ::System::String* str)
		{
			((::System::Void(*)(::NPA::Logging::LogCategory*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_LOGSYSTEM_DEBUG_OFFSET))(arg, str, nullptr);
		}

		::System::Void Info(::NPA::Logging::LogCategory* arg, ::System::String* str)
		{
			((::System::Void(*)(::NPA::Logging::LogCategory*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_LOGSYSTEM_INFO_OFFSET))(arg, str, nullptr);
		}

		::System::Void Warning(::NPA::Logging::LogCategory* arg, ::System::String* str)
		{
			((::System::Void(*)(::NPA::Logging::LogCategory*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_LOGSYSTEM_WARNING_OFFSET))(arg, str, nullptr);
		}

		::System::Void Error(::NPA::Logging::LogCategory* arg, ::System::String* str)
		{
			((::System::Void(*)(::NPA::Logging::LogCategory*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_LOGSYSTEM_ERROR_OFFSET))(arg, str, nullptr);
		}

		::System::Void Fatal(::NPA::Logging::LogCategory* arg, ::System::String* str)
		{
			((::System::Void(*)(::NPA::Logging::LogCategory*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_LOGSYSTEM_FATAL_OFFSET))(arg, str, nullptr);
		}

		::System::Void SetLevel(::NPA::Logging::LogCategory* arg, ::NPA::Logging::LogLevel* arg)
		{
			((::System::Void(*)(::NPA::Logging::LogCategory*, ::NPA::Logging::LogLevel*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_LOGSYSTEM_SETLEVEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetCallback(::NPA::Logging::LogMessageFunc* arg)
		{
			((::System::Void(*)(::NPA::Logging::LogMessageFunc*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_LOGSYSTEM_SETCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void OnLogMessageDefault(::NPA::Logging::LogMessage&* arg)
		{
			((::System::Void(*)(::NPA::Logging::LogMessage&*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_LOGSYSTEM_ONLOGMESSAGEDEFAULT_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_LOGSYSTEM_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void OnDomainReload()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_LOGSYSTEM_ONDOMAINRELOAD_OFFSET))(nullptr);
		}

		::System::Void RegisterDefaultImpl()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_LOGSYSTEM_REGISTERDEFAULTIMPL_OFFSET))(nullptr);
		}

		::System::Void SetConsumer(::NPA::ILogConsumerType* arg, ::NPA::ILogConsumer* arg)
		{
			((::System::Void(*)(::NPA::ILogConsumerType*, ::NPA::ILogConsumer*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_LOGSYSTEM_SETCONSUMER_OFFSET))(arg, arg, nullptr);
		}

	};
}

