#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::ResourceManagement::ResourceLocations { class IResourceLocation; }
namespace UnityEngine::ResourceManagement::Util { class IOperationCacheKey; }
namespace UnityEngine::ResourceManagement::Util { class LocationCacheKey; }

#define UNITYENGINE_RESOURCEMANAGEMENT_UTIL_LOCATIONCACHEKEY_.CTOR_OFFSET UNITYSDK_OFFSET(0xA0DE270)
#define UNITYENGINE_RESOURCEMANAGEMENT_UTIL_LOCATIONCACHEKEY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA0E4810)
#define UNITYENGINE_RESOURCEMANAGEMENT_UTIL_LOCATIONCACHEKEY_EQUALS_OFFSET UNITYSDK_OFFSET(0xA0E48C0)
#define UNITYENGINE_RESOURCEMANAGEMENT_UTIL_LOCATIONCACHEKEY_EQUALS_OFFSET UNITYSDK_OFFSET(0xA0E49A0)
#define UNITYENGINE_RESOURCEMANAGEMENT_UTIL_LOCATIONCACHEKEY_EQUALS_OFFSET UNITYSDK_OFFSET(0xA0E4950)

namespace UnityEngine::ResourceManagement::Util
{
	inline static constexpr unsigned int LocationCacheKey_TypeDefinitionIndex = 36368;

	class LocationCacheKey : public Il2CppObject
	{
	public:
		::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* m_Location; // 0x10
		::System::Type* m_DesiredType; // 0x18

		::System::Void .ctor(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* arg, ::System::Type* arg)
		{
			((::System::Void(*)(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_UTIL_LOCATIONCACHEKEY_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_UTIL_LOCATIONCACHEKEY_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_UTIL_LOCATIONCACHEKEY_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::UnityEngine::ResourceManagement::Util::IOperationCacheKey* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::ResourceManagement::Util::IOperationCacheKey*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_UTIL_LOCATIONCACHEKEY_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::UnityEngine::ResourceManagement::Util::LocationCacheKey* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::ResourceManagement::Util::LocationCacheKey*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_UTIL_LOCATIONCACHEKEY_EQUALS_OFFSET))(arg, nullptr);
		}

	};
}

