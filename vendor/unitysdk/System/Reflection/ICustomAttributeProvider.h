#pragma once
#include "../../unitysdk.h"

#define SYSTEM_REFLECTION_ICUSTOMATTRIBUTEPROVIDER_GETCUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_REFLECTION_ICUSTOMATTRIBUTEPROVIDER_GETCUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_REFLECTION_ICUSTOMATTRIBUTEPROVIDER_ISDEFINED_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Reflection
{
	inline static constexpr unsigned int ICustomAttributeProvider_TypeDefinitionIndex = 24857;

	class ICustomAttributeProvider : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* GetCustomAttributes(::System::Boolean arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ICUSTOMATTRIBUTEPROVIDER_GETCUSTOMATTRIBUTES_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetCustomAttributes(::System::Type* arg, ::System::Boolean arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Type*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ICUSTOMATTRIBUTEPROVIDER_GETCUSTOMATTRIBUTES_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsDefined(::System::Type* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ICUSTOMATTRIBUTEPROVIDER_ISDEFINED_OFFSET))(arg, arg, nullptr);
		}

	};
}

