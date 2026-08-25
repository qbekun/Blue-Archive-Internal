#pragma once
#include "../../unitysdk.h"

#define SYSTEM_GLOBALIZATION_ISIMPLECOLLATOR_GETSORTKEY_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_GLOBALIZATION_ISIMPLECOLLATOR_COMPARE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_GLOBALIZATION_ISIMPLECOLLATOR_ISPREFIX_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_GLOBALIZATION_ISIMPLECOLLATOR_ISSUFFIX_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_GLOBALIZATION_ISIMPLECOLLATOR_INDEXOF_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_GLOBALIZATION_ISIMPLECOLLATOR_LASTINDEXOF_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Globalization
{
	inline static constexpr unsigned int ISimpleCollator_TypeDefinitionIndex = 25003;

	class ISimpleCollator : public Il2CppObject
	{
	public:
		::System::Globalization::SortKey* GetSortKey(::System::String* str, ::System::Globalization::CompareOptions* arg)
		{
			return (return (::System::Globalization::SortKey*(*)(::System::String*, ::System::Globalization::CompareOptions*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_ISIMPLECOLLATOR_GETSORTKEY_OFFSET))(str, arg, nullptr);
		}

		::System::Int32 Compare(::System::String* str, ::System::Int32 arg, ::System::Int32 arg, ::System::String* str, ::System::Int32 arg, ::System::Int32 arg, ::System::Globalization::CompareOptions* arg)
		{
			return (return (::System::Int32(*)(::System::String*, ::System::Int32, ::System::Int32, ::System::String*, ::System::Int32, ::System::Int32, ::System::Globalization::CompareOptions*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_ISIMPLECOLLATOR_COMPARE_OFFSET))(str, arg, arg, str, arg, arg, arg, nullptr);
		}

		::System::Boolean IsPrefix(::System::String* str, ::System::String* str, ::System::Globalization::CompareOptions* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::System::Globalization::CompareOptions*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_ISIMPLECOLLATOR_ISPREFIX_OFFSET))(str, str, arg, nullptr);
		}

		::System::Boolean IsSuffix(::System::String* str, ::System::String* str, ::System::Globalization::CompareOptions* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::System::Globalization::CompareOptions*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_ISIMPLECOLLATOR_ISSUFFIX_OFFSET))(str, str, arg, nullptr);
		}

		::System::Int32 IndexOf(::System::String* str, ::System::String* str, ::System::Int32 arg, ::System::Int32 arg, ::System::Globalization::CompareOptions* arg)
		{
			return (return (::System::Int32(*)(::System::String*, ::System::String*, ::System::Int32, ::System::Int32, ::System::Globalization::CompareOptions*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_ISIMPLECOLLATOR_INDEXOF_OFFSET))(str, str, arg, arg, arg, nullptr);
		}

		::System::Int32 LastIndexOf(::System::String* str, ::System::String* str, ::System::Int32 arg, ::System::Int32 arg, ::System::Globalization::CompareOptions* arg)
		{
			return (return (::System::Int32(*)(::System::String*, ::System::String*, ::System::Int32, ::System::Int32, ::System::Globalization::CompareOptions*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_ISIMPLECOLLATOR_LASTINDEXOF_OFFSET))(str, str, arg, arg, arg, nullptr);
		}

	};
}

