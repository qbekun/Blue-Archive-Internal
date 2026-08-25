#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class ConquestCameraSettingExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define MX_DATA_EXCEL_CONQUESTCAMERASETTINGEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1A52530)
#define MX_DATA_EXCEL_CONQUESTCAMERASETTINGEXCEL_GETROOTASCONQUESTCAMERASETTINGEXCEL_OFFSET UNITYSDK_OFFSET(0x1A52540)
#define MX_DATA_EXCEL_CONQUESTCAMERASETTINGEXCEL_GETROOTASCONQUESTCAMERASETTINGEXCEL_OFFSET UNITYSDK_OFFSET(0x1A525A0)
#define MX_DATA_EXCEL_CONQUESTCAMERASETTINGEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1A52630)
#define MX_DATA_EXCEL_CONQUESTCAMERASETTINGEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1A52600)
#define MX_DATA_EXCEL_CONQUESTCAMERASETTINGEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1A52650)
#define MX_DATA_EXCEL_CONQUESTCAMERASETTINGEXCEL_GET_CONQUESTMAPBOUNDARYOFFSETLEFT_OFFSET UNITYSDK_OFFSET(0x1A526A0)
#define MX_DATA_EXCEL_CONQUESTCAMERASETTINGEXCEL_GET_CONQUESTMAPBOUNDARYOFFSETRIGHT_OFFSET UNITYSDK_OFFSET(0x1A526F0)
#define MX_DATA_EXCEL_CONQUESTCAMERASETTINGEXCEL_GET_CONQUESTMAPBOUNDARYOFFSETTOP_OFFSET UNITYSDK_OFFSET(0x1A52740)
#define MX_DATA_EXCEL_CONQUESTCAMERASETTINGEXCEL_GET_CONQUESTMAPBOUNDARYOFFSETBOTTOM_OFFSET UNITYSDK_OFFSET(0x1A52790)
#define MX_DATA_EXCEL_CONQUESTCAMERASETTINGEXCEL_GET_CONQUESTMAPCENTEROFFSETX_OFFSET UNITYSDK_OFFSET(0x1A527E0)
#define MX_DATA_EXCEL_CONQUESTCAMERASETTINGEXCEL_GET_CONQUESTMAPCENTEROFFSETY_OFFSET UNITYSDK_OFFSET(0x1A52830)
#define MX_DATA_EXCEL_CONQUESTCAMERASETTINGEXCEL_GET_CAMERAANGLE_OFFSET UNITYSDK_OFFSET(0x1A52880)
#define MX_DATA_EXCEL_CONQUESTCAMERASETTINGEXCEL_GET_CAMERAZOOMMAX_OFFSET UNITYSDK_OFFSET(0x1A528D0)
#define MX_DATA_EXCEL_CONQUESTCAMERASETTINGEXCEL_GET_CAMERAZOOMMIN_OFFSET UNITYSDK_OFFSET(0x1A52920)
#define MX_DATA_EXCEL_CONQUESTCAMERASETTINGEXCEL_GET_CAMERAZOOMDEFAULT_OFFSET UNITYSDK_OFFSET(0x1A52970)
#define MX_DATA_EXCEL_CONQUESTCAMERASETTINGEXCEL_CREATECONQUESTCAMERASETTINGEXCEL_OFFSET UNITYSDK_OFFSET(0x1A529C0)
#define MX_DATA_EXCEL_CONQUESTCAMERASETTINGEXCEL_STARTCONQUESTCAMERASETTINGEXCEL_OFFSET UNITYSDK_OFFSET(0x1A52EA0)
#define MX_DATA_EXCEL_CONQUESTCAMERASETTINGEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1A52C40)
#define MX_DATA_EXCEL_CONQUESTCAMERASETTINGEXCEL_ADDCONQUESTMAPBOUNDARYOFFSETLEFT_OFFSET UNITYSDK_OFFSET(0x1A52E20)
#define MX_DATA_EXCEL_CONQUESTCAMERASETTINGEXCEL_ADDCONQUESTMAPBOUNDARYOFFSETRIGHT_OFFSET UNITYSDK_OFFSET(0x1A52DF0)
#define MX_DATA_EXCEL_CONQUESTCAMERASETTINGEXCEL_ADDCONQUESTMAPBOUNDARYOFFSETTOP_OFFSET UNITYSDK_OFFSET(0x1A52DC0)
#define MX_DATA_EXCEL_CONQUESTCAMERASETTINGEXCEL_ADDCONQUESTMAPBOUNDARYOFFSETBOTTOM_OFFSET UNITYSDK_OFFSET(0x1A52D90)
#define MX_DATA_EXCEL_CONQUESTCAMERASETTINGEXCEL_ADDCONQUESTMAPCENTEROFFSETX_OFFSET UNITYSDK_OFFSET(0x1A52D60)
#define MX_DATA_EXCEL_CONQUESTCAMERASETTINGEXCEL_ADDCONQUESTMAPCENTEROFFSETY_OFFSET UNITYSDK_OFFSET(0x1A52D30)
#define MX_DATA_EXCEL_CONQUESTCAMERASETTINGEXCEL_ADDCAMERAANGLE_OFFSET UNITYSDK_OFFSET(0x1A52D00)
#define MX_DATA_EXCEL_CONQUESTCAMERASETTINGEXCEL_ADDCAMERAZOOMMAX_OFFSET UNITYSDK_OFFSET(0x1A52CD0)
#define MX_DATA_EXCEL_CONQUESTCAMERASETTINGEXCEL_ADDCAMERAZOOMMIN_OFFSET UNITYSDK_OFFSET(0x1A52CA0)
#define MX_DATA_EXCEL_CONQUESTCAMERASETTINGEXCEL_ADDCAMERAZOOMDEFAULT_OFFSET UNITYSDK_OFFSET(0x1A52C70)
#define MX_DATA_EXCEL_CONQUESTCAMERASETTINGEXCEL_ENDCONQUESTCAMERASETTINGEXCEL_OFFSET UNITYSDK_OFFSET(0x1A52E50)
#define MX_DATA_EXCEL_CONQUESTCAMERASETTINGEXCEL_FINISHCONQUESTCAMERASETTINGEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A52EC0)
#define MX_DATA_EXCEL_CONQUESTCAMERASETTINGEXCEL_FINISHSIZEPREFIXEDCONQUESTCAMERASETTINGEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A52EE0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ConquestCameraSettingExcel_TypeDefinitionIndex = 17196;

	class ConquestCameraSettingExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTCAMERASETTINGEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::ConquestCameraSettingExcel* GetRootAsConquestCameraSettingExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ConquestCameraSettingExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTCAMERASETTINGEXCEL_GETROOTASCONQUESTCAMERASETTINGEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::ConquestCameraSettingExcel* GetRootAsConquestCameraSettingExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::ConquestCameraSettingExcel* arg)
		{
			return (return (::MX::Data::Excel::ConquestCameraSettingExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::ConquestCameraSettingExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTCAMERASETTINGEXCEL_GETROOTASCONQUESTCAMERASETTINGEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTCAMERASETTINGEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::ConquestCameraSettingExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ConquestCameraSettingExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTCAMERASETTINGEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTCAMERASETTINGEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::Single get_ConquestMapBoundaryOffsetLeft()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTCAMERASETTINGEXCEL_GET_CONQUESTMAPBOUNDARYOFFSETLEFT_OFFSET))(nullptr);
		}

		::System::Single get_ConquestMapBoundaryOffsetRight()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTCAMERASETTINGEXCEL_GET_CONQUESTMAPBOUNDARYOFFSETRIGHT_OFFSET))(nullptr);
		}

		::System::Single get_ConquestMapBoundaryOffsetTop()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTCAMERASETTINGEXCEL_GET_CONQUESTMAPBOUNDARYOFFSETTOP_OFFSET))(nullptr);
		}

		::System::Single get_ConquestMapBoundaryOffsetBottom()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTCAMERASETTINGEXCEL_GET_CONQUESTMAPBOUNDARYOFFSETBOTTOM_OFFSET))(nullptr);
		}

		::System::Single get_ConquestMapCenterOffsetX()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTCAMERASETTINGEXCEL_GET_CONQUESTMAPCENTEROFFSETX_OFFSET))(nullptr);
		}

		::System::Single get_ConquestMapCenterOffsetY()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTCAMERASETTINGEXCEL_GET_CONQUESTMAPCENTEROFFSETY_OFFSET))(nullptr);
		}

		::System::Single get_CameraAngle()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTCAMERASETTINGEXCEL_GET_CAMERAANGLE_OFFSET))(nullptr);
		}

		::System::Single get_CameraZoomMax()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTCAMERASETTINGEXCEL_GET_CAMERAZOOMMAX_OFFSET))(nullptr);
		}

		::System::Single get_CameraZoomMin()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTCAMERASETTINGEXCEL_GET_CAMERAZOOMMIN_OFFSET))(nullptr);
		}

		::System::Single get_CameraZoomDefault()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTCAMERASETTINGEXCEL_GET_CAMERAZOOMDEFAULT_OFFSET))(nullptr);
		}

		Il2CppObject* CreateConquestCameraSettingExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTCAMERASETTINGEXCEL_CREATECONQUESTCAMERASETTINGEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartConquestCameraSettingExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTCAMERASETTINGEXCEL_STARTCONQUESTCAMERASETTINGEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTCAMERASETTINGEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddConquestMapBoundaryOffsetLeft(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTCAMERASETTINGEXCEL_ADDCONQUESTMAPBOUNDARYOFFSETLEFT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddConquestMapBoundaryOffsetRight(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTCAMERASETTINGEXCEL_ADDCONQUESTMAPBOUNDARYOFFSETRIGHT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddConquestMapBoundaryOffsetTop(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTCAMERASETTINGEXCEL_ADDCONQUESTMAPBOUNDARYOFFSETTOP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddConquestMapBoundaryOffsetBottom(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTCAMERASETTINGEXCEL_ADDCONQUESTMAPBOUNDARYOFFSETBOTTOM_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddConquestMapCenterOffsetX(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTCAMERASETTINGEXCEL_ADDCONQUESTMAPCENTEROFFSETX_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddConquestMapCenterOffsetY(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTCAMERASETTINGEXCEL_ADDCONQUESTMAPCENTEROFFSETY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCameraAngle(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTCAMERASETTINGEXCEL_ADDCAMERAANGLE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCameraZoomMax(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTCAMERASETTINGEXCEL_ADDCAMERAZOOMMAX_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCameraZoomMin(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTCAMERASETTINGEXCEL_ADDCAMERAZOOMMIN_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCameraZoomDefault(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTCAMERASETTINGEXCEL_ADDCAMERAZOOMDEFAULT_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndConquestCameraSettingExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTCAMERASETTINGEXCEL_ENDCONQUESTCAMERASETTINGEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishConquestCameraSettingExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTCAMERASETTINGEXCEL_FINISHCONQUESTCAMERASETTINGEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedConquestCameraSettingExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTCAMERASETTINGEXCEL_FINISHSIZEPREFIXEDCONQUESTCAMERASETTINGEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

