#pragma once
#include "../unitysdk.h"

#define DEBUGMX_CHARACTERLOGDETAIL_.CTOR_OFFSET UNITYSDK_OFFSET(0xDE0950)
#define DEBUGMX_CHARACTERLOGDETAIL_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0xDE0960)
#define DEBUGMX_CHARACTERLOGDETAIL_SET_MESSAGE_OFFSET UNITYSDK_OFFSET(0xDE0970)
#define DEBUGMX_CHARACTERLOGDETAIL_GET_STACKTRACE_OFFSET UNITYSDK_OFFSET(0xDE0980)
#define DEBUGMX_CHARACTERLOGDETAIL_GET_TICK_OFFSET UNITYSDK_OFFSET(0xDE0B00)
#define DEBUGMX_CHARACTERLOGDETAIL_SET_TICK_OFFSET UNITYSDK_OFFSET(0xDE0B10)

namespace DebugMX
{
	inline static constexpr unsigned int CharacterLogDetail_TypeDefinitionIndex = 10132;

	class CharacterLogDetail : public Il2CppObject
	{
	public:
		::System::Int32 _Tick_k__BackingField; // 0x10
		::System::String* _Message_k__BackingField; // 0x18
		::System::Boolean isFormatted; // 0x20
		::System::String* stackTrace; // 0x28

		::System::Void .ctor(::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGMX_CHARACTERLOGDETAIL_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::String* get_Message()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBUGMX_CHARACTERLOGDETAIL_GET_MESSAGE_OFFSET))(nullptr);
		}

		::System::Void set_Message(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGMX_CHARACTERLOGDETAIL_SET_MESSAGE_OFFSET))(str, nullptr);
		}

		::System::String* get_StackTrace()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBUGMX_CHARACTERLOGDETAIL_GET_STACKTRACE_OFFSET))(nullptr);
		}

		::System::Int32 get_Tick()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBUGMX_CHARACTERLOGDETAIL_GET_TICK_OFFSET))(nullptr);
		}

		::System::Void set_Tick(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGMX_CHARACTERLOGDETAIL_SET_TICK_OFFSET))(arg, nullptr);
		}

	};
}

