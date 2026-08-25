#pragma once
#include "../../../../../unitysdk.h"

#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_NAMECACHE_GETCACHEDVALUE_OFFSET UNITYSDK_OFFSET(0x9216C60)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_NAMECACHE_SETCACHEDVALUE_OFFSET UNITYSDK_OFFSET(0x92171A0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_NAMECACHE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9211B70)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_NAMECACHE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9221580)

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int NameCache_TypeDefinitionIndex = 24671;

	class NameCache : public Il2CppObject
	{
	public:
		Il2CppObject* ht; // 0x0
		::System::String* name; // 0x10

		::System::Object* GetCachedValue(::System::String* str)
		{
			return (return (::System::Object*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_NAMECACHE_GETCACHEDVALUE_OFFSET))(str, nullptr);
		}

		::System::Void SetCachedValue(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_NAMECACHE_SETCACHEDVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_NAMECACHE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_NAMECACHE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

