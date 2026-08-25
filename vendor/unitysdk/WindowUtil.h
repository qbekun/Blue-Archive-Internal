#pragma once
#include "unitysdk.h"

#define WINDOWUTIL_GETACTIVEWINDOW_OFFSET UNITYSDK_OFFSET(0x9C15E00)
#define WINDOWUTIL_ENUMWINDOWS_OFFSET UNITYSDK_OFFSET(0x9C17810)
#define WINDOWUTIL_GETWINDOWTHREADPROCESSID_OFFSET UNITYSDK_OFFSET(0x9C178B0)
#define WINDOWUTIL_GETCLASSNAME_OFFSET UNITYSDK_OFFSET(0x9C17940)
#define WINDOWUTIL_ISWINDOW_OFFSET UNITYSDK_OFFSET(0x9C17A00)
#define WINDOWUTIL_ISWINDOWVISIBLE_OFFSET UNITYSDK_OFFSET(0x9C17A90)
#define WINDOWUTIL_GETWINDOWLONGPTR_OFFSET UNITYSDK_OFFSET(0x9C17B20)
#define WINDOWUTIL_GETWINDOWHANDLEFORCURRENTPROCESS_OFFSET UNITYSDK_OFFSET(0x9C15E80)
#define WINDOWUTIL_CHECKWINDOWVALID_OFFSET UNITYSDK_OFFSET(0x9C17D90)
#define WINDOWUTIL_PROCESSNEXONLINKLOGQUEUE_OFFSET UNITYSDK_OFFSET(0x9C17C80)
#define WINDOWUTIL_ENUMWINDOWSCALLBACK_OFFSET UNITYSDK_OFFSET(0x9C17530)
#define WINDOWUTIL_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9C18300)

	inline static constexpr unsigned int WindowUtil_TypeDefinitionIndex = 26604;

	class WindowUtil : public Il2CppObject
	{
	public:
		::System::Int32 _windowHandle; // 0x0
		::System::Int32 GWL_STYLE; // 0x8
		::System::Int32 GWL_EXSTYLE; // 0xC
		::System::UInt32 WS_CHILD; // 0x10
		::System::UInt32 WS_EX_TOOLWINDOW; // 0x14

		::System::Int32 GetActiveWindow()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + WINDOWUTIL_GETACTIVEWINDOW_OFFSET))(nullptr);
		}

		::System::Boolean EnumWindows(EnumWindowsProc* arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(EnumWindowsProc*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + WINDOWUTIL_ENUMWINDOWS_OFFSET))(arg, arg, nullptr);
		}

		::System::UInt32 GetWindowThreadProcessId(::System::Int32 arg, uint32_t&* arg)
		{
			return (return (::System::UInt32(*)(::System::Int32, uint32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + WINDOWUTIL_GETWINDOWTHREADPROCESSID_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetClassName(::System::Int32 arg, ::System::Text::StringBuilder* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Text::StringBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + WINDOWUTIL_GETCLASSNAME_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean IsWindow(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + WINDOWUTIL_ISWINDOW_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsWindowVisible(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + WINDOWUTIL_ISWINDOWVISIBLE_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetWindowLongPtr(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + WINDOWUTIL_GETWINDOWLONGPTR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetWindowHandleForCurrentProcess()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + WINDOWUTIL_GETWINDOWHANDLEFORCURRENTPROCESS_OFFSET))(nullptr);
		}

		::System::Boolean CheckWindowValid(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + WINDOWUTIL_CHECKWINDOWVALID_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessNexonLinkLogQueue()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WINDOWUTIL_PROCESSNEXONLINKLOGQUEUE_OFFSET))(nullptr);
		}

		::System::Boolean EnumWindowsCallback(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + WINDOWUTIL_ENUMWINDOWSCALLBACK_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WINDOWUTIL_.CCTOR_OFFSET))(nullptr);
		}

	};

