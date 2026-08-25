#pragma once
#include "../unitysdk.h"

#define SYSTEM_SPANHELPERS_INDEXOF_OFFSET UNITYSDK_OFFSET(0x9374330)
#define SYSTEM_SPANHELPERS_INDEXOFANY_OFFSET UNITYSDK_OFFSET(0x93746A0)
#define SYSTEM_SPANHELPERS_INDEXOF_OFFSET UNITYSDK_OFFSET(0x93743F0)
#define SYSTEM_SPANHELPERS_SEQUENCEEQUAL_OFFSET UNITYSDK_OFFSET(0x9374710)
#define SYSTEM_SPANHELPERS_SEQUENCECOMPARETO_OFFSET UNITYSDK_OFFSET(0x93748D0)
#define SYSTEM_SPANHELPERS_INDEXOF_OFFSET UNITYSDK_OFFSET(0x9374ED0)
#define SYSTEM_SPANHELPERS_LASTINDEXOF_OFFSET UNITYSDK_OFFSET(0x9375AD0)
#define SYSTEM_SPANHELPERS_LOCATEFIRSTFOUNDCHAR_OFFSET UNITYSDK_OFFSET(0x9376610)
#define SYSTEM_SPANHELPERS_LOCATEFIRSTFOUNDCHAR_OFFSET UNITYSDK_OFFSET(0x9376860)
#define SYSTEM_SPANHELPERS_LOCATELASTFOUNDCHAR_OFFSET UNITYSDK_OFFSET(0x9376880)
#define SYSTEM_SPANHELPERS_LOCATELASTFOUNDCHAR_OFFSET UNITYSDK_OFFSET(0x9376AC0)
#define SYSTEM_SPANHELPERS_INDEXOF_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_SPANHELPERS_INDEXOF_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_SPANHELPERS_INDEXOFANY_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_SPANHELPERS_SEQUENCEEQUAL_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_SPANHELPERS_INDEXOFCULTUREHELPER_OFFSET UNITYSDK_OFFSET(0x9376AE0)
#define SYSTEM_SPANHELPERS_INDEXOFCULTUREIGNORECASEHELPER_OFFSET UNITYSDK_OFFSET(0x9376C70)
#define SYSTEM_SPANHELPERS_INDEXOFORDINALHELPER_OFFSET UNITYSDK_OFFSET(0x9376E00)
#define SYSTEM_SPANHELPERS_STARTSWITHCULTUREHELPER_OFFSET UNITYSDK_OFFSET(0x9376FB0)
#define SYSTEM_SPANHELPERS_STARTSWITHCULTUREIGNORECASEHELPER_OFFSET UNITYSDK_OFFSET(0x9377120)
#define SYSTEM_SPANHELPERS_STARTSWITHORDINALIGNORECASEHELPER_OFFSET UNITYSDK_OFFSET(0x9377280)
#define SYSTEM_SPANHELPERS_ENDSWITHCULTUREHELPER_OFFSET UNITYSDK_OFFSET(0x9377370)
#define SYSTEM_SPANHELPERS_ENDSWITHCULTUREIGNORECASEHELPER_OFFSET UNITYSDK_OFFSET(0x93774E0)
#define SYSTEM_SPANHELPERS_ENDSWITHORDINALIGNORECASEHELPER_OFFSET UNITYSDK_OFFSET(0x9377640)
#define SYSTEM_SPANHELPERS_CLEARWITHOUTREFERENCES_OFFSET UNITYSDK_OFFSET(0x9377740)
#define SYSTEM_SPANHELPERS_CLEARWITHREFERENCES_OFFSET UNITYSDK_OFFSET(0x93779D0)

namespace System
{
	inline static constexpr unsigned int SpanHelpers_TypeDefinitionIndex = 23831;

