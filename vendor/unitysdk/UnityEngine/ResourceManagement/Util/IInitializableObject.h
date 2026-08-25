#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::ResourceManagement { class ResourceManager; }

#define UNITYENGINE_RESOURCEMANAGEMENT_UTIL_IINITIALIZABLEOBJECT_INITIALIZEASYNC_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RESOURCEMANAGEMENT_UTIL_IINITIALIZABLEOBJECT_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::ResourceManagement::Util
{
	inline static constexpr unsigned int IInitializableObject_TypeDefinitionIndex = 36373;

	class IInitializableObject : public Il2CppObject
	{
	public:
		Il2CppObject* InitializeAsync(::UnityEngine::ResourceManagement::ResourceManager* arg, ::System::String* str, ::System::String* str)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::ResourceManagement::ResourceManager*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_UTIL_IINITIALIZABLEOBJECT_INITIALIZEASYNC_OFFSET))(arg, str, str, nullptr);
		}

		::System::Boolean Initialize(::System::String* str, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_UTIL_IINITIALIZABLEOBJECT_INITIALIZE_OFFSET))(str, str, nullptr);
		}

	};
}

