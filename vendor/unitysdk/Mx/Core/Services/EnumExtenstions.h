#pragma once
#include "../../../unitysdk.h"

#define MX_CORE_SERVICES_ENUMEXTENSTIONS_IS_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_CORE_SERVICES_ENUMEXTENSTIONS_REMOVE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_CORE_SERVICES_ENUMEXTENSTIONS_ADD_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_CORE_SERVICES_ENUMEXTENSTIONS_GETFLAGVALUES_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_CORE_SERVICES_ENUMEXTENSTIONS_HAS_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_CORE_SERVICES_ENUMEXTENSTIONS_CSVTOENUMS_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::Core::Services
{
	inline static constexpr unsigned int EnumExtenstions_TypeDefinitionIndex = 12773;

	class EnumExtenstions : public Il2CppObject
	{
	public:
		::System::Boolean Is(::System::Enum* arg, Il2CppObject* arg2)
		{
			return ((::System::Boolean(*)(::System::Enum*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_SERVICES_ENUMEXTENSTIONS_IS_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* Remove(::System::Enum* arg, Il2CppObject* arg2)
		{
			return ((Il2CppObject*(*)(::System::Enum*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_SERVICES_ENUMEXTENSTIONS_REMOVE_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* Add(::System::Enum* arg, Il2CppObject* arg2)
		{
			return ((Il2CppObject*(*)(::System::Enum*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_SERVICES_ENUMEXTENSTIONS_ADD_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* GetFlagValues(Il2CppObject* arg, ::System::Boolean arg2)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_SERVICES_ENUMEXTENSTIONS_GETFLAGVALUES_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean Has(::System::Enum* arg, Il2CppObject* arg2)
		{
			return ((::System::Boolean(*)(::System::Enum*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_SERVICES_ENUMEXTENSTIONS_HAS_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* CSVToEnums(::System::String* str)
		{
			return ((Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_SERVICES_ENUMEXTENSTIONS_CSVTOENUMS_OFFSET))(str, nullptr);
		}

	};
}

