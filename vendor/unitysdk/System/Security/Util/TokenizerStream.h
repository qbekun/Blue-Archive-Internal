#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_SECURITY_UTIL_TOKENIZERSTREAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x91820B0)
#define SYSTEM_SECURITY_UTIL_TOKENIZERSTREAM_ADDTOKEN_OFFSET UNITYSDK_OFFSET(0x9182680)
#define SYSTEM_SECURITY_UTIL_TOKENIZERSTREAM_ADDSTRING_OFFSET UNITYSDK_OFFSET(0x91827E0)
#define SYSTEM_SECURITY_UTIL_TOKENIZERSTREAM_RESET_OFFSET UNITYSDK_OFFSET(0x9182230)
#define SYSTEM_SECURITY_UTIL_TOKENIZERSTREAM_GETNEXTFULLTOKEN_OFFSET UNITYSDK_OFFSET(0x9182290)
#define SYSTEM_SECURITY_UTIL_TOKENIZERSTREAM_GETNEXTTOKEN_OFFSET UNITYSDK_OFFSET(0x9180CA0)
#define SYSTEM_SECURITY_UTIL_TOKENIZERSTREAM_GETNEXTSTRING_OFFSET UNITYSDK_OFFSET(0x9180D40)
#define SYSTEM_SECURITY_UTIL_TOKENIZERSTREAM_THROWAWAYNEXTSTRING_OFFSET UNITYSDK_OFFSET(0x9180CC0)
#define SYSTEM_SECURITY_UTIL_TOKENIZERSTREAM_TAGLASTTOKEN_OFFSET UNITYSDK_OFFSET(0x9180CD0)
#define SYSTEM_SECURITY_UTIL_TOKENIZERSTREAM_GETTOKENCOUNT_OFFSET UNITYSDK_OFFSET(0x9182CA0)
#define SYSTEM_SECURITY_UTIL_TOKENIZERSTREAM_GOTOPOSITION_OFFSET UNITYSDK_OFFSET(0x91818C0)

namespace System::Security::Util
{
	inline static constexpr unsigned int TokenizerStream_TypeDefinitionIndex = 24292;

	class TokenizerStream : public Il2CppObject
	{
	public:
		::System::Int32 m_countTokens; // 0x10
		::System::Security::Util::TokenizerShortBlock* m_headTokens; // 0x18
		::System::Security::Util::TokenizerShortBlock* m_lastTokens; // 0x20
		::System::Security::Util::TokenizerShortBlock* m_currentTokens; // 0x28
		::System::Int32 m_indexTokens; // 0x30
		::System::Security::Util::TokenizerStringBlock* m_headStrings; // 0x38
		::System::Security::Util::TokenizerStringBlock* m_currentStrings; // 0x40
		::System::Int32 m_indexStrings; // 0x48

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_UTIL_TOKENIZERSTREAM_.CTOR_OFFSET))(nullptr);
		}

		::System::Void AddToken(::System::Int16 arg)
		{
			((::System::Void(*)(::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_UTIL_TOKENIZERSTREAM_ADDTOKEN_OFFSET))(arg, nullptr);
		}

		::System::Void AddString(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_UTIL_TOKENIZERSTREAM_ADDSTRING_OFFSET))(str, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_UTIL_TOKENIZERSTREAM_RESET_OFFSET))(nullptr);
		}

		::System::Int16 GetNextFullToken()
		{
			return (return (::System::Int16(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_UTIL_TOKENIZERSTREAM_GETNEXTFULLTOKEN_OFFSET))(nullptr);
		}

		::System::Int16 GetNextToken()
		{
			return (return (::System::Int16(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_UTIL_TOKENIZERSTREAM_GETNEXTTOKEN_OFFSET))(nullptr);
		}

		::System::String* GetNextString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_UTIL_TOKENIZERSTREAM_GETNEXTSTRING_OFFSET))(nullptr);
		}

		::System::Void ThrowAwayNextString()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_UTIL_TOKENIZERSTREAM_THROWAWAYNEXTSTRING_OFFSET))(nullptr);
		}

		::System::Void TagLastToken(::System::Int16 arg)
		{
			((::System::Void(*)(::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_UTIL_TOKENIZERSTREAM_TAGLASTTOKEN_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetTokenCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_UTIL_TOKENIZERSTREAM_GETTOKENCOUNT_OFFSET))(nullptr);
		}

		::System::Void GoToPosition(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_UTIL_TOKENIZERSTREAM_GOTOPOSITION_OFFSET))(arg, nullptr);
		}

	};
}

