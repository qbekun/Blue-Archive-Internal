#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::ResourceManagement { class ResourceManager; }
namespace UnityEngine::ResourceManagement::ResourceProviders { class IResourceProvider; }
namespace UnityEngine::ResourceManagement::ResourceLocations { class IResourceLocation; }

#define UNITYENGINE_RESOURCEMANAGEMENT_ASYNCOPERATIONS_IGENERICPROVIDEROPERATION_INIT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RESOURCEMANAGEMENT_ASYNCOPERATIONS_IGENERICPROVIDEROPERATION_INIT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RESOURCEMANAGEMENT_ASYNCOPERATIONS_IGENERICPROVIDEROPERATION_GET_PROVIDEHANDLEVERSION_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RESOURCEMANAGEMENT_ASYNCOPERATIONS_IGENERICPROVIDEROPERATION_GET_LOCATION_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RESOURCEMANAGEMENT_ASYNCOPERATIONS_IGENERICPROVIDEROPERATION_GET_DEPENDENCYCOUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RESOURCEMANAGEMENT_ASYNCOPERATIONS_IGENERICPROVIDEROPERATION_GETDEPENDENCIES_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RESOURCEMANAGEMENT_ASYNCOPERATIONS_IGENERICPROVIDEROPERATION_GETDEPENDENCY_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RESOURCEMANAGEMENT_ASYNCOPERATIONS_IGENERICPROVIDEROPERATION_SETPROGRESSCALLBACK_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RESOURCEMANAGEMENT_ASYNCOPERATIONS_IGENERICPROVIDEROPERATION_PROVIDERCOMPLETED_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RESOURCEMANAGEMENT_ASYNCOPERATIONS_IGENERICPROVIDEROPERATION_GET_REQUESTEDTYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RESOURCEMANAGEMENT_ASYNCOPERATIONS_IGENERICPROVIDEROPERATION_SETDOWNLOADPROGRESSCALLBACK_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RESOURCEMANAGEMENT_ASYNCOPERATIONS_IGENERICPROVIDEROPERATION_SETWAITFORCOMPLETIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::ResourceManagement::AsyncOperations
{
	inline static constexpr unsigned int IGenericProviderOperation_TypeDefinitionIndex = 36437;

	class IGenericProviderOperation : public Il2CppObject
	{
	public:
		::System::Void Init(::UnityEngine::ResourceManagement::ResourceManager* arg, ::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider* arg, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::UnityEngine::ResourceManagement::ResourceManager*, ::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_ASYNCOPERATIONS_IGENERICPROVIDEROPERATION_INIT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void Init(::UnityEngine::ResourceManagement::ResourceManager* arg, ::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider* arg, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* arg, Il2CppObject* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::ResourceManagement::ResourceManager*, ::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_ASYNCOPERATIONS_IGENERICPROVIDEROPERATION_INIT_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 get_ProvideHandleVersion()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_ASYNCOPERATIONS_IGENERICPROVIDEROPERATION_GET_PROVIDEHANDLEVERSION_OFFSET))(nullptr);
		}

		::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* get_Location()
		{
			return (return (::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_ASYNCOPERATIONS_IGENERICPROVIDEROPERATION_GET_LOCATION_OFFSET))(nullptr);
		}

		::System::Int32 get_DependencyCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_ASYNCOPERATIONS_IGENERICPROVIDEROPERATION_GET_DEPENDENCYCOUNT_OFFSET))(nullptr);
		}

		::System::Void GetDependencies(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_ASYNCOPERATIONS_IGENERICPROVIDEROPERATION_GETDEPENDENCIES_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetDependency(::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_ASYNCOPERATIONS_IGENERICPROVIDEROPERATION_GETDEPENDENCY_OFFSET))(arg, nullptr);
		}

		::System::Void SetProgressCallback(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_ASYNCOPERATIONS_IGENERICPROVIDEROPERATION_SETPROGRESSCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void ProviderCompleted(Il2CppObject* arg, ::System::Boolean arg, ::System::Exception* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Boolean, ::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_ASYNCOPERATIONS_IGENERICPROVIDEROPERATION_PROVIDERCOMPLETED_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Type* get_RequestedType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_ASYNCOPERATIONS_IGENERICPROVIDEROPERATION_GET_REQUESTEDTYPE_OFFSET))(nullptr);
		}

		::System::Void SetDownloadProgressCallback(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_ASYNCOPERATIONS_IGENERICPROVIDEROPERATION_SETDOWNLOADPROGRESSCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void SetWaitForCompletionCallback(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_ASYNCOPERATIONS_IGENERICPROVIDEROPERATION_SETWAITFORCOMPLETIONCALLBACK_OFFSET))(arg, nullptr);
		}

	};
}

