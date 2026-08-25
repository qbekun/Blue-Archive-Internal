#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class EventContentFortuneGachaShopExcel; }
namespace FlatData { class ParcelType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHASHOPEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1AE2AA0)
#define MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHASHOPEXCEL_GETROOTASEVENTCONTENTFORTUNEGACHASHOPEXCEL_OFFSET UNITYSDK_OFFSET(0x1AE2AB0)
#define MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHASHOPEXCEL_GETROOTASEVENTCONTENTFORTUNEGACHASHOPEXCEL_OFFSET UNITYSDK_OFFSET(0x1AE2B10)
#define MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHASHOPEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1AE2BA0)
#define MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHASHOPEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1AE2B70)
#define MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHASHOPEXCEL_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1AE2BC0)
#define MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHASHOPEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1AE2C10)
#define MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHASHOPEXCEL_GET_GRADE_OFFSET UNITYSDK_OFFSET(0x1AE2C60)
#define MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHASHOPEXCEL_GET_COSTGOODSID_OFFSET UNITYSDK_OFFSET(0x1AE2CB0)
#define MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHASHOPEXCEL_GET_ISLEGACY_OFFSET UNITYSDK_OFFSET(0x1AE2D00)
#define MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHASHOPEXCEL_GET_FORTUNEGACHAGROUPID_OFFSET UNITYSDK_OFFSET(0x1AE2D50)
#define MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHASHOPEXCEL_GET_PROB_OFFSET UNITYSDK_OFFSET(0x1AE2DA0)
#define MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHASHOPEXCEL_GET_PROBMODIFYVALUE_OFFSET UNITYSDK_OFFSET(0x1AE2DF0)
#define MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHASHOPEXCEL_GET_PROBMODIFYLIMIT_OFFSET UNITYSDK_OFFSET(0x1AE2E40)
#define MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHASHOPEXCEL_REWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1AE2E90)
#define MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHASHOPEXCEL_GET_REWARDPARCELTYPELENGTH_OFFSET UNITYSDK_OFFSET(0x1AE2EF0)
#define MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHASHOPEXCEL_GETREWARDPARCELTYPEBYTES_OFFSET UNITYSDK_OFFSET(0x1AE2F30)
#define MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHASHOPEXCEL_REWARDPARCELID_OFFSET UNITYSDK_OFFSET(0x1AE2F50)
#define MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHASHOPEXCEL_GET_REWARDPARCELIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1AE2FB0)
#define MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHASHOPEXCEL_GETREWARDPARCELIDBYTES_OFFSET UNITYSDK_OFFSET(0x1AE2FF0)
#define MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHASHOPEXCEL_REWARDPARCELAMOUNT_OFFSET UNITYSDK_OFFSET(0x1AE3010)
#define MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHASHOPEXCEL_GET_REWARDPARCELAMOUNTLENGTH_OFFSET UNITYSDK_OFFSET(0x1AE3070)
#define MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHASHOPEXCEL_GETREWARDPARCELAMOUNTBYTES_OFFSET UNITYSDK_OFFSET(0x1AE30B0)
#define MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHASHOPEXCEL_CREATEEVENTCONTENTFORTUNEGACHASHOPEXCEL_OFFSET UNITYSDK_OFFSET(0x1AE30D0)
#define MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHASHOPEXCEL_STARTEVENTCONTENTFORTUNEGACHASHOPEXCEL_OFFSET UNITYSDK_OFFSET(0x1AE3580)
#define MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHASHOPEXCEL_ADDEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1AE3350)
#define MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHASHOPEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1AE3320)
#define MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHASHOPEXCEL_ADDGRADE_OFFSET UNITYSDK_OFFSET(0x1AE34D0)
#define MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHASHOPEXCEL_ADDCOSTGOODSID_OFFSET UNITYSDK_OFFSET(0x1AE32F0)
#define MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHASHOPEXCEL_ADDISLEGACY_OFFSET UNITYSDK_OFFSET(0x1AE3500)
#define MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHASHOPEXCEL_ADDFORTUNEGACHAGROUPID_OFFSET UNITYSDK_OFFSET(0x1AE34A0)
#define MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHASHOPEXCEL_ADDPROB_OFFSET UNITYSDK_OFFSET(0x1AE3470)
#define MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHASHOPEXCEL_ADDPROBMODIFYVALUE_OFFSET UNITYSDK_OFFSET(0x1AE3440)
#define MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHASHOPEXCEL_ADDPROBMODIFYLIMIT_OFFSET UNITYSDK_OFFSET(0x1AE3410)
#define MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHASHOPEXCEL_ADDREWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1AE33E0)
#define MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHASHOPEXCEL_CREATEREWARDPARCELTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1AE35A0)
#define MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHASHOPEXCEL_STARTREWARDPARCELTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1AE3630)
#define MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHASHOPEXCEL_ADDREWARDPARCELID_OFFSET UNITYSDK_OFFSET(0x1AE33B0)
#define MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHASHOPEXCEL_CREATEREWARDPARCELIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1AE3670)
#define MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHASHOPEXCEL_STARTREWARDPARCELIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1AE3700)
#define MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHASHOPEXCEL_ADDREWARDPARCELAMOUNT_OFFSET UNITYSDK_OFFSET(0x1AE3380)
#define MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHASHOPEXCEL_CREATEREWARDPARCELAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1AE3740)
#define MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHASHOPEXCEL_STARTREWARDPARCELAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1AE37D0)
#define MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHASHOPEXCEL_ENDEVENTCONTENTFORTUNEGACHASHOPEXCEL_OFFSET UNITYSDK_OFFSET(0x1AE3530)
#define MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHASHOPEXCEL_FINISHEVENTCONTENTFORTUNEGACHASHOPEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1AE3810)
#define MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHASHOPEXCEL_FINISHSIZEPREFIXEDEVENTCONTENTFORTUNEGACHASHOPEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1AE3830)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentFortuneGachaShopExcel_TypeDefinitionIndex = 17713;

	class EventContentFortuneGachaShopExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHASHOPEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::EventContentFortuneGachaShopExcel* GetRootAsEventContentFortuneGachaShopExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EventContentFortuneGachaShopExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHASHOPEXCEL_GETROOTASEVENTCONTENTFORTUNEGACHASHOPEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::EventContentFortuneGachaShopExcel* GetRootAsEventContentFortuneGachaShopExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::EventContentFortuneGachaShopExcel* arg)
		{
			return (return (::MX::Data::Excel::EventContentFortuneGachaShopExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::EventContentFortuneGachaShopExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHASHOPEXCEL_GETROOTASEVENTCONTENTFORTUNEGACHASHOPEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHASHOPEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::EventContentFortuneGachaShopExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EventContentFortuneGachaShopExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHASHOPEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHASHOPEXCEL_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHASHOPEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::Int32 get_Grade()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHASHOPEXCEL_GET_GRADE_OFFSET))(nullptr);
		}

		::System::Int64 get_CostGoodsId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHASHOPEXCEL_GET_COSTGOODSID_OFFSET))(nullptr);
		}

		::System::Boolean get_IsLegacy()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHASHOPEXCEL_GET_ISLEGACY_OFFSET))(nullptr);
		}

		::System::Int32 get_FortuneGachaGroupId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHASHOPEXCEL_GET_FORTUNEGACHAGROUPID_OFFSET))(nullptr);
		}

		::System::Int32 get_Prob()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHASHOPEXCEL_GET_PROB_OFFSET))(nullptr);
		}

		::System::Int32 get_ProbModifyValue()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHASHOPEXCEL_GET_PROBMODIFYVALUE_OFFSET))(nullptr);
		}

		::System::Int32 get_ProbModifyLimit()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHASHOPEXCEL_GET_PROBMODIFYLIMIT_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* RewardParcelType(::System::Int32 arg)
		{
			return (return (::FlatData::ParcelType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHASHOPEXCEL_REWARDPARCELTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RewardParcelTypeLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHASHOPEXCEL_GET_REWARDPARCELTYPELENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetRewardParcelTypeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHASHOPEXCEL_GETREWARDPARCELTYPEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 RewardParcelId(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHASHOPEXCEL_REWARDPARCELID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RewardParcelIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHASHOPEXCEL_GET_REWARDPARCELIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetRewardParcelIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHASHOPEXCEL_GETREWARDPARCELIDBYTES_OFFSET))(nullptr);
		}

		::System::Int64 RewardParcelAmount(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHASHOPEXCEL_REWARDPARCELAMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RewardParcelAmountLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHASHOPEXCEL_GET_REWARDPARCELAMOUNTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetRewardParcelAmountBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHASHOPEXCEL_GETREWARDPARCELAMOUNTBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateEventContentFortuneGachaShopExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int32 arg, ::System::Int64 arg, ::System::Boolean arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::System::Int32, ::System::Int64, ::System::Boolean, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHASHOPEXCEL_CREATEEVENTCONTENTFORTUNEGACHASHOPEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartEventContentFortuneGachaShopExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHASHOPEXCEL_STARTEVENTCONTENTFORTUNEGACHASHOPEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddEventContentId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHASHOPEXCEL_ADDEVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHASHOPEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddGrade(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHASHOPEXCEL_ADDGRADE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCostGoodsId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHASHOPEXCEL_ADDCOSTGOODSID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIsLegacy(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHASHOPEXCEL_ADDISLEGACY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddFortuneGachaGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHASHOPEXCEL_ADDFORTUNEGACHAGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddProb(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHASHOPEXCEL_ADDPROB_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddProbModifyValue(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHASHOPEXCEL_ADDPROBMODIFYVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddProbModifyLimit(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHASHOPEXCEL_ADDPROBMODIFYLIMIT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHASHOPEXCEL_ADDREWARDPARCELTYPE_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateRewardParcelTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHASHOPEXCEL_CREATEREWARDPARCELTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartRewardParcelTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHASHOPEXCEL_STARTREWARDPARCELTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHASHOPEXCEL_ADDREWARDPARCELID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateRewardParcelIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHASHOPEXCEL_CREATEREWARDPARCELIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartRewardParcelIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHASHOPEXCEL_STARTREWARDPARCELIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelAmount(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHASHOPEXCEL_ADDREWARDPARCELAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateRewardParcelAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHASHOPEXCEL_CREATEREWARDPARCELAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartRewardParcelAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHASHOPEXCEL_STARTREWARDPARCELAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndEventContentFortuneGachaShopExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHASHOPEXCEL_ENDEVENTCONTENTFORTUNEGACHASHOPEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishEventContentFortuneGachaShopExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHASHOPEXCEL_FINISHEVENTCONTENTFORTUNEGACHASHOPEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedEventContentFortuneGachaShopExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHASHOPEXCEL_FINISHSIZEPREFIXEDEVENTCONTENTFORTUNEGACHASHOPEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

