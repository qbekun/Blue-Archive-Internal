#pragma once
#include "../../unitysdk.h"

namespace Antlr::Runtime { class IToken; }

#define ANTLR_RUNTIME_RECOGNIZERSHAREDSTATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x4CC0B0)

namespace Antlr::Runtime
{
	inline static constexpr unsigned int RecognizerSharedState_TypeDefinitionIndex = 37414;

	class RecognizerSharedState : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* following; // 0x10
		::System::Int32 followingStackPointer; // 0x18
		::System::Boolean errorRecovery; // 0x1C
		::System::Int32 lastErrorIndex; // 0x20
		::System::Boolean failed; // 0x24
		::System::Int32 syntaxErrors; // 0x28
		::System::Int32 backtracking; // 0x2C
		::Il2CppArray<::System::Object*>* ruleMemo; // 0x30
		::Antlr::Runtime::IToken* token; // 0x38
		::System::Int32 tokenStartCharIndex; // 0x40
		::System::Int32 tokenStartLine; // 0x44
		::System::Int32 tokenStartCharPositionInLine; // 0x48
		::System::Int32 channel; // 0x4C
		::System::Int32 type; // 0x50
		::System::String* text; // 0x58

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_RECOGNIZERSHAREDSTATE_.CTOR_OFFSET))(nullptr);
		}

	};
}

