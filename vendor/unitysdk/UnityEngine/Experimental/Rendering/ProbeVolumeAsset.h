#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Vector3Int; }
namespace UnityEngine { class Bounds; }
namespace UnityEngine::Experimental::Rendering { class ProbeVolumeSHBands; }
namespace UnityEngine::Experimental::Rendering { class ProbeVolumeAsset; }

#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEVOLUMEASSET_GET_MAXSUBDIVISION_OFFSET UNITYSDK_OFFSET(0x9F858E0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEVOLUMEASSET_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x9F8C1E0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEVOLUMEASSET_GETSERIALIZEDFULLPATH_OFFSET UNITYSDK_OFFSET(0x9F8C1F0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEVOLUMEASSET_GET_MINBRICKSIZE_OFFSET UNITYSDK_OFFSET(0x9F858C0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEVOLUMEASSET_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F8C200)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEVOLUMEASSET_COMPATIBLEWITH_OFFSET UNITYSDK_OFFSET(0x9F845C0)

namespace UnityEngine::Experimental::Rendering
{
	inline static constexpr unsigned int ProbeVolumeAsset_TypeDefinitionIndex = 33813;

	class ProbeVolumeAsset : public Il2CppObject
	{
	public:
		::System::Int32 m_Version; // 0x18
		Il2CppObject* cells; // 0x20
		::UnityEngine::Vector3Int* maxCellPosition; // 0x28
		::UnityEngine::Vector3Int* minCellPosition; // 0x34
		::UnityEngine::Bounds* globalBounds; // 0x40
		::UnityEngine::Experimental::Rendering::ProbeVolumeSHBands* bands; // 0x58
		::System::String* m_AssetFullPath; // 0x60
		::System::Int32 cellSizeInBricks; // 0x68
		::System::Single minDistanceBetweenProbes; // 0x6C
		::System::Int32 simplificationLevels; // 0x70

		::System::Int32 get_maxSubdivision()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEVOLUMEASSET_GET_MAXSUBDIVISION_OFFSET))(nullptr);
		}

		::System::Int32 get_Version()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEVOLUMEASSET_GET_VERSION_OFFSET))(nullptr);
		}

		::System::String* GetSerializedFullPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEVOLUMEASSET_GETSERIALIZEDFULLPATH_OFFSET))(nullptr);
		}

		::System::Single get_minBrickSize()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEVOLUMEASSET_GET_MINBRICKSIZE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEVOLUMEASSET_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean CompatibleWith(::UnityEngine::Experimental::Rendering::ProbeVolumeAsset* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Experimental::Rendering::ProbeVolumeAsset*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEVOLUMEASSET_COMPATIBLEWITH_OFFSET))(arg, nullptr);
		}

	};
}

