#pragma once
#include "../../unitysdk.h"

#define SYSTEM_IO_ERROR_GETSTREAMISCLOSED_OFFSET UNITYSDK_OFFSET(0x92ED930)
#define SYSTEM_IO_ERROR_GETENDOFFILE_OFFSET UNITYSDK_OFFSET(0x92ED9A0)
#define SYSTEM_IO_ERROR_GETREADNOTSUPPORTED_OFFSET UNITYSDK_OFFSET(0x92EDA10)
#define SYSTEM_IO_ERROR_GETWRITENOTSUPPORTED_OFFSET UNITYSDK_OFFSET(0x92EDA80)

namespace System::IO
{
	inline static constexpr unsigned int Error_TypeDefinitionIndex = 25224;

	class Error : public Il2CppObject
	{
	public:
		::System::Exception* GetStreamIsClosed()
		{
			return (return (::System::Exception*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_ERROR_GETSTREAMISCLOSED_OFFSET))(nullptr);
		}

		::System::Exception* GetEndOfFile()
		{
			return (return (::System::Exception*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_ERROR_GETENDOFFILE_OFFSET))(nullptr);
		}

		::System::Exception* GetReadNotSupported()
		{
			return (return (::System::Exception*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_ERROR_GETREADNOTSUPPORTED_OFFSET))(nullptr);
		}

		::System::Exception* GetWriteNotSupported()
		{
			return (return (::System::Exception*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_ERROR_GETWRITENOTSUPPORTED_OFFSET))(nullptr);
		}

	};
}

