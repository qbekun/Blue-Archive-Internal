#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class MissionEmergencyCompleteExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define MX_DATA_EXCEL_MISSIONEMERGENCYCOMPLETEEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1C10950)
#define MX_DATA_EXCEL_MISSIONEMERGENCYCOMPLETEEXCEL_GETROOTASMISSIONEMERGENCYCOMPLETEEXCEL_OFFSET UNITYSDK_OFFSET(0x1C10960)
#define MX_DATA_EXCEL_MISSIONEMERGENCYCOMPLETEEXCEL_GETROOTASMISSIONEMERGENCYCOMPLETEEXCEL_OFFSET UNITYSDK_OFFSET(0x1C109C0)
#define MX_DATA_EXCEL_MISSIONEMERGENCYCOMPLETEEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1C10A50)
#define MX_DATA_EXCEL_MISSIONEMERGENCYCOMPLETEEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1C10A20)
#define MX_DATA_EXCEL_MISSIONEMERGENCYCOMPLETEEXCEL_GET_MISSIONID_OFFSET UNITYSDK_OFFSET(0x1C10A70)
#define MX_DATA_EXCEL_MISSIONEMERGENCYCOMPLETEEXCEL_GET_EMERGENCYCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1C10AC0)
#define MX_DATA_EXCEL_MISSIONEMERGENCYCOMPLETEEXCEL_CREATEMISSIONEMERGENCYCOMPLETEEXCEL_OFFSET UNITYSDK_OFFSET(0x1C10B10)
#define MX_DATA_EXCEL_MISSIONEMERGENCYCOMPLETEEXCEL_STARTMISSIONEMERGENCYCOMPLETEEXCEL_OFFSET UNITYSDK_OFFSET(0x1C10C50)
#define MX_DATA_EXCEL_MISSIONEMERGENCYCOMPLETEEXCEL_ADDMISSIONID_OFFSET UNITYSDK_OFFSET(0x1C10BA0)
#define MX_DATA_EXCEL_MISSIONEMERGENCYCOMPLETEEXCEL_ADDEMERGENCYCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1C10BD0)
#define MX_DATA_EXCEL_MISSIONEMERGENCYCOMPLETEEXCEL_ENDMISSIONEMERGENCYCOMPLETEEXCEL_OFFSET UNITYSDK_OFFSET(0x1C10C00)
#define MX_DATA_EXCEL_MISSIONEMERGENCYCOMPLETEEXCEL_FINISHMISSIONEMERGENCYCOMPLETEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C10C70)
#define MX_DATA_EXCEL_MISSIONEMERGENCYCOMPLETEEXCEL_FINISHSIZEPREFIXEDMISSIONEMERGENCYCOMPLETEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C10C90)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MissionEmergencyCompleteExcel_TypeDefinitionIndex = 18929;

	class MissionEmergencyCompleteExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEMERGENCYCOMPLETEEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::MissionEmergencyCompleteExcel* GetRootAsMissionEmergencyCompleteExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MissionEmergencyCompleteExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEMERGENCYCOMPLETEEXCEL_GETROOTASMISSIONEMERGENCYCOMPLETEEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::MissionEmergencyCompleteExcel* GetRootAsMissionEmergencyCompleteExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::MissionEmergencyCompleteExcel* arg)
		{
			return (return (::MX::Data::Excel::MissionEmergencyCompleteExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::MissionEmergencyCompleteExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEMERGENCYCOMPLETEEXCEL_GETROOTASMISSIONEMERGENCYCOMPLETEEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEMERGENCYCOMPLETEEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::MissionEmergencyCompleteExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MissionEmergencyCompleteExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEMERGENCYCOMPLETEEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_MissionId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEMERGENCYCOMPLETEEXCEL_GET_MISSIONID_OFFSET))(nullptr);
		}

		::System::Boolean get_EmergencyComplete()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEMERGENCYCOMPLETEEXCEL_GET_EMERGENCYCOMPLETE_OFFSET))(nullptr);
		}

		Il2CppObject* CreateMissionEmergencyCompleteExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEMERGENCYCOMPLETEEXCEL_CREATEMISSIONEMERGENCYCOMPLETEEXCEL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void StartMissionEmergencyCompleteExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEMERGENCYCOMPLETEEXCEL_STARTMISSIONEMERGENCYCOMPLETEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddMissionId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEMERGENCYCOMPLETEEXCEL_ADDMISSIONID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEmergencyComplete(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEMERGENCYCOMPLETEEXCEL_ADDEMERGENCYCOMPLETE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndMissionEmergencyCompleteExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEMERGENCYCOMPLETEEXCEL_ENDMISSIONEMERGENCYCOMPLETEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishMissionEmergencyCompleteExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEMERGENCYCOMPLETEEXCEL_FINISHMISSIONEMERGENCYCOMPLETEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedMissionEmergencyCompleteExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEMERGENCYCOMPLETEEXCEL_FINISHSIZEPREFIXEDMISSIONEMERGENCYCOMPLETEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

