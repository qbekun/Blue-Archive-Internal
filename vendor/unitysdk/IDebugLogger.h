#pragma once
#include "unitysdk.h"

namespace ToyWebViewServer { class ILogger; }

#define IDEBUGLOGGER_VERBOSE_OFFSET UNITYSDK_OFFSET(0x9DB6970)
#define IDEBUGLOGGER_WARNING_OFFSET UNITYSDK_OFFSET(0x9DB69C0)
#define IDEBUGLOGGER_ERROR_OFFSET UNITYSDK_OFFSET(0x9DB6A10)
#define IDEBUGLOGGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DB6A60)

	inline static constexpr unsigned int IDebugLogger_TypeDefinitionIndex = 26405;

	class IDebugLogger : public Il2CppObject
	{
	public:
		::ToyWebViewServer::ILogger* loggerImplementation; // 0x10

		::System::Void Verbose(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + IDEBUGLOGGER_VERBOSE_OFFSET))(str, nullptr);
		}

		::System::Void Warning(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + IDEBUGLOGGER_WARNING_OFFSET))(str, nullptr);
		}

		::System::Void Error(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + IDEBUGLOGGER_ERROR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDEBUGLOGGER_.CTOR_OFFSET))(nullptr);
		}

	};

