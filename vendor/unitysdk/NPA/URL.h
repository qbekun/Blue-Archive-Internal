#pragma once
#include "../unitysdk.h"

#define NPA_URL_GETBUILDER_OFFSET UNITYSDK_OFFSET(0x9BC5400)
#define NPA_URL_EXTRACTQUERYPARAM_OFFSET UNITYSDK_OFFSET(0x9BC54D0)
#define NPA_URL_QUERYTOMAP_OFFSET UNITYSDK_OFFSET(0x9BC5710)
#define NPA_URL_PARSEQUERYINTERNAL_OFFSET UNITYSDK_OFFSET(0x9BC5580)
#define NPA_URL_EXTRACTDOMAIN_OFFSET UNITYSDK_OFFSET(0x9BC57B0)
#define NPA_URL_EXTRACTSCHEME_OFFSET UNITYSDK_OFFSET(0x9BC58A0)

namespace NPA
{
	inline static constexpr unsigned int URL_TypeDefinitionIndex = 25591;

	class URL : public Il2CppObject
	{
	public:
		Builder* GetBuilder()
		{
			return (return (Builder*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_URL_GETBUILDER_OFFSET))(nullptr);
		}

		Il2CppObject* ExtractQueryParam(::System::String* str)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_URL_EXTRACTQUERYPARAM_OFFSET))(str, nullptr);
		}

		Il2CppObject* QueryToMap(::System::String* str)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_URL_QUERYTOMAP_OFFSET))(str, nullptr);
		}

		Il2CppObject* ParseQueryInternal(::System::String* str)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_URL_PARSEQUERYINTERNAL_OFFSET))(str, nullptr);
		}

		::System::String* ExtractDomain(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_URL_EXTRACTDOMAIN_OFFSET))(str, nullptr);
		}

		::System::String* ExtractScheme(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_URL_EXTRACTSCHEME_OFFSET))(str, nullptr);
		}

	};
}

