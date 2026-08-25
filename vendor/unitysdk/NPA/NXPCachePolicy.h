#pragma once
#include "../unitysdk.h"

namespace NPA { class NXPCacheType; }

#define NPA_NXPCACHEPOLICY_GET_CACHETIME_OFFSET UNITYSDK_OFFSET(0x9CE5FE0)
#define NPA_NXPCACHEPOLICY_GET_CACHEKEY_OFFSET UNITYSDK_OFFSET(0x9CE5FF0)
#define NPA_NXPCACHEPOLICY_GET_CACHETYPE_OFFSET UNITYSDK_OFFSET(0x9CE6000)
#define NPA_NXPCACHEPOLICY_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CE6010)
#define NPA_NXPCACHEPOLICY_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CE6060)

namespace NPA
{
	inline static constexpr unsigned int NXPCachePolicy_TypeDefinitionIndex = 25782;

	class NXPCachePolicy : public Il2CppObject
	{
	public:
		::System::Int32 cacheTime; // 0x10
		::System::String* cacheKey; // 0x18
		::NPA::NXPCacheType* cacheType; // 0x20

		::System::Int32 get_CacheTime()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPCACHEPOLICY_GET_CACHETIME_OFFSET))(nullptr);
		}

		::System::String* get_CacheKey()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPCACHEPOLICY_GET_CACHEKEY_OFFSET))(nullptr);
		}

		::NPA::NXPCacheType* get_CacheType()
		{
			return (return (::NPA::NXPCacheType*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPCACHEPOLICY_GET_CACHETYPE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPCACHEPOLICY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::NPA::NXPCacheType* arg, ::System::Int32 arg, ::System::String* str)
		{
			((::System::Void(*)(::NPA::NXPCacheType*, ::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPCACHEPOLICY_.CTOR_OFFSET))(arg, arg, str, nullptr);
		}

	};
}

