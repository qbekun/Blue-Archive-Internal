#pragma once
#include "../../../unitysdk.h"

#define BESTHTTP_PLATFORMSUPPORT_MEMORY_POOLEDBUFFER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x897AC0)

namespace BestHTTP::PlatformSupport::Memory
{
	inline static constexpr unsigned int PooledBuffer_TypeDefinitionIndex = 23278;

	class PooledBuffer : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* Data; // 0x10
		::System::Int32 Length; // 0x18

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_PLATFORMSUPPORT_MEMORY_POOLEDBUFFER_DISPOSE_OFFSET))(nullptr);
		}

	};
}

