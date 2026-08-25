#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AE2A60)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AE2B20)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_GET_CANMERGE_OFFSET UNITYSDK_OFFSET(0x9AE2B90)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_SET_NEGATE_OFFSET UNITYSDK_OFFSET(0x9AE2BB0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_ADDCHAR_OFFSET UNITYSDK_OFFSET(0x9AE2BC0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_ADDCHARCLASS_OFFSET UNITYSDK_OFFSET(0x9AE2CC0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_ADDSET_OFFSET UNITYSDK_OFFSET(0x9AE2FC0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_ADDSUBTRACTION_OFFSET UNITYSDK_OFFSET(0x9AE3240)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_ADDRANGE_OFFSET UNITYSDK_OFFSET(0x9AE2BD0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_ADDCATEGORYFROMNAME_OFFSET UNITYSDK_OFFSET(0x9AE3250)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_ADDCATEGORY_OFFSET UNITYSDK_OFFSET(0x9AE37E0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_ADDLOWERCASE_OFFSET UNITYSDK_OFFSET(0x9AE3800)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_ADDLOWERCASERANGE_OFFSET UNITYSDK_OFFSET(0x9AE3970)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_ADDWORD_OFFSET UNITYSDK_OFFSET(0x9AE3C90)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_ADDSPACE_OFFSET UNITYSDK_OFFSET(0x9AE3D80)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_ADDDIGIT_OFFSET UNITYSDK_OFFSET(0x9AE3E70)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_SINGLETONCHAR_OFFSET UNITYSDK_OFFSET(0x9AE3F10)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_ISMERGEABLE_OFFSET UNITYSDK_OFFSET(0x9AE3F30)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x9AE4080)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_ISSINGLETON_OFFSET UNITYSDK_OFFSET(0x9AE4150)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_ISSINGLETONINVERSE_OFFSET UNITYSDK_OFFSET(0x9AE4260)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_ISSUBTRACTION_OFFSET UNITYSDK_OFFSET(0x9AE4030)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_ISNEGATED_OFFSET UNITYSDK_OFFSET(0x9AE4000)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_ISECMAWORDCHAR_OFFSET UNITYSDK_OFFSET(0x9AE4380)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_ISWORDCHAR_OFFSET UNITYSDK_OFFSET(0x9AE44A0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_CHARINCLASS_OFFSET UNITYSDK_OFFSET(0x9AE4450)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_CHARINCLASSRECURSIVE_OFFSET UNITYSDK_OFFSET(0x9AE4590)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_CHARINCLASSINTERNAL_OFFSET UNITYSDK_OFFSET(0x9AE4690)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_CHARINCATEGORY_OFFSET UNITYSDK_OFFSET(0x9AE47A0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_CHARINCATEGORYGROUP_OFFSET UNITYSDK_OFFSET(0x9AE49D0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_NEGATECATEGORY_OFFSET UNITYSDK_OFFSET(0x9AE34B0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_PARSE_OFFSET UNITYSDK_OFFSET(0x9AE4AA0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_PARSERECURSIVE_OFFSET UNITYSDK_OFFSET(0x9AE4AF0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_RANGECOUNT_OFFSET UNITYSDK_OFFSET(0x9AE2F30)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_TOSTRINGCLASS_OFFSET UNITYSDK_OFFSET(0x9AE4D50)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_GETRANGEAT_OFFSET UNITYSDK_OFFSET(0x9AE2F70)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_CANONICALIZE_OFFSET UNITYSDK_OFFSET(0x9AE4EE0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_SETFROMPROPERTY_OFFSET UNITYSDK_OFFSET(0x9AE3540)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9AE50F0)

namespace System::Text::RegularExpressions
{
	inline static constexpr unsigned int RegexCharClass_TypeDefinitionIndex = 29223;

