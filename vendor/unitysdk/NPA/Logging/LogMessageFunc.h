#pragma once
#include "../../unitysdk.h"

namespace NPA::Logging { class LogMessage&; }

#define NPA_LOGGING_LOGMESSAGEFUNC_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CCC740)
#define NPA_LOGGING_LOGMESSAGEFUNC_INVOKE_OFFSET UNITYSDK_OFFSET(0x9CCC810)
#define NPA_LOGGING_LOGMESSAGEFUNC_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9CCC820)
#define NPA_LOGGING_LOGMESSAGEFUNC_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9CCC890)

namespace NPA::Logging
{
	inline static constexpr unsigned int LogMessageFunc_TypeDefinitionIndex = 27415;

	class LogMessageFunc : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_LOGGING_LOGMESSAGEFUNC_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::NPA::Logging::LogMessage&* arg)
		{
			((::System::Void(*)(::NPA::Logging::LogMessage&*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_LOGGING_LOGMESSAGEFUNC_INVOKE_OFFSET))(arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::NPA::Logging::LogMessage&* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::NPA::Logging::LogMessage&*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_LOGGING_LOGMESSAGEFUNC_BEGININVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void EndInvoke(::NPA::Logging::LogMessage&* arg, ::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::NPA::Logging::LogMessage&*, ::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_LOGGING_LOGMESSAGEFUNC_ENDINVOKE_OFFSET))(arg, arg, nullptr);
		}

	};
}

