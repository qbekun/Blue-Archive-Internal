#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_NET_HTTP_HEADERS_COLLECTIONEXTENSIONS_SEQUENCEEQUAL_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_NET_HTTP_HEADERS_COLLECTIONEXTENSIONS_SETVALUE_OFFSET UNITYSDK_OFFSET(0x9819F10)
#define SYSTEM_NET_HTTP_HEADERS_COLLECTIONEXTENSIONS_TOSTRING_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_NET_HTTP_HEADERS_COLLECTIONEXTENSIONS_TOSTRINGBUILDER_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Net::Http::Headers
{
	inline static constexpr unsigned int CollectionExtensions_TypeDefinitionIndex = 36669;

	class CollectionExtensions : public Il2CppObject
	{
	public:
		::System::Boolean SequenceEqual(Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_COLLECTIONEXTENSIONS_SEQUENCEEQUAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetValue(Il2CppObject* arg, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(Il2CppObject*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_COLLECTIONEXTENSIONS_SETVALUE_OFFSET))(arg, str, str, nullptr);
		}

		::System::String* ToString(Il2CppObject* arg)
		{
			return (return (::System::String*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_COLLECTIONEXTENSIONS_TOSTRING_OFFSET))(arg, nullptr);
		}

		::System::Void ToStringBuilder(Il2CppObject* arg, ::System::Text::StringBuilder* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Text::StringBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_COLLECTIONEXTENSIONS_TOSTRINGBUILDER_OFFSET))(arg, arg, nullptr);
		}

	};
}

