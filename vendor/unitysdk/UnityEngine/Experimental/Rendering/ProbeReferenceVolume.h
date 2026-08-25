#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Experimental::Rendering { class ProbeBrickPool; }
namespace UnityEngine::Experimental::Rendering { class ProbeBrickIndex; }
namespace UnityEngine::Experimental::Rendering { class ProbeCellIndices; }
namespace UnityEngine { class Bounds; }
namespace UnityEngine::Experimental::Rendering { class ProbeVolumeSceneData; }
namespace UnityEngine::Experimental::Rendering { class ProbeVolumeTextureMemoryBudget; }
namespace UnityEngine::Experimental::Rendering { class ProbeVolumeSHBands; }
namespace UnityEngine::Experimental::Rendering { class ProbeReferenceVolume; }
namespace UnityEngine::Experimental::Rendering { class ProbeVolumeDebug; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Material; }
namespace UnityEngine::Experimental::Rendering { class ProbeVolumeSystemParameters&; }
namespace UnityEngine::Experimental::Rendering { class ProbeVolumeAsset; }
namespace UnityEngine { class Vector3Int&; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Quaternion; }
namespace UnityEngine { class Matrix4x4; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Experimental::Rendering { class ProbeVolumeShadingParameters; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Shader; }
namespace UnityEngine { class Transform; }

#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_INVALIDATEALLCELLREFS_OFFSET UNITYSDK_OFFSET(0x9F83480)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_GET_ISINITIALIZED_OFFSET UNITYSDK_OFFSET(0x9F834D0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_GET_ENABLEDBYSRP_OFFSET UNITYSDK_OFFSET(0x9F834E0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_GET_SHBANDS_OFFSET UNITYSDK_OFFSET(0x9F834F0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_GET_MEMORYBUDGET_OFFSET UNITYSDK_OFFSET(0x9F83500)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x9F83510)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_SETNUMBEROFCELLSLOADEDPERFRAME_OFFSET UNITYSDK_OFFSET(0x9F83560)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x9F83580)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_SETENABLESTATEFROMSRP_OFFSET UNITYSDK_OFFSET(0x9F83A30)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_FORCESHBAND_OFFSET UNITYSDK_OFFSET(0x9F83A40)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_CLEANUP_OFFSET UNITYSDK_OFFSET(0x9F83BB0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_GETVIDEOMEMORYCOST_OFFSET UNITYSDK_OFFSET(0x9F83CE0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_REMOVECELL_OFFSET UNITYSDK_OFFSET(0x9F83D30)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_ADDCELL_OFFSET UNITYSDK_OFFSET(0x9F841B0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_CHECKCOMPATIBILITYWITHCOLLECTION_OFFSET UNITYSDK_OFFSET(0x9F84340)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_ADDPENDINGASSETLOADING_OFFSET UNITYSDK_OFFSET(0x9F84630)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_ADDPENDINGASSETREMOVAL_OFFSET UNITYSDK_OFFSET(0x9F84E30)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_REMOVEPENDINGASSET_OFFSET UNITYSDK_OFFSET(0x9F84EE0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_PERFORMPENDINGINDEXCHANGEANDINIT_OFFSET UNITYSDK_OFFSET(0x9F851F0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_SETMINBRICKANDMAXSUBDIV_OFFSET UNITYSDK_OFFSET(0x9F85240)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_LOADASSET_OFFSET UNITYSDK_OFFSET(0x9F85570)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_PERFORMPENDINGLOADING_OFFSET UNITYSDK_OFFSET(0x9F85980)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_PERFORMPENDINGDELETION_OFFSET UNITYSDK_OFFSET(0x9F85DC0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_GETNUMBEROFBRICKSATSUBDIV_OFFSET UNITYSDK_OFFSET(0x9F85F90)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_GETCELLINDEXUPDATE_OFFSET UNITYSDK_OFFSET(0x9F86730)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_LOADPENDINGCELLS_OFFSET UNITYSDK_OFFSET(0x9F86880)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_PERFORMPENDINGOPERATIONS_OFFSET UNITYSDK_OFFSET(0x9F870E0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_INITPROBEREFERENCEVOLUME_OFFSET UNITYSDK_OFFSET(0x9F837F0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_SORTPENDINGCELLS_OFFSET UNITYSDK_OFFSET(0x9F87150)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F87360)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_GETRUNTIMERESOURCES_OFFSET UNITYSDK_OFFSET(0x9F879E0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_SETTRS_OFFSET UNITYSDK_OFFSET(0x9F85400)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_SETMAXSUBDIVISION_OFFSET UNITYSDK_OFFSET(0x9F85510)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_CELLSIZE_OFFSET UNITYSDK_OFFSET(0x9F7E810)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_BRICKSIZE_OFFSET UNITYSDK_OFFSET(0x9F87B90)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_MINBRICKSIZE_OFFSET UNITYSDK_OFFSET(0x9F86720)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_MAXBRICKSIZE_OFFSET UNITYSDK_OFFSET(0x9F85900)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_GETREFSPACETOWS_OFFSET UNITYSDK_OFFSET(0x9F87C10)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_GETTRANSFORM_OFFSET UNITYSDK_OFFSET(0x9F87C40)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_GETMAXSUBDIVISION_OFFSET UNITYSDK_OFFSET(0x9F87C80)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_GETMAXSUBDIVISION_OFFSET UNITYSDK_OFFSET(0x9F87C90)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_GETDISTANCEBETWEENPROBES_OFFSET UNITYSDK_OFFSET(0x9F87D00)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_MINDISTANCEBETWEENPROBES_OFFSET UNITYSDK_OFFSET(0x9F87D90)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_DATAHASBEENLOADED_OFFSET UNITYSDK_OFFSET(0x9F87DF0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_CLEAR_OFFSET UNITYSDK_OFFSET(0x9F87E00)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_ADDBRICKS_OFFSET UNITYSDK_OFFSET(0x9F86D30)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_RELEASEBRICKS_OFFSET UNITYSDK_OFFSET(0x9F83FF0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_UPDATECONSTANTBUFFER_OFFSET UNITYSDK_OFFSET(0x9F87F30)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_CLEANUPLOADEDDATA_OFFSET UNITYSDK_OFFSET(0x9F83A90)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_GET_DEBUGDISPLAY_OFFSET UNITYSDK_OFFSET(0x9F881C0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_GET_SUBDIVISIONDEBUGCOLORS_OFFSET UNITYSDK_OFFSET(0x9F881D0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_RENDERDEBUG_OFFSET UNITYSDK_OFFSET(0x9F881E0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_INITIALIZEDEBUG_OFFSET UNITYSDK_OFFSET(0x9F83650)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_CLEANUPDEBUG_OFFSET UNITYSDK_OFFSET(0x9F83C80)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_REFRESHDEBUG_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_DEBUGCELLINDEXCHANGED_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_REGISTERDEBUG_OFFSET UNITYSDK_OFFSET(0x9F887B0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_UNREGISTERDEBUG_OFFSET UNITYSDK_OFFSET(0x9F89B30)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_SHOULDCULLCELL_OFFSET UNITYSDK_OFFSET(0x9F89C20)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_DRAWPROBEDEBUG_OFFSET UNITYSDK_OFFSET(0x9F88240)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_CLEARDEBUGDATA_OFFSET UNITYSDK_OFFSET(0x9F85170)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_CREATEINSTANCEDPROBES_OFFSET UNITYSDK_OFFSET(0x9F89FA0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_ONCLEARLIGHTINGDATA_OFFSET UNITYSDK_OFFSET(0x9F8ACE0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9F8ACF0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME__REGISTERDEBUG_B__119_0_OFFSET UNITYSDK_OFFSET(0x9F8AD60)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME__REGISTERDEBUG_B__119_1_OFFSET UNITYSDK_OFFSET(0x9F8AD80)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME__REGISTERDEBUG_B__119_2_OFFSET UNITYSDK_OFFSET(0x9F8ADA0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME__REGISTERDEBUG_B__119_3_OFFSET UNITYSDK_OFFSET(0x9F8ADC0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME__REGISTERDEBUG_B__119_4_OFFSET UNITYSDK_OFFSET(0x9F8ADE0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME__REGISTERDEBUG_B__119_5_OFFSET UNITYSDK_OFFSET(0x9F8AE00)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME__REGISTERDEBUG_B__119_7_OFFSET UNITYSDK_OFFSET(0x9F8AE20)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME__REGISTERDEBUG_B__119_8_OFFSET UNITYSDK_OFFSET(0x9F8AE40)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME__REGISTERDEBUG_B__119_9_OFFSET UNITYSDK_OFFSET(0x9F8AE60)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME__REGISTERDEBUG_B__119_10_OFFSET UNITYSDK_OFFSET(0x9F8AE80)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME__REGISTERDEBUG_B__119_11_OFFSET UNITYSDK_OFFSET(0x9F8AEA0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME__REGISTERDEBUG_B__119_12_OFFSET UNITYSDK_OFFSET(0x9F8AEC0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME__REGISTERDEBUG_B__119_13_OFFSET UNITYSDK_OFFSET(0x9F8AEE0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME__REGISTERDEBUG_B__119_14_OFFSET UNITYSDK_OFFSET(0x9F8AF00)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME__REGISTERDEBUG_B__119_17_OFFSET UNITYSDK_OFFSET(0x9F8AF20)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME__REGISTERDEBUG_B__119_18_OFFSET UNITYSDK_OFFSET(0x9F8AF40)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME__REGISTERDEBUG_B__119_19_OFFSET UNITYSDK_OFFSET(0x9F8AF60)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME__REGISTERDEBUG_B__119_20_OFFSET UNITYSDK_OFFSET(0x9F8AF80)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME__REGISTERDEBUG_B__119_22_OFFSET UNITYSDK_OFFSET(0x9F8AFA0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME__REGISTERDEBUG_B__119_23_OFFSET UNITYSDK_OFFSET(0x9F8AFC0)

namespace UnityEngine::Experimental::Rendering
{
	inline static constexpr unsigned int ProbeReferenceVolume_TypeDefinitionIndex = 33806;

