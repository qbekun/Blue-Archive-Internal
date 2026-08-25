#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Vector3; }
namespace UnityEngine::AI { class NavMeshHit&; }
namespace UnityEngine::AI { class NavMeshDataInstance; }
namespace UnityEngine::AI { class NavMeshData; }
namespace UnityEngine { class Quaternion; }
namespace UnityEngine::AI { class NavMeshLinkInstance; }
namespace UnityEngine::AI { class NavMeshLinkData; }
namespace UnityEngine::AI { class NavMeshBuildSettings; }
namespace UnityEngine { class Vector3&; }
namespace UnityEngine { class Quaternion&; }
namespace UnityEngine::AI { class NavMeshLinkData&; }
namespace UnityEngine::AI { class NavMeshBuildSettings&; }

#define UNITYENGINE_AI_NAVMESH_INTERNAL_CALLONNAVMESHPREUPDATE_OFFSET UNITYSDK_OFFSET(0xA1B3030)
#define UNITYENGINE_AI_NAVMESH_SAMPLEPOSITION_OFFSET UNITYSDK_OFFSET(0xA1B3080)
#define UNITYENGINE_AI_NAVMESH_GETAREAFROMNAME_OFFSET UNITYSDK_OFFSET(0xA1B3140)
#define UNITYENGINE_AI_NAVMESH_ADDNAVMESHDATA_OFFSET UNITYSDK_OFFSET(0xA1B3180)
#define UNITYENGINE_AI_NAVMESH_ISVALIDNAVMESHDATAHANDLE_OFFSET UNITYSDK_OFFSET(0xA1B2B90)
#define UNITYENGINE_AI_NAVMESH_ISVALIDLINKHANDLE_OFFSET UNITYSDK_OFFSET(0xA1B2E40)
#define UNITYENGINE_AI_NAVMESH_INTERNALSETOWNER_OFFSET UNITYSDK_OFFSET(0xA1B2D40)
#define UNITYENGINE_AI_NAVMESH_INTERNALSETLINKOWNER_OFFSET UNITYSDK_OFFSET(0xA1B2FF0)
#define UNITYENGINE_AI_NAVMESH_ADDNAVMESHDATATRANSFORMEDINTERNAL_OFFSET UNITYSDK_OFFSET(0xA1B3280)
#define UNITYENGINE_AI_NAVMESH_REMOVENAVMESHDATAINTERNAL_OFFSET UNITYSDK_OFFSET(0xA1B2C20)
#define UNITYENGINE_AI_NAVMESH_ADDLINK_OFFSET UNITYSDK_OFFSET(0xA1B3320)
#define UNITYENGINE_AI_NAVMESH_ADDLINKINTERNAL_OFFSET UNITYSDK_OFFSET(0xA1B3390)
#define UNITYENGINE_AI_NAVMESH_REMOVELINKINTERNAL_OFFSET UNITYSDK_OFFSET(0xA1B2ED0)
#define UNITYENGINE_AI_NAVMESH_GETSETTINGSBYID_OFFSET UNITYSDK_OFFSET(0xA1B3430)
#define UNITYENGINE_AI_NAVMESH_GETSETTINGSCOUNT_OFFSET UNITYSDK_OFFSET(0xA1B34F0)
#define UNITYENGINE_AI_NAVMESH_GETSETTINGSBYINDEX_OFFSET UNITYSDK_OFFSET(0xA1B3530)
#define UNITYENGINE_AI_NAVMESH_GETSETTINGSNAMEFROMID_OFFSET UNITYSDK_OFFSET(0xA1B35F0)
#define UNITYENGINE_AI_NAVMESH_SAMPLEPOSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1B30E0)
#define UNITYENGINE_AI_NAVMESH_ADDNAVMESHDATATRANSFORMEDINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1B32D0)
#define UNITYENGINE_AI_NAVMESH_ADDLINKINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1B33E0)
#define UNITYENGINE_AI_NAVMESH_GETSETTINGSBYID_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1B34B0)
#define UNITYENGINE_AI_NAVMESH_GETSETTINGSBYINDEX_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1B35B0)

namespace UnityEngine::AI
{
	inline static constexpr unsigned int NavMesh_TypeDefinitionIndex = 37504;

	class NavMesh : public Il2CppObject
	{
	public:
		OnNavMeshPreUpdate* onPreUpdate; // 0x0

