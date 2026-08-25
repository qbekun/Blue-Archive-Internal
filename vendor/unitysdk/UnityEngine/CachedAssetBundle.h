#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Hash128; }

#define UNITYENGINE_CACHEDASSETBUNDLE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1E44A0)
#define UNITYENGINE_CACHEDASSETBUNDLE_GET_NAME_OFFSET UNITYSDK_OFFSET(0xA1E44D0)
#define UNITYENGINE_CACHEDASSETBUNDLE_GET_HASH_OFFSET UNITYSDK_OFFSET(0xA1E44E0)

namespace UnityEngine
{
	inline static constexpr unsigned int CachedAssetBundle_TypeDefinitionIndex = 30950;

	class CachedAssetBundle : public Il2CppObject
	{
	public:
		::System::String* m_Name; // 0x10
		::UnityEngine::Hash128* m_Hash; // 0x18

		::System::Void .ctor(::System::String* str, ::UnityEngine::Hash128* arg)
		{
			((::System::Void(*)(::System::String*, ::UnityEngine::Hash128*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CACHEDASSETBUNDLE_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::String* get_name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CACHEDASSETBUNDLE_GET_NAME_OFFSET))(nullptr);
		}

		::UnityEngine::Hash128* get_hash()
		{
			return (return (::UnityEngine::Hash128*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CACHEDASSETBUNDLE_GET_HASH_OFFSET))(nullptr);
		}

	};
}

