#pragma once
#include "../../unitysdk.h"

#define TOYWEBVIEWSHARED_SHAREDMEMORY_NXPSHAREDMEMORYERRORCODE_GETERRORMESSAGE_OFFSET UNITYSDK_OFFSET(0x9BAEDD0)

namespace ToyWebViewShared::SharedMemory
{
	inline static constexpr unsigned int NXPSharedMemoryErrorCode_TypeDefinitionIndex = 25408;

	class NXPSharedMemoryErrorCode : public Il2CppObject
	{
	public:
		::System::Int32 SUCCESS; // 0x0
		::System::Int32 ERR_NOT_CONNECTED; // 0x0
		::System::Int32 ERR_MUTEX_CREATE; // 0x0
		::System::Int32 ERR_MUTEX_WAIT; // 0x0
		::System::Int32 ERR_FILE_MAPPING; // 0x0
		::System::Int32 ERR_MAP_VIEW; // 0x0
		::System::Int32 ERR_SEND_OVERFLOW; // 0x0
		::System::Int32 ERR_INVALID_BUFFER; // 0x0
		::System::Int32 ERR_INVALID_PARAM; // 0x0
		::System::Int32 ERR_ALREADY_CONNECTED; // 0x0

		::System::String* GetErrorMessage(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_SHAREDMEMORY_NXPSHAREDMEMORYERRORCODE_GETERRORMESSAGE_OFFSET))(arg, nullptr);
		}

	};
}