	class RegexCharClass : public Il2CppObject
	{
	public:
		::System::String* s_internalRegexIgnoreCase; // 0x0
		::System::String* s_space; // 0x8
		::System::String* s_notSpace; // 0x10
		::System::String* s_word; // 0x18
		::System::String* s_notWord; // 0x20
		::System::String* SpaceClass; // 0x28
		::System::String* NotSpaceClass; // 0x30
		::System::String* WordClass; // 0x38
		::System::String* NotWordClass; // 0x40
		::System::String* DigitClass; // 0x48
		::System::String* NotDigitClass; // 0x50
		Il2CppObject* s_definedCategories; // 0x58
		::Il2CppArray<::System::Object*>* s_propTable; // 0x60
		::Il2CppArray<::System::Object*>* s_lcTable; // 0x68
		Il2CppObject* _rangelist; // 0x10
		::System::Text::StringBuilder* _categories; // 0x18
		::System::Boolean _canonical; // 0x20
		::System::Boolean _negate; // 0x21
		::System::Text::RegularExpressions::RegexCharClass* _subtractor; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Boolean arg, Il2CppObject* arg, ::System::Text::StringBuilder* arg, ::System::Text::RegularExpressions::RegexCharClass* arg)
		{
			((::System::Void(*)(::System::Boolean, Il2CppObject*, ::System::Text::StringBuilder*, ::System::Text::RegularExpressions::RegexCharClass*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean get_CanMerge()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_GET_CANMERGE_OFFSET))(nullptr);
		}

		::System::Void set_Negate(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_SET_NEGATE_OFFSET))(arg, nullptr);
		}

		::System::Void AddChar(::System::Char arg)
		{
			((::System::Void(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_ADDCHAR_OFFSET))(arg, nullptr);
		}

		::System::Void AddCharClass(::System::Text::RegularExpressions::RegexCharClass* arg)
		{
			((::System::Void(*)(::System::Text::RegularExpressions::RegexCharClass*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_ADDCHARCLASS_OFFSET))(arg, nullptr);
		}

		::System::Void AddSet(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_ADDSET_OFFSET))(str, nullptr);
		}

		::System::Void AddSubtraction(::System::Text::RegularExpressions::RegexCharClass* arg)
		{
			((::System::Void(*)(::System::Text::RegularExpressions::RegexCharClass*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_ADDSUBTRACTION_OFFSET))(arg, nullptr);
		}

		::System::Void AddRange(::System::Char arg, ::System::Char arg)
		{
			((::System::Void(*)(::System::Char, ::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_ADDRANGE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCategoryFromName(::System::String* str, ::System::Boolean arg, ::System::Boolean arg, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::System::Boolean, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_ADDCATEGORYFROMNAME_OFFSET))(str, arg, arg, str, nullptr);
		}

		::System::Void AddCategory(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_ADDCATEGORY_OFFSET))(str, nullptr);
		}

		::System::Void AddLowercase(::System::Globalization::CultureInfo* arg)
		{
			((::System::Void(*)(::System::Globalization::CultureInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_ADDLOWERCASE_OFFSET))(arg, nullptr);
		}

		::System::Void AddLowercaseRange(::System::Char arg, ::System::Char arg, ::System::Globalization::CultureInfo* arg)
		{
			((::System::Void(*)(::System::Char, ::System::Char, ::System::Globalization::CultureInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_ADDLOWERCASERANGE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void AddWord(::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_ADDWORD_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSpace(::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_ADDSPACE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDigit(::System::Boolean arg, ::System::Boolean arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Boolean, ::System::Boolean, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_ADDDIGIT_OFFSET))(arg, arg, str, nullptr);
		}

		::System::Char SingletonChar(::System::String* str)
		{
			return (return (::System::Char(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_SINGLETONCHAR_OFFSET))(str, nullptr);
		}

		::System::Boolean IsMergeable(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_ISMERGEABLE_OFFSET))(str, nullptr);
		}

		::System::Boolean IsEmpty(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_ISEMPTY_OFFSET))(str, nullptr);
		}

		::System::Boolean IsSingleton(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_ISSINGLETON_OFFSET))(str, nullptr);
		}

		::System::Boolean IsSingletonInverse(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_ISSINGLETONINVERSE_OFFSET))(str, nullptr);
		}

		::System::Boolean IsSubtraction(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_ISSUBTRACTION_OFFSET))(str, nullptr);
		}

		::System::Boolean IsNegated(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_ISNEGATED_OFFSET))(str, nullptr);
		}

		::System::Boolean IsECMAWordChar(::System::Char arg)
		{
			return (return (::System::Boolean(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_ISECMAWORDCHAR_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsWordChar(::System::Char arg)
		{
			return (return (::System::Boolean(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_ISWORDCHAR_OFFSET))(arg, nullptr);
		}

		::System::Boolean CharInClass(::System::Char arg, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::Char, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_CHARINCLASS_OFFSET))(arg, str, nullptr);
		}

		::System::Boolean CharInClassRecursive(::System::Char arg, ::System::String* str, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Char, ::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_CHARINCLASSRECURSIVE_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Boolean CharInClassInternal(::System::Char arg, ::System::String* str, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Char, ::System::String*, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_CHARINCLASSINTERNAL_OFFSET))(arg, str, arg, arg, arg, nullptr);
		}

		::System::Boolean CharInCategory(::System::Char arg, ::System::String* str, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Char, ::System::String*, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_CHARINCATEGORY_OFFSET))(arg, str, arg, arg, arg, nullptr);
		}

		::System::Boolean CharInCategoryGroup(::System::Char arg, ::System::Globalization::UnicodeCategory* arg, ::System::String* str, int32_t&* arg)
		{
			return (return (::System::Boolean(*)(::System::Char, ::System::Globalization::UnicodeCategory*, ::System::String*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_CHARINCATEGORYGROUP_OFFSET))(arg, arg, str, arg, nullptr);
		}

		::System::String* NegateCategory(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_NEGATECATEGORY_OFFSET))(str, nullptr);
		}

		::System::Text::RegularExpressions::RegexCharClass* Parse(::System::String* str)
		{
			return (return (::System::Text::RegularExpressions::RegexCharClass*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_PARSE_OFFSET))(str, nullptr);
		}

		::System::Text::RegularExpressions::RegexCharClass* ParseRecursive(::System::String* str, ::System::Int32 arg)
		{
			return (return (::System::Text::RegularExpressions::RegexCharClass*(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_PARSERECURSIVE_OFFSET))(str, arg, nullptr);
		}

		::System::Int32 RangeCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_RANGECOUNT_OFFSET))(nullptr);
		}

		::System::String* ToStringClass()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_TOSTRINGCLASS_OFFSET))(nullptr);
		}

		SingleRange* GetRangeAt(::System::Int32 arg)
		{
			return (return (SingleRange*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_GETRANGEAT_OFFSET))(arg, nullptr);
		}

		::System::Void Canonicalize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_CANONICALIZE_OFFSET))(nullptr);
		}

		::System::String* SetFromProperty(::System::String* str, ::System::Boolean arg, ::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::System::Boolean, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_SETFROMPROPERTY_OFFSET))(str, arg, str, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_.CCTOR_OFFSET))(nullptr);
		}

	};
}

