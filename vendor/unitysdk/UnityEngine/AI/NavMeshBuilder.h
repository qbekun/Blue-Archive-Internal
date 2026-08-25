#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Bounds; }
namespace UnityEngine::AI { class NavMeshCollectGeometry; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::AI { class NavMeshData; }
namespace UnityEngine::AI { class NavMeshBuildSettings; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Quaternion; }
namespace UnityEngine { class AsyncOperation; }
namespace UnityEngine { class Bounds&; }
namespace UnityEngine::AI { class NavMeshBuildSettings&; }

#define UNITYENGINE_AI_NAVMESHBUILDER_COLLECTSOURCES_OFFSET UNITYSDK_OFFSET(0xA1AFAA0)
#define UNITYENGINE_AI_NAVMESHBUILDER_COLLECTSOURCES_OFFSET UNITYSDK_OFFSET(0xA1AFD30)
#define UNITYENGINE_AI_NAVMESHBUILDER_COLLECTSOURCESINTERNAL_OFFSET UNITYSDK_OFFSET(0xA1AFCE0)
#define UNITYENGINE_AI_NAVMESHBUILDER_BUILDNAVMESHDATA_OFFSET UNITYSDK_OFFSET(0xA1AFEF0)
#define UNITYENGINE_AI_NAVMESHBUILDER_UPDATENAVMESHDATALISTINTERNAL_OFFSET UNITYSDK_OFFSET(0xA1B0210)
#define UNITYENGINE_AI_NAVMESHBUILDER_UPDATENAVMESHDATAASYNC_OFFSET UNITYSDK_OFFSET(0xA1B02B0)
#define UNITYENGINE_AI_NAVMESHBUILDER_UPDATENAVMESHDATAASYNCLISTINTERNAL_OFFSET UNITYSDK_OFFSET(0xA1B0410)
#define UNITYENGINE_AI_NAVMESHBUILDER_COLLECTSOURCESINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1AFEA0)
#define UNITYENGINE_AI_NAVMESHBUILDER_UPDATENAVMESHDATALISTINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1B0260)
#define UNITYENGINE_AI_NAVMESHBUILDER_UPDATENAVMESHDATAASYNCLISTINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1B0460)

namespace UnityEngine::AI
{
	inline static constexpr unsigned int NavMeshBuilder_TypeDefinitionIndex = 37491;

	class NavMeshBuilder : public Il2CppObject
	{
	public:
		::System::Void CollectSources(::UnityEngine::Bounds* arg, ::System::Int32 arg, ::UnityEngine::AI::NavMeshCollectGeometry* arg, ::System::Int32 arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::UnityEngine::Bounds*, ::System::Int32, ::UnityEngine::AI::NavMeshCollectGeometry*, ::System::Int32, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHBUILDER_COLLECTSOURCES_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void CollectSources(::UnityEngine::Transform* arg, ::System::Int32 arg, ::UnityEngine::AI::NavMeshCollectGeometry* arg, ::System::Int32 arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::System::Int32, ::UnityEngine::AI::NavMeshCollectGeometry*, ::System::Int32, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHBUILDER_COLLECTSOURCES_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* CollectSourcesInternal(::System::Int32 arg, ::UnityEngine::Bounds* arg, ::UnityEngine::Transform* arg, ::System::Boolean arg, ::UnityEngine::AI::NavMeshCollectGeometry* arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Int32, ::UnityEngine::Bounds*, ::UnityEngine::Transform*, ::System::Boolean, ::UnityEngine::AI::NavMeshCollectGeometry*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHBUILDER_COLLECTSOURCESINTERNAL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::AI::NavMeshData* BuildNavMeshData(::UnityEngine::AI::NavMeshBuildSettings* arg, Il2CppObject* arg, ::UnityEngine::Bounds* arg, ::UnityEngine::Vector3* arg, ::UnityEngine::Quaternion* arg)
		{
			return (return (::UnityEngine::AI::NavMeshData*(*)(::UnityEngine::AI::NavMeshBuildSettings*, Il2CppObject*, ::UnityEngine::Bounds*, ::UnityEngine::Vector3*, ::UnityEngine::Quaternion*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHBUILDER_BUILDNAVMESHDATA_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean UpdateNavMeshDataListInternal(::UnityEngine::AI::NavMeshData* arg, ::UnityEngine::AI::NavMeshBuildSettings* arg, ::System::Object* arg, ::UnityEngine::Bounds* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::AI::NavMeshData*, ::UnityEngine::AI::NavMeshBuildSettings*, ::System::Object*, ::UnityEngine::Bounds*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHBUILDER_UPDATENAVMESHDATALISTINTERNAL_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::AsyncOperation* UpdateNavMeshDataAsync(::UnityEngine::AI::NavMeshData* arg, ::UnityEngine::AI::NavMeshBuildSettings* arg, Il2CppObject* arg, ::UnityEngine::Bounds* arg)
		{
			return (return (::UnityEngine::AsyncOperation*(*)(::UnityEngine::AI::NavMeshData*, ::UnityEngine::AI::NavMeshBuildSettings*, Il2CppObject*, ::UnityEngine::Bounds*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHBUILDER_UPDATENAVMESHDATAASYNC_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::AsyncOperation* UpdateNavMeshDataAsyncListInternal(::UnityEngine::AI::NavMeshData* arg, ::UnityEngine::AI::NavMeshBuildSettings* arg, ::System::Object* arg, ::UnityEngine::Bounds* arg)
		{
			return (return (::UnityEngine::AsyncOperation*(*)(::UnityEngine::AI::NavMeshData*, ::UnityEngine::AI::NavMeshBuildSettings*, ::System::Object*, ::UnityEngine::Bounds*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHBUILDER_UPDATENAVMESHDATAASYNCLISTINTERNAL_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* CollectSourcesInternal_Injected(::System::Int32 arg, ::UnityEngine::Bounds&* arg, ::UnityEngine::Transform* arg, ::System::Boolean arg, ::UnityEngine::AI::NavMeshCollectGeometry* arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Int32, ::UnityEngine::Bounds&*, ::UnityEngine::Transform*, ::System::Boolean, ::UnityEngine::AI::NavMeshCollectGeometry*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHBUILDER_COLLECTSOURCESINTERNAL_INJECTED_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean UpdateNavMeshDataListInternal_Injected(::UnityEngine::AI::NavMeshData* arg, ::UnityEngine::AI::NavMeshBuildSettings&* arg, ::System::Object* arg, ::UnityEngine::Bounds&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::AI::NavMeshData*, ::UnityEngine::AI::NavMeshBuildSettings&*, ::System::Object*, ::UnityEngine::Bounds&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHBUILDER_UPDATENAVMESHDATALISTINTERNAL_INJECTED_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::AsyncOperation* UpdateNavMeshDataAsyncListInternal_Injected(::UnityEngine::AI::NavMeshData* arg, ::UnityEngine::AI::NavMeshBuildSettings&* arg, ::System::Object* arg, ::UnityEngine::Bounds&* arg)
		{
			return (return (::UnityEngine::AsyncOperation*(*)(::UnityEngine::AI::NavMeshData*, ::UnityEngine::AI::NavMeshBuildSettings&*, ::System::Object*, ::UnityEngine::Bounds&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHBUILDER_UPDATENAVMESHDATAASYNCLISTINTERNAL_INJECTED_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

