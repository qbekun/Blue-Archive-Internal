#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXWRITER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AFC730)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXWRITER_WRITE_OFFSET UNITYSDK_OFFSET(0x9AFC880)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXWRITER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9AFCFE0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXWRITER_REGEXCODEFROMREGEXTREE_OFFSET UNITYSDK_OFFSET(0x9AFCA80)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXWRITER_PATCHJUMP_OFFSET UNITYSDK_OFFSET(0x9AFD9D0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXWRITER_EMIT_OFFSET UNITYSDK_OFFSET(0x9AFDA20)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXWRITER_EMIT_OFFSET UNITYSDK_OFFSET(0x9AFD030)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXWRITER_EMIT_OFFSET UNITYSDK_OFFSET(0x9AFDAE0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXWRITER_STRINGCODE_OFFSET UNITYSDK_OFFSET(0x9AFDC90)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXWRITER_MAPCAPNUM_OFFSET UNITYSDK_OFFSET(0x9AFDDF0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXWRITER_EMITFRAGMENT_OFFSET UNITYSDK_OFFSET(0x9AFD170)

namespace System::Text::RegularExpressions
{
	inline static constexpr unsigned int RegexWriter_TypeDefinitionIndex = 29237;

	class RegexWriter : public Il2CppObject
	{
	public:
		Il2CppObject* _emitted; // 0x10
		Il2CppObject* _intStack; // 0x30
		Il2CppObject* _stringHash; // 0x50
		Il2CppObject* _stringTable; // 0x58
		::System::Collections::Hashtable* _caps; // 0x60
		::System::Int32 _trackCount; // 0x68

		::System::Void .ctor(Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXWRITER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Text::RegularExpressions::RegexCode* Write(::System::Text::RegularExpressions::RegexTree* arg)
		{
			return (return (::System::Text::RegularExpressions::RegexCode*(*)(::System::Text::RegularExpressions::RegexTree*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXWRITER_WRITE_OFFSET))(arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXWRITER_DISPOSE_OFFSET))(nullptr);
		}

		::System::Text::RegularExpressions::RegexCode* RegexCodeFromRegexTree(::System::Text::RegularExpressions::RegexTree* arg)
		{
			return (return (::System::Text::RegularExpressions::RegexCode*(*)(::System::Text::RegularExpressions::RegexTree*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXWRITER_REGEXCODEFROMREGEXTREE_OFFSET))(arg, nullptr);
		}

		::System::Void PatchJump(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXWRITER_PATCHJUMP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Emit(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXWRITER_EMIT_OFFSET))(arg, nullptr);
		}

		::System::Void Emit(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXWRITER_EMIT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Emit(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXWRITER_EMIT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 StringCode(::System::String* str)
		{
			return (return (::System::Int32(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXWRITER_STRINGCODE_OFFSET))(str, nullptr);
		}

		::System::Int32 MapCapnum(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXWRITER_MAPCAPNUM_OFFSET))(arg, nullptr);
		}

		::System::Void EmitFragment(::System::Int32 arg, ::System::Text::RegularExpressions::RegexNode* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Text::RegularExpressions::RegexNode*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXWRITER_EMITFRAGMENT_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

