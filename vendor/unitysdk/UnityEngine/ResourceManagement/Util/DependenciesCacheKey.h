#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::ResourceManagement::Util { class IOperationCacheKey; }
namespace UnityEngine::ResourceManagement::Util { class DependenciesCacheKey; }

#define UNITYENGINE_RESOURCEMANAGEMENT_UTIL_DEPENDENCIESCACHEKEY_.CTOR_OFFSET UNITYSDK_OFFSET(0xA0DF7C0)
#define UNITYENGINE_RESOURCEMANAGEMENT_UTIL_DEPENDENCIESCACHEKEY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA0E4D40)
#define UNITYENGINE_RESOURCEMANAGEMENT_UTIL_DEPENDENCIESCACHEKEY_EQUALS_OFFSET UNITYSDK_OFFSET(0xA0E4D50)
#define UNITYENGINE_RESOURCEMANAGEMENT_UTIL_DEPENDENCIESCACHEKEY_EQUALS_OFFSET UNITYSDK_OFFSET(0xA0E4DE0)
#define UNITYENGINE_RESOURCEMANAGEMENT_UTIL_DEPENDENCIESCACHEKEY_EQUALS_OFFSET UNITYSDK_OFFSET(0xA0E4DC0)

namespace UnityEngine::ResourceManagement::Util
{
	inline static constexpr unsigned int DependenciesCacheKey_TypeDefinitionIndex = 36369;

	class DependenciesCacheKey : public Il2CppObject
	{
	public:
		Il2CppObject* m_Dependencies; // 0x10
		::System::Int32 m_DependenciesHash; // 0x18

		::System::Void .ctor(Il2CppObject* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_UTIL_DEPENDENCIESCACHEKEY_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_UTIL_DEPENDENCIESCACHEKEY_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_UTIL_DEPENDENCIESCACHEKEY_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::UnityEngine::ResourceManagement::Util::IOperationCacheKey* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::ResourceManagement::Util::IOperationCacheKey*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_UTIL_DEPENDENCIESCACHEKEY_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::UnityEngine::ResourceManagement::Util::DependenciesCacheKey* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::ResourceManagement::Util::DependenciesCacheKey*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_UTIL_DEPENDENCIESCACHEKEY_EQUALS_OFFSET))(arg, nullptr);
		}

	};
}

