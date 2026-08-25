#pragma once
#include "../unitysdk.h"

#define TOYWEBVIEWSHARED_IWEBVIEWLOGGER_LOG_OFFSET UNITYSDK_OFFSET(0x000000)
#define TOYWEBVIEWSHARED_IWEBVIEWLOGGER_LOGERROR_OFFSET UNITYSDK_OFFSET(0x000000)

namespace ToyWebViewShared
{
	inline static constexpr unsigned int IWebViewLogger_TypeDefinitionIndex = 25403;

	class IWebViewLogger : public Il2CppObject
	{
	public:
		::System::Void Log(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_IWEBVIEWLOGGER_LOG_OFFSET))(str, nullptr);
		}

		::System::Void LogError(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_IWEBVIEWLOGGER_LOGERROR_OFFSET))(str, nullptr);
		}

	};
}

