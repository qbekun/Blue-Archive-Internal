#pragma once
#include "../unitysdk.h"

#define MEMORYPACK_MEMORYPACKCODE_GET_NULLCOLLECTIONDATA_OFFSET UNITYSDK_OFFSET(0x905D2E0)
#define MEMORYPACK_MEMORYPACKCODE_GET_ZEROCOLLECTIONDATA_OFFSET UNITYSDK_OFFSET(0x905D350)

namespace MemoryPack
{
	inline static constexpr unsigned int MemoryPackCode_TypeDefinitionIndex = 35421;

	class MemoryPackCode : public Il2CppObject
	{
	public:
		::System::Int32 NullCollection; // 0x0
		::System::Byte WideTag; // 0x0
		::System::Byte ReferenceId; // 0x0
		::System::Byte Reserved1; // 0x0
		::System::Byte Reserved2; // 0x0
		::System::Byte Reserved3; // 0x0
		::System::Byte Reserved4; // 0x0
		::System::Byte Reserved5; // 0x0
		::System::Byte NullObject; // 0x0

		Il2CppObject* get_NullCollectionData()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKCODE_GET_NULLCOLLECTIONDATA_OFFSET))(nullptr);
		}

		Il2CppObject* get_ZeroCollectionData()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKCODE_GET_ZEROCOLLECTIONDATA_OFFSET))(nullptr);
		}

	};
}