	class ProbeReferenceVolume : public Il2CppObject
	{
	public:
		::System::Int32 kProbeIndexPoolAllocationSize; // 0x0
		::System::Boolean m_IsInitialized; // 0x10
		::System::Int32 m_ID; // 0x14
		RefVolTransform* m_Transform; // 0x18
		::System::Int32 m_MaxSubdivision; // 0x78
		::UnityEngine::Experimental::Rendering::ProbeBrickPool* m_Pool; // 0x80
		::UnityEngine::Experimental::Rendering::ProbeBrickIndex* m_Index; // 0x88
		::UnityEngine::Experimental::Rendering::ProbeCellIndices* m_CellIndices; // 0x90
		Il2CppObject* m_TmpSrcChunks; // 0x98
		::Il2CppArray<::System::Object*>* m_PositionOffsets; // 0xA0
		Il2CppObject* m_Registry; // 0xA8
		::UnityEngine::Bounds* m_CurrGlobalBounds; // 0xB0
		Il2CppObject* cells; // 0xC8
		Il2CppObject* m_ChunkInfo; // 0xD0
		::UnityEngine::Experimental::Rendering::ProbeVolumeSceneData* sceneData; // 0xD8
		Il2CppObject* retrieveExtraDataAction; // 0xE0
		::System::Boolean m_BricksLoaded; // 0xE8
		Il2CppObject* m_CellToBricks; // 0xF0
		Il2CppObject* m_BricksToCellUpdateInfo; // 0xF8
		Il2CppObject* m_PendingAssetsToBeLoaded; // 0x100
		Il2CppObject* m_PendingAssetsToBeUnloaded; // 0x108
		Il2CppObject* m_ActiveAssets; // 0x110
		Il2CppObject* m_CellsToBeLoaded; // 0x118
		Il2CppObject* m_CellRefCounting; // 0x120
		::System::Boolean m_NeedLoadAsset; // 0x128
		::System::Boolean m_ProbeReferenceVolumeInit; // 0x129
		::System::Boolean m_EnabledBySRP; // 0x12A
		InitInfo* m_PendingInitInfo; // 0x12C
		::System::Boolean m_NeedsIndexRebuild; // 0x144
		::System::Boolean m_HasChangedIndex; // 0x145
		::System::Int32 m_CBShaderID; // 0x148
		::System::Int32 m_NumberOfCellsLoadedPerFrame; // 0x14C
		::UnityEngine::Experimental::Rendering::ProbeVolumeTextureMemoryBudget* m_MemoryBudget; // 0x150
		::UnityEngine::Experimental::Rendering::ProbeVolumeSHBands* m_SHBands; // 0x154
		::System::Boolean clearAssetsOnVolumeClear; // 0x158
		::UnityEngine::Experimental::Rendering::ProbeReferenceVolume* _instance; // 0x0
		::System::Int32 kProbesPerBatch; // 0x0
		::UnityEngine::Experimental::Rendering::ProbeVolumeDebug* _debugDisplay_k__BackingField; // 0x160
		::Il2CppArray<::System::Object*>* _subdivisionDebugColors_k__BackingField; // 0x168
		::Il2CppArray<::System::Object*>* m_DebugItems; // 0x170
		::UnityEngine::Mesh* m_DebugMesh; // 0x178
		::UnityEngine::Material* m_DebugMaterial; // 0x180
		Il2CppObject* m_CellDebugData; // 0x188
		::Il2CppArray<::System::Object*>* m_DebugFrustumPlanes; // 0x190
		::System::Single dilationValidtyThreshold; // 0x198
		Il2CppObject* realtimeSubdivisionInfo; // 0x1A0

