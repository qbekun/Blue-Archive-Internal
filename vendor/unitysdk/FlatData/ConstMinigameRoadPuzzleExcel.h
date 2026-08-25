#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class ConstMinigameRoadPuzzleExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define FLATDATA_CONSTMINIGAMEROADPUZZLEEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD25580)
#define FLATDATA_CONSTMINIGAMEROADPUZZLEEXCEL_GETROOTASCONSTMINIGAMEROADPUZZLEEXCEL_OFFSET UNITYSDK_OFFSET(0xD25590)
#define FLATDATA_CONSTMINIGAMEROADPUZZLEEXCEL_GETROOTASCONSTMINIGAMEROADPUZZLEEXCEL_OFFSET UNITYSDK_OFFSET(0xD255F0)
#define FLATDATA_CONSTMINIGAMEROADPUZZLEEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0xD25650)
#define FLATDATA_CONSTMINIGAMEROADPUZZLEEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD252A0)
#define FLATDATA_CONSTMINIGAMEROADPUZZLEEXCEL_GET_ROADPUZZLEMAPBOUNDARYOFFSETLEFT_OFFSET UNITYSDK_OFFSET(0xD25670)
#define FLATDATA_CONSTMINIGAMEROADPUZZLEEXCEL_GET_ROADPUZZLEMAPBOUNDARYOFFSETLEFT_OFFSET UNITYSDK_OFFSET(0xD256C0)
#define FLATDATA_CONSTMINIGAMEROADPUZZLEEXCEL_GET_ROADPUZZLEMAPBOUNDARYOFFSETRIGHT_OFFSET UNITYSDK_OFFSET(0xD25740)
#define FLATDATA_CONSTMINIGAMEROADPUZZLEEXCEL_GET_ROADPUZZLEMAPBOUNDARYOFFSETRIGHT_OFFSET UNITYSDK_OFFSET(0xD25790)
#define FLATDATA_CONSTMINIGAMEROADPUZZLEEXCEL_GET_ROADPUZZLEMAPBOUNDARYOFFSETTOP_OFFSET UNITYSDK_OFFSET(0xD25810)
#define FLATDATA_CONSTMINIGAMEROADPUZZLEEXCEL_GET_ROADPUZZLEMAPBOUNDARYOFFSETTOP_OFFSET UNITYSDK_OFFSET(0xD25860)
#define FLATDATA_CONSTMINIGAMEROADPUZZLEEXCEL_GET_ROADPUZZLEMAPBOUNDARYOFFSETBOTTOM_OFFSET UNITYSDK_OFFSET(0xD258E0)
#define FLATDATA_CONSTMINIGAMEROADPUZZLEEXCEL_GET_ROADPUZZLEMAPBOUNDARYOFFSETBOTTOM_OFFSET UNITYSDK_OFFSET(0xD25930)
#define FLATDATA_CONSTMINIGAMEROADPUZZLEEXCEL_GET_ROADPUZZLEMAPCENTEROFFSETX_OFFSET UNITYSDK_OFFSET(0xD259B0)
#define FLATDATA_CONSTMINIGAMEROADPUZZLEEXCEL_GET_ROADPUZZLEMAPCENTEROFFSETX_OFFSET UNITYSDK_OFFSET(0xD25A00)
#define FLATDATA_CONSTMINIGAMEROADPUZZLEEXCEL_GET_ROADPUZZLEMAPCENTEROFFSETY_OFFSET UNITYSDK_OFFSET(0xD25A80)
#define FLATDATA_CONSTMINIGAMEROADPUZZLEEXCEL_GET_ROADPUZZLEMAPCENTEROFFSETY_OFFSET UNITYSDK_OFFSET(0xD25AD0)
#define FLATDATA_CONSTMINIGAMEROADPUZZLEEXCEL_GET_CAMERAANGLE_OFFSET UNITYSDK_OFFSET(0xD25B50)
#define FLATDATA_CONSTMINIGAMEROADPUZZLEEXCEL_GET_CAMERAANGLE_OFFSET UNITYSDK_OFFSET(0xD25BA0)
#define FLATDATA_CONSTMINIGAMEROADPUZZLEEXCEL_GET_CAMERAZOOMMAX_OFFSET UNITYSDK_OFFSET(0xD25C20)
#define FLATDATA_CONSTMINIGAMEROADPUZZLEEXCEL_GET_CAMERAZOOMMAX_OFFSET UNITYSDK_OFFSET(0xD25C70)
#define FLATDATA_CONSTMINIGAMEROADPUZZLEEXCEL_GET_CAMERAZOOMMIN_OFFSET UNITYSDK_OFFSET(0xD25CF0)
#define FLATDATA_CONSTMINIGAMEROADPUZZLEEXCEL_GET_CAMERAZOOMMIN_OFFSET UNITYSDK_OFFSET(0xD25D40)
#define FLATDATA_CONSTMINIGAMEROADPUZZLEEXCEL_GET_CAMERAZOOMDEFAULT_OFFSET UNITYSDK_OFFSET(0xD25DC0)
#define FLATDATA_CONSTMINIGAMEROADPUZZLEEXCEL_GET_CAMERAZOOMDEFAULT_OFFSET UNITYSDK_OFFSET(0xD25E10)
#define FLATDATA_CONSTMINIGAMEROADPUZZLEEXCEL_GET_STAGELOADINGPROGRESSTIME_OFFSET UNITYSDK_OFFSET(0xD25E90)
#define FLATDATA_CONSTMINIGAMEROADPUZZLEEXCEL_GET_STAGELOADINGPROGRESSTIME_OFFSET UNITYSDK_OFFSET(0xD25EE0)
#define FLATDATA_CONSTMINIGAMEROADPUZZLEEXCEL_GET_TILEROTATIONDEGREE_OFFSET UNITYSDK_OFFSET(0xD25F60)
#define FLATDATA_CONSTMINIGAMEROADPUZZLEEXCEL_GET_TILEROTATIONDEGREE_OFFSET UNITYSDK_OFFSET(0xD25FB0)
#define FLATDATA_CONSTMINIGAMEROADPUZZLEEXCEL_GET_STARTSTAGEINDEX_OFFSET UNITYSDK_OFFSET(0xD26030)
#define FLATDATA_CONSTMINIGAMEROADPUZZLEEXCEL_GET_STARTSTAGEINDEX_OFFSET UNITYSDK_OFFSET(0xD26080)
#define FLATDATA_CONSTMINIGAMEROADPUZZLEEXCEL_GET_LOOPSTAGEINDEX_OFFSET UNITYSDK_OFFSET(0xD26100)
#define FLATDATA_CONSTMINIGAMEROADPUZZLEEXCEL_GET_LOOPSTAGEINDEX_OFFSET UNITYSDK_OFFSET(0xD26150)
#define FLATDATA_CONSTMINIGAMEROADPUZZLEEXCEL_CREATECONSTMINIGAMEROADPUZZLEEXCEL_OFFSET UNITYSDK_OFFSET(0xD261D0)
#define FLATDATA_CONSTMINIGAMEROADPUZZLEEXCEL_STARTCONSTMINIGAMEROADPUZZLEEXCEL_OFFSET UNITYSDK_OFFSET(0xD267B0)
#define FLATDATA_CONSTMINIGAMEROADPUZZLEEXCEL_ADDROADPUZZLEMAPBOUNDARYOFFSETLEFT_OFFSET UNITYSDK_OFFSET(0xD26730)
#define FLATDATA_CONSTMINIGAMEROADPUZZLEEXCEL_ADDROADPUZZLEMAPBOUNDARYOFFSETRIGHT_OFFSET UNITYSDK_OFFSET(0xD26700)
#define FLATDATA_CONSTMINIGAMEROADPUZZLEEXCEL_ADDROADPUZZLEMAPBOUNDARYOFFSETTOP_OFFSET UNITYSDK_OFFSET(0xD266D0)
#define FLATDATA_CONSTMINIGAMEROADPUZZLEEXCEL_ADDROADPUZZLEMAPBOUNDARYOFFSETBOTTOM_OFFSET UNITYSDK_OFFSET(0xD266A0)
#define FLATDATA_CONSTMINIGAMEROADPUZZLEEXCEL_ADDROADPUZZLEMAPCENTEROFFSETX_OFFSET UNITYSDK_OFFSET(0xD26670)
#define FLATDATA_CONSTMINIGAMEROADPUZZLEEXCEL_ADDROADPUZZLEMAPCENTEROFFSETY_OFFSET UNITYSDK_OFFSET(0xD26640)
#define FLATDATA_CONSTMINIGAMEROADPUZZLEEXCEL_ADDCAMERAANGLE_OFFSET UNITYSDK_OFFSET(0xD26610)
#define FLATDATA_CONSTMINIGAMEROADPUZZLEEXCEL_ADDCAMERAZOOMMAX_OFFSET UNITYSDK_OFFSET(0xD265E0)
#define FLATDATA_CONSTMINIGAMEROADPUZZLEEXCEL_ADDCAMERAZOOMMIN_OFFSET UNITYSDK_OFFSET(0xD265B0)
#define FLATDATA_CONSTMINIGAMEROADPUZZLEEXCEL_ADDCAMERAZOOMDEFAULT_OFFSET UNITYSDK_OFFSET(0xD26580)
#define FLATDATA_CONSTMINIGAMEROADPUZZLEEXCEL_ADDSTAGELOADINGPROGRESSTIME_OFFSET UNITYSDK_OFFSET(0xD26550)
#define FLATDATA_CONSTMINIGAMEROADPUZZLEEXCEL_ADDTILEROTATIONDEGREE_OFFSET UNITYSDK_OFFSET(0xD26520)
#define FLATDATA_CONSTMINIGAMEROADPUZZLEEXCEL_ADDSTARTSTAGEINDEX_OFFSET UNITYSDK_OFFSET(0xD264F0)
#define FLATDATA_CONSTMINIGAMEROADPUZZLEEXCEL_ADDLOOPSTAGEINDEX_OFFSET UNITYSDK_OFFSET(0xD264C0)
#define FLATDATA_CONSTMINIGAMEROADPUZZLEEXCEL_ENDCONSTMINIGAMEROADPUZZLEEXCEL_OFFSET UNITYSDK_OFFSET(0xD26760)

