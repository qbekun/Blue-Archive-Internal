#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFCD_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AEE0C0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFCD_FIRSTCHARS_OFFSET UNITYSDK_OFFSET(0x9AEE190)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFCD_PREFIX_OFFSET UNITYSDK_OFFSET(0x9AEE650)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFCD_ANCHORS_OFFSET UNITYSDK_OFFSET(0x9AEE8C0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFCD_ANCHORFROMTYPE_OFFSET UNITYSDK_OFFSET(0x9AEE9F0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFCD_PUSHINT_OFFSET UNITYSDK_OFFSET(0x9AEEA20)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFCD_INTISEMPTY_OFFSET UNITYSDK_OFFSET(0x9AEEAD0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFCD_POPINT_OFFSET UNITYSDK_OFFSET(0x9AEEB10)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFCD_PUSHFC_OFFSET UNITYSDK_OFFSET(0x9AEEB60)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFCD_FCISEMPTY_OFFSET UNITYSDK_OFFSET(0x9AEEC00)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFCD_POPFC_OFFSET UNITYSDK_OFFSET(0x9AEEC40)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFCD_TOPFC_OFFSET UNITYSDK_OFFSET(0x9AEED00)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFCD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9AEE5D0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFCD_REGEXFCFROMREGEXTREE_OFFSET UNITYSDK_OFFSET(0x9AEE3E0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFCD_SKIPCHILD_OFFSET UNITYSDK_OFFSET(0x9AEF230)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFCD_CALCULATEFC_OFFSET UNITYSDK_OFFSET(0x9AEED60)

namespace System::Text::RegularExpressions
{
	inline static constexpr unsigned int RegexFCD_TypeDefinitionIndex = 29225;

	class RegexFCD : public Il2CppObject
	{
	public:
		Il2CppObject* _fcStack; // 0x10
		Il2CppObject* _intStack; // 0x18
		::System::Boolean _skipAllChildren; // 0x38
		::System::Boolean _skipchild; // 0x39
		::System::Boolean _failed; // 0x3A

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFCD_.CTOR_OFFSET))(arg, nullptr);
		}

		Il2CppObject* FirstChars(::System::Text::RegularExpressions::RegexTree* arg)
		{
			return (return (Il2CppObject*(*)(::System::Text::RegularExpressions::RegexTree*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFCD_FIRSTCHARS_OFFSET))(arg, nullptr);
		}

		::System::Text::RegularExpressions::RegexPrefix* Prefix(::System::Text::RegularExpressions::RegexTree* arg)
		{
			return (return (::System::Text::RegularExpressions::RegexPrefix*(*)(::System::Text::RegularExpressions::RegexTree*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFCD_PREFIX_OFFSET))(arg, nullptr);
		}

		::System::Int32 Anchors(::System::Text::RegularExpressions::RegexTree* arg)
		{
			return (return (::System::Int32(*)(::System::Text::RegularExpressions::RegexTree*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFCD_ANCHORS_OFFSET))(arg, nullptr);
		}

		::System::Int32 AnchorFromType(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFCD_ANCHORFROMTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void PushInt(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFCD_PUSHINT_OFFSET))(arg, nullptr);
		}

		::System::Boolean IntIsEmpty()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFCD_INTISEMPTY_OFFSET))(nullptr);
		}

		::System::Int32 PopInt()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFCD_POPINT_OFFSET))(nullptr);
		}

		::System::Void PushFC(::System::Text::RegularExpressions::RegexFC* arg)
		{
			((::System::Void(*)(::System::Text::RegularExpressions::RegexFC*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFCD_PUSHFC_OFFSET))(arg, nullptr);
		}

		::System::Boolean FCIsEmpty()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFCD_FCISEMPTY_OFFSET))(nullptr);
		}

		::System::Text::RegularExpressions::RegexFC* PopFC()
		{
			return (return (::System::Text::RegularExpressions::RegexFC*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFCD_POPFC_OFFSET))(nullptr);
		}

		::System::Text::RegularExpressions::RegexFC* TopFC()
		{
			return (return (::System::Text::RegularExpressions::RegexFC*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFCD_TOPFC_OFFSET))(nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFCD_DISPOSE_OFFSET))(nullptr);
		}

		::System::Text::RegularExpressions::RegexFC* RegexFCFromRegexTree(::System::Text::RegularExpressions::RegexTree* arg)
		{
			return (return (::System::Text::RegularExpressions::RegexFC*(*)(::System::Text::RegularExpressions::RegexTree*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFCD_REGEXFCFROMREGEXTREE_OFFSET))(arg, nullptr);
		}

		::System::Void SkipChild()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFCD_SKIPCHILD_OFFSET))(nullptr);
		}

		::System::Void CalculateFC(::System::Int32 arg, ::System::Text::RegularExpressions::RegexNode* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Text::RegularExpressions::RegexNode*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFCD_CALCULATEFC_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

