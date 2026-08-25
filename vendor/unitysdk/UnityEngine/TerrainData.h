#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class TerrainData; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Vector3&; }

#define UNITYENGINE_TERRAINDATA_GETBOUNDARYVALUE_OFFSET UNITYSDK_OFFSET(0xA2A7E50)
#define UNITYENGINE_TERRAINDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2A7E90)
#define UNITYENGINE_TERRAINDATA_INTERNAL_CREATE_OFFSET UNITYSDK_OFFSET(0xA2A7F30)
#define UNITYENGINE_TERRAINDATA_GET_SIZE_OFFSET UNITYSDK_OFFSET(0xA2A7F70)
#define UNITYENGINE_TERRAINDATA_GETALPHAMAPRESOLUTIONINTERNAL_OFFSET UNITYSDK_OFFSET(0xA2A8010)
#define UNITYENGINE_TERRAINDATA_GET_USERS_OFFSET UNITYSDK_OFFSET(0xA2A7B00)
#define UNITYENGINE_TERRAINDATA_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA2A8050)
#define UNITYENGINE_TERRAINDATA_GET_SIZE_INJECTED_OFFSET UNITYSDK_OFFSET(0xA2A7FD0)

namespace UnityEngine
{
	inline static constexpr unsigned int TerrainData_TypeDefinitionIndex = 37798;

	class TerrainData : public Il2CppObject
	{
	public:
		::System::Int32 k_MaximumResolution; // 0x0
		::System::Int32 k_MinimumDetailResolutionPerPatch; // 0x4
		::System::Int32 k_MaximumDetailResolutionPerPatch; // 0x8
		::System::Int32 k_MaximumDetailPatchCount; // 0xC
		::System::Int32 k_MaximumDetailsPerRes; // 0x10
		::System::Int32 k_MinimumAlphamapResolution; // 0x14
		::System::Int32 k_MaximumAlphamapResolution; // 0x18
		::System::Int32 k_MinimumBaseMapResolution; // 0x1C
		::System::Int32 k_MaximumBaseMapResolution; // 0x20

		::System::Int32 GetBoundaryValue(BoundaryValueType* arg)
		{
			return (return (::System::Int32(*)(BoundaryValueType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINDATA_GETBOUNDARYVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Internal_Create(::UnityEngine::TerrainData* arg)
		{
			((::System::Void(*)(::UnityEngine::TerrainData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINDATA_INTERNAL_CREATE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* get_size()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINDATA_GET_SIZE_OFFSET))(nullptr);
		}

		::System::Single GetAlphamapResolutionInternal()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINDATA_GETALPHAMAPRESOLUTIONINTERNAL_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_users()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINDATA_GET_USERS_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINDATA_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void get_size_Injected(::UnityEngine::Vector3&* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINDATA_GET_SIZE_INJECTED_OFFSET))(arg, nullptr);
		}

	};
}

