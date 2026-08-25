#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_LINQ_XHASHTABLE`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_LINQ_XHASHTABLE`1_TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_LINQ_XHASHTABLE`1_ADD_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Xml::Linq
{
	inline static constexpr unsigned int XHashtable`1_TypeDefinitionIndex = 37301;

	class XHashtable`1 : public Il2CppObject
	{
	public:
		Il2CppObject* _state; // 0x0

		::System::Void .ctor(Il2CppObject* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XHASHTABLE`1_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetValue(::System::String* str, ::System::Int32 arg, ::System::Int32 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::Int32, ::System::Int32, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XHASHTABLE`1_TRYGETVALUE_OFFSET))(str, arg, arg, arg, nullptr);
		}

		Il2CppObject* Add(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XHASHTABLE`1_ADD_OFFSET))(arg, nullptr);
		}

	};
}

