#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::Extensions { class HeaderValue&; }

#define BESTHTTP_EXTENSIONS_KEYVALUEPAIRLIST_.CTOR_OFFSET UNITYSDK_OFFSET(0x8D4EB0)
#define BESTHTTP_EXTENSIONS_KEYVALUEPAIRLIST_GET_VALUES_OFFSET UNITYSDK_OFFSET(0x8D6240)
#define BESTHTTP_EXTENSIONS_KEYVALUEPAIRLIST_TRYGET_OFFSET UNITYSDK_OFFSET(0x8D6250)
#define BESTHTTP_EXTENSIONS_KEYVALUEPAIRLIST_SET_VALUES_OFFSET UNITYSDK_OFFSET(0x8D6330)

namespace BestHTTP::Extensions
{
	inline static constexpr unsigned int KeyValuePairList_TypeDefinitionIndex = 23352;

	class KeyValuePairList : public Il2CppObject
	{
	public:
		Il2CppObject* _Values_k__BackingField; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_KEYVALUEPAIRLIST_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* get_Values()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_KEYVALUEPAIRLIST_GET_VALUES_OFFSET))(nullptr);
		}

		::System::Boolean TryGet(::System::String* str, ::BestHTTP::Extensions::HeaderValue&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::BestHTTP::Extensions::HeaderValue&*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_KEYVALUEPAIRLIST_TRYGET_OFFSET))(str, arg, nullptr);
		}

		::System::Void set_Values(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_KEYVALUEPAIRLIST_SET_VALUES_OFFSET))(arg, nullptr);
		}

	};
}