		::System::Void InvalidateAllCellRefs()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_INVALIDATEALLCELLREFS_OFFSET))(nullptr);
		}

		::System::Boolean get_isInitialized()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_GET_ISINITIALIZED_OFFSET))(nullptr);
		}

		::System::Boolean get_enabledBySRP()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_GET_ENABLEDBYSRP_OFFSET))(nullptr);
		}

		::UnityEngine::Experimental::Rendering::ProbeVolumeSHBands* get_shBands()
		{
			return (return (::UnityEngine::Experimental::Rendering::ProbeVolumeSHBands*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_GET_SHBANDS_OFFSET))(nullptr);
		}

		::UnityEngine::Experimental::Rendering::ProbeVolumeTextureMemoryBudget* get_memoryBudget()
		{
			return (return (::UnityEngine::Experimental::Rendering::ProbeVolumeTextureMemoryBudget*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_GET_MEMORYBUDGET_OFFSET))(nullptr);
		}

		::UnityEngine::Experimental::Rendering::ProbeReferenceVolume* get_instance()
		{
			return (return (::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_GET_INSTANCE_OFFSET))(nullptr);
		}

		::System::Void SetNumberOfCellsLoadedPerFrame(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_SETNUMBEROFCELLSLOADEDPERFRAME_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize(::UnityEngine::Experimental::Rendering::ProbeVolumeSystemParameters&* arg)
		{
			((::System::Void(*)(::UnityEngine::Experimental::Rendering::ProbeVolumeSystemParameters&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void SetEnableStateFromSRP(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_SETENABLESTATEFROMSRP_OFFSET))(arg, nullptr);
		}

		::System::Void ForceSHBand(::UnityEngine::Experimental::Rendering::ProbeVolumeSHBands* arg)
		{
			((::System::Void(*)(::UnityEngine::Experimental::Rendering::ProbeVolumeSHBands*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_FORCESHBAND_OFFSET))(arg, nullptr);
		}

		::System::Void Cleanup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_CLEANUP_OFFSET))(nullptr);
		}

		::System::Int32 GetVideoMemoryCost()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_GETVIDEOMEMORYCOST_OFFSET))(nullptr);
		}

		::System::Void RemoveCell(Cell* arg)
		{
			((::System::Void(*)(Cell*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_REMOVECELL_OFFSET))(arg, nullptr);
		}

		::System::Void AddCell(Cell* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Cell*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_ADDCELL_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean CheckCompatibilityWithCollection(::UnityEngine::Experimental::Rendering::ProbeVolumeAsset* arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Experimental::Rendering::ProbeVolumeAsset*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_CHECKCOMPATIBILITYWITHCOLLECTION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPendingAssetLoading(::UnityEngine::Experimental::Rendering::ProbeVolumeAsset* arg)
		{
			((::System::Void(*)(::UnityEngine::Experimental::Rendering::ProbeVolumeAsset*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_ADDPENDINGASSETLOADING_OFFSET))(arg, nullptr);
		}

		::System::Void AddPendingAssetRemoval(::UnityEngine::Experimental::Rendering::ProbeVolumeAsset* arg)
		{
			((::System::Void(*)(::UnityEngine::Experimental::Rendering::ProbeVolumeAsset*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_ADDPENDINGASSETREMOVAL_OFFSET))(arg, nullptr);
		}

		::System::Void RemovePendingAsset(::UnityEngine::Experimental::Rendering::ProbeVolumeAsset* arg)
		{
			((::System::Void(*)(::UnityEngine::Experimental::Rendering::ProbeVolumeAsset*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_REMOVEPENDINGASSET_OFFSET))(arg, nullptr);
		}

		::System::Void PerformPendingIndexChangeAndInit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_PERFORMPENDINGINDEXCHANGEANDINIT_OFFSET))(nullptr);
		}

		::System::Void SetMinBrickAndMaxSubdiv(::System::Single arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Single, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_SETMINBRICKANDMAXSUBDIV_OFFSET))(arg, arg, nullptr);
		}

		::System::Void LoadAsset(::UnityEngine::Experimental::Rendering::ProbeVolumeAsset* arg)
		{
			((::System::Void(*)(::UnityEngine::Experimental::Rendering::ProbeVolumeAsset*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_LOADASSET_OFFSET))(arg, nullptr);
		}

		::System::Void PerformPendingLoading()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_PERFORMPENDINGLOADING_OFFSET))(nullptr);
		}

		::System::Void PerformPendingDeletion()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_PERFORMPENDINGDELETION_OFFSET))(nullptr);
		}

		::System::Int32 GetNumberOfBricksAtSubdiv(Cell* arg, ::UnityEngine::Vector3Int&* arg, ::UnityEngine::Vector3Int&* arg)
		{
			return (return (::System::Int32(*)(Cell*, ::UnityEngine::Vector3Int&*, ::UnityEngine::Vector3Int&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_GETNUMBEROFBRICKSATSUBDIV_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean GetCellIndexUpdate(Cell* arg, CellIndexUpdateInfo&* arg)
		{
			return (return (::System::Boolean(*)(Cell*, CellIndexUpdateInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_GETCELLINDEXUPDATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void LoadPendingCells(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_LOADPENDINGCELLS_OFFSET))(arg, nullptr);
		}

		::System::Void PerformPendingOperations(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_PERFORMPENDINGOPERATIONS_OFFSET))(arg, nullptr);
		}

		::System::Void InitProbeReferenceVolume(::System::Int32 arg, ::UnityEngine::Experimental::Rendering::ProbeVolumeTextureMemoryBudget* arg, ::UnityEngine::Experimental::Rendering::ProbeVolumeSHBands* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Experimental::Rendering::ProbeVolumeTextureMemoryBudget*, ::UnityEngine::Experimental::Rendering::ProbeVolumeSHBands*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_INITPROBEREFERENCEVOLUME_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SortPendingCells(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_SORTPENDINGCELLS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_.CTOR_OFFSET))(nullptr);
		}

		RuntimeResources* GetRuntimeResources()
		{
			return (return (RuntimeResources*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_GETRUNTIMERESOURCES_OFFSET))(nullptr);
		}

		::System::Void SetTRS(::UnityEngine::Vector3* arg, ::UnityEngine::Quaternion* arg, ::System::Single arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::UnityEngine::Quaternion*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_SETTRS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SetMaxSubdivision(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_SETMAXSUBDIVISION_OFFSET))(arg, nullptr);
		}

		::System::Int32 CellSize(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_CELLSIZE_OFFSET))(arg, nullptr);
		}

		::System::Single BrickSize(::System::Int32 arg)
		{
			return (return (::System::Single(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_BRICKSIZE_OFFSET))(arg, nullptr);
		}

		::System::Single MinBrickSize()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_MINBRICKSIZE_OFFSET))(nullptr);
		}

		::System::Single MaxBrickSize()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_MAXBRICKSIZE_OFFSET))(nullptr);
		}

		::UnityEngine::Matrix4x4* GetRefSpaceToWS()
		{
			return (return (::UnityEngine::Matrix4x4*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_GETREFSPACETOWS_OFFSET))(nullptr);
		}

		RefVolTransform* GetTransform()
		{
			return (return (RefVolTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_GETTRANSFORM_OFFSET))(nullptr);
		}

		::System::Int32 GetMaxSubdivision()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_GETMAXSUBDIVISION_OFFSET))(nullptr);
		}

		::System::Int32 GetMaxSubdivision(::System::Single arg)
		{
			return (return (::System::Int32(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_GETMAXSUBDIVISION_OFFSET))(arg, nullptr);
		}

		::System::Single GetDistanceBetweenProbes(::System::Int32 arg)
		{
			return (return (::System::Single(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_GETDISTANCEBETWEENPROBES_OFFSET))(arg, nullptr);
		}

		::System::Single MinDistanceBetweenProbes()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_MINDISTANCEBETWEENPROBES_OFFSET))(nullptr);
		}

		::System::Boolean DataHasBeenLoaded()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_DATAHASBEENLOADED_OFFSET))(nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_CLEAR_OFFSET))(nullptr);
		}

		RegId* AddBricks(Il2CppObject* arg, DataLocation* arg, CellIndexUpdateInfo* arg, Il2CppObject&* arg)
		{
			return (return (RegId*(*)(Il2CppObject*, DataLocation*, CellIndexUpdateInfo*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_ADDBRICKS_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void ReleaseBricks(RegId* arg)
		{
			((::System::Void(*)(RegId*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_RELEASEBRICKS_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateConstantBuffer(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Experimental::Rendering::ProbeVolumeShadingParameters* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Experimental::Rendering::ProbeVolumeShadingParameters*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_UPDATECONSTANTBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void CleanupLoadedData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_CLEANUPLOADEDDATA_OFFSET))(nullptr);
		}

		::UnityEngine::Experimental::Rendering::ProbeVolumeDebug* get_debugDisplay()
		{
			return (return (::UnityEngine::Experimental::Rendering::ProbeVolumeDebug*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_GET_DEBUGDISPLAY_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_subdivisionDebugColors()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_GET_SUBDIVISIONDEBUGCOLORS_OFFSET))(nullptr);
		}

		::System::Void RenderDebug(::UnityEngine::Camera* arg)
		{
			((::System::Void(*)(::UnityEngine::Camera*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_RENDERDEBUG_OFFSET))(arg, nullptr);
		}

		::System::Void InitializeDebug(::UnityEngine::Mesh* arg, ::UnityEngine::Shader* arg)
		{
			((::System::Void(*)(::UnityEngine::Mesh*, ::UnityEngine::Shader*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_INITIALIZEDEBUG_OFFSET))(arg, arg, nullptr);
		}

		::System::Void CleanupDebug()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_CLEANUPDEBUG_OFFSET))(nullptr);
		}

		::System::Void RefreshDebug(Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_REFRESHDEBUG_OFFSET))(arg, arg, nullptr);
		}

		::System::Void DebugCellIndexChanged(Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_DEBUGCELLINDEXCHANGED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RegisterDebug()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_REGISTERDEBUG_OFFSET))(nullptr);
		}

		::System::Void UnregisterDebug(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_UNREGISTERDEBUG_OFFSET))(arg, nullptr);
		}

		::System::Boolean ShouldCullCell(::UnityEngine::Vector3* arg, ::UnityEngine::Transform* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Vector3*, ::UnityEngine::Transform*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_SHOULDCULLCELL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void DrawProbeDebug(::UnityEngine::Camera* arg)
		{
			((::System::Void(*)(::UnityEngine::Camera*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_DRAWPROBEDEBUG_OFFSET))(arg, nullptr);
		}

		::System::Void ClearDebugData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_CLEARDEBUGDATA_OFFSET))(nullptr);
		}

		::System::Void CreateInstancedProbes()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_CREATEINSTANCEDPROBES_OFFSET))(nullptr);
		}

		::System::Void OnClearLightingdata()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_ONCLEARLIGHTINGDATA_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME_.CCTOR_OFFSET))(nullptr);
		}

		::System::Boolean _RegisterDebug_b__119_0()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME__REGISTERDEBUG_B__119_0_OFFSET))(nullptr);
		}

		::System::Void _RegisterDebug_b__119_1(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME__REGISTERDEBUG_B__119_1_OFFSET))(arg, nullptr);
		}

		::System::Boolean _RegisterDebug_b__119_2()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME__REGISTERDEBUG_B__119_2_OFFSET))(nullptr);
		}

		::System::Void _RegisterDebug_b__119_3(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME__REGISTERDEBUG_B__119_3_OFFSET))(arg, nullptr);
		}

		::System::Single _RegisterDebug_b__119_4()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME__REGISTERDEBUG_B__119_4_OFFSET))(nullptr);
		}

		::System::Void _RegisterDebug_b__119_5(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME__REGISTERDEBUG_B__119_5_OFFSET))(arg, nullptr);
		}

		::System::Boolean _RegisterDebug_b__119_7()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME__REGISTERDEBUG_B__119_7_OFFSET))(nullptr);
		}

		::System::Void _RegisterDebug_b__119_8(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME__REGISTERDEBUG_B__119_8_OFFSET))(arg, nullptr);
		}

		::System::Int32 _RegisterDebug_b__119_9()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME__REGISTERDEBUG_B__119_9_OFFSET))(nullptr);
		}

		::System::Void _RegisterDebug_b__119_10(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME__REGISTERDEBUG_B__119_10_OFFSET))(arg, nullptr);
		}

		::System::Int32 _RegisterDebug_b__119_11()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME__REGISTERDEBUG_B__119_11_OFFSET))(nullptr);
		}

		::System::Void _RegisterDebug_b__119_12(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME__REGISTERDEBUG_B__119_12_OFFSET))(arg, nullptr);
		}

		::System::Single _RegisterDebug_b__119_13()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME__REGISTERDEBUG_B__119_13_OFFSET))(nullptr);
		}

		::System::Void _RegisterDebug_b__119_14(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME__REGISTERDEBUG_B__119_14_OFFSET))(arg, nullptr);
		}

		::System::Single _RegisterDebug_b__119_17()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME__REGISTERDEBUG_B__119_17_OFFSET))(nullptr);
		}

		::System::Void _RegisterDebug_b__119_18(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME__REGISTERDEBUG_B__119_18_OFFSET))(arg, nullptr);
		}

		::System::Single _RegisterDebug_b__119_19()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME__REGISTERDEBUG_B__119_19_OFFSET))(nullptr);
		}

		::System::Void _RegisterDebug_b__119_20(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME__REGISTERDEBUG_B__119_20_OFFSET))(arg, nullptr);
		}

		::System::Int32 _RegisterDebug_b__119_22()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME__REGISTERDEBUG_B__119_22_OFFSET))(nullptr);
		}

		::System::Void _RegisterDebug_b__119_23(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEREFERENCEVOLUME__REGISTERDEBUG_B__119_23_OFFSET))(arg, nullptr);
		}

	};
}

