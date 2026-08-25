#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::ResourceManagement::Util { class IOperationCacheKey; }
namespace UnityEngine::ResourceManagement::Util { class AsyncOpHandlesCacheKey; }

#define UNITYENGINE_RESOURCEMANAGEMENT_UTIL_ASYNCOPHANDLESCACHEKEY_.CTOR_OFFSET UNITYSDK_OFFSET(0xA0DF670)
#define UNITYENGINE_RESOURCEMANAGEMENT_UTIL_ASYNCOPHANDLESCACHEKEY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA0E5100)
#define UNITYENGINE_RESOURCEMANAGEMENT_UTIL_ASYNCOPHANDLESCACHEKEY_EQUALS_OFFSET UNITYSDK_OFFSET(0xA0E5130)
#define UNITYENGINE_RESOURCEMANAGEMENT_UTIL_ASYNCOPHANDLESCACHEKEY_EQUALS_OFFSET UNITYSDK_OFFSET(0xA0E5250)
#define UNITYENGINE_RESOURCEMANAGEMENT_UTIL_ASYNCOPHANDLESCACHEKEY_EQUALS_OFFSET UNITYSDK_OFFSET(0xA0E51E0)

namespace UnityEngine::ResourceManagement::Util
{
	inline static constexpr unsigned int AsyncOpHandlesCacheKey_TypeDefinitionIndex = 36370;

	class AsyncOpHandlesCacheKey : public Il2CppObject
	{
	public:
		Il2CppObject* m_Handles; // 0x10

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_UTIL_ASYNCOPHANDLESCACHEKEY_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_UTIL_ASYNCOPHANDLESCACHEKEY_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_UTIL_ASYNCOPHANDLESCACHEKEY_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::UnityEngine::ResourceManagement::Util::IOperationCacheKey* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::ResourceManagement::Util::IOperationCacheKey*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_UTIL_ASYNCOPHANDLESCACHEKEY_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::UnityEngine::ResourceManagement::Util::AsyncOpHandlesCacheKey* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::ResourceManagement::Util::AsyncOpHandlesCacheKey*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_UTIL_ASYNCOPHANDLESCACHEKEY_EQUALS_OFFSET))(arg, nullptr);
		}

	};
}

