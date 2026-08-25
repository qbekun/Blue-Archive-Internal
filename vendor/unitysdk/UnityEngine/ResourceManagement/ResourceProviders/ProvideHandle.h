#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::ResourceManagement::AsyncOperations { class IGenericProviderOperation; }
namespace UnityEngine::ResourceManagement { class ResourceManager; }
namespace UnityEngine::ResourceManagement::ResourceLocations { class IResourceLocation; }

#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_PROVIDEHANDLE_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xA0E9F60)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_PROVIDEHANDLE_GET_INTERNALOP_OFFSET UNITYSDK_OFFSET(0xA0EADE0)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_PROVIDEHANDLE_SETWAITFORCOMPLETIONCALLBACK_OFFSET UNITYSDK_OFFSET(0xA0E7C40)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_PROVIDEHANDLE_GET_DEPENDENCYCOUNT_OFFSET UNITYSDK_OFFSET(0xA0EAED0)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_PROVIDEHANDLE_SETDOWNLOADPROGRESSCALLBACKS_OFFSET UNITYSDK_OFFSET(0xA0E7B90)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_PROVIDEHANDLE_GETDEPENDENCY_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_PROVIDEHANDLE_SETPROGRESSCALLBACK_OFFSET UNITYSDK_OFFSET(0xA0E7AE0)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_PROVIDEHANDLE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA0EAF80)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_PROVIDEHANDLE_GETDEPENDENCIES_OFFSET UNITYSDK_OFFSET(0xA0EA760)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_PROVIDEHANDLE_COMPLETE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_PROVIDEHANDLE_GET_RESOURCEMANAGER_OFFSET UNITYSDK_OFFSET(0xA0EB050)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_PROVIDEHANDLE_GET_LOCATION_OFFSET UNITYSDK_OFFSET(0xA0E7130)

namespace UnityEngine::ResourceManagement::ResourceProviders
{
	inline static constexpr unsigned int ProvideHandle_TypeDefinitionIndex = 36400;

	class ProvideHandle : public Il2CppObject
	{
	public:
		::System::Int32 m_Version; // 0x10
		::UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation* m_InternalOp; // 0x18
		::UnityEngine::ResourceManagement::ResourceManager* m_ResourceManager; // 0x20

		::System::Type* get_Type()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_PROVIDEHANDLE_GET_TYPE_OFFSET))(nullptr);
		}

		::UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation* get_InternalOp()
		{
			return (return (::UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_PROVIDEHANDLE_GET_INTERNALOP_OFFSET))(nullptr);
		}

		::System::Void SetWaitForCompletionCallback(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_PROVIDEHANDLE_SETWAITFORCOMPLETIONCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_DependencyCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_PROVIDEHANDLE_GET_DEPENDENCYCOUNT_OFFSET))(nullptr);
		}

		::System::Void SetDownloadProgressCallbacks(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_PROVIDEHANDLE_SETDOWNLOADPROGRESSCALLBACKS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetDependency(::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_PROVIDEHANDLE_GETDEPENDENCY_OFFSET))(arg, nullptr);
		}

		::System::Void SetProgressCallback(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_PROVIDEHANDLE_SETPROGRESSCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::ResourceManagement::ResourceManager* arg, ::UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation* arg)
		{
			((::System::Void(*)(::UnityEngine::ResourceManagement::ResourceManager*, ::UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_PROVIDEHANDLE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GetDependencies(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_PROVIDEHANDLE_GETDEPENDENCIES_OFFSET))(arg, nullptr);
		}

		::System::Void Complete(Il2CppObject* arg, ::System::Boolean arg, ::System::Exception* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Boolean, ::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_PROVIDEHANDLE_COMPLETE_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::ResourceManagement::ResourceManager* get_ResourceManager()
		{
			return (return (::UnityEngine::ResourceManagement::ResourceManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_PROVIDEHANDLE_GET_RESOURCEMANAGER_OFFSET))(nullptr);
		}

		::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* get_Location()
		{
			return (return (::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_PROVIDEHANDLE_GET_LOCATION_OFFSET))(nullptr);
		}

	};
}

