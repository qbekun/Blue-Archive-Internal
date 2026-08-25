#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COLLECTIONS_CASEINSENSITIVECOMPARER_.CTOR_OFFSET UNITYSDK_OFFSET(0x92C9F90)
#define SYSTEM_COLLECTIONS_CASEINSENSITIVECOMPARER_.CTOR_OFFSET UNITYSDK_OFFSET(0x92CA020)
#define SYSTEM_COLLECTIONS_CASEINSENSITIVECOMPARER_GET_DEFAULT_OFFSET UNITYSDK_OFFSET(0x92CA0C0)
#define SYSTEM_COLLECTIONS_CASEINSENSITIVECOMPARER_COMPARE_OFFSET UNITYSDK_OFFSET(0x92CA140)

namespace System::Collections
{
	inline static constexpr unsigned int CaseInsensitiveComparer_TypeDefinitionIndex = 25068;

	class CaseInsensitiveComparer : public Il2CppObject
	{
	public:
		::System::Globalization::CompareInfo* _compareInfo; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_CASEINSENSITIVECOMPARER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Globalization::CultureInfo* arg)
		{
			((::System::Void(*)(::System::Globalization::CultureInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_CASEINSENSITIVECOMPARER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Collections::CaseInsensitiveComparer* get_Default()
		{
			return (return (::System::Collections::CaseInsensitiveComparer*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_CASEINSENSITIVECOMPARER_GET_DEFAULT_OFFSET))(nullptr);
		}

		::System::Int32 Compare(::System::Object* arg, ::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_CASEINSENSITIVECOMPARER_COMPARE_OFFSET))(arg, arg, nullptr);
		}

	};
}

