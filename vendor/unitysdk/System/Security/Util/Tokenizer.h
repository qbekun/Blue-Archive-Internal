#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_SECURITY_UTIL_TOKENIZER_BASICINITIALIZATION_OFFSET UNITYSDK_OFFSET(0x9182570)
#define SYSTEM_SECURITY_UTIL_TOKENIZER_RECYCLE_OFFSET UNITYSDK_OFFSET(0x91825F0)
#define SYSTEM_SECURITY_UTIL_TOKENIZER_.CTOR_OFFSET UNITYSDK_OFFSET(0x91824C0)
#define SYSTEM_SECURITY_UTIL_TOKENIZER_CHANGEFORMAT_OFFSET UNITYSDK_OFFSET(0x9181940)
#define SYSTEM_SECURITY_UTIL_TOKENIZER_GETTOKENS_OFFSET UNITYSDK_OFFSET(0x9180FC0)
#define SYSTEM_SECURITY_UTIL_TOKENIZER_GETSTRINGTOKEN_OFFSET UNITYSDK_OFFSET(0x91827C0)

namespace System::Security::Util
{
	inline static constexpr unsigned int Tokenizer_TypeDefinitionIndex = 24289;

	class Tokenizer : public Il2CppObject
	{
	public:
		::System::Int32 LineNo; // 0x10
		::System::Int32 _inProcessingTag; // 0x14
		::Il2CppArray<::System::Object*>* _inBytes; // 0x18
		::Il2CppArray<::System::Object*>* _inChars; // 0x20
		::System::String* _inString; // 0x28
		::System::Int32 _inIndex; // 0x30
		::System::Int32 _inSize; // 0x34
		::System::Int32 _inSavedCharacter; // 0x38
		TokenSource* _inTokenSource; // 0x3C
		ITokenReader* _inTokenReader; // 0x40
		StringMaker* _maker; // 0x48
		::Il2CppArray<::System::Object*>* _searchStrings; // 0x50
		::Il2CppArray<::System::Object*>* _replaceStrings; // 0x58
		::System::Int32 _inNestedIndex; // 0x60
		::System::Int32 _inNestedSize; // 0x64
		::System::String* _inNestedString; // 0x68

		::System::Void BasicInitialization()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_UTIL_TOKENIZER_BASICINITIALIZATION_OFFSET))(nullptr);
		}

		::System::Void Recycle()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_UTIL_TOKENIZER_RECYCLE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_UTIL_TOKENIZER_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void ChangeFormat(::System::Text::Encoding* arg)
		{
			((::System::Void(*)(::System::Text::Encoding*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_UTIL_TOKENIZER_CHANGEFORMAT_OFFSET))(arg, nullptr);
		}

		::System::Void GetTokens(::System::Security::Util::TokenizerStream* arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Security::Util::TokenizerStream*, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_UTIL_TOKENIZER_GETTOKENS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::String* GetStringToken()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_UTIL_TOKENIZER_GETSTRINGTOKEN_OFFSET))(nullptr);
		}

	};
}

