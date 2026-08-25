#pragma once
#include "../../unitysdk.h"

#define SYSTEM_THREADING_READERWRITERCOUNT_.CTOR_OFFSET UNITYSDK_OFFSET(0x96C5200)

namespace System::Threading
{
	inline static constexpr unsigned int ReaderWriterCount_TypeDefinitionIndex = 33591;

	class ReaderWriterCount : public Il2CppObject
	{
	public:
		::System::Int64 lockID; // 0x10
		::System::Int32 readercount; // 0x18
		::System::Int32 writercount; // 0x1C
		::System::Int32 upgradecount; // 0x20
		::System::Threading::ReaderWriterCount* next; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_READERWRITERCOUNT_.CTOR_OFFSET))(nullptr);
		}

	};
}

