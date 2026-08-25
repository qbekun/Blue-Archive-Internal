#pragma once
#include "../unitysdk.h"

#define TOYWEBVIEWSERVER_ILOGGER_VERBOSE_OFFSET UNITYSDK_OFFSET(0x000000)
#define TOYWEBVIEWSERVER_ILOGGER_WARNING_OFFSET UNITYSDK_OFFSET(0x000000)
#define TOYWEBVIEWSERVER_ILOGGER_ERROR_OFFSET UNITYSDK_OFFSET(0x000000)

namespace ToyWebViewServer
{
	inline static constexpr unsigned int ILogger_TypeDefinitionIndex = 25483;

	class ILogger : public Il2CppObject
	{
	public:
		::System::Void Verbose(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSERVER_ILOGGER_VERBOSE_OFFSET))(str, nullptr);
		}

		::System::Void Warning(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSERVER_ILOGGER_WARNING_OFFSET))(str, nullptr);
		}

		::System::Void Error(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSERVER_ILOGGER_ERROR_OFFSET))(str, nullptr);
		}

	};
}

