#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_NET_HTTP_HEADERS_TRYPARSELISTDELEGATE`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_NET_HTTP_HEADERS_TRYPARSELISTDELEGATE`1_INVOKE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Net::Http::Headers
{
	inline static constexpr unsigned int TryParseListDelegate`1_TypeDefinitionIndex = 36677;

	class TryParseListDelegate`1 : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_TRYPARSELISTDELEGATE`1_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Invoke(::System::String* str, ::System::Int32 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::Int32, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_TRYPARSELISTDELEGATE`1_INVOKE_OFFSET))(str, arg, arg, nullptr);
		}

	};
}

