#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class CampaignStageExcel; }
namespace FlatData { class ParcelType; }
namespace FlatData { class StageTopography; }
namespace FlatData { class StrategyEnvironment; }
namespace FlatData { class ContentType; }
namespace FlatData { class EchelonExtensionType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1A01B60)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_GETROOTASCAMPAIGNSTAGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1A01B70)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_GETROOTASCAMPAIGNSTAGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1A01BD0)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1A01C60)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1A01C30)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1A01C80)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_GET_DEPRECATED_OFFSET UNITYSDK_OFFSET(0x1A01CD0)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1A01D20)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_GETNAMEBYTES_OFFSET UNITYSDK_OFFSET(0x1A01D60)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_GET_STAGENUMBER_OFFSET UNITYSDK_OFFSET(0x1A01D80)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_GETSTAGENUMBERBYTES_OFFSET UNITYSDK_OFFSET(0x1A01DC0)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_GET_CLEARDSCENARIOID_OFFSET UNITYSDK_OFFSET(0x1A01DE0)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_GET_BATTLEDURATION_OFFSET UNITYSDK_OFFSET(0x1A01E30)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_GET_STAGEENTERCOSTTYPE_OFFSET UNITYSDK_OFFSET(0x1A01E80)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_GET_STAGEENTERCOSTID_OFFSET UNITYSDK_OFFSET(0x1A01ED0)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_GET_STAGEENTERCOSTAMOUNT_OFFSET UNITYSDK_OFFSET(0x1A01F20)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_GET_STAGEENTERECHELONCOUNT_OFFSET UNITYSDK_OFFSET(0x1A01F70)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_GET_STARCONDITIONTACTICRANKSCOUNT_OFFSET UNITYSDK_OFFSET(0x1A01FC0)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_GET_STARCONDITIONTURNCOUNT_OFFSET UNITYSDK_OFFSET(0x1A02010)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_ENTERSCENARIOGROUPID_OFFSET UNITYSDK_OFFSET(0x1A02060)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_GET_ENTERSCENARIOGROUPIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1A020C0)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_GETENTERSCENARIOGROUPIDBYTES_OFFSET UNITYSDK_OFFSET(0x1A02100)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_CLEARSCENARIOGROUPID_OFFSET UNITYSDK_OFFSET(0x1A02120)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_GET_CLEARSCENARIOGROUPIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1A02180)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_GETCLEARSCENARIOGROUPIDBYTES_OFFSET UNITYSDK_OFFSET(0x1A021C0)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_GET_STRATEGYMAP_OFFSET UNITYSDK_OFFSET(0x1A021E0)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_GETSTRATEGYMAPBYTES_OFFSET UNITYSDK_OFFSET(0x1A02220)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_GET_STRATEGYMAPBG_OFFSET UNITYSDK_OFFSET(0x1A02240)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_GETSTRATEGYMAPBGBYTES_OFFSET UNITYSDK_OFFSET(0x1A02280)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_GET_CAMPAIGNSTAGEREWARDID_OFFSET UNITYSDK_OFFSET(0x1A022A0)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_GET_MAXTURN_OFFSET UNITYSDK_OFFSET(0x1A022F0)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_GET_STAGETOPOGRAPHY_OFFSET UNITYSDK_OFFSET(0x1A02340)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_GET_RECOMMANDLEVEL_OFFSET UNITYSDK_OFFSET(0x1A02390)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_GET_RECOMMANDLEVELGAPFORGUIDE_OFFSET UNITYSDK_OFFSET(0x1A023E0)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_MINEQUIPMENTTIERFORGUIDE_OFFSET UNITYSDK_OFFSET(0x1A02430)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_GET_MINEQUIPMENTTIERFORGUIDELENGTH_OFFSET UNITYSDK_OFFSET(0x1A02490)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_GETMINEQUIPMENTTIERFORGUIDEBYTES_OFFSET UNITYSDK_OFFSET(0x1A024D0)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_MINSKILLLEVELFORGUIDE_OFFSET UNITYSDK_OFFSET(0x1A024F0)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_GET_MINSKILLLEVELFORGUIDELENGTH_OFFSET UNITYSDK_OFFSET(0x1A02550)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_GETMINSKILLLEVELFORGUIDEBYTES_OFFSET UNITYSDK_OFFSET(0x1A02590)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_GET_BGMID_OFFSET UNITYSDK_OFFSET(0x1A025B0)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_GETBGMIDBYTES_OFFSET UNITYSDK_OFFSET(0x1A025F0)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_GET_STRATEGYENVIRONMENT_OFFSET UNITYSDK_OFFSET(0x1A02610)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_GET_GROUNDID_OFFSET UNITYSDK_OFFSET(0x1A02660)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_GET_STRATEGYSKIPGROUNDID_OFFSET UNITYSDK_OFFSET(0x1A026B0)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_GET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1A02700)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_GET_BGMID_OFFSET UNITYSDK_OFFSET(0x1A02750)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_GET_FIRSTCLEARREPORTEVENTNAME_OFFSET UNITYSDK_OFFSET(0x1A027A0)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_GETFIRSTCLEARREPORTEVENTNAMEBYTES_OFFSET UNITYSDK_OFFSET(0x1A027E0)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_GET_FIRSTCLEARFUNNELMESSAGE_OFFSET UNITYSDK_OFFSET(0x1A02800)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_GETFIRSTCLEARFUNNELMESSAGEBYTES_OFFSET UNITYSDK_OFFSET(0x1A02840)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_GET_FIRSTCLEAREVENTMESSAGE_OFFSET UNITYSDK_OFFSET(0x1A02860)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_GETFIRSTCLEAREVENTMESSAGEBYTES_OFFSET UNITYSDK_OFFSET(0x1A028A0)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_GET_FIRSTSTARTFUNNELMESSAGE_OFFSET UNITYSDK_OFFSET(0x1A028C0)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_GETFIRSTSTARTFUNNELMESSAGEBYTES_OFFSET UNITYSDK_OFFSET(0x1A02900)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_GET_TACTICREWARDEXP_OFFSET UNITYSDK_OFFSET(0x1A02920)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_GET_FIXEDECHELONID_OFFSET UNITYSDK_OFFSET(0x1A02970)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_GET_ECHELONEXTENSIONTYPE_OFFSET UNITYSDK_OFFSET(0x1A029C0)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_CREATECAMPAIGNSTAGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1A02A10)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_STARTCAMPAIGNSTAGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1A03760)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1A03230)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_ADDDEPRECATED_OFFSET UNITYSDK_OFFSET(0x1A036E0)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_ADDNAME_OFFSET UNITYSDK_OFFSET(0x1A036B0)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_ADDSTAGENUMBER_OFFSET UNITYSDK_OFFSET(0x1A03680)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_ADDCLEARDSCENARIOID_OFFSET UNITYSDK_OFFSET(0x1A03200)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_ADDBATTLEDURATION_OFFSET UNITYSDK_OFFSET(0x1A031D0)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_ADDSTAGEENTERCOSTTYPE_OFFSET UNITYSDK_OFFSET(0x1A03650)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_ADDSTAGEENTERCOSTID_OFFSET UNITYSDK_OFFSET(0x1A031A0)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_ADDSTAGEENTERCOSTAMOUNT_OFFSET UNITYSDK_OFFSET(0x1A03620)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_ADDSTAGEENTERECHELONCOUNT_OFFSET UNITYSDK_OFFSET(0x1A035F0)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_ADDSTARCONDITIONTACTICRANKSCOUNT_OFFSET UNITYSDK_OFFSET(0x1A03170)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_ADDSTARCONDITIONTURNCOUNT_OFFSET UNITYSDK_OFFSET(0x1A03140)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_ADDENTERSCENARIOGROUPID_OFFSET UNITYSDK_OFFSET(0x1A035C0)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_CREATEENTERSCENARIOGROUPIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1A03780)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_STARTENTERSCENARIOGROUPIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1A03810)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_ADDCLEARSCENARIOGROUPID_OFFSET UNITYSDK_OFFSET(0x1A03590)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_CREATECLEARSCENARIOGROUPIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1A03850)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_STARTCLEARSCENARIOGROUPIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1A038E0)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_ADDSTRATEGYMAP_OFFSET UNITYSDK_OFFSET(0x1A03560)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_ADDSTRATEGYMAPBG_OFFSET UNITYSDK_OFFSET(0x1A03530)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_ADDCAMPAIGNSTAGEREWARDID_OFFSET UNITYSDK_OFFSET(0x1A03110)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_ADDMAXTURN_OFFSET UNITYSDK_OFFSET(0x1A03500)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_ADDSTAGETOPOGRAPHY_OFFSET UNITYSDK_OFFSET(0x1A034D0)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_ADDRECOMMANDLEVEL_OFFSET UNITYSDK_OFFSET(0x1A034A0)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_ADDRECOMMANDLEVELGAPFORGUIDE_OFFSET UNITYSDK_OFFSET(0x1A03470)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_ADDMINEQUIPMENTTIERFORGUIDE_OFFSET UNITYSDK_OFFSET(0x1A03440)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_CREATEMINEQUIPMENTTIERFORGUIDEVECTOR_OFFSET UNITYSDK_OFFSET(0x1A03920)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_STARTMINEQUIPMENTTIERFORGUIDEVECTOR_OFFSET UNITYSDK_OFFSET(0x1A039B0)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_ADDMINSKILLLEVELFORGUIDE_OFFSET UNITYSDK_OFFSET(0x1A03410)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_CREATEMINSKILLLEVELFORGUIDEVECTOR_OFFSET UNITYSDK_OFFSET(0x1A039F0)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_STARTMINSKILLLEVELFORGUIDEVECTOR_OFFSET UNITYSDK_OFFSET(0x1A03A80)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_ADDBGMID_OFFSET UNITYSDK_OFFSET(0x1A033E0)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_ADDSTRATEGYENVIRONMENT_OFFSET UNITYSDK_OFFSET(0x1A033B0)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_ADDGROUNDID_OFFSET UNITYSDK_OFFSET(0x1A030E0)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_ADDSTRATEGYSKIPGROUNDID_OFFSET UNITYSDK_OFFSET(0x1A03380)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_ADDCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1A03350)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_ADDBGMID_OFFSET UNITYSDK_OFFSET(0x1A030B0)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_ADDFIRSTCLEARREPORTEVENTNAME_OFFSET UNITYSDK_OFFSET(0x1A03320)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_ADDFIRSTCLEARFUNNELMESSAGE_OFFSET UNITYSDK_OFFSET(0x1A032F0)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_ADDFIRSTCLEAREVENTMESSAGE_OFFSET UNITYSDK_OFFSET(0x1A032C0)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_ADDFIRSTSTARTFUNNELMESSAGE_OFFSET UNITYSDK_OFFSET(0x1A03290)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_ADDTACTICREWARDEXP_OFFSET UNITYSDK_OFFSET(0x1A03080)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_ADDFIXEDECHELONID_OFFSET UNITYSDK_OFFSET(0x1A03050)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_ADDECHELONEXTENSIONTYPE_OFFSET UNITYSDK_OFFSET(0x1A03260)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_ENDCAMPAIGNSTAGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1A03710)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_FINISHCAMPAIGNSTAGEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A03AC0)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_FINISHSIZEPREFIXEDCAMPAIGNSTAGEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A03AE0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int CampaignStageExcel_TypeDefinitionIndex = 16882;

	class CampaignStageExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::CampaignStageExcel* GetRootAsCampaignStageExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::CampaignStageExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_GETROOTASCAMPAIGNSTAGEEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::CampaignStageExcel* GetRootAsCampaignStageExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::CampaignStageExcel* arg)
		{
			return (return (::MX::Data::Excel::CampaignStageExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::CampaignStageExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_GETROOTASCAMPAIGNSTAGEEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::CampaignStageExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::CampaignStageExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::Boolean get_Deprecated()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_GET_DEPRECATED_OFFSET))(nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_GET_NAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetNameBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_GETNAMEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_StageNumber()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_GET_STAGENUMBER_OFFSET))(nullptr);
		}

		Il2CppObject* GetStageNumberBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_GETSTAGENUMBERBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_CleardScenarioId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_GET_CLEARDSCENARIOID_OFFSET))(nullptr);
		}

		::System::Int64 get_BattleDuration()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_GET_BATTLEDURATION_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* get_StageEnterCostType()
		{
			return (return (::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_GET_STAGEENTERCOSTTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_StageEnterCostId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_GET_STAGEENTERCOSTID_OFFSET))(nullptr);
		}

		::System::Int32 get_StageEnterCostAmount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_GET_STAGEENTERCOSTAMOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_StageEnterEchelonCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_GET_STAGEENTERECHELONCOUNT_OFFSET))(nullptr);
		}

		::System::Int64 get_StarConditionTacticRankSCount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_GET_STARCONDITIONTACTICRANKSCOUNT_OFFSET))(nullptr);
		}

		::System::Int64 get_StarConditionTurnCount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_GET_STARCONDITIONTURNCOUNT_OFFSET))(nullptr);
		}

		::System::Int64 EnterScenarioGroupId(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_ENTERSCENARIOGROUPID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_EnterScenarioGroupIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_GET_ENTERSCENARIOGROUPIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetEnterScenarioGroupIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_GETENTERSCENARIOGROUPIDBYTES_OFFSET))(nullptr);
		}

		::System::Int64 ClearScenarioGroupId(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_CLEARSCENARIOGROUPID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ClearScenarioGroupIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_GET_CLEARSCENARIOGROUPIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetClearScenarioGroupIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_GETCLEARSCENARIOGROUPIDBYTES_OFFSET))(nullptr);
		}

		::System::String* get_StrategyMap()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_GET_STRATEGYMAP_OFFSET))(nullptr);
		}

		Il2CppObject* GetStrategyMapBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_GETSTRATEGYMAPBYTES_OFFSET))(nullptr);
		}

		::System::String* get_StrategyMapBG()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_GET_STRATEGYMAPBG_OFFSET))(nullptr);
		}

		Il2CppObject* GetStrategyMapBGBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_GETSTRATEGYMAPBGBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_CampaignStageRewardId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_GET_CAMPAIGNSTAGEREWARDID_OFFSET))(nullptr);
		}

		::System::Int32 get_MaxTurn()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_GET_MAXTURN_OFFSET))(nullptr);
		}

		::FlatData::StageTopography* get_StageTopography()
		{
			return (return (::FlatData::StageTopography*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_GET_STAGETOPOGRAPHY_OFFSET))(nullptr);
		}

		::System::Int32 get_RecommandLevel()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_GET_RECOMMANDLEVEL_OFFSET))(nullptr);
		}

		::System::Int32 get_RecommandLevelGapForGuide()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_GET_RECOMMANDLEVELGAPFORGUIDE_OFFSET))(nullptr);
		}

		::System::Int64 MinEquipmentTierForGuide(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_MINEQUIPMENTTIERFORGUIDE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_MinEquipmentTierForGuideLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_GET_MINEQUIPMENTTIERFORGUIDELENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetMinEquipmentTierForGuideBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_GETMINEQUIPMENTTIERFORGUIDEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 MinSkillLevelForGuide(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_MINSKILLLEVELFORGUIDE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_MinSkillLevelForGuideLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_GET_MINSKILLLEVELFORGUIDELENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetMinSkillLevelForGuideBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_GETMINSKILLLEVELFORGUIDEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_BgmId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_GET_BGMID_OFFSET))(nullptr);
		}

		Il2CppObject* GetBgmIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_GETBGMIDBYTES_OFFSET))(nullptr);
		}

		::FlatData::StrategyEnvironment* get_StrategyEnvironment()
		{
			return (return (::FlatData::StrategyEnvironment*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_GET_STRATEGYENVIRONMENT_OFFSET))(nullptr);
		}

		::System::Int64 get_GroundId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_GET_GROUNDID_OFFSET))(nullptr);
		}

		::System::Int32 get_StrategySkipGroundId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_GET_STRATEGYSKIPGROUNDID_OFFSET))(nullptr);
		}

		::FlatData::ContentType* get_ContentType()
		{
			return (return (::FlatData::ContentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_GET_CONTENTTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_BGMId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_GET_BGMID_OFFSET))(nullptr);
		}

		::System::String* get_FirstClearReportEventName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_GET_FIRSTCLEARREPORTEVENTNAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetFirstClearReportEventNameBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_GETFIRSTCLEARREPORTEVENTNAMEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_FirstClearFunnelMessage()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_GET_FIRSTCLEARFUNNELMESSAGE_OFFSET))(nullptr);
		}

		Il2CppObject* GetFirstClearFunnelMessageBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_GETFIRSTCLEARFUNNELMESSAGEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_FirstClearEventMessage()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_GET_FIRSTCLEAREVENTMESSAGE_OFFSET))(nullptr);
		}

		Il2CppObject* GetFirstClearEventMessageBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_GETFIRSTCLEAREVENTMESSAGEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_FirstStartFunnelMessage()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_GET_FIRSTSTARTFUNNELMESSAGE_OFFSET))(nullptr);
		}

		Il2CppObject* GetFirstStartFunnelMessageBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_GETFIRSTSTARTFUNNELMESSAGEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_TacticRewardExp()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_GET_TACTICREWARDEXP_OFFSET))(nullptr);
		}

		::System::Int64 get_FixedEchelonId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_GET_FIXEDECHELONID_OFFSET))(nullptr);
		}

		::FlatData::EchelonExtensionType* get_EchelonExtensionType()
		{
			return (return (::FlatData::EchelonExtensionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_GET_ECHELONEXTENSIONTYPE_OFFSET))(nullptr);
		}

		Il2CppObject* CreateCampaignStageExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Boolean arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatData::ParcelType* arg, ::System::Int64 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::System::Int64 arg, ::System::Int32 arg, ::FlatData::StageTopography* arg, ::System::Int32 arg, ::System::Int32 arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatData::StrategyEnvironment* arg, ::System::Int64 arg, ::System::Int32 arg, ::FlatData::ContentType* arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatData::EchelonExtensionType* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Boolean, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::System::Int64, ::System::Int64, ::FlatData::ParcelType*, ::System::Int64, ::System::Int32, ::System::Int32, ::System::Int64, ::System::Int64, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::System::Int64, ::System::Int32, ::FlatData::StageTopography*, ::System::Int32, ::System::Int32, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::StringOffset*, ::FlatData::StrategyEnvironment*, ::System::Int64, ::System::Int32, ::FlatData::ContentType*, ::System::Int64, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::System::Int64, ::System::Int64, ::FlatData::EchelonExtensionType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_CREATECAMPAIGNSTAGEEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartCampaignStageExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_STARTCAMPAIGNSTAGEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDeprecated(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_ADDDEPRECATED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_ADDNAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStageNumber(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_ADDSTAGENUMBER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCleardScenarioId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_ADDCLEARDSCENARIOID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBattleDuration(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_ADDBATTLEDURATION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStageEnterCostType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ParcelType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ParcelType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_ADDSTAGEENTERCOSTTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStageEnterCostId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_ADDSTAGEENTERCOSTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStageEnterCostAmount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_ADDSTAGEENTERCOSTAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStageEnterEchelonCount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_ADDSTAGEENTERECHELONCOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStarConditionTacticRankSCount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_ADDSTARCONDITIONTACTICRANKSCOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStarConditionTurnCount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_ADDSTARCONDITIONTURNCOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEnterScenarioGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_ADDENTERSCENARIOGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateEnterScenarioGroupIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_CREATEENTERSCENARIOGROUPIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartEnterScenarioGroupIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_STARTENTERSCENARIOGROUPIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddClearScenarioGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_ADDCLEARSCENARIOGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateClearScenarioGroupIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_CREATECLEARSCENARIOGROUPIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartClearScenarioGroupIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_STARTCLEARSCENARIOGROUPIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStrategyMap(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_ADDSTRATEGYMAP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStrategyMapBG(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_ADDSTRATEGYMAPBG_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCampaignStageRewardId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_ADDCAMPAIGNSTAGEREWARDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMaxTurn(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_ADDMAXTURN_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStageTopography(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::StageTopography* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::StageTopography*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_ADDSTAGETOPOGRAPHY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRecommandLevel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_ADDRECOMMANDLEVEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRecommandLevelGapForGuide(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_ADDRECOMMANDLEVELGAPFORGUIDE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMinEquipmentTierForGuide(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_ADDMINEQUIPMENTTIERFORGUIDE_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateMinEquipmentTierForGuideVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_CREATEMINEQUIPMENTTIERFORGUIDEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartMinEquipmentTierForGuideVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_STARTMINEQUIPMENTTIERFORGUIDEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMinSkillLevelForGuide(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_ADDMINSKILLLEVELFORGUIDE_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateMinSkillLevelForGuideVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_CREATEMINSKILLLEVELFORGUIDEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartMinSkillLevelForGuideVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_STARTMINSKILLLEVELFORGUIDEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBgmId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_ADDBGMID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStrategyEnvironment(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::StrategyEnvironment* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::StrategyEnvironment*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_ADDSTRATEGYENVIRONMENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddGroundId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_ADDGROUNDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStrategySkipGroundId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_ADDSTRATEGYSKIPGROUNDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddContentType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ContentType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ContentType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_ADDCONTENTTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBGMId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_ADDBGMID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddFirstClearReportEventName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_ADDFIRSTCLEARREPORTEVENTNAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddFirstClearFunnelMessage(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_ADDFIRSTCLEARFUNNELMESSAGE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddFirstClearEventMessage(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_ADDFIRSTCLEAREVENTMESSAGE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddFirstStartFunnelMessage(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_ADDFIRSTSTARTFUNNELMESSAGE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTacticRewardExp(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_ADDTACTICREWARDEXP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddFixedEchelonId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_ADDFIXEDECHELONID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEchelonExtensionType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::EchelonExtensionType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::EchelonExtensionType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_ADDECHELONEXTENSIONTYPE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndCampaignStageExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_ENDCAMPAIGNSTAGEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishCampaignStageExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_FINISHCAMPAIGNSTAGEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedCampaignStageExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEEXCEL_FINISHSIZEPREFIXEDCAMPAIGNSTAGEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

