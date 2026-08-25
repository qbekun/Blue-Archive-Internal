#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class CampaignStrategyObjectExcel; }
namespace FlatData { class StrategyObjectType; }
namespace FlatData { class ParcelType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_CAMPAIGNSTRATEGYOBJECTEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1A05BC0)
#define MX_DATA_EXCEL_CAMPAIGNSTRATEGYOBJECTEXCEL_GETROOTASCAMPAIGNSTRATEGYOBJECTEXCEL_OFFSET UNITYSDK_OFFSET(0x1A05BD0)
#define MX_DATA_EXCEL_CAMPAIGNSTRATEGYOBJECTEXCEL_GETROOTASCAMPAIGNSTRATEGYOBJECTEXCEL_OFFSET UNITYSDK_OFFSET(0x1A05C30)
#define MX_DATA_EXCEL_CAMPAIGNSTRATEGYOBJECTEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1A05CC0)
#define MX_DATA_EXCEL_CAMPAIGNSTRATEGYOBJECTEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1A05C90)
#define MX_DATA_EXCEL_CAMPAIGNSTRATEGYOBJECTEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1A05CE0)
#define MX_DATA_EXCEL_CAMPAIGNSTRATEGYOBJECTEXCEL_GET_KEY_OFFSET UNITYSDK_OFFSET(0x1A05D30)
#define MX_DATA_EXCEL_CAMPAIGNSTRATEGYOBJECTEXCEL_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1A05D80)
#define MX_DATA_EXCEL_CAMPAIGNSTRATEGYOBJECTEXCEL_GETNAMEBYTES_OFFSET UNITYSDK_OFFSET(0x1A05DC0)
#define MX_DATA_EXCEL_CAMPAIGNSTRATEGYOBJECTEXCEL_GET_PREFABNAME_OFFSET UNITYSDK_OFFSET(0x1A05DE0)
#define MX_DATA_EXCEL_CAMPAIGNSTRATEGYOBJECTEXCEL_GETPREFABNAMEBYTES_OFFSET UNITYSDK_OFFSET(0x1A05E20)
#define MX_DATA_EXCEL_CAMPAIGNSTRATEGYOBJECTEXCEL_GET_STRATEGYOBJECTTYPE_OFFSET UNITYSDK_OFFSET(0x1A05E40)
#define MX_DATA_EXCEL_CAMPAIGNSTRATEGYOBJECTEXCEL_GET_STRATEGYREWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1A05E90)
#define MX_DATA_EXCEL_CAMPAIGNSTRATEGYOBJECTEXCEL_GET_STRATEGYREWARDID_OFFSET UNITYSDK_OFFSET(0x1A05EE0)
#define MX_DATA_EXCEL_CAMPAIGNSTRATEGYOBJECTEXCEL_GET_STRATEGYREWARDNAME_OFFSET UNITYSDK_OFFSET(0x1A05F30)
#define MX_DATA_EXCEL_CAMPAIGNSTRATEGYOBJECTEXCEL_GETSTRATEGYREWARDNAMEBYTES_OFFSET UNITYSDK_OFFSET(0x1A05F70)
#define MX_DATA_EXCEL_CAMPAIGNSTRATEGYOBJECTEXCEL_GET_STRATEGYREWARDAMOUNT_OFFSET UNITYSDK_OFFSET(0x1A05F90)
#define MX_DATA_EXCEL_CAMPAIGNSTRATEGYOBJECTEXCEL_GET_STRATEGYSIGHTRANGE_OFFSET UNITYSDK_OFFSET(0x1A05FE0)
#define MX_DATA_EXCEL_CAMPAIGNSTRATEGYOBJECTEXCEL_GET_PORTALID_OFFSET UNITYSDK_OFFSET(0x1A06030)
#define MX_DATA_EXCEL_CAMPAIGNSTRATEGYOBJECTEXCEL_GET_HEALVALUE_OFFSET UNITYSDK_OFFSET(0x1A06080)
#define MX_DATA_EXCEL_CAMPAIGNSTRATEGYOBJECTEXCEL_GET_SWITHID_OFFSET UNITYSDK_OFFSET(0x1A060D0)
#define MX_DATA_EXCEL_CAMPAIGNSTRATEGYOBJECTEXCEL_GET_BUFFID_OFFSET UNITYSDK_OFFSET(0x1A06120)
#define MX_DATA_EXCEL_CAMPAIGNSTRATEGYOBJECTEXCEL_GET_DISPOSABLE_OFFSET UNITYSDK_OFFSET(0x1A06170)
#define MX_DATA_EXCEL_CAMPAIGNSTRATEGYOBJECTEXCEL_CREATECAMPAIGNSTRATEGYOBJECTEXCEL_OFFSET UNITYSDK_OFFSET(0x1A061C0)
#define MX_DATA_EXCEL_CAMPAIGNSTRATEGYOBJECTEXCEL_STARTCAMPAIGNSTRATEGYOBJECTEXCEL_OFFSET UNITYSDK_OFFSET(0x1A06780)
#define MX_DATA_EXCEL_CAMPAIGNSTRATEGYOBJECTEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1A064C0)
#define MX_DATA_EXCEL_CAMPAIGNSTRATEGYOBJECTEXCEL_ADDKEY_OFFSET UNITYSDK_OFFSET(0x1A066D0)
#define MX_DATA_EXCEL_CAMPAIGNSTRATEGYOBJECTEXCEL_ADDNAME_OFFSET UNITYSDK_OFFSET(0x1A066A0)
#define MX_DATA_EXCEL_CAMPAIGNSTRATEGYOBJECTEXCEL_ADDPREFABNAME_OFFSET UNITYSDK_OFFSET(0x1A06670)
#define MX_DATA_EXCEL_CAMPAIGNSTRATEGYOBJECTEXCEL_ADDSTRATEGYOBJECTTYPE_OFFSET UNITYSDK_OFFSET(0x1A06640)
#define MX_DATA_EXCEL_CAMPAIGNSTRATEGYOBJECTEXCEL_ADDSTRATEGYREWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1A06610)
#define MX_DATA_EXCEL_CAMPAIGNSTRATEGYOBJECTEXCEL_ADDSTRATEGYREWARDID_OFFSET UNITYSDK_OFFSET(0x1A06490)
#define MX_DATA_EXCEL_CAMPAIGNSTRATEGYOBJECTEXCEL_ADDSTRATEGYREWARDNAME_OFFSET UNITYSDK_OFFSET(0x1A065E0)
#define MX_DATA_EXCEL_CAMPAIGNSTRATEGYOBJECTEXCEL_ADDSTRATEGYREWARDAMOUNT_OFFSET UNITYSDK_OFFSET(0x1A065B0)
#define MX_DATA_EXCEL_CAMPAIGNSTRATEGYOBJECTEXCEL_ADDSTRATEGYSIGHTRANGE_OFFSET UNITYSDK_OFFSET(0x1A06460)
#define MX_DATA_EXCEL_CAMPAIGNSTRATEGYOBJECTEXCEL_ADDPORTALID_OFFSET UNITYSDK_OFFSET(0x1A06580)
#define MX_DATA_EXCEL_CAMPAIGNSTRATEGYOBJECTEXCEL_ADDHEALVALUE_OFFSET UNITYSDK_OFFSET(0x1A06550)
#define MX_DATA_EXCEL_CAMPAIGNSTRATEGYOBJECTEXCEL_ADDSWITHID_OFFSET UNITYSDK_OFFSET(0x1A06520)
#define MX_DATA_EXCEL_CAMPAIGNSTRATEGYOBJECTEXCEL_ADDBUFFID_OFFSET UNITYSDK_OFFSET(0x1A064F0)
#define MX_DATA_EXCEL_CAMPAIGNSTRATEGYOBJECTEXCEL_ADDDISPOSABLE_OFFSET UNITYSDK_OFFSET(0x1A06700)
#define MX_DATA_EXCEL_CAMPAIGNSTRATEGYOBJECTEXCEL_ENDCAMPAIGNSTRATEGYOBJECTEXCEL_OFFSET UNITYSDK_OFFSET(0x1A06730)
#define MX_DATA_EXCEL_CAMPAIGNSTRATEGYOBJECTEXCEL_FINISHCAMPAIGNSTRATEGYOBJECTEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A067A0)
#define MX_DATA_EXCEL_CAMPAIGNSTRATEGYOBJECTEXCEL_FINISHSIZEPREFIXEDCAMPAIGNSTRATEGYOBJECTEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A067C0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int CampaignStrategyObjectExcel_TypeDefinitionIndex = 16896;

	class CampaignStrategyObjectExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTRATEGYOBJECTEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::CampaignStrategyObjectExcel* GetRootAsCampaignStrategyObjectExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::CampaignStrategyObjectExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTRATEGYOBJECTEXCEL_GETROOTASCAMPAIGNSTRATEGYOBJECTEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::CampaignStrategyObjectExcel* GetRootAsCampaignStrategyObjectExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::CampaignStrategyObjectExcel* arg)
		{
			return (return (::MX::Data::Excel::CampaignStrategyObjectExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::CampaignStrategyObjectExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTRATEGYOBJECTEXCEL_GETROOTASCAMPAIGNSTRATEGYOBJECTEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTRATEGYOBJECTEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::CampaignStrategyObjectExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::CampaignStrategyObjectExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTRATEGYOBJECTEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTRATEGYOBJECTEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::UInt32 get_Key()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTRATEGYOBJECTEXCEL_GET_KEY_OFFSET))(nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTRATEGYOBJECTEXCEL_GET_NAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetNameBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTRATEGYOBJECTEXCEL_GETNAMEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_PrefabName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTRATEGYOBJECTEXCEL_GET_PREFABNAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetPrefabNameBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTRATEGYOBJECTEXCEL_GETPREFABNAMEBYTES_OFFSET))(nullptr);
		}

		::FlatData::StrategyObjectType* get_StrategyObjectType()
		{
			return (return (::FlatData::StrategyObjectType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTRATEGYOBJECTEXCEL_GET_STRATEGYOBJECTTYPE_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* get_StrategyRewardParcelType()
		{
			return (return (::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTRATEGYOBJECTEXCEL_GET_STRATEGYREWARDPARCELTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_StrategyRewardID()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTRATEGYOBJECTEXCEL_GET_STRATEGYREWARDID_OFFSET))(nullptr);
		}

		::System::String* get_StrategyRewardName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTRATEGYOBJECTEXCEL_GET_STRATEGYREWARDNAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetStrategyRewardNameBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTRATEGYOBJECTEXCEL_GETSTRATEGYREWARDNAMEBYTES_OFFSET))(nullptr);
		}

		::System::Int32 get_StrategyRewardAmount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTRATEGYOBJECTEXCEL_GET_STRATEGYREWARDAMOUNT_OFFSET))(nullptr);
		}

		::System::Int64 get_StrategySightRange()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTRATEGYOBJECTEXCEL_GET_STRATEGYSIGHTRANGE_OFFSET))(nullptr);
		}

		::System::Int32 get_PortalId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTRATEGYOBJECTEXCEL_GET_PORTALID_OFFSET))(nullptr);
		}

		::System::Int32 get_HealValue()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTRATEGYOBJECTEXCEL_GET_HEALVALUE_OFFSET))(nullptr);
		}

		::System::Int32 get_SwithId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTRATEGYOBJECTEXCEL_GET_SWITHID_OFFSET))(nullptr);
		}

		::System::Int32 get_BuffId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTRATEGYOBJECTEXCEL_GET_BUFFID_OFFSET))(nullptr);
		}

		::System::Boolean get_Disposable()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTRATEGYOBJECTEXCEL_GET_DISPOSABLE_OFFSET))(nullptr);
		}

		Il2CppObject* CreateCampaignStrategyObjectExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::UInt32 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatData::StrategyObjectType* arg, ::FlatData::ParcelType* arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::System::Int32 arg, ::System::Int64 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::UInt32, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatData::StrategyObjectType*, ::FlatData::ParcelType*, ::System::Int64, ::FlatBuffers::StringOffset*, ::System::Int32, ::System::Int64, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTRATEGYOBJECTEXCEL_CREATECAMPAIGNSTRATEGYOBJECTEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartCampaignStrategyObjectExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTRATEGYOBJECTEXCEL_STARTCAMPAIGNSTRATEGYOBJECTEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTRATEGYOBJECTEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddKey(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTRATEGYOBJECTEXCEL_ADDKEY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTRATEGYOBJECTEXCEL_ADDNAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPrefabName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTRATEGYOBJECTEXCEL_ADDPREFABNAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStrategyObjectType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::StrategyObjectType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::StrategyObjectType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTRATEGYOBJECTEXCEL_ADDSTRATEGYOBJECTTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStrategyRewardParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ParcelType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ParcelType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTRATEGYOBJECTEXCEL_ADDSTRATEGYREWARDPARCELTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStrategyRewardID(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTRATEGYOBJECTEXCEL_ADDSTRATEGYREWARDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStrategyRewardName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTRATEGYOBJECTEXCEL_ADDSTRATEGYREWARDNAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStrategyRewardAmount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTRATEGYOBJECTEXCEL_ADDSTRATEGYREWARDAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStrategySightRange(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTRATEGYOBJECTEXCEL_ADDSTRATEGYSIGHTRANGE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPortalId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTRATEGYOBJECTEXCEL_ADDPORTALID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddHealValue(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTRATEGYOBJECTEXCEL_ADDHEALVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSwithId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTRATEGYOBJECTEXCEL_ADDSWITHID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBuffId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTRATEGYOBJECTEXCEL_ADDBUFFID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDisposable(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTRATEGYOBJECTEXCEL_ADDDISPOSABLE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndCampaignStrategyObjectExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTRATEGYOBJECTEXCEL_ENDCAMPAIGNSTRATEGYOBJECTEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishCampaignStrategyObjectExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTRATEGYOBJECTEXCEL_FINISHCAMPAIGNSTRATEGYOBJECTEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedCampaignStrategyObjectExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTRATEGYOBJECTEXCEL_FINISHSIZEPREFIXEDCAMPAIGNSTRATEGYOBJECTEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

