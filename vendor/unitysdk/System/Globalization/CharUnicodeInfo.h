#pragma once
#include "../../unitysdk.h"

#define SYSTEM_GLOBALIZATION_CHARUNICODEINFO_INTERNALCONVERTTOUTF32_OFFSET UNITYSDK_OFFSET(0x9254D40)
#define SYSTEM_GLOBALIZATION_CHARUNICODEINFO_INTERNALCONVERTTOUTF32_OFFSET UNITYSDK_OFFSET(0x9254DC0)
#define SYSTEM_GLOBALIZATION_CHARUNICODEINFO_INTERNALGETNUMERICVALUE_OFFSET UNITYSDK_OFFSET(0x9254E60)
#define SYSTEM_GLOBALIZATION_CHARUNICODEINFO_GETNUMERICVALUE_OFFSET UNITYSDK_OFFSET(0x92553A0)
#define SYSTEM_GLOBALIZATION_CHARUNICODEINFO_GETUNICODECATEGORY_OFFSET UNITYSDK_OFFSET(0x92553B0)
#define SYSTEM_GLOBALIZATION_CHARUNICODEINFO_GETUNICODECATEGORY_OFFSET UNITYSDK_OFFSET(0x92553F0)
#define SYSTEM_GLOBALIZATION_CHARUNICODEINFO_GETUNICODECATEGORY_OFFSET UNITYSDK_OFFSET(0x92553D0)
#define SYSTEM_GLOBALIZATION_CHARUNICODEINFO_INTERNALGETCATEGORYVALUE_OFFSET UNITYSDK_OFFSET(0x9255530)
#define SYSTEM_GLOBALIZATION_CHARUNICODEINFO_INTERNALGETUNICODECATEGORY_OFFSET UNITYSDK_OFFSET(0x92554A0)
#define SYSTEM_GLOBALIZATION_CHARUNICODEINFO_INTERNALGETUNICODECATEGORY_OFFSET UNITYSDK_OFFSET(0x9255970)
#define SYSTEM_GLOBALIZATION_CHARUNICODEINFO_ISWHITESPACE_OFFSET UNITYSDK_OFFSET(0x9255A20)
#define SYSTEM_GLOBALIZATION_CHARUNICODEINFO_ISWHITESPACE_OFFSET UNITYSDK_OFFSET(0x9255A50)
#define SYSTEM_GLOBALIZATION_CHARUNICODEINFO_GET_CATEGORYLEVEL1INDEX_OFFSET UNITYSDK_OFFSET(0x92557B0)
#define SYSTEM_GLOBALIZATION_CHARUNICODEINFO_GET_CATEGORYLEVEL2INDEX_OFFSET UNITYSDK_OFFSET(0x9255820)
#define SYSTEM_GLOBALIZATION_CHARUNICODEINFO_GET_CATEGORYLEVEL3INDEX_OFFSET UNITYSDK_OFFSET(0x9255890)
#define SYSTEM_GLOBALIZATION_CHARUNICODEINFO_GET_CATEGORIESVALUE_OFFSET UNITYSDK_OFFSET(0x9255900)
#define SYSTEM_GLOBALIZATION_CHARUNICODEINFO_GET_NUMERICLEVEL1INDEX_OFFSET UNITYSDK_OFFSET(0x92551E0)
#define SYSTEM_GLOBALIZATION_CHARUNICODEINFO_GET_NUMERICLEVEL2INDEX_OFFSET UNITYSDK_OFFSET(0x9255250)
#define SYSTEM_GLOBALIZATION_CHARUNICODEINFO_GET_NUMERICLEVEL3INDEX_OFFSET UNITYSDK_OFFSET(0x92552C0)
#define SYSTEM_GLOBALIZATION_CHARUNICODEINFO_GET_NUMERICVALUES_OFFSET UNITYSDK_OFFSET(0x9255330)

namespace System::Globalization
{
	inline static constexpr unsigned int CharUnicodeInfo_TypeDefinitionIndex = 24949;

