#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::ResourceManagement::Util { class SerializedType; }
namespace UnityEngine::ResourceManagement::AsyncOperations { class AsyncOperationHandle; }
namespace UnityEngine::ResourceManagement { class ResourceManager; }

#define UNITYENGINE_RESOURCEMANAGEMENT_UTIL_OBJECTINITIALIZATIONDATA_GET_DATA_OFFSET UNITYSDK_OFFSET(0xA0E5B30)
#define UNITYENGINE_RESOURCEMANAGEMENT_UTIL_OBJECTINITIALIZATIONDATA_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA0E5B40)
#define UNITYENGINE_RESOURCEMANAGEMENT_UTIL_OBJECTINITIALIZATIONDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0xA0E5BC0)
#define UNITYENGINE_RESOURCEMANAGEMENT_UTIL_OBJECTINITIALIZATIONDATA_GETASYNCINITHANDLE_OFFSET UNITYSDK_OFFSET(0xA0E5BD0)
#define UNITYENGINE_RESOURCEMANAGEMENT_UTIL_OBJECTINITIALIZATIONDATA_GET_OBJECTTYPE_OFFSET UNITYSDK_OFFSET(0xA0E5E70)
#define UNITYENGINE_RESOURCEMANAGEMENT_UTIL_OBJECTINITIALIZATIONDATA_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::ResourceManagement::Util
{
	inline static constexpr unsigned int ObjectInitializationData_TypeDefinitionIndex = 36382;

	class ObjectInitializationData : public Il2CppObject
	{
	public:
		::System::String* m_Id; // 0x10
		::UnityEngine::ResourceManagement::Util::SerializedType* m_ObjectType; // 0x18
		::System::String* m_Data; // 0x38

		::System::String* get_Data()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_UTIL_OBJECTINITIALIZATIONDATA_GET_DATA_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_UTIL_OBJECTINITIALIZATIONDATA_TOSTRING_OFFSET))(nullptr);
		}

		::System::String* get_Id()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_UTIL_OBJECTINITIALIZATIONDATA_GET_ID_OFFSET))(nullptr);
		}

		::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle* GetAsyncInitHandle(::UnityEngine::ResourceManagement::ResourceManager* arg, ::System::String* str)
		{
			return (return (::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle*(*)(::UnityEngine::ResourceManagement::ResourceManager*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_UTIL_OBJECTINITIALIZATIONDATA_GETASYNCINITHANDLE_OFFSET))(arg, str, nullptr);
		}

		::UnityEngine::ResourceManagement::Util::SerializedType* get_ObjectType()
		{
			return (return (::UnityEngine::ResourceManagement::Util::SerializedType*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_UTIL_OBJECTINITIALIZATIONDATA_GET_OBJECTTYPE_OFFSET))(nullptr);
		}

		Il2CppObject* CreateInstance(::System::String* str)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_UTIL_OBJECTINITIALIZATIONDATA_CREATEINSTANCE_OFFSET))(str, nullptr);
		}

	};
}

