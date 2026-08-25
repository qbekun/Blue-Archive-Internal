#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::ResourceManagement { class ResourceManager; }
namespace UnityEngine::ResourceManagement::AsyncOperations { class AsyncOperationHandle; }

#define UNITYENGINE_ADDRESSABLEASSETS_UTILITY_RESOURCEMANAGERDIAGNOSTICS_SUMDEPENDENCYNAMEHASHCODES_OFFSET UNITYSDK_OFFSET(0x9E0FD30)
#define UNITYENGINE_ADDRESSABLEASSETS_UTILITY_RESOURCEMANAGERDIAGNOSTICS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E0FF90)
#define UNITYENGINE_ADDRESSABLEASSETS_UTILITY_RESOURCEMANAGERDIAGNOSTICS_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9E10080)
#define UNITYENGINE_ADDRESSABLEASSETS_UTILITY_RESOURCEMANAGERDIAGNOSTICS_CALCULATEHASHCODE_OFFSET UNITYSDK_OFFSET(0x9E10140)
#define UNITYENGINE_ADDRESSABLEASSETS_UTILITY_RESOURCEMANAGERDIAGNOSTICS_GENERATECOMPLETEDOPERATIONDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x9E10310)
#define UNITYENGINE_ADDRESSABLEASSETS_UTILITY_RESOURCEMANAGERDIAGNOSTICS_ONRESOURCEMANAGERDIAGNOSTICEVENT_OFFSET UNITYSDK_OFFSET(0x9E10760)
#define UNITYENGINE_ADDRESSABLEASSETS_UTILITY_RESOURCEMANAGERDIAGNOSTICS_CALCULATECOMPLETEDOPERATIONHASHCODE_OFFSET UNITYSDK_OFFSET(0x9E10280)

namespace UnityEngine::AddressableAssets::Utility
{
	inline static constexpr unsigned int ResourceManagerDiagnostics_TypeDefinitionIndex = 36212;

	class ResourceManagerDiagnostics : public Il2CppObject
	{
	public:
		::UnityEngine::ResourceManagement::ResourceManager* m_ResourceManager; // 0x10
		::System::Int32 k_NumberOfCompletedOpResultEntriesToShow; // 0x0
		::System::Int32 k_MaximumCompletedOpResultEntryLength; // 0x0
		Il2CppObject* m_cachedDiagnosticInfo; // 0x18

		::System::Int32 SumDependencyNameHashCodes(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_UTILITY_RESOURCEMANAGERDIAGNOSTICS_SUMDEPENDENCYNAMEHASHCODES_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::ResourceManagement::ResourceManager* arg)
		{
			((::System::Void(*)(::UnityEngine::ResourceManagement::ResourceManager*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_UTILITY_RESOURCEMANAGERDIAGNOSTICS_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_UTILITY_RESOURCEMANAGERDIAGNOSTICS_DISPOSE_OFFSET))(nullptr);
		}

		::System::Int32 CalculateHashCode(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_UTILITY_RESOURCEMANAGERDIAGNOSTICS_CALCULATEHASHCODE_OFFSET))(arg, nullptr);
		}

		::System::String* GenerateCompletedOperationDisplayName(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle* arg)
		{
			return (return (::System::String*(*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_UTILITY_RESOURCEMANAGERDIAGNOSTICS_GENERATECOMPLETEDOPERATIONDISPLAYNAME_OFFSET))(arg, nullptr);
		}

		::System::Void OnResourceManagerDiagnosticEvent(DiagnosticEventContext* arg)
		{
			((::System::Void(*)(DiagnosticEventContext*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_UTILITY_RESOURCEMANAGERDIAGNOSTICS_ONRESOURCEMANAGERDIAGNOSTICEVENT_OFFSET))(arg, nullptr);
		}

		::System::Int32 CalculateCompletedOperationHashcode(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_UTILITY_RESOURCEMANAGERDIAGNOSTICS_CALCULATECOMPLETEDOPERATIONHASHCODE_OFFSET))(arg, nullptr);
		}

	};
}

