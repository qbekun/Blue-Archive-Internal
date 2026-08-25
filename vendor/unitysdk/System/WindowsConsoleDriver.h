#pragma once
#include "../unitysdk.h"

#define SYSTEM_WINDOWSCONSOLEDRIVER_.CTOR_OFFSET UNITYSDK_OFFSET(0x93CB640)
#define SYSTEM_WINDOWSCONSOLEDRIVER_READKEY_OFFSET UNITYSDK_OFFSET(0x93CB910)
#define SYSTEM_WINDOWSCONSOLEDRIVER_ISMODIFIERKEY_OFFSET UNITYSDK_OFFSET(0x93CBC20)
#define SYSTEM_WINDOWSCONSOLEDRIVER_GETSTDHANDLE_OFFSET UNITYSDK_OFFSET(0x93CB7F0)
#define SYSTEM_WINDOWSCONSOLEDRIVER_GETCONSOLESCREENBUFFERINFO_OFFSET UNITYSDK_OFFSET(0x93CB880)
#define SYSTEM_WINDOWSCONSOLEDRIVER_READCONSOLEINPUT_OFFSET UNITYSDK_OFFSET(0x93CBB20)

namespace System
{
	inline static constexpr unsigned int WindowsConsoleDriver_TypeDefinitionIndex = 24021;

	class WindowsConsoleDriver : public Il2CppObject
	{
	public:
		::System::Int32 inputHandle; // 0x10
		::System::Int32 outputHandle; // 0x18
		::System::Int16 defaultAttribute; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_WINDOWSCONSOLEDRIVER_.CTOR_OFFSET))(nullptr);
		}

		::System::ConsoleKeyInfo* ReadKey(::System::Boolean arg)
		{
			return (return (::System::ConsoleKeyInfo*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_WINDOWSCONSOLEDRIVER_READKEY_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsModifierKey(::System::Int16 arg)
		{
			return (return (::System::Boolean(*)(::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_WINDOWSCONSOLEDRIVER_ISMODIFIERKEY_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetStdHandle(::System::Handles* arg)
		{
			return (return (::System::Int32(*)(::System::Handles*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_WINDOWSCONSOLEDRIVER_GETSTDHANDLE_OFFSET))(arg, nullptr);
		}

		::System::Boolean GetConsoleScreenBufferInfo(::System::Int32 arg, ::System::ConsoleScreenBufferInfo&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::ConsoleScreenBufferInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_WINDOWSCONSOLEDRIVER_GETCONSOLESCREENBUFFERINFO_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean ReadConsoleInput(::System::Int32 arg, ::System::InputRecord&* arg, ::System::Int32 arg, int32_t&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::InputRecord&*, ::System::Int32, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_WINDOWSCONSOLEDRIVER_READCONSOLEINPUT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

