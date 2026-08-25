#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class MiniGameDreamInfoExcel; }
namespace FlatData { class DreamMakerMultiplierCondition; }
namespace FlatData { class ParcelType; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define MX_DATA_EXCEL_MINIGAMEDREAMINFOEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1BB33C0)
#define MX_DATA_EXCEL_MINIGAMEDREAMINFOEXCEL_GETROOTASMINIGAMEDREAMINFOEXCEL_OFFSET UNITYSDK_OFFSET(0x1BB33D0)
#define MX_DATA_EXCEL_MINIGAMEDREAMINFOEXCEL_GETROOTASMINIGAMEDREAMINFOEXCEL_OFFSET UNITYSDK_OFFSET(0x1BB3430)
#define MX_DATA_EXCEL_MINIGAMEDREAMINFOEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1BB34C0)
#define MX_DATA_EXCEL_MINIGAMEDREAMINFOEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1BB3490)
#define MX_DATA_EXCEL_MINIGAMEDREAMINFOEXCEL_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1BB34E0)
#define MX_DATA_EXCEL_MINIGAMEDREAMINFOEXCEL_GET_DREAMMAKERMULTIPLIERCONDITION_OFFSET UNITYSDK_OFFSET(0x1BB3530)
#define MX_DATA_EXCEL_MINIGAMEDREAMINFOEXCEL_GET_DREAMMAKERMULTIPLIERCONDITIONVALUE_OFFSET UNITYSDK_OFFSET(0x1BB3580)
#define MX_DATA_EXCEL_MINIGAMEDREAMINFOEXCEL_GET_DREAMMAKERMULTIPLIERMAX_OFFSET UNITYSDK_OFFSET(0x1BB35D0)
#define MX_DATA_EXCEL_MINIGAMEDREAMINFOEXCEL_GET_DREAMMAKERDAYS_OFFSET UNITYSDK_OFFSET(0x1BB3620)
#define MX_DATA_EXCEL_MINIGAMEDREAMINFOEXCEL_GET_DREAMMAKERACTIONPOINT_OFFSET UNITYSDK_OFFSET(0x1BB3670)
#define MX_DATA_EXCEL_MINIGAMEDREAMINFOEXCEL_GET_DREAMMAKERPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1BB36C0)
#define MX_DATA_EXCEL_MINIGAMEDREAMINFOEXCEL_GET_DREAMMAKERPARCELID_OFFSET UNITYSDK_OFFSET(0x1BB3710)
#define MX_DATA_EXCEL_MINIGAMEDREAMINFOEXCEL_GET_DREAMMAKERDAILYPOINTPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1BB3760)
#define MX_DATA_EXCEL_MINIGAMEDREAMINFOEXCEL_GET_DREAMMAKERDAILYPOINTID_OFFSET UNITYSDK_OFFSET(0x1BB37B0)
#define MX_DATA_EXCEL_MINIGAMEDREAMINFOEXCEL_GET_DREAMMAKERPARAMETERTRANSFER_OFFSET UNITYSDK_OFFSET(0x1BB3800)
#define MX_DATA_EXCEL_MINIGAMEDREAMINFOEXCEL_GET_SCHEDULECOSTGOODSID_OFFSET UNITYSDK_OFFSET(0x1BB3850)
#define MX_DATA_EXCEL_MINIGAMEDREAMINFOEXCEL_GET_LOBBYBGMCHANGESCENARIOID_OFFSET UNITYSDK_OFFSET(0x1BB38A0)
#define MX_DATA_EXCEL_MINIGAMEDREAMINFOEXCEL_CREATEMINIGAMEDREAMINFOEXCEL_OFFSET UNITYSDK_OFFSET(0x1BB38F0)
#define MX_DATA_EXCEL_MINIGAMEDREAMINFOEXCEL_STARTMINIGAMEDREAMINFOEXCEL_OFFSET UNITYSDK_OFFSET(0x1BB3E00)
#define MX_DATA_EXCEL_MINIGAMEDREAMINFOEXCEL_ADDEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1BB3CF0)
#define MX_DATA_EXCEL_MINIGAMEDREAMINFOEXCEL_ADDDREAMMAKERMULTIPLIERCONDITION_OFFSET UNITYSDK_OFFSET(0x1BB3D80)
#define MX_DATA_EXCEL_MINIGAMEDREAMINFOEXCEL_ADDDREAMMAKERMULTIPLIERCONDITIONVALUE_OFFSET UNITYSDK_OFFSET(0x1BB3CC0)
#define MX_DATA_EXCEL_MINIGAMEDREAMINFOEXCEL_ADDDREAMMAKERMULTIPLIERMAX_OFFSET UNITYSDK_OFFSET(0x1BB3C90)
#define MX_DATA_EXCEL_MINIGAMEDREAMINFOEXCEL_ADDDREAMMAKERDAYS_OFFSET UNITYSDK_OFFSET(0x1BB3C60)
#define MX_DATA_EXCEL_MINIGAMEDREAMINFOEXCEL_ADDDREAMMAKERACTIONPOINT_OFFSET UNITYSDK_OFFSET(0x1BB3C30)
#define MX_DATA_EXCEL_MINIGAMEDREAMINFOEXCEL_ADDDREAMMAKERPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1BB3D50)
#define MX_DATA_EXCEL_MINIGAMEDREAMINFOEXCEL_ADDDREAMMAKERPARCELID_OFFSET UNITYSDK_OFFSET(0x1BB3C00)
#define MX_DATA_EXCEL_MINIGAMEDREAMINFOEXCEL_ADDDREAMMAKERDAILYPOINTPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1BB3D20)
#define MX_DATA_EXCEL_MINIGAMEDREAMINFOEXCEL_ADDDREAMMAKERDAILYPOINTID_OFFSET UNITYSDK_OFFSET(0x1BB3BD0)
#define MX_DATA_EXCEL_MINIGAMEDREAMINFOEXCEL_ADDDREAMMAKERPARAMETERTRANSFER_OFFSET UNITYSDK_OFFSET(0x1BB3BA0)
#define MX_DATA_EXCEL_MINIGAMEDREAMINFOEXCEL_ADDSCHEDULECOSTGOODSID_OFFSET UNITYSDK_OFFSET(0x1BB3B70)
#define MX_DATA_EXCEL_MINIGAMEDREAMINFOEXCEL_ADDLOBBYBGMCHANGESCENARIOID_OFFSET UNITYSDK_OFFSET(0x1BB3B40)
#define MX_DATA_EXCEL_MINIGAMEDREAMINFOEXCEL_ENDMINIGAMEDREAMINFOEXCEL_OFFSET UNITYSDK_OFFSET(0x1BB3DB0)
#define MX_DATA_EXCEL_MINIGAMEDREAMINFOEXCEL_FINISHMINIGAMEDREAMINFOEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1BB3E20)
#define MX_DATA_EXCEL_MINIGAMEDREAMINFOEXCEL_FINISHSIZEPREFIXEDMINIGAMEDREAMINFOEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1BB3E40)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MiniGameDreamInfoExcel_TypeDefinitionIndex = 18634;

	class MiniGameDreamInfoExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMINFOEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::MiniGameDreamInfoExcel* GetRootAsMiniGameDreamInfoExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MiniGameDreamInfoExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMINFOEXCEL_GETROOTASMINIGAMEDREAMINFOEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::MiniGameDreamInfoExcel* GetRootAsMiniGameDreamInfoExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::MiniGameDreamInfoExcel* arg)
		{
			return (return (::MX::Data::Excel::MiniGameDreamInfoExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::MiniGameDreamInfoExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMINFOEXCEL_GETROOTASMINIGAMEDREAMINFOEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMINFOEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::MiniGameDreamInfoExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MiniGameDreamInfoExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMINFOEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMINFOEXCEL_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::FlatData::DreamMakerMultiplierCondition* get_DreamMakerMultiplierCondition()
		{
			return (return (::FlatData::DreamMakerMultiplierCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMINFOEXCEL_GET_DREAMMAKERMULTIPLIERCONDITION_OFFSET))(nullptr);
		}

		::System::Int64 get_DreamMakerMultiplierConditionValue()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMINFOEXCEL_GET_DREAMMAKERMULTIPLIERCONDITIONVALUE_OFFSET))(nullptr);
		}

		::System::Int64 get_DreamMakerMultiplierMax()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMINFOEXCEL_GET_DREAMMAKERMULTIPLIERMAX_OFFSET))(nullptr);
		}

		::System::Int64 get_DreamMakerDays()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMINFOEXCEL_GET_DREAMMAKERDAYS_OFFSET))(nullptr);
		}

		::System::Int64 get_DreamMakerActionPoint()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMINFOEXCEL_GET_DREAMMAKERACTIONPOINT_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* get_DreamMakerParcelType()
		{
			return (return (::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMINFOEXCEL_GET_DREAMMAKERPARCELTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_DreamMakerParcelId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMINFOEXCEL_GET_DREAMMAKERPARCELID_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* get_DreamMakerDailyPointParcelType()
		{
			return (return (::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMINFOEXCEL_GET_DREAMMAKERDAILYPOINTPARCELTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_DreamMakerDailyPointId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMINFOEXCEL_GET_DREAMMAKERDAILYPOINTID_OFFSET))(nullptr);
		}

		::System::Int64 get_DreamMakerParameterTransfer()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMINFOEXCEL_GET_DREAMMAKERPARAMETERTRANSFER_OFFSET))(nullptr);
		}

		::System::Int64 get_ScheduleCostGoodsId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMINFOEXCEL_GET_SCHEDULECOSTGOODSID_OFFSET))(nullptr);
		}

		::System::Int64 get_LobbyBGMChangeScenarioId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMINFOEXCEL_GET_LOBBYBGMCHANGESCENARIOID_OFFSET))(nullptr);
		}

		Il2CppObject* CreateMiniGameDreamInfoExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatData::DreamMakerMultiplierCondition* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatData::ParcelType* arg, ::System::Int64 arg, ::FlatData::ParcelType* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatData::DreamMakerMultiplierCondition*, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::FlatData::ParcelType*, ::System::Int64, ::FlatData::ParcelType*, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMINFOEXCEL_CREATEMINIGAMEDREAMINFOEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartMiniGameDreamInfoExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMINFOEXCEL_STARTMINIGAMEDREAMINFOEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddEventContentId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMINFOEXCEL_ADDEVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDreamMakerMultiplierCondition(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::DreamMakerMultiplierCondition* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::DreamMakerMultiplierCondition*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMINFOEXCEL_ADDDREAMMAKERMULTIPLIERCONDITION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDreamMakerMultiplierConditionValue(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMINFOEXCEL_ADDDREAMMAKERMULTIPLIERCONDITIONVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDreamMakerMultiplierMax(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMINFOEXCEL_ADDDREAMMAKERMULTIPLIERMAX_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDreamMakerDays(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMINFOEXCEL_ADDDREAMMAKERDAYS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDreamMakerActionPoint(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMINFOEXCEL_ADDDREAMMAKERACTIONPOINT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDreamMakerParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ParcelType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ParcelType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMINFOEXCEL_ADDDREAMMAKERPARCELTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDreamMakerParcelId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMINFOEXCEL_ADDDREAMMAKERPARCELID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDreamMakerDailyPointParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ParcelType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ParcelType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMINFOEXCEL_ADDDREAMMAKERDAILYPOINTPARCELTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDreamMakerDailyPointId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMINFOEXCEL_ADDDREAMMAKERDAILYPOINTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDreamMakerParameterTransfer(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMINFOEXCEL_ADDDREAMMAKERPARAMETERTRANSFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddScheduleCostGoodsId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMINFOEXCEL_ADDSCHEDULECOSTGOODSID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLobbyBGMChangeScenarioId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMINFOEXCEL_ADDLOBBYBGMCHANGESCENARIOID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndMiniGameDreamInfoExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMINFOEXCEL_ENDMINIGAMEDREAMINFOEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishMiniGameDreamInfoExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMINFOEXCEL_FINISHMINIGAMEDREAMINFOEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedMiniGameDreamInfoExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMINFOEXCEL_FINISHSIZEPREFIXEDMINIGAMEDREAMINFOEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