		::System::Void Internal_CallOnNavMeshPreUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_INTERNAL_CALLONNAVMESHPREUPDATE_OFFSET))(nullptr);
		}

		::System::Boolean SamplePosition(::UnityEngine::Vector3* arg, ::UnityEngine::AI::NavMeshHit&* arg, ::System::Single arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Vector3*, ::UnityEngine::AI::NavMeshHit&*, ::System::Single, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_SAMPLEPOSITION_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 GetAreaFromName(::System::String* str)
		{
			return (return (::System::Int32(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_GETAREAFROMNAME_OFFSET))(str, nullptr);
		}

		::UnityEngine::AI::NavMeshDataInstance* AddNavMeshData(::UnityEngine::AI::NavMeshData* arg, ::UnityEngine::Vector3* arg, ::UnityEngine::Quaternion* arg)
		{
			return (return (::UnityEngine::AI::NavMeshDataInstance*(*)(::UnityEngine::AI::NavMeshData*, ::UnityEngine::Vector3*, ::UnityEngine::Quaternion*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_ADDNAVMESHDATA_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean IsValidNavMeshDataHandle(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_ISVALIDNAVMESHDATAHANDLE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsValidLinkHandle(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_ISVALIDLINKHANDLE_OFFSET))(arg, nullptr);
		}

		::System::Boolean InternalSetOwner(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_INTERNALSETOWNER_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean InternalSetLinkOwner(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_INTERNALSETLINKOWNER_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 AddNavMeshDataTransformedInternal(::UnityEngine::AI::NavMeshData* arg, ::UnityEngine::Vector3* arg, ::UnityEngine::Quaternion* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::AI::NavMeshData*, ::UnityEngine::Vector3*, ::UnityEngine::Quaternion*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_ADDNAVMESHDATATRANSFORMEDINTERNAL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void RemoveNavMeshDataInternal(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_REMOVENAVMESHDATAINTERNAL_OFFSET))(arg, nullptr);
		}

		::UnityEngine::AI::NavMeshLinkInstance* AddLink(::UnityEngine::AI::NavMeshLinkData* arg, ::UnityEngine::Vector3* arg, ::UnityEngine::Quaternion* arg)
		{
			return (return (::UnityEngine::AI::NavMeshLinkInstance*(*)(::UnityEngine::AI::NavMeshLinkData*, ::UnityEngine::Vector3*, ::UnityEngine::Quaternion*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_ADDLINK_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 AddLinkInternal(::UnityEngine::AI::NavMeshLinkData* arg, ::UnityEngine::Vector3* arg, ::UnityEngine::Quaternion* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::AI::NavMeshLinkData*, ::UnityEngine::Vector3*, ::UnityEngine::Quaternion*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_ADDLINKINTERNAL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void RemoveLinkInternal(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_REMOVELINKINTERNAL_OFFSET))(arg, nullptr);
		}

		::UnityEngine::AI::NavMeshBuildSettings* GetSettingsByID(::System::Int32 arg)
		{
			return (return (::UnityEngine::AI::NavMeshBuildSettings*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_GETSETTINGSBYID_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetSettingsCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_GETSETTINGSCOUNT_OFFSET))(nullptr);
		}

		::UnityEngine::AI::NavMeshBuildSettings* GetSettingsByIndex(::System::Int32 arg)
		{
			return (return (::UnityEngine::AI::NavMeshBuildSettings*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_GETSETTINGSBYINDEX_OFFSET))(arg, nullptr);
		}

		::System::String* GetSettingsNameFromID(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_GETSETTINGSNAMEFROMID_OFFSET))(arg, nullptr);
		}

		::System::Boolean SamplePosition_Injected(::UnityEngine::Vector3&* arg, ::UnityEngine::AI::NavMeshHit&* arg, ::System::Single arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Vector3&*, ::UnityEngine::AI::NavMeshHit&*, ::System::Single, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_SAMPLEPOSITION_INJECTED_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 AddNavMeshDataTransformedInternal_Injected(::UnityEngine::AI::NavMeshData* arg, ::UnityEngine::Vector3&* arg, ::UnityEngine::Quaternion&* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::AI::NavMeshData*, ::UnityEngine::Vector3&*, ::UnityEngine::Quaternion&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_ADDNAVMESHDATATRANSFORMEDINTERNAL_INJECTED_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 AddLinkInternal_Injected(::UnityEngine::AI::NavMeshLinkData&* arg, ::UnityEngine::Vector3&* arg, ::UnityEngine::Quaternion&* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::AI::NavMeshLinkData&*, ::UnityEngine::Vector3&*, ::UnityEngine::Quaternion&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_ADDLINKINTERNAL_INJECTED_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void GetSettingsByID_Injected(::System::Int32 arg, ::UnityEngine::AI::NavMeshBuildSettings&* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::AI::NavMeshBuildSettings&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_GETSETTINGSBYID_INJECTED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GetSettingsByIndex_Injected(::System::Int32 arg, ::UnityEngine::AI::NavMeshBuildSettings&* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::AI::NavMeshBuildSettings&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_GETSETTINGSBYINDEX_INJECTED_OFFSET))(arg, arg, nullptr);
		}

	};
}

