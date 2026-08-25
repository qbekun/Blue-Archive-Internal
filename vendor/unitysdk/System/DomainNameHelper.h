#pragma once
#include "../unitysdk.h"

#define SYSTEM_DOMAINNAMEHELPER_PARSECANONICALNAME_OFFSET UNITYSDK_OFFSET(0x9AD6380)
#define SYSTEM_DOMAINNAMEHELPER_ISVALID_OFFSET UNITYSDK_OFFSET(0x9AD64E0)
#define SYSTEM_DOMAINNAMEHELPER_ISVALIDBYIRI_OFFSET UNITYSDK_OFFSET(0x9AD6730)
#define SYSTEM_DOMAINNAMEHELPER_IDNEQUIVALENT_OFFSET UNITYSDK_OFFSET(0x9AD6930)
#define SYSTEM_DOMAINNAMEHELPER_IDNEQUIVALENT_OFFSET UNITYSDK_OFFSET(0x9AD6C80)
#define SYSTEM_DOMAINNAMEHELPER_ISIDNACE_OFFSET UNITYSDK_OFFSET(0x9AD6ED0)
#define SYSTEM_DOMAINNAMEHELPER_ISIDNACE_OFFSET UNITYSDK_OFFSET(0x9AD6EA0)
#define SYSTEM_DOMAINNAMEHELPER_UNICODEEQUIVALENT_OFFSET UNITYSDK_OFFSET(0x9AD6F40)
#define SYSTEM_DOMAINNAMEHELPER_UNICODEEQUIVALENT_OFFSET UNITYSDK_OFFSET(0x9AD7050)
#define SYSTEM_DOMAINNAMEHELPER_ISASCIILETTERORDIGIT_OFFSET UNITYSDK_OFFSET(0x9AD6690)
#define SYSTEM_DOMAINNAMEHELPER_ISVALIDDOMAINLABELCHARACTER_OFFSET UNITYSDK_OFFSET(0x9AD66E0)

namespace System
{
	inline static constexpr unsigned int DomainNameHelper_TypeDefinitionIndex = 29188;

	class DomainNameHelper : public Il2CppObject
	{
	public:
		::System::String* ParseCanonicalName(::System::String* str, ::System::Int32 arg, ::System::Int32 arg, bool&* arg)
		{
			return (return (::System::String*(*)(::System::String*, ::System::Int32, ::System::Int32, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DOMAINNAMEHELPER_PARSECANONICALNAME_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::Boolean IsValid(::System::Object** arg, ::System::UInt16 arg, int32_t&* arg, bool&* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::Object**, ::System::UInt16, int32_t&*, bool&*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DOMAINNAMEHELPER_ISVALID_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean IsValidByIri(::System::Object** arg, ::System::UInt16 arg, int32_t&* arg, bool&* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::Object**, ::System::UInt16, int32_t&*, bool&*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DOMAINNAMEHELPER_ISVALIDBYIRI_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::String* IdnEquivalent(::System::Object** arg, ::System::Int32 arg, ::System::Int32 arg, bool&* arg, bool&* arg)
		{
			return (return (::System::String*(*)(::System::Object**, ::System::Int32, ::System::Int32, bool&*, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DOMAINNAMEHELPER_IDNEQUIVALENT_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::String* IdnEquivalent(::System::Object** arg, ::System::Int32 arg, ::System::Int32 arg, bool&* arg, ::System::String&* arg)
		{
			return (return (::System::String*(*)(::System::Object**, ::System::Int32, ::System::Int32, bool&*, ::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DOMAINNAMEHELPER_IDNEQUIVALENT_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean IsIdnAce(::System::String* str, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DOMAINNAMEHELPER_ISIDNACE_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean IsIdnAce(::System::Object** arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Object**, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DOMAINNAMEHELPER_ISIDNACE_OFFSET))(arg, arg, nullptr);
		}

		::System::String* UnicodeEquivalent(::System::String* str, ::System::Object** arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::String*, ::System::Object**, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DOMAINNAMEHELPER_UNICODEEQUIVALENT_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::String* UnicodeEquivalent(::System::Object** arg, ::System::Int32 arg, ::System::Int32 arg, bool&* arg, bool&* arg)
		{
			return (return (::System::String*(*)(::System::Object**, ::System::Int32, ::System::Int32, bool&*, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DOMAINNAMEHELPER_UNICODEEQUIVALENT_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean IsASCIILetterOrDigit(::System::Char arg, bool&* arg)
		{
			return (return (::System::Boolean(*)(::System::Char, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DOMAINNAMEHELPER_ISASCIILETTERORDIGIT_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsValidDomainLabelCharacter(::System::Char arg, bool&* arg)
		{
			return (return (::System::Boolean(*)(::System::Char, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DOMAINNAMEHELPER_ISVALIDDOMAINLABELCHARACTER_OFFSET))(arg, arg, nullptr);
		}

	};
}

