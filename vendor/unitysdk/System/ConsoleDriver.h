#pragma once
#include "../unitysdk.h"

#define SYSTEM_CONSOLEDRIVER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x93B5250)
#define SYSTEM_CONSOLEDRIVER_CREATENULLCONSOLEDRIVER_OFFSET UNITYSDK_OFFSET(0x93B5320)
#define SYSTEM_CONSOLEDRIVER_CREATEWINDOWSCONSOLEDRIVER_OFFSET UNITYSDK_OFFSET(0x93B5360)
#define SYSTEM_CONSOLEDRIVER_CREATETERMINFODRIVER_OFFSET UNITYSDK_OFFSET(0x93B53B0)
#define SYSTEM_CONSOLEDRIVER_READKEY_OFFSET UNITYSDK_OFFSET(0x93B4C60)
#define SYSTEM_CONSOLEDRIVER_GET_ISCONSOLE_OFFSET UNITYSDK_OFFSET(0x93B42E0)
#define SYSTEM_CONSOLEDRIVER_ISATTY_OFFSET UNITYSDK_OFFSET(0x93B59D0)
#define SYSTEM_CONSOLEDRIVER_INTERNALKEYAVAILABLE_OFFSET UNITYSDK_OFFSET(0x93B59E0)
#define SYSTEM_CONSOLEDRIVER_TTYSETUP_OFFSET UNITYSDK_OFFSET(0x93B59F0)
#define SYSTEM_CONSOLEDRIVER_SETECHO_OFFSET UNITYSDK_OFFSET(0x93B5A00)

namespace System
{
	inline static constexpr unsigned int ConsoleDriver_TypeDefinitionIndex = 23960;

	class ConsoleDriver : public Il2CppObject
	{
	public:
		::System::IConsoleDriver* driver; // 0x0
		::System::Boolean is_console; // 0x8
		::System::Boolean called_isatty; // 0x9

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONSOLEDRIVER_.CCTOR_OFFSET))(nullptr);
		}

		::System::IConsoleDriver* CreateNullConsoleDriver()
		{
			return (return (::System::IConsoleDriver*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONSOLEDRIVER_CREATENULLCONSOLEDRIVER_OFFSET))(nullptr);
		}

		::System::IConsoleDriver* CreateWindowsConsoleDriver()
		{
			return (return (::System::IConsoleDriver*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONSOLEDRIVER_CREATEWINDOWSCONSOLEDRIVER_OFFSET))(nullptr);
		}

		::System::IConsoleDriver* CreateTermInfoDriver(::System::String* str)
		{
			return (return (::System::IConsoleDriver*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONSOLEDRIVER_CREATETERMINFODRIVER_OFFSET))(str, nullptr);
		}

		::System::ConsoleKeyInfo* ReadKey(::System::Boolean arg)
		{
			return (return (::System::ConsoleKeyInfo*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONSOLEDRIVER_READKEY_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsConsole()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONSOLEDRIVER_GET_ISCONSOLE_OFFSET))(nullptr);
		}

		::System::Boolean Isatty(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONSOLEDRIVER_ISATTY_OFFSET))(arg, nullptr);
		}

		::System::Int32 InternalKeyAvailable(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONSOLEDRIVER_INTERNALKEYAVAILABLE_OFFSET))(arg, nullptr);
		}

		::System::Boolean TtySetup(::System::String* str, ::System::String* str, ::System::Object[]&* arg, ::System::Object*&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::System::Object[]&*, ::System::Object*&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONSOLEDRIVER_TTYSETUP_OFFSET))(str, str, arg, arg, nullptr);
		}

		::System::Boolean SetEcho(::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONSOLEDRIVER_SETECHO_OFFSET))(arg, nullptr);
		}

	};
}

