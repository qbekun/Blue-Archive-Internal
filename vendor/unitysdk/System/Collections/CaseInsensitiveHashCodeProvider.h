#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COLLECTIONS_CASEINSENSITIVEHASHCODEPROVIDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x92CA220)
#define SYSTEM_COLLECTIONS_CASEINSENSITIVEHASHCODEPROVIDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x92CA2B0)
#define SYSTEM_COLLECTIONS_CASEINSENSITIVEHASHCODEPROVIDER_GET_DEFAULT_OFFSET UNITYSDK_OFFSET(0x92CA350)
#define SYSTEM_COLLECTIONS_CASEINSENSITIVEHASHCODEPROVIDER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x92CA3A0)

namespace System::Collections
{
	inline static constexpr unsigned int CaseInsensitiveHashCodeProvider_TypeDefinitionIndex = 25069;

	class CaseInsensitiveHashCodeProvider : public Il2CppObject
	{
	public:
		::System::Globalization::CompareInfo* _compareInfo; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_CASEINSENSITIVEHASHCODEPROVIDER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Globalization::CultureInfo* arg)
		{
			((::System::Void(*)(::System::Globalization::CultureInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_CASEINSENSITIVEHASHCODEPROVIDER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Collections::CaseInsensitiveHashCodeProvider* get_Default()
		{
			return (return (::System::Collections::CaseInsensitiveHashCodeProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_CASEINSENSITIVEHASHCODEPROVIDER_GET_DEFAULT_OFFSET))(nullptr);
		}

		::System::Int32 GetHashCode(::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_CASEINSENSITIVEHASHCODEPROVIDER_GETHASHCODE_OFFSET))(arg, nullptr);
		}

	};
}

