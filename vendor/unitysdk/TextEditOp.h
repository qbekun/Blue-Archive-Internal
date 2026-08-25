#pragma once
#include "unitysdk.h"

	inline static constexpr unsigned int TextEditOp_TypeDefinitionIndex = 36561;

	class TextEditOp : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		TextEditOp* MoveLeft; // 0x0
		TextEditOp* MoveRight; // 0x0
		TextEditOp* MoveUp; // 0x0
		TextEditOp* MoveDown; // 0x0
		TextEditOp* MoveLineStart; // 0x0
		TextEditOp* MoveLineEnd; // 0x0
		TextEditOp* MoveTextStart; // 0x0
		TextEditOp* MoveTextEnd; // 0x0
		TextEditOp* MovePageUp; // 0x0
		TextEditOp* MovePageDown; // 0x0
		TextEditOp* MoveGraphicalLineStart; // 0x0
		TextEditOp* MoveGraphicalLineEnd; // 0x0
		TextEditOp* MoveWordLeft; // 0x0
		TextEditOp* MoveWordRight; // 0x0
		TextEditOp* MoveParagraphForward; // 0x0
		TextEditOp* MoveParagraphBackward; // 0x0
		TextEditOp* MoveToStartOfNextWord; // 0x0
		TextEditOp* MoveToEndOfPreviousWord; // 0x0
		TextEditOp* SelectLeft; // 0x0
		TextEditOp* SelectRight; // 0x0
		TextEditOp* SelectUp; // 0x0
		TextEditOp* SelectDown; // 0x0
		TextEditOp* SelectTextStart; // 0x0
		TextEditOp* SelectTextEnd; // 0x0
		TextEditOp* SelectPageUp; // 0x0
		TextEditOp* SelectPageDown; // 0x0
		TextEditOp* ExpandSelectGraphicalLineStart; // 0x0
		TextEditOp* ExpandSelectGraphicalLineEnd; // 0x0
		TextEditOp* SelectGraphicalLineStart; // 0x0
		TextEditOp* SelectGraphicalLineEnd; // 0x0
		TextEditOp* SelectWordLeft; // 0x0
		TextEditOp* SelectWordRight; // 0x0
		TextEditOp* SelectToEndOfPreviousWord; // 0x0
		TextEditOp* SelectToStartOfNextWord; // 0x0
		TextEditOp* SelectParagraphBackward; // 0x0
		TextEditOp* SelectParagraphForward; // 0x0
		TextEditOp* Delete; // 0x0
		TextEditOp* Backspace; // 0x0
		TextEditOp* DeleteWordBack; // 0x0
		TextEditOp* DeleteWordForward; // 0x0
		TextEditOp* DeleteLineBack; // 0x0
		TextEditOp* Cut; // 0x0
		TextEditOp* Copy; // 0x0
		TextEditOp* Paste; // 0x0
		TextEditOp* SelectAll; // 0x0
		TextEditOp* SelectNone; // 0x0
		TextEditOp* ScrollStart; // 0x0
		TextEditOp* ScrollEnd; // 0x0
		TextEditOp* ScrollPageUp; // 0x0
		TextEditOp* ScrollPageDown; // 0x0

	};

