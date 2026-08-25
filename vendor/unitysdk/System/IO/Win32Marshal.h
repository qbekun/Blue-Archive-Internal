#pragma once
#include "../../unitysdk.h"

#define SYSTEM_IO_WIN32MARSHAL_GETEXCEPTIONFORLASTWIN32ERROR_OFFSET UNITYSDK_OFFSET(0x9303610)
#define SYSTEM_IO_WIN32MARSHAL_GETEXCEPTIONFORWIN32ERROR_OFFSET UNITYSDK_OFFSET(0x9303660)
#define SYSTEM_IO_WIN32MARSHAL_MAKEHRFROMERRORCODE_OFFSET UNITYSDK_OFFSET(0x9303AE0)
#define SYSTEM_IO_WIN32MARSHAL_TRYMAKEWIN32ERRORCODEFROMHR_OFFSET UNITYSDK_OFFSET(0x9303B10)
#define SYSTEM_IO_WIN32MARSHAL_GETMESSAGE_OFFSET UNITYSDK_OFFSET(0x9303B00)

namespace System::IO
{
	inline static constexpr unsigned int Win32Marshal_TypeDefinitionIndex = 25256;

	class Win32Marshal : public Il2CppObject
	{
	public:
		::System::Exception* GetExceptionForLastWin32Error(::System::String* str)
		{
			return (return (::System::Exception*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_WIN32MARSHAL_GETEXCEPTIONFORLASTWIN32ERROR_OFFSET))(str, nullptr);
		}

		::System::Exception* GetExceptionForWin32Error(::System::Int32 arg, ::System::String* str)
		{
			return (return (::System::Exception*(*)(::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_WIN32MARSHAL_GETEXCEPTIONFORWIN32ERROR_OFFSET))(arg, str, nullptr);
		}

		::System::Int32 MakeHRFromErrorCode(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_WIN32MARSHAL_MAKEHRFROMERRORCODE_OFFSET))(arg, nullptr);
		}

		::System::Int32 TryMakeWin32ErrorCodeFromHR(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_WIN32MARSHAL_TRYMAKEWIN32ERRORCODEFROMHR_OFFSET))(arg, nullptr);
		}

		::System::String* GetMessage(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_WIN32MARSHAL_GETMESSAGE_OFFSET))(arg, nullptr);
		}

	};
}

