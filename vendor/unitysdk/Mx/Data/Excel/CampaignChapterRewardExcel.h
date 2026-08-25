#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class CampaignChapterRewardExcel; }
namespace FlatData { class ParcelType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_CAMPAIGNCHAPTERREWARDEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1A00540)
#define MX_DATA_EXCEL_CAMPAIGNCHAPTERREWARDEXCEL_GETROOTASCAMPAIGNCHAPTERREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1A00550)
#define MX_DATA_EXCEL_CAMPAIGNCHAPTERREWARDEXCEL_GETROOTASCAMPAIGNCHAPTERREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1A005B0)
#define MX_DATA_EXCEL_CAMPAIGNCHAPTERREWARDEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1A00640)
#define MX_DATA_EXCEL_CAMPAIGNCHAPTERREWARDEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1A00610)
#define MX_DATA_EXCEL_CAMPAIGNCHAPTERREWARDEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1A00660)
#define MX_DATA_EXCEL_CAMPAIGNCHAPTERREWARDEXCEL_GET_CAMPAIGNCHAPTERSTAR_OFFSET UNITYSDK_OFFSET(0x1A006B0)
#define MX_DATA_EXCEL_CAMPAIGNCHAPTERREWARDEXCEL_CHAPTERREWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1A00700)
#define MX_DATA_EXCEL_CAMPAIGNCHAPTERREWARDEXCEL_GET_CHAPTERREWARDPARCELTYPELENGTH_OFFSET UNITYSDK_OFFSET(0x1A00760)
#define MX_DATA_EXCEL_CAMPAIGNCHAPTERREWARDEXCEL_GETCHAPTERREWARDPARCELTYPEBYTES_OFFSET UNITYSDK_OFFSET(0x1A007A0)
#define MX_DATA_EXCEL_CAMPAIGNCHAPTERREWARDEXCEL_CHAPTERREWARDID_OFFSET UNITYSDK_OFFSET(0x1A007C0)
#define MX_DATA_EXCEL_CAMPAIGNCHAPTERREWARDEXCEL_GET_CHAPTERREWARDIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1A00820)
#define MX_DATA_EXCEL_CAMPAIGNCHAPTERREWARDEXCEL_GETCHAPTERREWARDIDBYTES_OFFSET UNITYSDK_OFFSET(0x1A00860)
#define MX_DATA_EXCEL_CAMPAIGNCHAPTERREWARDEXCEL_CHAPTERREWARDAMOUNT_OFFSET UNITYSDK_OFFSET(0x1A00880)
#define MX_DATA_EXCEL_CAMPAIGNCHAPTERREWARDEXCEL_GET_CHAPTERREWARDAMOUNTLENGTH_OFFSET UNITYSDK_OFFSET(0x1A008E0)
#define MX_DATA_EXCEL_CAMPAIGNCHAPTERREWARDEXCEL_GETCHAPTERREWARDAMOUNTBYTES_OFFSET UNITYSDK_OFFSET(0x1A00920)
#define MX_DATA_EXCEL_CAMPAIGNCHAPTERREWARDEXCEL_CREATECAMPAIGNCHAPTERREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1A00940)
#define MX_DATA_EXCEL_CAMPAIGNCHAPTERREWARDEXCEL_STARTCAMPAIGNCHAPTERREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1A00B80)
#define MX_DATA_EXCEL_CAMPAIGNCHAPTERREWARDEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1A00A70)
#define MX_DATA_EXCEL_CAMPAIGNCHAPTERREWARDEXCEL_ADDCAMPAIGNCHAPTERSTAR_OFFSET UNITYSDK_OFFSET(0x1A00A40)
#define MX_DATA_EXCEL_CAMPAIGNCHAPTERREWARDEXCEL_ADDCHAPTERREWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1A00B00)
#define MX_DATA_EXCEL_CAMPAIGNCHAPTERREWARDEXCEL_CREATECHAPTERREWARDPARCELTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1A00BA0)
#define MX_DATA_EXCEL_CAMPAIGNCHAPTERREWARDEXCEL_STARTCHAPTERREWARDPARCELTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1A00C30)
#define MX_DATA_EXCEL_CAMPAIGNCHAPTERREWARDEXCEL_ADDCHAPTERREWARDID_OFFSET UNITYSDK_OFFSET(0x1A00AD0)
#define MX_DATA_EXCEL_CAMPAIGNCHAPTERREWARDEXCEL_CREATECHAPTERREWARDIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1A00C70)
#define MX_DATA_EXCEL_CAMPAIGNCHAPTERREWARDEXCEL_STARTCHAPTERREWARDIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1A00D00)
#define MX_DATA_EXCEL_CAMPAIGNCHAPTERREWARDEXCEL_ADDCHAPTERREWARDAMOUNT_OFFSET UNITYSDK_OFFSET(0x1A00AA0)
#define MX_DATA_EXCEL_CAMPAIGNCHAPTERREWARDEXCEL_CREATECHAPTERREWARDAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1A00D40)
#define MX_DATA_EXCEL_CAMPAIGNCHAPTERREWARDEXCEL_STARTCHAPTERREWARDAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1A00DD0)
#define MX_DATA_EXCEL_CAMPAIGNCHAPTERREWARDEXCEL_ENDCAMPAIGNCHAPTERREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1A00B30)
#define MX_DATA_EXCEL_CAMPAIGNCHAPTERREWARDEXCEL_FINISHCAMPAIGNCHAPTERREWARDEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A00E10)
#define MX_DATA_EXCEL_CAMPAIGNCHAPTERREWARDEXCEL_FINISHSIZEPREFIXEDCAMPAIGNCHAPTERREWARDEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A00E30)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int CampaignChapterRewardExcel_TypeDefinitionIndex = 16875;

	class CampaignChapterRewardExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNCHAPTERREWARDEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::CampaignChapterRewardExcel* GetRootAsCampaignChapterRewardExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::CampaignChapterRewardExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNCHAPTERREWARDEXCEL_GETROOTASCAMPAIGNCHAPTERREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::CampaignChapterRewardExcel* GetRootAsCampaignChapterRewardExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::CampaignChapterRewardExcel* arg)
		{
			return (return (::MX::Data::Excel::CampaignChapterRewardExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::CampaignChapterRewardExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNCHAPTERREWARDEXCEL_GETROOTASCAMPAIGNCHAPTERREWARDEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNCHAPTERREWARDEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::CampaignChapterRewardExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::CampaignChapterRewardExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNCHAPTERREWARDEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNCHAPTERREWARDEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::Int64 get_CampaignChapterStar()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNCHAPTERREWARDEXCEL_GET_CAMPAIGNCHAPTERSTAR_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* ChapterRewardParcelType(::System::Int32 arg)
		{
			return (return (::FlatData::ParcelType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNCHAPTERREWARDEXCEL_CHAPTERREWARDPARCELTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ChapterRewardParcelTypeLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNCHAPTERREWARDEXCEL_GET_CHAPTERREWARDPARCELTYPELENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetChapterRewardParcelTypeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNCHAPTERREWARDEXCEL_GETCHAPTERREWARDPARCELTYPEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 ChapterRewardId(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNCHAPTERREWARDEXCEL_CHAPTERREWARDID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ChapterRewardIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNCHAPTERREWARDEXCEL_GET_CHAPTERREWARDIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetChapterRewardIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNCHAPTERREWARDEXCEL_GETCHAPTERREWARDIDBYTES_OFFSET))(nullptr);
		}

		::System::Int32 ChapterRewardAmount(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNCHAPTERREWARDEXCEL_CHAPTERREWARDAMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ChapterRewardAmountLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNCHAPTERREWARDEXCEL_GET_CHAPTERREWARDAMOUNTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetChapterRewardAmountBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNCHAPTERREWARDEXCEL_GETCHAPTERREWARDAMOUNTBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateCampaignChapterRewardExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNCHAPTERREWARDEXCEL_CREATECAMPAIGNCHAPTERREWARDEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartCampaignChapterRewardExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNCHAPTERREWARDEXCEL_STARTCAMPAIGNCHAPTERREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNCHAPTERREWARDEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCampaignChapterStar(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNCHAPTERREWARDEXCEL_ADDCAMPAIGNCHAPTERSTAR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddChapterRewardParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNCHAPTERREWARDEXCEL_ADDCHAPTERREWARDPARCELTYPE_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateChapterRewardParcelTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNCHAPTERREWARDEXCEL_CREATECHAPTERREWARDPARCELTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartChapterRewardParcelTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNCHAPTERREWARDEXCEL_STARTCHAPTERREWARDPARCELTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddChapterRewardId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNCHAPTERREWARDEXCEL_ADDCHAPTERREWARDID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateChapterRewardIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNCHAPTERREWARDEXCEL_CREATECHAPTERREWARDIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartChapterRewardIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNCHAPTERREWARDEXCEL_STARTCHAPTERREWARDIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddChapterRewardAmount(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNCHAPTERREWARDEXCEL_ADDCHAPTERREWARDAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateChapterRewardAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNCHAPTERREWARDEXCEL_CREATECHAPTERREWARDAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartChapterRewardAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNCHAPTERREWARDEXCEL_STARTCHAPTERREWARDAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndCampaignChapterRewardExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNCHAPTERREWARDEXCEL_ENDCAMPAIGNCHAPTERREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishCampaignChapterRewardExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNCHAPTERREWARDEXCEL_FINISHCAMPAIGNCHAPTERREWARDEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedCampaignChapterRewardExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNCHAPTERREWARDEXCEL_FINISHSIZEPREFIXEDCAMPAIGNCHAPTERREWARDEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

