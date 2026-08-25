#pragma once
#include "../unitysdk.h"

#define SYSTEM_CONSOLE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x93B3760)
#define SYSTEM_CONSOLE_SETUPSTREAMS_OFFSET UNITYSDK_OFFSET(0x93B3BF0)
#define SYSTEM_CONSOLE_GET_ERROR_OFFSET UNITYSDK_OFFSET(0x93B45F0)
#define SYSTEM_CONSOLE_GET_OUT_OFFSET UNITYSDK_OFFSET(0x93B4640)
#define SYSTEM_CONSOLE_OPEN_OFFSET UNITYSDK_OFFSET(0x93B4690)
#define SYSTEM_CONSOLE_OPENSTANDARDERROR_OFFSET UNITYSDK_OFFSET(0x93B4570)
#define SYSTEM_CONSOLE_OPENSTANDARDINPUT_OFFSET UNITYSDK_OFFSET(0x93B4470)
#define SYSTEM_CONSOLE_OPENSTANDARDOUTPUT_OFFSET UNITYSDK_OFFSET(0x93B44F0)
#define SYSTEM_CONSOLE_SETOUT_OFFSET UNITYSDK_OFFSET(0x93B4810)
#define SYSTEM_CONSOLE_WRITELINE_OFFSET UNITYSDK_OFFSET(0x93B4900)
#define SYSTEM_CONSOLE_WRITELINE_OFFSET UNITYSDK_OFFSET(0x93B4990)
#define SYSTEM_CONSOLE_WRITELINE_OFFSET UNITYSDK_OFFSET(0x93B4A20)
#define SYSTEM_CONSOLE_GET_INPUTENCODING_OFFSET UNITYSDK_OFFSET(0x93B4AC0)
#define SYSTEM_CONSOLE_GET_OUTPUTENCODING_OFFSET UNITYSDK_OFFSET(0x93B4B10)
#define SYSTEM_CONSOLE_READKEY_OFFSET UNITYSDK_OFFSET(0x93B4B60)
#define SYSTEM_CONSOLE_READKEY_OFFSET UNITYSDK_OFFSET(0x93B4C10)
#define SYSTEM_CONSOLE_DOCONSOLECANCELEVENT_OFFSET UNITYSDK_OFFSET(0x93B4D60)

namespace System
{
	inline static constexpr unsigned int Console_TypeDefinitionIndex = 23959;

	class Console : public Il2CppObject
	{
	public:
		::System::IO::TextWriter* stdout; // 0x0
		::System::IO::TextWriter* stderr; // 0x8
		::System::IO::TextReader* stdin; // 0x10
		::System::Boolean IsRunningOnAndroid; // 0x18
		::System::Text::Encoding* inputEncoding; // 0x20
		::System::Text::Encoding* outputEncoding; // 0x28
		::System::ConsoleCancelEventHandler* cancel_event; // 0x30

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONSOLE_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void SetupStreams(::System::Text::Encoding* arg, ::System::Text::Encoding* arg)
		{
			((::System::Void(*)(::System::Text::Encoding*, ::System::Text::Encoding*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONSOLE_SETUPSTREAMS_OFFSET))(arg, arg, nullptr);
		}

		::System::IO::TextWriter* get_Error()
		{
			return (return (::System::IO::TextWriter*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONSOLE_GET_ERROR_OFFSET))(nullptr);
		}

		::System::IO::TextWriter* get_Out()
		{
			return (return (::System::IO::TextWriter*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONSOLE_GET_OUT_OFFSET))(nullptr);
		}

		::System::IO::Stream* Open(::System::Int32 arg, ::System::IO::FileAccess* arg, ::System::Int32 arg)
		{
			return (return (::System::IO::Stream*(*)(::System::Int32, ::System::IO::FileAccess*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONSOLE_OPEN_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::IO::Stream* OpenStandardError(::System::Int32 arg)
		{
			return (return (::System::IO::Stream*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONSOLE_OPENSTANDARDERROR_OFFSET))(arg, nullptr);
		}

		::System::IO::Stream* OpenStandardInput(::System::Int32 arg)
		{
			return (return (::System::IO::Stream*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONSOLE_OPENSTANDARDINPUT_OFFSET))(arg, nullptr);
		}

		::System::IO::Stream* OpenStandardOutput(::System::Int32 arg)
		{
			return (return (::System::IO::Stream*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONSOLE_OPENSTANDARDOUTPUT_OFFSET))(arg, nullptr);
		}

		::System::Void SetOut(::System::IO::TextWriter* arg)
		{
			((::System::Void(*)(::System::IO::TextWriter*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONSOLE_SETOUT_OFFSET))(arg, nullptr);
		}

		::System::Void WriteLine(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONSOLE_WRITELINE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteLine(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONSOLE_WRITELINE_OFFSET))(str, nullptr);
		}

		::System::Void WriteLine(::System::String* str, ::System::Object* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONSOLE_WRITELINE_OFFSET))(str, arg, nullptr);
		}

		::System::Text::Encoding* get_InputEncoding()
		{
			return (return (::System::Text::Encoding*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONSOLE_GET_INPUTENCODING_OFFSET))(nullptr);
		}

		::System::Text::Encoding* get_OutputEncoding()
		{
			return (return (::System::Text::Encoding*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONSOLE_GET_OUTPUTENCODING_OFFSET))(nullptr);
		}

		::System::ConsoleKeyInfo* ReadKey()
		{
			return (return (::System::ConsoleKeyInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONSOLE_READKEY_OFFSET))(nullptr);
		}

		::System::ConsoleKeyInfo* ReadKey(::System::Boolean arg)
		{
			return (return (::System::ConsoleKeyInfo*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONSOLE_READKEY_OFFSET))(arg, nullptr);
		}

		::System::Void DoConsoleCancelEvent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONSOLE_DOCONSOLECANCELEVENT_OFFSET))(nullptr);
		}

	};
}

