#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class MiniGameDreamScheduleResultExcel; }
namespace FlatData { class DreamMakerResult; }
namespace FlatData { class DreamMakerParameterType; }
namespace FlatData { class DreamMakerParamOperationType; }
namespace FlatData { class ParcelType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULERESULTEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1BBB3D0)
#define MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULERESULTEXCEL_GETROOTASMINIGAMEDREAMSCHEDULERESULTEXCEL_OFFSET UNITYSDK_OFFSET(0x1BBB3E0)
#define MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULERESULTEXCEL_GETROOTASMINIGAMEDREAMSCHEDULERESULTEXCEL_OFFSET UNITYSDK_OFFSET(0x1BBB440)
#define MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULERESULTEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1BBB4D0)
#define MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULERESULTEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1BBB4A0)
#define MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULERESULTEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1BBB4F0)
#define MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULERESULTEXCEL_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1BBB540)
#define MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULERESULTEXCEL_GET_DREAMMAKERRESULT_OFFSET UNITYSDK_OFFSET(0x1BBB590)
#define MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULERESULTEXCEL_GET_DREAMMAKERSCHEDULEGROUP_OFFSET UNITYSDK_OFFSET(0x1BBB5E0)
#define MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULERESULTEXCEL_GET_PROB_OFFSET UNITYSDK_OFFSET(0x1BBB630)
#define MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULERESULTEXCEL_REWARDPARAMETER_OFFSET UNITYSDK_OFFSET(0x1BBB680)
#define MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULERESULTEXCEL_GET_REWARDPARAMETERLENGTH_OFFSET UNITYSDK_OFFSET(0x1BBB6E0)
#define MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULERESULTEXCEL_GETREWARDPARAMETERBYTES_OFFSET UNITYSDK_OFFSET(0x1BBB720)
#define MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULERESULTEXCEL_REWARDPARAMETEROPERATIONTYPE_OFFSET UNITYSDK_OFFSET(0x1BBB740)
#define MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULERESULTEXCEL_GET_REWARDPARAMETEROPERATIONTYPELENGTH_OFFSET UNITYSDK_OFFSET(0x1BBB7A0)
#define MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULERESULTEXCEL_GETREWARDPARAMETEROPERATIONTYPEBYTES_OFFSET UNITYSDK_OFFSET(0x1BBB7E0)
#define MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULERESULTEXCEL_REWARDPARAMETERAMOUNT_OFFSET UNITYSDK_OFFSET(0x1BBB800)
#define MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULERESULTEXCEL_GET_REWARDPARAMETERAMOUNTLENGTH_OFFSET UNITYSDK_OFFSET(0x1BBB860)
#define MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULERESULTEXCEL_GETREWARDPARAMETERAMOUNTBYTES_OFFSET UNITYSDK_OFFSET(0x1BBB8A0)
#define MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULERESULTEXCEL_GET_REWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1BBB8C0)
#define MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULERESULTEXCEL_GET_REWARDPARCELID_OFFSET UNITYSDK_OFFSET(0x1BBB910)
#define MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULERESULTEXCEL_GET_REWARDPARCELAMOUNT_OFFSET UNITYSDK_OFFSET(0x1BBB960)
#define MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULERESULTEXCEL_CREATEMINIGAMEDREAMSCHEDULERESULTEXCEL_OFFSET UNITYSDK_OFFSET(0x1BBB9B0)
#define MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULERESULTEXCEL_STARTMINIGAMEDREAMSCHEDULERESULTEXCEL_OFFSET UNITYSDK_OFFSET(0x1BBBE10)
#define MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULERESULTEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1BBBC70)
#define MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULERESULTEXCEL_ADDEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1BBBC40)
#define MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULERESULTEXCEL_ADDDREAMMAKERRESULT_OFFSET UNITYSDK_OFFSET(0x1BBBD90)
#define MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULERESULTEXCEL_ADDDREAMMAKERSCHEDULEGROUP_OFFSET UNITYSDK_OFFSET(0x1BBBC10)
#define MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULERESULTEXCEL_ADDPROB_OFFSET UNITYSDK_OFFSET(0x1BBBD60)
#define MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULERESULTEXCEL_ADDREWARDPARAMETER_OFFSET UNITYSDK_OFFSET(0x1BBBD30)
#define MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULERESULTEXCEL_CREATEREWARDPARAMETERVECTOR_OFFSET UNITYSDK_OFFSET(0x1BBBE30)
#define MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULERESULTEXCEL_STARTREWARDPARAMETERVECTOR_OFFSET UNITYSDK_OFFSET(0x1BBBEC0)
#define MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULERESULTEXCEL_ADDREWARDPARAMETEROPERATIONTYPE_OFFSET UNITYSDK_OFFSET(0x1BBBD00)
#define MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULERESULTEXCEL_CREATEREWARDPARAMETEROPERATIONTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1BBBF00)
#define MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULERESULTEXCEL_STARTREWARDPARAMETEROPERATIONTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1BBBF90)
#define MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULERESULTEXCEL_ADDREWARDPARAMETERAMOUNT_OFFSET UNITYSDK_OFFSET(0x1BBBCD0)
#define MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULERESULTEXCEL_CREATEREWARDPARAMETERAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1BBBFD0)
#define MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULERESULTEXCEL_STARTREWARDPARAMETERAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1BBC060)
#define MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULERESULTEXCEL_ADDREWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1BBBCA0)
#define MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULERESULTEXCEL_ADDREWARDPARCELID_OFFSET UNITYSDK_OFFSET(0x1BBBBE0)
#define MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULERESULTEXCEL_ADDREWARDPARCELAMOUNT_OFFSET UNITYSDK_OFFSET(0x1BBBBB0)
#define MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULERESULTEXCEL_ENDMINIGAMEDREAMSCHEDULERESULTEXCEL_OFFSET UNITYSDK_OFFSET(0x1BBBDC0)
#define MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULERESULTEXCEL_FINISHMINIGAMEDREAMSCHEDULERESULTEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1BBC0A0)
#define MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULERESULTEXCEL_FINISHSIZEPREFIXEDMINIGAMEDREAMSCHEDULERESULTEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1BBC0C0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MiniGameDreamScheduleResultExcel_TypeDefinitionIndex = 18671;

	class MiniGameDreamScheduleResultExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULERESULTEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::MiniGameDreamScheduleResultExcel* GetRootAsMiniGameDreamScheduleResultExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MiniGameDreamScheduleResultExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULERESULTEXCEL_GETROOTASMINIGAMEDREAMSCHEDULERESULTEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::MiniGameDreamScheduleResultExcel* GetRootAsMiniGameDreamScheduleResultExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::MiniGameDreamScheduleResultExcel* arg)
		{
			return (return (::MX::Data::Excel::MiniGameDreamScheduleResultExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::MiniGameDreamScheduleResultExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULERESULTEXCEL_GETROOTASMINIGAMEDREAMSCHEDULERESULTEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULERESULTEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::MiniGameDreamScheduleResultExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MiniGameDreamScheduleResultExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULERESULTEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULERESULTEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULERESULTEXCEL_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::FlatData::DreamMakerResult* get_DreamMakerResult()
		{
			return (return (::FlatData::DreamMakerResult*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULERESULTEXCEL_GET_DREAMMAKERRESULT_OFFSET))(nullptr);
		}

		::System::Int64 get_DreamMakerScheduleGroup()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULERESULTEXCEL_GET_DREAMMAKERSCHEDULEGROUP_OFFSET))(nullptr);
		}

		::System::Int32 get_Prob()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULERESULTEXCEL_GET_PROB_OFFSET))(nullptr);
		}

		::FlatData::DreamMakerParameterType* RewardParameter(::System::Int32 arg)
		{
			return (return (::FlatData::DreamMakerParameterType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULERESULTEXCEL_REWARDPARAMETER_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RewardParameterLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULERESULTEXCEL_GET_REWARDPARAMETERLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetRewardParameterBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULERESULTEXCEL_GETREWARDPARAMETERBYTES_OFFSET))(nullptr);
		}

		::FlatData::DreamMakerParamOperationType* RewardParameterOperationType(::System::Int32 arg)
		{
			return (return (::FlatData::DreamMakerParamOperationType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULERESULTEXCEL_REWARDPARAMETEROPERATIONTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RewardParameterOperationTypeLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULERESULTEXCEL_GET_REWARDPARAMETEROPERATIONTYPELENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetRewardParameterOperationTypeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULERESULTEXCEL_GETREWARDPARAMETEROPERATIONTYPEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 RewardParameterAmount(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULERESULTEXCEL_REWARDPARAMETERAMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RewardParameterAmountLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULERESULTEXCEL_GET_REWARDPARAMETERAMOUNTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetRewardParameterAmountBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULERESULTEXCEL_GETREWARDPARAMETERAMOUNTBYTES_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* get_RewardParcelType()
		{
			return (return (::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULERESULTEXCEL_GET_REWARDPARCELTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_RewardParcelId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULERESULTEXCEL_GET_REWARDPARCELID_OFFSET))(nullptr);
		}

		::System::Int64 get_RewardParcelAmount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULERESULTEXCEL_GET_REWARDPARCELAMOUNT_OFFSET))(nullptr);
		}

		Il2CppObject* CreateMiniGameDreamScheduleResultExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatData::DreamMakerResult* arg, ::System::Int64 arg, ::System::Int32 arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatData::ParcelType* arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::FlatData::DreamMakerResult*, ::System::Int64, ::System::Int32, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatData::ParcelType*, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULERESULTEXCEL_CREATEMINIGAMEDREAMSCHEDULERESULTEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartMiniGameDreamScheduleResultExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULERESULTEXCEL_STARTMINIGAMEDREAMSCHEDULERESULTEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULERESULTEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEventContentId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULERESULTEXCEL_ADDEVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDreamMakerResult(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::DreamMakerResult* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::DreamMakerResult*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULERESULTEXCEL_ADDDREAMMAKERRESULT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDreamMakerScheduleGroup(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULERESULTEXCEL_ADDDREAMMAKERSCHEDULEGROUP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddProb(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULERESULTEXCEL_ADDPROB_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParameter(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULERESULTEXCEL_ADDREWARDPARAMETER_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateRewardParameterVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULERESULTEXCEL_CREATEREWARDPARAMETERVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartRewardParameterVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULERESULTEXCEL_STARTREWARDPARAMETERVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParameterOperationType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULERESULTEXCEL_ADDREWARDPARAMETEROPERATIONTYPE_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateRewardParameterOperationTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULERESULTEXCEL_CREATEREWARDPARAMETEROPERATIONTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartRewardParameterOperationTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULERESULTEXCEL_STARTREWARDPARAMETEROPERATIONTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParameterAmount(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULERESULTEXCEL_ADDREWARDPARAMETERAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateRewardParameterAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULERESULTEXCEL_CREATEREWARDPARAMETERAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartRewardParameterAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULERESULTEXCEL_STARTREWARDPARAMETERAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ParcelType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ParcelType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULERESULTEXCEL_ADDREWARDPARCELTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULERESULTEXCEL_ADDREWARDPARCELID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelAmount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULERESULTEXCEL_ADDREWARDPARCELAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndMiniGameDreamScheduleResultExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULERESULTEXCEL_ENDMINIGAMEDREAMSCHEDULERESULTEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishMiniGameDreamScheduleResultExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULERESULTEXCEL_FINISHMINIGAMEDREAMSCHEDULERESULTEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedMiniGameDreamScheduleResultExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULERESULTEXCEL_FINISHSIZEPREFIXEDMINIGAMEDREAMSCHEDULERESULTEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