namespace FlatData
{
	inline static constexpr unsigned int ConstMinigameRoadPuzzleExcel_TypeDefinitionIndex = 9229;

	class ConstMinigameRoadPuzzleExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10
		::Il2CppArray<::System::Object*>* TableKey; // 0x0

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMEROADPUZZLEEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::ConstMinigameRoadPuzzleExcel* GetRootAsConstMinigameRoadPuzzleExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::ConstMinigameRoadPuzzleExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMEROADPUZZLEEXCEL_GETROOTASCONSTMINIGAMEROADPUZZLEEXCEL_OFFSET))(arg, nullptr);
		}

		::FlatData::ConstMinigameRoadPuzzleExcel* GetRootAsConstMinigameRoadPuzzleExcel(::FlatBuffers::ByteBuffer* arg, ::FlatData::ConstMinigameRoadPuzzleExcel* arg2)
		{
			return ((::FlatData::ConstMinigameRoadPuzzleExcel*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::ConstMinigameRoadPuzzleExcel*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMEROADPUZZLEEXCEL_GETROOTASCONSTMINIGAMEROADPUZZLEEXCEL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMEROADPUZZLEEXCEL___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::ConstMinigameRoadPuzzleExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::ConstMinigameRoadPuzzleExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMEROADPUZZLEEXCEL___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Single get_roadPuzzleMapBoundaryOffsetLeft()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMEROADPUZZLEEXCEL_GET_ROADPUZZLEMAPBOUNDARYOFFSETLEFT_OFFSET))(nullptr);
		}

		::System::Single get_RoadPuzzleMapBoundaryOffsetLeft()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMEROADPUZZLEEXCEL_GET_ROADPUZZLEMAPBOUNDARYOFFSETLEFT_OFFSET))(nullptr);
		}

		::System::Single get_roadPuzzleMapBoundaryOffsetRight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMEROADPUZZLEEXCEL_GET_ROADPUZZLEMAPBOUNDARYOFFSETRIGHT_OFFSET))(nullptr);
		}

		::System::Single get_RoadPuzzleMapBoundaryOffsetRight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMEROADPUZZLEEXCEL_GET_ROADPUZZLEMAPBOUNDARYOFFSETRIGHT_OFFSET))(nullptr);
		}

		::System::Single get_roadPuzzleMapBoundaryOffsetTop()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMEROADPUZZLEEXCEL_GET_ROADPUZZLEMAPBOUNDARYOFFSETTOP_OFFSET))(nullptr);
		}

		::System::Single get_RoadPuzzleMapBoundaryOffsetTop()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMEROADPUZZLEEXCEL_GET_ROADPUZZLEMAPBOUNDARYOFFSETTOP_OFFSET))(nullptr);
		}

		::System::Single get_roadPuzzleMapBoundaryOffsetBottom()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMEROADPUZZLEEXCEL_GET_ROADPUZZLEMAPBOUNDARYOFFSETBOTTOM_OFFSET))(nullptr);
		}

		::System::Single get_RoadPuzzleMapBoundaryOffsetBottom()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMEROADPUZZLEEXCEL_GET_ROADPUZZLEMAPBOUNDARYOFFSETBOTTOM_OFFSET))(nullptr);
		}

		::System::Single get_roadPuzzleMapCenterOffsetX()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMEROADPUZZLEEXCEL_GET_ROADPUZZLEMAPCENTEROFFSETX_OFFSET))(nullptr);
		}

		::System::Single get_RoadPuzzleMapCenterOffsetX()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMEROADPUZZLEEXCEL_GET_ROADPUZZLEMAPCENTEROFFSETX_OFFSET))(nullptr);
		}

		::System::Single get_roadPuzzleMapCenterOffsetY()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMEROADPUZZLEEXCEL_GET_ROADPUZZLEMAPCENTEROFFSETY_OFFSET))(nullptr);
		}

		::System::Single get_RoadPuzzleMapCenterOffsetY()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMEROADPUZZLEEXCEL_GET_ROADPUZZLEMAPCENTEROFFSETY_OFFSET))(nullptr);
		}

		::System::Single get_cameraAngle()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMEROADPUZZLEEXCEL_GET_CAMERAANGLE_OFFSET))(nullptr);
		}

		::System::Single get_CameraAngle()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMEROADPUZZLEEXCEL_GET_CAMERAANGLE_OFFSET))(nullptr);
		}

		::System::Single get_cameraZoomMax()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMEROADPUZZLEEXCEL_GET_CAMERAZOOMMAX_OFFSET))(nullptr);
		}

		::System::Single get_CameraZoomMax()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMEROADPUZZLEEXCEL_GET_CAMERAZOOMMAX_OFFSET))(nullptr);
		}

		::System::Single get_cameraZoomMin()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMEROADPUZZLEEXCEL_GET_CAMERAZOOMMIN_OFFSET))(nullptr);
		}

		::System::Single get_CameraZoomMin()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMEROADPUZZLEEXCEL_GET_CAMERAZOOMMIN_OFFSET))(nullptr);
		}

		::System::Single get_cameraZoomDefault()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMEROADPUZZLEEXCEL_GET_CAMERAZOOMDEFAULT_OFFSET))(nullptr);
		}

		::System::Single get_CameraZoomDefault()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMEROADPUZZLEEXCEL_GET_CAMERAZOOMDEFAULT_OFFSET))(nullptr);
		}

		::System::Single get_stageLoadingProgressTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMEROADPUZZLEEXCEL_GET_STAGELOADINGPROGRESSTIME_OFFSET))(nullptr);
		}

		::System::Single get_StageLoadingProgressTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMEROADPUZZLEEXCEL_GET_STAGELOADINGPROGRESSTIME_OFFSET))(nullptr);
		}

		::System::Int32 get_tileRotationDegree()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMEROADPUZZLEEXCEL_GET_TILEROTATIONDEGREE_OFFSET))(nullptr);
		}

		::System::Int32 get_TileRotationDegree()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMEROADPUZZLEEXCEL_GET_TILEROTATIONDEGREE_OFFSET))(nullptr);
		}

		::System::Int32 get_startStageIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMEROADPUZZLEEXCEL_GET_STARTSTAGEINDEX_OFFSET))(nullptr);
		}

		::System::Int32 get_StartStageIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMEROADPUZZLEEXCEL_GET_STARTSTAGEINDEX_OFFSET))(nullptr);
		}

		::System::Int32 get_loopStageIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMEROADPUZZLEEXCEL_GET_LOOPSTAGEINDEX_OFFSET))(nullptr);
		}

		::System::Int32 get_LoopStageIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMEROADPUZZLEEXCEL_GET_LOOPSTAGEINDEX_OFFSET))(nullptr);
		}

		Il2CppObject* CreateConstMinigameRoadPuzzleExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg2, ::System::Single arg3, ::System::Single arg4, ::System::Single arg5, ::System::Single arg6, ::System::Single arg7, ::System::Single arg8, ::System::Single arg9, ::System::Single arg10, ::System::Single arg11, ::System::Single arg12, ::System::Int32 arg13, ::System::Int32 arg14, ::System::Int32 arg15)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMEROADPUZZLEEXCEL_CREATECONSTMINIGAMEROADPUZZLEEXCEL_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, nullptr);
		}

		::System::Void StartConstMinigameRoadPuzzleExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMEROADPUZZLEEXCEL_STARTCONSTMINIGAMEROADPUZZLEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddRoadPuzzleMapBoundaryOffsetLeft(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMEROADPUZZLEEXCEL_ADDROADPUZZLEMAPBOUNDARYOFFSETLEFT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddRoadPuzzleMapBoundaryOffsetRight(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMEROADPUZZLEEXCEL_ADDROADPUZZLEMAPBOUNDARYOFFSETRIGHT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddRoadPuzzleMapBoundaryOffsetTop(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMEROADPUZZLEEXCEL_ADDROADPUZZLEMAPBOUNDARYOFFSETTOP_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddRoadPuzzleMapBoundaryOffsetBottom(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMEROADPUZZLEEXCEL_ADDROADPUZZLEMAPBOUNDARYOFFSETBOTTOM_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddRoadPuzzleMapCenterOffsetX(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMEROADPUZZLEEXCEL_ADDROADPUZZLEMAPCENTEROFFSETX_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddRoadPuzzleMapCenterOffsetY(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMEROADPUZZLEEXCEL_ADDROADPUZZLEMAPCENTEROFFSETY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddCameraAngle(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMEROADPUZZLEEXCEL_ADDCAMERAANGLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddCameraZoomMax(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMEROADPUZZLEEXCEL_ADDCAMERAZOOMMAX_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddCameraZoomMin(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMEROADPUZZLEEXCEL_ADDCAMERAZOOMMIN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddCameraZoomDefault(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMEROADPUZZLEEXCEL_ADDCAMERAZOOMDEFAULT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddStageLoadingProgressTime(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMEROADPUZZLEEXCEL_ADDSTAGELOADINGPROGRESSTIME_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddTileRotationDegree(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMEROADPUZZLEEXCEL_ADDTILEROTATIONDEGREE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddStartStageIndex(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMEROADPUZZLEEXCEL_ADDSTARTSTAGEINDEX_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddLoopStageIndex(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMEROADPUZZLEEXCEL_ADDLOOPSTAGEINDEX_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndConstMinigameRoadPuzzleExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMEROADPUZZLEEXCEL_ENDCONSTMINIGAMEROADPUZZLEEXCEL_OFFSET))(arg, nullptr);
		}

	};
}

