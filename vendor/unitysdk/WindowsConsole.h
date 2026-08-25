#pragma once
#include "unitysdk.h"

#define WINDOWSCONSOLE_GETCONSOLECP_OFFSET UNITYSDK_OFFSET(0x93B4F80)
#define WINDOWSCONSOLE_GETCONSOLEOUTPUTCP_OFFSET UNITYSDK_OFFSET(0x93B5000)
#define WINDOWSCONSOLE_DOWINDOWSCONSOLECANCELEVENT_OFFSET UNITYSDK_OFFSET(0x93B5080)
#define WINDOWSCONSOLE_GETINPUTCODEPAGE_OFFSET UNITYSDK_OFFSET(0x93B3A50)
#define WINDOWSCONSOLE_GETOUTPUTCODEPAGE_OFFSET UNITYSDK_OFFSET(0x93B3B20)
#define WINDOWSCONSOLE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x93B50D0)

	inline static constexpr unsigned int WindowsConsole_TypeDefinitionIndex = 23958;

	class WindowsConsole : public Il2CppObject
	{
	public:
		::System::Boolean ctrlHandlerAdded; // 0x0
		WindowsCancelHandler* cancelHandler; // 0x8

		::System::Int32 GetConsoleCP()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + WINDOWSCONSOLE_GETCONSOLECP_OFFSET))(nullptr);
		}

		::System::Int32 GetConsoleOutputCP()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + WINDOWSCONSOLE_GETCONSOLEOUTPUTCP_OFFSET))(nullptr);
		}

		::System::Boolean DoWindowsConsoleCancelEvent(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + WINDOWSCONSOLE_DOWINDOWSCONSOLECANCELEVENT_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetInputCodePage()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + WINDOWSCONSOLE_GETINPUTCODEPAGE_OFFSET))(nullptr);
		}

		::System::Int32 GetOutputCodePage()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + WINDOWSCONSOLE_GETOUTPUTCODEPAGE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WINDOWSCONSOLE_.CCTOR_OFFSET))(nullptr);
		}

	};

