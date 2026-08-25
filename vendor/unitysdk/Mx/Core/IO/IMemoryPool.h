#pragma once
#include "../../../unitysdk.h"

#define MX_CORE_IO_IMEMORYPOOL_GETMEMORYSTREAM_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::Core::IO
{
	inline static constexpr unsigned int IMemoryPool_TypeDefinitionIndex = 12827;

	class IMemoryPool : public Il2CppObject
	{
	public:
		::System::IO::MemoryStream* GetMemoryStream()
		{
			return ((::System::IO::MemoryStream*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_IMEMORYPOOL_GETMEMORYSTREAM_OFFSET))(nullptr);
		}

	};
}

