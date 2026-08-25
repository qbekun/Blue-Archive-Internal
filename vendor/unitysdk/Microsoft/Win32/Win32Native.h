#pragma once
#include "../../unitysdk.h"

#define MICROSOFT_WIN32_WIN32NATIVE_GETMESSAGE_OFFSET UNITYSDK_OFFSET(0x914B860)
#define MICROSOFT_WIN32_WIN32NATIVE_MAKEHRFROMERRORCODE_OFFSET UNITYSDK_OFFSET(0x914B930)

namespace Microsoft::Win32
{
	inline static constexpr unsigned int Win32Native_TypeDefinitionIndex = 23647;

	class Win32Native : public Il2CppObject
	{
	public:
		::System::String* GetMessage(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_WIN32NATIVE_GETMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Int32 MakeHRFromErrorCode(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_WIN32NATIVE_MAKEHRFROMERRORCODE_OFFSET))(arg, nullptr);
		}

	};
}

