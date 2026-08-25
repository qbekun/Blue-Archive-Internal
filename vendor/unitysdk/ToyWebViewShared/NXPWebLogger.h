#pragma once
#include "../unitysdk.h"

namespace ToyWebViewServer { class ILogger; }

#define TOYWEBVIEWSHARED_NXPWEBLOGGER_ADDLISTENER_OFFSET UNITYSDK_OFFSET(0x9BAB650)
#define TOYWEBVIEWSHARED_NXPWEBLOGGER_LOG_OFFSET UNITYSDK_OFFSET(0x9BA9C40)
#define TOYWEBVIEWSHARED_NXPWEBLOGGER_LOGWARNING_OFFSET UNITYSDK_OFFSET(0x9BAB740)
#define TOYWEBVIEWSHARED_NXPWEBLOGGER_LOGERROR_OFFSET UNITYSDK_OFFSET(0x9BAB950)
#define TOYWEBVIEWSHARED_NXPWEBLOGGER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9BABB60)

namespace ToyWebViewShared
{
	inline static constexpr unsigned int NXPWebLogger_TypeDefinitionIndex = 25401;

	class NXPWebLogger : public Il2CppObject
	{
	public:
		Il2CppObject* listeners; // 0x0

		::System::Void AddListener(::ToyWebViewServer::ILogger* arg)
		{
			((::System::Void(*)(::ToyWebViewServer::ILogger*, ::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_NXPWEBLOGGER_ADDLISTENER_OFFSET))(arg, nullptr);
		}

		::System::Void Log(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_NXPWEBLOGGER_LOG_OFFSET))(str, nullptr);
		}

		::System::Void LogWarning(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_NXPWEBLOGGER_LOGWARNING_OFFSET))(str, nullptr);
		}

		::System::Void LogError(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_NXPWEBLOGGER_LOGERROR_OFFSET))(str, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_NXPWEBLOGGER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

