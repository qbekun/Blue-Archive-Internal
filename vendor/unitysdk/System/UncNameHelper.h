#pragma once
#include "../unitysdk.h"

#define SYSTEM_UNCNAMEHELPER_PARSECANONICALNAME_OFFSET UNITYSDK_OFFSET(0x9AD75C0)
#define SYSTEM_UNCNAMEHELPER_ISVALID_OFFSET UNITYSDK_OFFSET(0x9AD75D0)

namespace System
{
	inline static constexpr unsigned int UncNameHelper_TypeDefinitionIndex = 29189;

	class UncNameHelper : public Il2CppObject
	{
	public:
		::System::String* ParseCanonicalName(::System::String* str, ::System::Int32 arg, ::System::Int32 arg, bool&* arg)
		{
			return (return (::System::String*(*)(::System::String*, ::System::Int32, ::System::Int32, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UNCNAMEHELPER_PARSECANONICALNAME_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::Boolean IsValid(::System::Object** arg, ::System::UInt16 arg, int32_t&* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::Object**, ::System::UInt16, int32_t&*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UNCNAMEHELPER_ISVALID_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