	class CharUnicodeInfo : public Il2CppObject
	{
	public:
		::System::Int32 InternalConvertToUtf32(::System::String* str, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CHARUNICODEINFO_INTERNALCONVERTTOUTF32_OFFSET))(str, arg, nullptr);
		}

		::System::Int32 InternalConvertToUtf32(::System::String* str, ::System::Int32 arg, int32_t&* arg)
		{
			return (return (::System::Int32(*)(::System::String*, ::System::Int32, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CHARUNICODEINFO_INTERNALCONVERTTOUTF32_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Double InternalGetNumericValue(::System::Int32 arg)
		{
			return (return (::System::Double(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CHARUNICODEINFO_INTERNALGETNUMERICVALUE_OFFSET))(arg, nullptr);
		}

		::System::Double GetNumericValue(::System::Char arg)
		{
			return (return (::System::Double(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CHARUNICODEINFO_GETNUMERICVALUE_OFFSET))(arg, nullptr);
		}

		::System::Globalization::UnicodeCategory* GetUnicodeCategory(::System::Char arg)
		{
			return (return (::System::Globalization::UnicodeCategory*(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CHARUNICODEINFO_GETUNICODECATEGORY_OFFSET))(arg, nullptr);
		}

		::System::Globalization::UnicodeCategory* GetUnicodeCategory(::System::String* str, ::System::Int32 arg)
		{
			return (return (::System::Globalization::UnicodeCategory*(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CHARUNICODEINFO_GETUNICODECATEGORY_OFFSET))(str, arg, nullptr);
		}

		::System::Globalization::UnicodeCategory* GetUnicodeCategory(::System::Int32 arg)
		{
			return (return (::System::Globalization::UnicodeCategory*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CHARUNICODEINFO_GETUNICODECATEGORY_OFFSET))(arg, nullptr);
		}

		::System::Byte InternalGetCategoryValue(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Byte(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CHARUNICODEINFO_INTERNALGETCATEGORYVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Globalization::UnicodeCategory* InternalGetUnicodeCategory(::System::String* str, ::System::Int32 arg)
		{
			return (return (::System::Globalization::UnicodeCategory*(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CHARUNICODEINFO_INTERNALGETUNICODECATEGORY_OFFSET))(str, arg, nullptr);
		}

		::System::Globalization::UnicodeCategory* InternalGetUnicodeCategory(::System::String* str, ::System::Int32 arg, int32_t&* arg)
		{
			return (return (::System::Globalization::UnicodeCategory*(*)(::System::String*, ::System::Int32, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CHARUNICODEINFO_INTERNALGETUNICODECATEGORY_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Boolean IsWhiteSpace(::System::String* str, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CHARUNICODEINFO_ISWHITESPACE_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean IsWhiteSpace(::System::Char arg)
		{
			return (return (::System::Boolean(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CHARUNICODEINFO_ISWHITESPACE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_CategoryLevel1Index()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CHARUNICODEINFO_GET_CATEGORYLEVEL1INDEX_OFFSET))(nullptr);
		}

		Il2CppObject* get_CategoryLevel2Index()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CHARUNICODEINFO_GET_CATEGORYLEVEL2INDEX_OFFSET))(nullptr);
		}

		Il2CppObject* get_CategoryLevel3Index()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CHARUNICODEINFO_GET_CATEGORYLEVEL3INDEX_OFFSET))(nullptr);
		}

		Il2CppObject* get_CategoriesValue()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CHARUNICODEINFO_GET_CATEGORIESVALUE_OFFSET))(nullptr);
		}

		Il2CppObject* get_NumericLevel1Index()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CHARUNICODEINFO_GET_NUMERICLEVEL1INDEX_OFFSET))(nullptr);
		}

		Il2CppObject* get_NumericLevel2Index()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CHARUNICODEINFO_GET_NUMERICLEVEL2INDEX_OFFSET))(nullptr);
		}

		Il2CppObject* get_NumericLevel3Index()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CHARUNICODEINFO_GET_NUMERICLEVEL3INDEX_OFFSET))(nullptr);
		}

		Il2CppObject* get_NumericValues()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CHARUNICODEINFO_GET_NUMERICVALUES_OFFSET))(nullptr);
		}

	};
}

