#pragma once
#include "../../unitysdk.h"

#define SYSTEM_TEXT_STRINGBUILDERCACHE_ACQUIRE_OFFSET UNITYSDK_OFFSET(0x9858460)
#define SYSTEM_TEXT_STRINGBUILDERCACHE_RELEASE_OFFSET UNITYSDK_OFFSET(0x985D670)
#define SYSTEM_TEXT_STRINGBUILDERCACHE_GETSTRINGANDRELEASE_OFFSET UNITYSDK_OFFSET(0x9858520)

namespace System::Text
{
	inline static constexpr unsigned int StringBuilderCache_TypeDefinitionIndex = 37318;

	class StringBuilderCache : public Il2CppObject
	{
	public:
		::System::Text::StringBuilder* t_cachedInstance;

		::System::Text::StringBuilder* Acquire(::System::Int32 arg)
		{
			return (return (::System::Text::StringBuilder*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDERCACHE_ACQUIRE_OFFSET))(arg, nullptr);
		}

		::System::Void Release(::System::Text::StringBuilder* arg)
		{
			((::System::Void(*)(::System::Text::StringBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDERCACHE_RELEASE_OFFSET))(arg, nullptr);
		}

		::System::String* GetStringAndRelease(::System::Text::StringBuilder* arg)
		{
			return (return (::System::String*(*)(::System::Text::StringBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDERCACHE_GETSTRINGANDRELEASE_OFFSET))(arg, nullptr);
		}

	};
}

