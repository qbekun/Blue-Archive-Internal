#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class CampaignChapterExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x19FE680)
#define MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCEL_GETROOTASCAMPAIGNCHAPTEREXCEL_OFFSET UNITYSDK_OFFSET(0x19FE690)
#define MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCEL_GETROOTASCAMPAIGNCHAPTEREXCEL_OFFSET UNITYSDK_OFFSET(0x19FE6F0)
#define MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x19FE780)
#define MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x19FE750)
#define MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x19FE7A0)
#define MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCEL_GET_NAME_OFFSET UNITYSDK_OFFSET(0x19FE7F0)
#define MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCEL_GETNAMEBYTES_OFFSET UNITYSDK_OFFSET(0x19FE830)
#define MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCEL_GET_NORMALIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x19FE850)
#define MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCEL_GETNORMALIMAGEPATHBYTES_OFFSET UNITYSDK_OFFSET(0x19FE890)
#define MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCEL_GET_HARDIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x19FE8B0)
#define MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCEL_GETHARDIMAGEPATHBYTES_OFFSET UNITYSDK_OFFSET(0x19FE8F0)
#define MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCEL_GET_ORDER_OFFSET UNITYSDK_OFFSET(0x19FE910)
#define MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCEL_PRECHAPTERID_OFFSET UNITYSDK_OFFSET(0x19FE960)
#define MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCEL_GET_PRECHAPTERIDLENGTH_OFFSET UNITYSDK_OFFSET(0x19FE9C0)
#define MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCEL_GETPRECHAPTERIDBYTES_OFFSET UNITYSDK_OFFSET(0x19FEA00)
#define MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCEL_GET_CHAPTERREWARDID_OFFSET UNITYSDK_OFFSET(0x19FEA20)
#define MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCEL_GET_CHAPTERHARDREWARDID_OFFSET UNITYSDK_OFFSET(0x19FEA70)
#define MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCEL_GET_CHAPTERVERYHARDREWARDID_OFFSET UNITYSDK_OFFSET(0x19FEAC0)
#define MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCEL_NORMALCAMPAIGNSTAGEID_OFFSET UNITYSDK_OFFSET(0x19FEB10)
#define MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCEL_GET_NORMALCAMPAIGNSTAGEIDLENGTH_OFFSET UNITYSDK_OFFSET(0x19FEB70)
#define MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCEL_GETNORMALCAMPAIGNSTAGEIDBYTES_OFFSET UNITYSDK_OFFSET(0x19FEBB0)
#define MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCEL_NORMALEXTRASTAGEID_OFFSET UNITYSDK_OFFSET(0x19FEBD0)
#define MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCEL_GET_NORMALEXTRASTAGEIDLENGTH_OFFSET UNITYSDK_OFFSET(0x19FEC30)
#define MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCEL_GETNORMALEXTRASTAGEIDBYTES_OFFSET UNITYSDK_OFFSET(0x19FEC70)
#define MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCEL_HARDCAMPAIGNSTAGEID_OFFSET UNITYSDK_OFFSET(0x19FEC90)
#define MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCEL_GET_HARDCAMPAIGNSTAGEIDLENGTH_OFFSET UNITYSDK_OFFSET(0x19FECF0)
#define MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCEL_GETHARDCAMPAIGNSTAGEIDBYTES_OFFSET UNITYSDK_OFFSET(0x19FED30)
#define MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCEL_VERYHARDCAMPAIGNSTAGEID_OFFSET UNITYSDK_OFFSET(0x19FED50)
#define MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCEL_GET_VERYHARDCAMPAIGNSTAGEIDLENGTH_OFFSET UNITYSDK_OFFSET(0x19FEDB0)
#define MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCEL_GETVERYHARDCAMPAIGNSTAGEIDBYTES_OFFSET UNITYSDK_OFFSET(0x19FEDF0)
#define MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCEL_GET_ISTACTICSKIP_OFFSET UNITYSDK_OFFSET(0x19FEE10)
#define MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCEL_CREATECAMPAIGNCHAPTEREXCEL_OFFSET UNITYSDK_OFFSET(0x19FEE60)
#define MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCEL_STARTCAMPAIGNCHAPTEREXCEL_OFFSET UNITYSDK_OFFSET(0x19FF3C0)
#define MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x19FF190)
#define MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCEL_ADDNAME_OFFSET UNITYSDK_OFFSET(0x19FF310)
#define MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCEL_ADDNORMALIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x19FF2E0)
#define MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCEL_ADDHARDIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x19FF2B0)
#define MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCEL_ADDORDER_OFFSET UNITYSDK_OFFSET(0x19FF160)
#define MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCEL_ADDPRECHAPTERID_OFFSET UNITYSDK_OFFSET(0x19FF280)
#define MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCEL_CREATEPRECHAPTERIDVECTOR_OFFSET UNITYSDK_OFFSET(0x19FF3E0)
#define MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCEL_STARTPRECHAPTERIDVECTOR_OFFSET UNITYSDK_OFFSET(0x19FF470)
#define MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCEL_ADDCHAPTERREWARDID_OFFSET UNITYSDK_OFFSET(0x19FF130)
#define MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCEL_ADDCHAPTERHARDREWARDID_OFFSET UNITYSDK_OFFSET(0x19FF100)
#define MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCEL_ADDCHAPTERVERYHARDREWARDID_OFFSET UNITYSDK_OFFSET(0x19FF0D0)
#define MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCEL_ADDNORMALCAMPAIGNSTAGEID_OFFSET UNITYSDK_OFFSET(0x19FF250)
#define MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCEL_CREATENORMALCAMPAIGNSTAGEIDVECTOR_OFFSET UNITYSDK_OFFSET(0x19FF4B0)
#define MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCEL_STARTNORMALCAMPAIGNSTAGEIDVECTOR_OFFSET UNITYSDK_OFFSET(0x19FF540)
#define MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCEL_ADDNORMALEXTRASTAGEID_OFFSET UNITYSDK_OFFSET(0x19FF220)
#define MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCEL_CREATENORMALEXTRASTAGEIDVECTOR_OFFSET UNITYSDK_OFFSET(0x19FF580)
#define MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCEL_STARTNORMALEXTRASTAGEIDVECTOR_OFFSET UNITYSDK_OFFSET(0x19FF610)
#define MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCEL_ADDHARDCAMPAIGNSTAGEID_OFFSET UNITYSDK_OFFSET(0x19FF1F0)
#define MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCEL_CREATEHARDCAMPAIGNSTAGEIDVECTOR_OFFSET UNITYSDK_OFFSET(0x19FF650)
#define MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCEL_STARTHARDCAMPAIGNSTAGEIDVECTOR_OFFSET UNITYSDK_OFFSET(0x19FF6E0)
#define MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCEL_ADDVERYHARDCAMPAIGNSTAGEID_OFFSET UNITYSDK_OFFSET(0x19FF1C0)
#define MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCEL_CREATEVERYHARDCAMPAIGNSTAGEIDVECTOR_OFFSET UNITYSDK_OFFSET(0x19FF720)
#define MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCEL_STARTVERYHARDCAMPAIGNSTAGEIDVECTOR_OFFSET UNITYSDK_OFFSET(0x19FF7B0)
#define MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCEL_ADDISTACTICSKIP_OFFSET UNITYSDK_OFFSET(0x19FF340)
#define MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCEL_ENDCAMPAIGNCHAPTEREXCEL_OFFSET UNITYSDK_OFFSET(0x19FF370)
#define MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCEL_FINISHCAMPAIGNCHAPTEREXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x19FF7F0)
#define MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCEL_FINISHSIZEPREFIXEDCAMPAIGNCHAPTEREXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x19FF810)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int CampaignChapterExcel_TypeDefinitionIndex = 16868;

	class CampaignChapterExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::CampaignChapterExcel* GetRootAsCampaignChapterExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::CampaignChapterExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCEL_GETROOTASCAMPAIGNCHAPTEREXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::CampaignChapterExcel* GetRootAsCampaignChapterExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::CampaignChapterExcel* arg)
		{
			return (return (::MX::Data::Excel::CampaignChapterExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::CampaignChapterExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCEL_GETROOTASCAMPAIGNCHAPTEREXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::CampaignChapterExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::CampaignChapterExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCEL_GET_NAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetNameBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCEL_GETNAMEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_NormalImagePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCEL_GET_NORMALIMAGEPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetNormalImagePathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCEL_GETNORMALIMAGEPATHBYTES_OFFSET))(nullptr);
		}

		::System::String* get_HardImagePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCEL_GET_HARDIMAGEPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetHardImagePathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCEL_GETHARDIMAGEPATHBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_Order()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCEL_GET_ORDER_OFFSET))(nullptr);
		}

		::System::Int64 PreChapterId(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCEL_PRECHAPTERID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_PreChapterIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCEL_GET_PRECHAPTERIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetPreChapterIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCEL_GETPRECHAPTERIDBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_ChapterRewardId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCEL_GET_CHAPTERREWARDID_OFFSET))(nullptr);
		}

		::System::Int64 get_ChapterHardRewardId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCEL_GET_CHAPTERHARDREWARDID_OFFSET))(nullptr);
		}

		::System::Int64 get_ChapterVeryHardRewardId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCEL_GET_CHAPTERVERYHARDREWARDID_OFFSET))(nullptr);
		}

		::System::Int64 NormalCampaignStageId(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCEL_NORMALCAMPAIGNSTAGEID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_NormalCampaignStageIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCEL_GET_NORMALCAMPAIGNSTAGEIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetNormalCampaignStageIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCEL_GETNORMALCAMPAIGNSTAGEIDBYTES_OFFSET))(nullptr);
		}

		::System::Int64 NormalExtraStageId(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCEL_NORMALEXTRASTAGEID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_NormalExtraStageIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCEL_GET_NORMALEXTRASTAGEIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetNormalExtraStageIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCEL_GETNORMALEXTRASTAGEIDBYTES_OFFSET))(nullptr);
		}

		::System::Int64 HardCampaignStageId(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCEL_HARDCAMPAIGNSTAGEID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_HardCampaignStageIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCEL_GET_HARDCAMPAIGNSTAGEIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetHardCampaignStageIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCEL_GETHARDCAMPAIGNSTAGEIDBYTES_OFFSET))(nullptr);
		}

		::System::Int64 VeryHardCampaignStageId(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCEL_VERYHARDCAMPAIGNSTAGEID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_VeryHardCampaignStageIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCEL_GET_VERYHARDCAMPAIGNSTAGEIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetVeryHardCampaignStageIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCEL_GETVERYHARDCAMPAIGNSTAGEIDBYTES_OFFSET))(nullptr);
		}

		::System::Boolean get_IsTacticSkip()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCEL_GET_ISTACTICSKIP_OFFSET))(nullptr);
		}

		Il2CppObject* CreateCampaignChapterExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::System::Int64 arg, ::FlatBuffers::VectorOffset* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::System::Int64, ::FlatBuffers::VectorOffset*, ::System::Int64, ::System::Int64, ::System::Int64, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCEL_CREATECAMPAIGNCHAPTEREXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartCampaignChapterExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCEL_STARTCAMPAIGNCHAPTEREXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCEL_ADDNAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddNormalImagePath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCEL_ADDNORMALIMAGEPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddHardImagePath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCEL_ADDHARDIMAGEPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddOrder(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCEL_ADDORDER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPreChapterId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCEL_ADDPRECHAPTERID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreatePreChapterIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCEL_CREATEPRECHAPTERIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartPreChapterIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCEL_STARTPRECHAPTERIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddChapterRewardId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCEL_ADDCHAPTERREWARDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddChapterHardRewardId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCEL_ADDCHAPTERHARDREWARDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddChapterVeryHardRewardId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCEL_ADDCHAPTERVERYHARDREWARDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddNormalCampaignStageId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCEL_ADDNORMALCAMPAIGNSTAGEID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateNormalCampaignStageIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCEL_CREATENORMALCAMPAIGNSTAGEIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartNormalCampaignStageIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCEL_STARTNORMALCAMPAIGNSTAGEIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddNormalExtraStageId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCEL_ADDNORMALEXTRASTAGEID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateNormalExtraStageIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCEL_CREATENORMALEXTRASTAGEIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartNormalExtraStageIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCEL_STARTNORMALEXTRASTAGEIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddHardCampaignStageId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCEL_ADDHARDCAMPAIGNSTAGEID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateHardCampaignStageIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCEL_CREATEHARDCAMPAIGNSTAGEIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartHardCampaignStageIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCEL_STARTHARDCAMPAIGNSTAGEIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddVeryHardCampaignStageId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCEL_ADDVERYHARDCAMPAIGNSTAGEID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateVeryHardCampaignStageIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCEL_CREATEVERYHARDCAMPAIGNSTAGEIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartVeryHardCampaignStageIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCEL_STARTVERYHARDCAMPAIGNSTAGEIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIsTacticSkip(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCEL_ADDISTACTICSKIP_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndCampaignChapterExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCEL_ENDCAMPAIGNCHAPTEREXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishCampaignChapterExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCEL_FINISHCAMPAIGNCHAPTEREXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedCampaignChapterExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCEL_FINISHSIZEPREFIXEDCAMPAIGNCHAPTEREXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

