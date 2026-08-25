#pragma once
#include "../../unitysdk.h"

namespace System::IO
{
	inline static constexpr unsigned int MonoIOError_TypeDefinitionIndex = 25300;

	class MonoIOError : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::IO::MonoIOError* ERROR_SUCCESS; // 0x0
		::System::IO::MonoIOError* ERROR_FILE_NOT_FOUND; // 0x0
		::System::IO::MonoIOError* ERROR_PATH_NOT_FOUND; // 0x0
		::System::IO::MonoIOError* ERROR_TOO_MANY_OPEN_FILES; // 0x0
		::System::IO::MonoIOError* ERROR_ACCESS_DENIED; // 0x0
		::System::IO::MonoIOError* ERROR_INVALID_HANDLE; // 0x0
		::System::IO::MonoIOError* ERROR_INVALID_DRIVE; // 0x0
		::System::IO::MonoIOError* ERROR_NOT_SAME_DEVICE; // 0x0
		::System::IO::MonoIOError* ERROR_NO_MORE_FILES; // 0x0
		::System::IO::MonoIOError* ERROR_NOT_READY; // 0x0
		::System::IO::MonoIOError* ERROR_WRITE_FAULT; // 0x0
		::System::IO::MonoIOError* ERROR_READ_FAULT; // 0x0
		::System::IO::MonoIOError* ERROR_GEN_FAILURE; // 0x0
		::System::IO::MonoIOError* ERROR_SHARING_VIOLATION; // 0x0
		::System::IO::MonoIOError* ERROR_LOCK_VIOLATION; // 0x0
		::System::IO::MonoIOError* ERROR_HANDLE_DISK_FULL; // 0x0
		::System::IO::MonoIOError* ERROR_NOT_SUPPORTED; // 0x0
		::System::IO::MonoIOError* ERROR_FILE_EXISTS; // 0x0
		::System::IO::MonoIOError* ERROR_CANNOT_MAKE; // 0x0
		::System::IO::MonoIOError* ERROR_INVALID_PARAMETER; // 0x0
		::System::IO::MonoIOError* ERROR_BROKEN_PIPE; // 0x0
		::System::IO::MonoIOError* ERROR_INVALID_NAME; // 0x0
		::System::IO::MonoIOError* ERROR_DIR_NOT_EMPTY; // 0x0
		::System::IO::MonoIOError* ERROR_ALREADY_EXISTS; // 0x0
		::System::IO::MonoIOError* ERROR_FILENAME_EXCED_RANGE; // 0x0
		::System::IO::MonoIOError* ERROR_DIRECTORY; // 0x0
		::System::IO::MonoIOError* ERROR_ENCRYPTION_FAILED; // 0x0

	};
}

