#pragma once
#include "unitysdk.h"

#define ATTRNAME_SET_OFFSET UNITYSDK_OFFSET(0x997F380)
#define ATTRNAME_ISDUPLICATE_OFFSET UNITYSDK_OFFSET(0x997F3D0)

	inline static constexpr unsigned int AttrName_TypeDefinitionIndex = 27720;

	class AttrName : public Il2CppObject
	{
	public:
		::System::String* prefix; // 0x10
		::System::String* namespaceUri; // 0x18
		::System::String* localName; // 0x20
		::System::Int32 prev; // 0x28

		::System::Void Set(::System::String* str, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ATTRNAME_SET_OFFSET))(str, str, str, nullptr);
		}

		::System::Boolean IsDuplicate(::System::String* str, ::System::String* str, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ATTRNAME_ISDUPLICATE_OFFSET))(str, str, str, nullptr);
		}

	};

