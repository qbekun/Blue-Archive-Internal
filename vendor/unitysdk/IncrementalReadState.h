#pragma once
#include "unitysdk.h"

	inline static constexpr unsigned int IncrementalReadState_TypeDefinitionIndex = 27689;

	class IncrementalReadState : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		IncrementalReadState* Text; // 0x0
		IncrementalReadState* StartTag; // 0x0
		IncrementalReadState* PI; // 0x0
		IncrementalReadState* CDATA; // 0x0
		IncrementalReadState* Comment; // 0x0
		IncrementalReadState* Attributes; // 0x0
		IncrementalReadState* AttributeValue; // 0x0
		IncrementalReadState* ReadData; // 0x0
		IncrementalReadState* EndElement; // 0x0
		IncrementalReadState* End; // 0x0
		IncrementalReadState* ReadValueChunk_OnCachedValue; // 0x0
		IncrementalReadState* ReadValueChunk_OnPartialValue; // 0x0
		IncrementalReadState* ReadContentAsBinary_OnCachedValue; // 0x0
		IncrementalReadState* ReadContentAsBinary_OnPartialValue; // 0x0
		IncrementalReadState* ReadContentAsBinary_End; // 0x0

	};

