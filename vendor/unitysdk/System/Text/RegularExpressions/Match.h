#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_TEXT_REGULAREXPRESSIONS_MATCH_.CTOR_OFFSET UNITYSDK_OFFSET(0x9ADBC80)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_MATCH_GET_EMPTY_OFFSET UNITYSDK_OFFSET(0x9ADBE30)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_MATCH_RESET_OFFSET UNITYSDK_OFFSET(0x9ADBE80)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_MATCH_GET_GROUPS_OFFSET UNITYSDK_OFFSET(0x9ADBF10)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_MATCH_NEXTMATCH_OFFSET UNITYSDK_OFFSET(0x9ADBFB0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_MATCH_GROUPTOSTRINGIMPL_OFFSET UNITYSDK_OFFSET(0x9ADC3E0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_MATCH_LASTGROUPTOSTRINGIMPL_OFFSET UNITYSDK_OFFSET(0x9ADC560)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_MATCH_ADDMATCH_OFFSET UNITYSDK_OFFSET(0x9ADC5A0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_MATCH_BALANCEMATCH_OFFSET UNITYSDK_OFFSET(0x9ADC810)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_MATCH_REMOVEMATCH_OFFSET UNITYSDK_OFFSET(0x9ADC910)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_MATCH_ISMATCHED_OFFSET UNITYSDK_OFFSET(0x9ADC940)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_MATCH_MATCHINDEX_OFFSET UNITYSDK_OFFSET(0x9ADC9B0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_MATCH_MATCHLENGTH_OFFSET UNITYSDK_OFFSET(0x9ADCA30)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_MATCH_TIDY_OFFSET UNITYSDK_OFFSET(0x9ADCAB0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_MATCH_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9ADCC60)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_MATCH_.CTOR_OFFSET UNITYSDK_OFFSET(0x9ADCD20)

namespace System::Text::RegularExpressions
{
	inline static constexpr unsigned int Match_TypeDefinitionIndex = 29210;

	class Match : public Il2CppObject
	{
	public:
		::System::Text::RegularExpressions::GroupCollection* _groupcoll; // 0x40
		::System::Text::RegularExpressions::Regex* _regex; // 0x48
		::System::Int32 _textbeg; // 0x50
		::System::Int32 _textpos; // 0x54
		::System::Int32 _textend; // 0x58
		::System::Int32 _textstart; // 0x5C
		::Il2CppArray<::System::Object*>* _matches; // 0x60
		::Il2CppArray<::System::Object*>* _matchcount; // 0x68
		::System::Boolean _balancing; // 0x70
		::System::Text::RegularExpressions::Match* _Empty_k__BackingField; // 0x0

		::System::Void .ctor(::System::Text::RegularExpressions::Regex* arg, ::System::Int32 arg, ::System::String* str, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Text::RegularExpressions::Regex*, ::System::Int32, ::System::String*, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_MATCH_.CTOR_OFFSET))(arg, arg, str, arg, arg, arg, nullptr);
		}

		::System::Text::RegularExpressions::Match* get_Empty()
		{
			return (return (::System::Text::RegularExpressions::Match*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_MATCH_GET_EMPTY_OFFSET))(nullptr);
		}

		::System::Void Reset(::System::Text::RegularExpressions::Regex* arg, ::System::String* str, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Text::RegularExpressions::Regex*, ::System::String*, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_MATCH_RESET_OFFSET))(arg, str, arg, arg, arg, nullptr);
		}

		::System::Text::RegularExpressions::GroupCollection* get_Groups()
		{
			return (return (::System::Text::RegularExpressions::GroupCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_MATCH_GET_GROUPS_OFFSET))(nullptr);
		}

		::System::Text::RegularExpressions::Match* NextMatch()
		{
			return (return (::System::Text::RegularExpressions::Match*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_MATCH_NEXTMATCH_OFFSET))(nullptr);
		}

		Il2CppObject* GroupToStringImpl(::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_MATCH_GROUPTOSTRINGIMPL_OFFSET))(arg, nullptr);
		}

		Il2CppObject* LastGroupToStringImpl()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_MATCH_LASTGROUPTOSTRINGIMPL_OFFSET))(nullptr);
		}

		::System::Void AddMatch(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_MATCH_ADDMATCH_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void BalanceMatch(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_MATCH_BALANCEMATCH_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveMatch(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_MATCH_REMOVEMATCH_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsMatched(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_MATCH_ISMATCHED_OFFSET))(arg, nullptr);
		}

		::System::Int32 MatchIndex(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_MATCH_MATCHINDEX_OFFSET))(arg, nullptr);
		}

		::System::Int32 MatchLength(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_MATCH_MATCHLENGTH_OFFSET))(arg, nullptr);
		}

		::System::Void Tidy(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_MATCH_TIDY_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_MATCH_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_MATCH_.CTOR_OFFSET))(nullptr);
		}

	};
}

