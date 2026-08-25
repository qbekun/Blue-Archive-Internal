#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class CameraExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define MX_DATA_EXCEL_CAMERAEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x19FCFE0)
#define MX_DATA_EXCEL_CAMERAEXCEL_GETROOTASCAMERAEXCEL_OFFSET UNITYSDK_OFFSET(0x19FCFF0)
#define MX_DATA_EXCEL_CAMERAEXCEL_GETROOTASCAMERAEXCEL_OFFSET UNITYSDK_OFFSET(0x19FD050)
#define MX_DATA_EXCEL_CAMERAEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x19FD0E0)
#define MX_DATA_EXCEL_CAMERAEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x19FD0B0)
#define MX_DATA_EXCEL_CAMERAEXCEL_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x19FD100)
#define MX_DATA_EXCEL_CAMERAEXCEL_GET_MINDISTANCE_OFFSET UNITYSDK_OFFSET(0x19FD150)
#define MX_DATA_EXCEL_CAMERAEXCEL_GET_MAXDISTANCE_OFFSET UNITYSDK_OFFSET(0x19FD1A0)
#define MX_DATA_EXCEL_CAMERAEXCEL_GET_ROTATIONX_OFFSET UNITYSDK_OFFSET(0x19FD1F0)
#define MX_DATA_EXCEL_CAMERAEXCEL_GET_ROTATIONY_OFFSET UNITYSDK_OFFSET(0x19FD240)
#define MX_DATA_EXCEL_CAMERAEXCEL_GET_MOVEINSTANTLY_OFFSET UNITYSDK_OFFSET(0x19FD290)
#define MX_DATA_EXCEL_CAMERAEXCEL_GET_MOVEINSTANTLYROTATIONSAVE_OFFSET UNITYSDK_OFFSET(0x19FD2E0)
#define MX_DATA_EXCEL_CAMERAEXCEL_GET_LEFTMARGIN_OFFSET UNITYSDK_OFFSET(0x19FD330)
#define MX_DATA_EXCEL_CAMERAEXCEL_GET_BOTTOMMARGIN_OFFSET UNITYSDK_OFFSET(0x19FD380)
#define MX_DATA_EXCEL_CAMERAEXCEL_GET_IGNOREENEMIES_OFFSET UNITYSDK_OFFSET(0x19FD3D0)
#define MX_DATA_EXCEL_CAMERAEXCEL_GET_USERAILPOINTCOMPENSATION_OFFSET UNITYSDK_OFFSET(0x19FD420)
#define MX_DATA_EXCEL_CAMERAEXCEL_CREATECAMERAEXCEL_OFFSET UNITYSDK_OFFSET(0x19FD470)
#define MX_DATA_EXCEL_CAMERAEXCEL_STARTCAMERAEXCEL_OFFSET UNITYSDK_OFFSET(0x19FD910)
#define MX_DATA_EXCEL_CAMERAEXCEL_ADDUNIQUEID_OFFSET UNITYSDK_OFFSET(0x19FD6B0)
#define MX_DATA_EXCEL_CAMERAEXCEL_ADDMINDISTANCE_OFFSET UNITYSDK_OFFSET(0x19FD7D0)
#define MX_DATA_EXCEL_CAMERAEXCEL_ADDMAXDISTANCE_OFFSET UNITYSDK_OFFSET(0x19FD7A0)
#define MX_DATA_EXCEL_CAMERAEXCEL_ADDROTATIONX_OFFSET UNITYSDK_OFFSET(0x19FD770)
#define MX_DATA_EXCEL_CAMERAEXCEL_ADDROTATIONY_OFFSET UNITYSDK_OFFSET(0x19FD740)
#define MX_DATA_EXCEL_CAMERAEXCEL_ADDMOVEINSTANTLY_OFFSET UNITYSDK_OFFSET(0x19FD890)
#define MX_DATA_EXCEL_CAMERAEXCEL_ADDMOVEINSTANTLYROTATIONSAVE_OFFSET UNITYSDK_OFFSET(0x19FD860)
#define MX_DATA_EXCEL_CAMERAEXCEL_ADDLEFTMARGIN_OFFSET UNITYSDK_OFFSET(0x19FD710)
#define MX_DATA_EXCEL_CAMERAEXCEL_ADDBOTTOMMARGIN_OFFSET UNITYSDK_OFFSET(0x19FD6E0)
#define MX_DATA_EXCEL_CAMERAEXCEL_ADDIGNOREENEMIES_OFFSET UNITYSDK_OFFSET(0x19FD830)
#define MX_DATA_EXCEL_CAMERAEXCEL_ADDUSERAILPOINTCOMPENSATION_OFFSET UNITYSDK_OFFSET(0x19FD800)
#define MX_DATA_EXCEL_CAMERAEXCEL_ENDCAMERAEXCEL_OFFSET UNITYSDK_OFFSET(0x19FD8C0)
#define MX_DATA_EXCEL_CAMERAEXCEL_FINISHCAMERAEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x19FD930)
#define MX_DATA_EXCEL_CAMERAEXCEL_FINISHSIZEPREFIXEDCAMERAEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x19FD950)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int CameraExcel_TypeDefinitionIndex = 16861;

	class CameraExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMERAEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::CameraExcel* GetRootAsCameraExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::CameraExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMERAEXCEL_GETROOTASCAMERAEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::CameraExcel* GetRootAsCameraExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::CameraExcel* arg)
		{
			return (return (::MX::Data::Excel::CameraExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::CameraExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMERAEXCEL_GETROOTASCAMERAEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMERAEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::CameraExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::CameraExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMERAEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMERAEXCEL_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::Single get_MinDistance()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMERAEXCEL_GET_MINDISTANCE_OFFSET))(nullptr);
		}

		::System::Single get_MaxDistance()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMERAEXCEL_GET_MAXDISTANCE_OFFSET))(nullptr);
		}

		::System::Single get_RotationX()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMERAEXCEL_GET_ROTATIONX_OFFSET))(nullptr);
		}

		::System::Single get_RotationY()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMERAEXCEL_GET_ROTATIONY_OFFSET))(nullptr);
		}

		::System::Boolean get_MoveInstantly()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMERAEXCEL_GET_MOVEINSTANTLY_OFFSET))(nullptr);
		}

		::System::Boolean get_MoveInstantlyRotationSave()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMERAEXCEL_GET_MOVEINSTANTLYROTATIONSAVE_OFFSET))(nullptr);
		}

		::System::Single get_LeftMargin()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMERAEXCEL_GET_LEFTMARGIN_OFFSET))(nullptr);
		}

		::System::Single get_BottomMargin()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMERAEXCEL_GET_BOTTOMMARGIN_OFFSET))(nullptr);
		}

		::System::Boolean get_IgnoreEnemies()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMERAEXCEL_GET_IGNOREENEMIES_OFFSET))(nullptr);
		}

		::System::Boolean get_UseRailPointCompensation()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMERAEXCEL_GET_USERAILPOINTCOMPENSATION_OFFSET))(nullptr);
		}

		Il2CppObject* CreateCameraExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Single arg, ::System::Single arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMERAEXCEL_CREATECAMERAEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartCameraExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMERAEXCEL_STARTCAMERAEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddUniqueId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMERAEXCEL_ADDUNIQUEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMinDistance(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMERAEXCEL_ADDMINDISTANCE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMaxDistance(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMERAEXCEL_ADDMAXDISTANCE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRotationX(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMERAEXCEL_ADDROTATIONX_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRotationY(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMERAEXCEL_ADDROTATIONY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMoveInstantly(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMERAEXCEL_ADDMOVEINSTANTLY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMoveInstantlyRotationSave(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMERAEXCEL_ADDMOVEINSTANTLYROTATIONSAVE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLeftMargin(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMERAEXCEL_ADDLEFTMARGIN_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBottomMargin(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMERAEXCEL_ADDBOTTOMMARGIN_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIgnoreEnemies(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMERAEXCEL_ADDIGNOREENEMIES_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddUseRailPointCompensation(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMERAEXCEL_ADDUSERAILPOINTCOMPENSATION_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndCameraExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMERAEXCEL_ENDCAMERAEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishCameraExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMERAEXCEL_FINISHCAMERAEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedCameraExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMERAEXCEL_FINISHSIZEPREFIXEDCAMERAEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

