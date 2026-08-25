#pragma once
#include "../../unitysdk.h"

#define NPA_EDITOR_HIDDENLOG_ISENABLED_OFFSET UNITYSDK_OFFSET(0x9D4FA60)
#define NPA_EDITOR_HIDDENLOG_INITONCE_OFFSET UNITYSDK_OFFSET(0x9D4FAA0)
#define NPA_EDITOR_HIDDENLOG_VERBOSE_OFFSET UNITYSDK_OFFSET(0x9D4FC20)
#define NPA_EDITOR_HIDDENLOG_WARNING_OFFSET UNITYSDK_OFFSET(0x9D501C0)
#define NPA_EDITOR_HIDDENLOG_ERROR_OFFSET UNITYSDK_OFFSET(0x9D502D0)
#define NPA_EDITOR_HIDDENLOG_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x9D503E0)
#define NPA_EDITOR_HIDDENLOG_GETFILELOGGER_OFFSET UNITYSDK_OFFSET(0x9D4FD30)
#define NPA_EDITOR_HIDDENLOG_GETUNIQUEPROCESSID_OFFSET UNITYSDK_OFFSET(0x9D50460)

namespace NPA::Editor
{
	inline static constexpr unsigned int HiddenLog_TypeDefinitionIndex = 26178;

	class HiddenLog : public Il2CppObject
	{
	public:
		::System::Boolean isInitialized; // 0x0
		::System::Boolean isEnabled; // 0x1
		::System::IO::StreamWriter* sw; // 0x8

		::System::Boolean IsEnabled()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_HIDDENLOG_ISENABLED_OFFSET))(nullptr);
		}

		::System::Void InitOnce()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_HIDDENLOG_INITONCE_OFFSET))(nullptr);
		}

		::System::Void Verbose(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_HIDDENLOG_VERBOSE_OFFSET))(str, nullptr);
		}

		::System::Void Warning(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_HIDDENLOG_WARNING_OFFSET))(str, nullptr);
		}

		::System::Void Error(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_HIDDENLOG_ERROR_OFFSET))(str, nullptr);
		}

		::System::Void TearDown()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_HIDDENLOG_TEARDOWN_OFFSET))(nullptr);
		}

		::System::IO::StreamWriter* GetFileLogger()
		{
			return (return (::System::IO::StreamWriter*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_HIDDENLOG_GETFILELOGGER_OFFSET))(nullptr);
		}

		::System::String* GetUniqueProcessId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_HIDDENLOG_GETUNIQUEPROCESSID_OFFSET))(nullptr);
		}

	};
}

