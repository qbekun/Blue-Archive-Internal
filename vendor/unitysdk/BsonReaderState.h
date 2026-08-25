#pragma once
#include "unitysdk.h"

	inline static constexpr unsigned int BsonReaderState_TypeDefinitionIndex = 32129;

	class BsonReaderState : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		BsonReaderState* Normal; // 0x0
		BsonReaderState* ReferenceStart; // 0x0
		BsonReaderState* ReferenceRef; // 0x0
		BsonReaderState* ReferenceId; // 0x0
		BsonReaderState* CodeWScopeStart; // 0x0
		BsonReaderState* CodeWScopeCode; // 0x0
		BsonReaderState* CodeWScopeScope; // 0x0
		BsonReaderState* CodeWScopeScopeObject; // 0x0
		BsonReaderState* CodeWScopeScopeEnd; // 0x0

	};