	class SpanHelpers : public Il2CppObject
	{
	public:
		::System::Int32 IndexOf(uint8_t&* arg, ::System::Int32 arg, uint8_t&* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(uint8_t&*, ::System::Int32, uint8_t&*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SPANHELPERS_INDEXOF_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 IndexOfAny(uint8_t&* arg, ::System::Int32 arg, uint8_t&* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(uint8_t&*, ::System::Int32, uint8_t&*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SPANHELPERS_INDEXOFANY_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 IndexOf(uint8_t&* arg, ::System::Byte arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(uint8_t&*, ::System::Byte, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SPANHELPERS_INDEXOF_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean SequenceEqual(uint8_t&* arg, uint8_t&* arg, ::System::UInt64 arg)
		{
			return (return (::System::Boolean(*)(uint8_t&*, uint8_t&*, ::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SPANHELPERS_SEQUENCEEQUAL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 SequenceCompareTo(wchar_t&* arg, ::System::Int32 arg, wchar_t&* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(wchar_t&*, ::System::Int32, wchar_t&*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SPANHELPERS_SEQUENCECOMPARETO_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 IndexOf(wchar_t&* arg, ::System::Char arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(wchar_t&*, ::System::Char, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SPANHELPERS_INDEXOF_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 LastIndexOf(wchar_t&* arg, ::System::Char arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(wchar_t&*, ::System::Char, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SPANHELPERS_LASTINDEXOF_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 LocateFirstFoundChar(Il2CppObject* arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SPANHELPERS_LOCATEFIRSTFOUNDCHAR_OFFSET))(arg, nullptr);
		}

		::System::Int32 LocateFirstFoundChar(::System::UInt64 arg)
		{
			return (return (::System::Int32(*)(::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SPANHELPERS_LOCATEFIRSTFOUNDCHAR_OFFSET))(arg, nullptr);
		}

		::System::Int32 LocateLastFoundChar(Il2CppObject* arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SPANHELPERS_LOCATELASTFOUNDCHAR_OFFSET))(arg, nullptr);
		}

		::System::Int32 LocateLastFoundChar(::System::UInt64 arg)
		{
			return (return (::System::Int32(*)(::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SPANHELPERS_LOCATELASTFOUNDCHAR_OFFSET))(arg, nullptr);
		}

		::System::Int32 IndexOf(Il2CppObject&* arg, ::System::Int32 arg, Il2CppObject&* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(Il2CppObject&*, ::System::Int32, Il2CppObject&*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SPANHELPERS_INDEXOF_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 IndexOf(Il2CppObject&* arg, Il2CppObject* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(Il2CppObject&*, Il2CppObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SPANHELPERS_INDEXOF_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 IndexOfAny(Il2CppObject&* arg, ::System::Int32 arg, Il2CppObject&* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(Il2CppObject&*, ::System::Int32, Il2CppObject&*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SPANHELPERS_INDEXOFANY_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean SequenceEqual(Il2CppObject&* arg, Il2CppObject&* arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject&*, Il2CppObject&*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SPANHELPERS_SEQUENCEEQUAL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 IndexOfCultureHelper(Il2CppObject* arg, Il2CppObject* arg, ::System::Globalization::CompareInfo* arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, Il2CppObject*, ::System::Globalization::CompareInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SPANHELPERS_INDEXOFCULTUREHELPER_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 IndexOfCultureIgnoreCaseHelper(Il2CppObject* arg, Il2CppObject* arg, ::System::Globalization::CompareInfo* arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, Il2CppObject*, ::System::Globalization::CompareInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SPANHELPERS_INDEXOFCULTUREIGNORECASEHELPER_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 IndexOfOrdinalHelper(Il2CppObject* arg, Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SPANHELPERS_INDEXOFORDINALHELPER_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean StartsWithCultureHelper(Il2CppObject* arg, Il2CppObject* arg, ::System::Globalization::CompareInfo* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, Il2CppObject*, ::System::Globalization::CompareInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SPANHELPERS_STARTSWITHCULTUREHELPER_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean StartsWithCultureIgnoreCaseHelper(Il2CppObject* arg, Il2CppObject* arg, ::System::Globalization::CompareInfo* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, Il2CppObject*, ::System::Globalization::CompareInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SPANHELPERS_STARTSWITHCULTUREIGNORECASEHELPER_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean StartsWithOrdinalIgnoreCaseHelper(Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SPANHELPERS_STARTSWITHORDINALIGNORECASEHELPER_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean EndsWithCultureHelper(Il2CppObject* arg, Il2CppObject* arg, ::System::Globalization::CompareInfo* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, Il2CppObject*, ::System::Globalization::CompareInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SPANHELPERS_ENDSWITHCULTUREHELPER_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean EndsWithCultureIgnoreCaseHelper(Il2CppObject* arg, Il2CppObject* arg, ::System::Globalization::CompareInfo* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, Il2CppObject*, ::System::Globalization::CompareInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SPANHELPERS_ENDSWITHCULTUREIGNORECASEHELPER_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean EndsWithOrdinalIgnoreCaseHelper(Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SPANHELPERS_ENDSWITHORDINALIGNORECASEHELPER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ClearWithoutReferences(uint8_t&* arg, ::System::UInt64 arg)
		{
			((::System::Void(*)(uint8_t&*, ::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SPANHELPERS_CLEARWITHOUTREFERENCES_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ClearWithReferences(int32_t&* arg, ::System::UInt64 arg)
		{
			((::System::Void(*)(int32_t&*, ::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SPANHELPERS_CLEARWITHREFERENCES_OFFSET))(arg, arg, nullptr);
		}

	};
}

