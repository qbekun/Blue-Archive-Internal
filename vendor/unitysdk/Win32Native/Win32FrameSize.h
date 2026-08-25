#pragma once
#include "../unitysdk.h"

#define WIN32NATIVE_WIN32FRAMESIZE_TOSTRING_OFFSET UNITYSDK_OFFSET(0xDF3450)
#define WIN32NATIVE_WIN32FRAMESIZE_GET_TOTALHEIGHT_OFFSET UNITYSDK_OFFSET(0xDED010)
#define WIN32NATIVE_WIN32FRAMESIZE_GET_TOTALWIDTH_OFFSET UNITYSDK_OFFSET(0xDED000)

namespace Win32Native
{
	inline static constexpr unsigned int Win32FrameSize_TypeDefinitionIndex = 10178;

	class Win32FrameSize : public Il2CppObject
	{
	public:
		::System::Int32 left; // 0x10
		::System::Int32 top; // 0x14
		::System::Int32 right; // 0x18
		::System::Int32 bottom; // 0x1C

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_WIN32FRAMESIZE_TOSTRING_OFFSET))(nullptr);
		}

		::System::Int32 get_TotalHeight()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_WIN32FRAMESIZE_GET_TOTALHEIGHT_OFFSET))(nullptr);
		}

		::System::Int32 get_TotalWidth()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_WIN32FRAMESIZE_GET_TOTALWIDTH_OFFSET))(nullptr);
		}

	};
}

