#pragma once
#include "unitysdk.h"

	inline static constexpr unsigned int ValidatingReaderState_TypeDefinitionIndex = 27737;

	class ValidatingReaderState : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		ValidatingReaderState* None; // 0x0
		ValidatingReaderState* Init; // 0x0
		ValidatingReaderState* Read; // 0x0
		ValidatingReaderState* OnDefaultAttribute; // 0x0
		ValidatingReaderState* OnReadAttributeValue; // 0x0
		ValidatingReaderState* OnAttribute; // 0x0
		ValidatingReaderState* ClearAttributes; // 0x0
		ValidatingReaderState* ParseInlineSchema; // 0x0
		ValidatingReaderState* ReadAhead; // 0x0
		ValidatingReaderState* OnReadBinaryContent; // 0x0
		ValidatingReaderState* ReaderClosed; // 0x0
		ValidatingReaderState* EOF; // 0x0
		ValidatingReaderState* Error; // 0x0

	};

