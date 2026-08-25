#pragma once
#include "../unitysdk.h"

#define NPA_NXPTOYLOGGER_INITONCE_OFFSET UNITYSDK_OFFSET(0x9BC84C0)
#define NPA_NXPTOYLOGGER_LSLOG_OFFSET UNITYSDK_OFFSET(0x9BC8690)
#define NPA_NXPTOYLOGGER_PLOG_OFFSET UNITYSDK_OFFSET(0x9BC86A0)
#define NPA_NXPTOYLOGGER_LOG_OFFSET UNITYSDK_OFFSET(0x9BC8960)
#define NPA_NXPTOYLOGGER_VERBOSE_OFFSET UNITYSDK_OFFSET(0x9BC79A0)
#define NPA_NXPTOYLOGGER_WARN_OFFSET UNITYSDK_OFFSET(0x9BC8A00)
#define NPA_NXPTOYLOGGER_ERROR_OFFSET UNITYSDK_OFFSET(0x9BC8AB0)
#define NPA_NXPTOYLOGGER_LOGWITHCALLINFO_OFFSET UNITYSDK_OFFSET(0x9BC8760)
#define NPA_NXPTOYLOGGER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9BC8B60)

namespace NPA
{
	inline static constexpr unsigned int NXPToyLogger_TypeDefinitionIndex = 25608;

	class NXPToyLogger : public Il2CppObject
	{
	public:
		::System::Boolean isDebug; // 0x0
		::System::Boolean isPrintPrivateLog; // 0x1
		::System::Boolean isFileLogging; // 0x2
		::System::Boolean isInitialized; // 0x3
		::System::Boolean usePlayerLog; // 0x4

		::System::Void InitOnce()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPTOYLOGGER_INITONCE_OFFSET))(nullptr);
		}

		::System::Void LSLog(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPTOYLOGGER_LSLOG_OFFSET))(str, nullptr);
		}

		::System::Void PLog(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPTOYLOGGER_PLOG_OFFSET))(str, nullptr);
		}

		::System::Void Log(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPTOYLOGGER_LOG_OFFSET))(str, nullptr);
		}

		::System::Void Verbose(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPTOYLOGGER_VERBOSE_OFFSET))(str, nullptr);
		}

		::System::Void Warn(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPTOYLOGGER_WARN_OFFSET))(str, nullptr);
		}

		::System::Void Error(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPTOYLOGGER_ERROR_OFFSET))(str, nullptr);
		}

		::System::Void LogWithCallInfo(::System::String* str, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPTOYLOGGER_LOGWITHCALLINFO_OFFSET))(str, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPTOYLOGGER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

