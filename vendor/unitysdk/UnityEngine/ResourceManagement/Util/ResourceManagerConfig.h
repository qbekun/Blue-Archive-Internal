#pragma once
#include "../../../unitysdk.h"

#define UNITYENGINE_RESOURCEMANAGEMENT_UTIL_RESOURCEMANAGERCONFIG_EXTRACTKEYANDSUBKEY_OFFSET UNITYSDK_OFFSET(0xA0E5E90)
#define UNITYENGINE_RESOURCEMANAGEMENT_UTIL_RESOURCEMANAGERCONFIG_ISPATHREMOTE_OFFSET UNITYSDK_OFFSET(0xA0E5F70)
#define UNITYENGINE_RESOURCEMANAGEMENT_UTIL_RESOURCEMANAGERCONFIG_STRIPQUERYPARAMETERS_OFFSET UNITYSDK_OFFSET(0xA0E5FC0)
#define UNITYENGINE_RESOURCEMANAGEMENT_UTIL_RESOURCEMANAGERCONFIG_SHOULDPATHUSEWEBREQUEST_OFFSET UNITYSDK_OFFSET(0xA0E6010)
#define UNITYENGINE_RESOURCEMANAGEMENT_UTIL_RESOURCEMANAGERCONFIG_PLATFORMCANLOADLOCALLYFROMURLPATH_OFFSET UNITYSDK_OFFSET(0xA0E60C0)
#define UNITYENGINE_RESOURCEMANAGEMENT_UTIL_RESOURCEMANAGERCONFIG_CREATEARRAYRESULT_OFFSET UNITYSDK_OFFSET(0xA0E60E0)
#define UNITYENGINE_RESOURCEMANAGEMENT_UTIL_RESOURCEMANAGERCONFIG_CREATEARRAYRESULT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RESOURCEMANAGEMENT_UTIL_RESOURCEMANAGERCONFIG_CREATELISTRESULT_OFFSET UNITYSDK_OFFSET(0xA0E62C0)
#define UNITYENGINE_RESOURCEMANAGEMENT_UTIL_RESOURCEMANAGERCONFIG_CREATELISTRESULT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RESOURCEMANAGEMENT_UTIL_RESOURCEMANAGERCONFIG_ISINSTANCE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RESOURCEMANAGEMENT_UTIL_RESOURCEMANAGERCONFIG_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA0E64C0)

namespace UnityEngine::ResourceManagement::Util
{
	inline static constexpr unsigned int ResourceManagerConfig_TypeDefinitionIndex = 36383;

	class ResourceManagerConfig : public Il2CppObject
	{
	public:
		Il2CppObject* platformsThatUseUrlForLocalLoads; // 0x0

		::System::Boolean ExtractKeyAndSubKey(::System::Object* arg, ::System::String&* arg, ::System::String&* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::System::String&*, ::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_UTIL_RESOURCEMANAGERCONFIG_EXTRACTKEYANDSUBKEY_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean IsPathRemote(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_UTIL_RESOURCEMANAGERCONFIG_ISPATHREMOTE_OFFSET))(str, nullptr);
		}

		::System::String* StripQueryParameters(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_UTIL_RESOURCEMANAGERCONFIG_STRIPQUERYPARAMETERS_OFFSET))(str, nullptr);
		}

		::System::Boolean ShouldPathUseWebRequest(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_UTIL_RESOURCEMANAGERCONFIG_SHOULDPATHUSEWEBREQUEST_OFFSET))(str, nullptr);
		}

		::System::Boolean PlatformCanLoadLocallyFromUrlPath()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_UTIL_RESOURCEMANAGERCONFIG_PLATFORMCANLOADLOCALLYFROMURLPATH_OFFSET))(nullptr);
		}

		::System::Array* CreateArrayResult(::System::Type* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Array*(*)(::System::Type*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_UTIL_RESOURCEMANAGERCONFIG_CREATEARRAYRESULT_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* CreateArrayResult(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (Il2CppObject*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_UTIL_RESOURCEMANAGERCONFIG_CREATEARRAYRESULT_OFFSET))(arg, nullptr);
		}

		::System::Collections::IList* CreateListResult(::System::Type* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Collections::IList*(*)(::System::Type*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_UTIL_RESOURCEMANAGERCONFIG_CREATELISTRESULT_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* CreateListResult(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (Il2CppObject*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_UTIL_RESOURCEMANAGERCONFIG_CREATELISTRESULT_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsInstance()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_UTIL_RESOURCEMANAGERCONFIG_ISINSTANCE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_UTIL_RESOURCEMANAGERCONFIG_.CCTOR_OFFSET))(nullptr);
		}

	};
}

