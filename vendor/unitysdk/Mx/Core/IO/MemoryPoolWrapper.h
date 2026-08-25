#pragma once
#include "../../../unitysdk.h"

namespace Microsoft::IO { class RecyclableMemoryStreamManager; }

#define MX_CORE_IO_MEMORYPOOLWRAPPER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1032B30)
#define MX_CORE_IO_MEMORYPOOLWRAPPER_GETMEMORYSTREAM_OFFSET UNITYSDK_OFFSET(0x1032BF0)

namespace MX::Core::IO
{
	inline static constexpr unsigned int MemoryPoolWrapper_TypeDefinitionIndex = 12828;

	class MemoryPoolWrapper : public Il2CppObject
	{
	public:
		::Microsoft::IO::RecyclableMemoryStreamManager* _recyclableMemoryStreamManager; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_MEMORYPOOLWRAPPER_.CTOR_OFFSET))(nullptr);
		}

		::System::IO::MemoryStream* GetMemoryStream()
		{
			return ((::System::IO::MemoryStream*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_MEMORYPOOLWRAPPER_GETMEMORYSTREAM_OFFSET))(nullptr);
		}

	};
}

