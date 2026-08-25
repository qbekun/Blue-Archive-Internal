#pragma once
#include "../unitysdk.h"

#define SYSTEM_TYPENAMEPARSER_GETTYPE_OFFSET UNITYSDK_OFFSET(0x93B3670)

namespace System
{
	inline static constexpr unsigned int TypeNameParser_TypeDefinitionIndex = 23954;

	class TypeNameParser : public Il2CppObject
	{
	public:
		::System::Type* GetType(::System::String* str, Il2CppObject* arg, Il2CppObject* arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Threading::StackCrawlMark&* arg)
		{
			return (return (::System::Type*(*)(::System::String*, Il2CppObject*, Il2CppObject*, ::System::Boolean, ::System::Boolean, ::System::Threading::StackCrawlMark&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPENAMEPARSER_GETTYPE_OFFSET))(str, arg, arg, arg, arg, arg, nullptr);
		}

	};
}

