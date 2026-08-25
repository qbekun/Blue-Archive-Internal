#pragma once
#include "unitysdk.h"

	inline static constexpr unsigned int CachingReaderState_TypeDefinitionIndex = 27733;

	class CachingReaderState : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		CachingReaderState* None; // 0x0
		CachingReaderState* Init; // 0x0
		CachingReaderState* Record; // 0x0
		CachingReaderState* Replay; // 0x0
		CachingReaderState* ReaderClosed; // 0x0
		CachingReaderState* Error; // 0x0

	};

