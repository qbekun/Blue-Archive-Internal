#pragma once
#include "../unitysdk.h"

#define SYSTEM_LOCALAPPCONTEXT_GETCACHEDSWITCHVALUE_OFFSET UNITYSDK_OFFSET(0x97011A0)
#define SYSTEM_LOCALAPPCONTEXT_GETCACHEDSWITCHVALUEINTERNAL_OFFSET UNITYSDK_OFFSET(0x9701240)
#define SYSTEM_LOCALAPPCONTEXT_GET_DISABLECACHING_OFFSET UNITYSDK_OFFSET(0x97012C0)

namespace System
{
	inline static constexpr unsigned int LocalAppContext_TypeDefinitionIndex = 32162;

	class LocalAppContext : public Il2CppObject
	{
	public:
		::System::Boolean s_isDisableCachingInitialized; // 0x0
		::System::Boolean s_disableCaching; // 0x1
		::System::Object* s_syncObject; // 0x8

		::System::Boolean GetCachedSwitchValue(::System::String* str, int32_t&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LOCALAPPCONTEXT_GETCACHEDSWITCHVALUE_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean GetCachedSwitchValueInternal(::System::String* str, int32_t&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LOCALAPPCONTEXT_GETCACHEDSWITCHVALUEINTERNAL_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean get_DisableCaching()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LOCALAPPCONTEXT_GET_DISABLECACHING_OFFSET))(nullptr);
		}

	};
}

