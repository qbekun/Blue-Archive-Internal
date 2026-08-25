#pragma once
#include "../unitysdk.h"

#define NPA_NXPENUMHELPER_TOSTRINGVALUE_OFFSET UNITYSDK_OFFSET(0x9BC4340)
#define NPA_NXPENUMHELPER_GETSTRINGVALUE_OFFSET UNITYSDK_OFFSET(0x9BC4450)
#define NPA_NXPENUMHELPER_GETSTRINGVALUEBYLOWERCASE_OFFSET UNITYSDK_OFFSET(0x9BC43D0)

namespace NPA
{
	inline static constexpr unsigned int NXPEnumHelper_TypeDefinitionIndex = 25586;

	class NXPEnumHelper : public Il2CppObject
	{
	public:
		::System::String* ToStringValue(::System::Enum* arg, ::System::Boolean arg)
		{
			return (return (::System::String*(*)(::System::Enum*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPENUMHELPER_TOSTRINGVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::String* GetStringValue(::System::Enum* arg)
		{
			return (return (::System::String*(*)(::System::Enum*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPENUMHELPER_GETSTRINGVALUE_OFFSET))(arg, nullptr);
		}

		::System::String* GetStringValueByLowerCase(::System::Enum* arg)
		{
			return (return (::System::String*(*)(::System::Enum*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPENUMHELPER_GETSTRINGVALUEBYLOWERCASE_OFFSET))(arg, nullptr);
		}

	};
}

