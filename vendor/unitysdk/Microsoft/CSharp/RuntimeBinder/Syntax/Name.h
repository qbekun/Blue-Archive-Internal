#pragma once
#include "../../../../unitysdk.h"

#define MICROSOFT_CSHARP_RUNTIMEBINDER_SYNTAX_NAME_.CTOR_OFFSET UNITYSDK_OFFSET(0x909F150)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SYNTAX_NAME_GET_TEXT_OFFSET UNITYSDK_OFFSET(0x909F5F0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SYNTAX_NAME_TOSTRING_OFFSET UNITYSDK_OFFSET(0x909F600)

namespace Microsoft::CSharp::RuntimeBinder::Syntax
{
	inline static constexpr unsigned int Name_TypeDefinitionIndex = 34458;

	class Name : public Il2CppObject
	{
	public:
		::System::String* _Text_k__BackingField; // 0x10

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SYNTAX_NAME_.CTOR_OFFSET))(str, nullptr);
		}

		::System::String* get_Text()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SYNTAX_NAME_GET_TEXT_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SYNTAX_NAME_TOSTRING_OFFSET))(nullptr);
		}

	};
}

