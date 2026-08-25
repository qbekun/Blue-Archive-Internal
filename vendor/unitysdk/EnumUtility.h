#pragma once
#include "unitysdk.h"

#define ENUMUTILITY_MAKEENUMVALUES_OFFSET UNITYSDK_OFFSET(0x9FB2770)
#define ENUMUTILITY_MAKEENUMNAMES_OFFSET UNITYSDK_OFFSET(0x9FB2890)

	inline static constexpr unsigned int EnumUtility_TypeDefinitionIndex = 33963;

	class EnumUtility : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* MakeEnumValues(::System::Type* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + ENUMUTILITY_MAKEENUMVALUES_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* MakeEnumNames(::System::Type* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + ENUMUTILITY_MAKEENUMNAMES_OFFSET))(arg, nullptr);
		}

	};

