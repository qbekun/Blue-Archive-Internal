#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class CampaignUnitExcel; }
namespace FlatData { class StrategyAIType; }
namespace FlatData { class HexaUnitGrade; }
namespace FlatData { class TacticEnvironment; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_CAMPAIGNUNITEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1A074F0)
#define MX_DATA_EXCEL_CAMPAIGNUNITEXCEL_GETROOTASCAMPAIGNUNITEXCEL_OFFSET UNITYSDK_OFFSET(0x1A07500)
#define MX_DATA_EXCEL_CAMPAIGNUNITEXCEL_GETROOTASCAMPAIGNUNITEXCEL_OFFSET UNITYSDK_OFFSET(0x1A07560)
#define MX_DATA_EXCEL_CAMPAIGNUNITEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1A075F0)
#define MX_DATA_EXCEL_CAMPAIGNUNITEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1A075C0)
#define MX_DATA_EXCEL_CAMPAIGNUNITEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1A07610)
#define MX_DATA_EXCEL_CAMPAIGNUNITEXCEL_GET_KEY_OFFSET UNITYSDK_OFFSET(0x1A07660)
#define MX_DATA_EXCEL_CAMPAIGNUNITEXCEL_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1A076B0)
#define MX_DATA_EXCEL_CAMPAIGNUNITEXCEL_GETNAMEBYTES_OFFSET UNITYSDK_OFFSET(0x1A076F0)
#define MX_DATA_EXCEL_CAMPAIGNUNITEXCEL_GET_PREFABNAME_OFFSET UNITYSDK_OFFSET(0x1A07710)
#define MX_DATA_EXCEL_CAMPAIGNUNITEXCEL_GETPREFABNAMEBYTES_OFFSET UNITYSDK_OFFSET(0x1A07750)
#define MX_DATA_EXCEL_CAMPAIGNUNITEXCEL_GET_STRATEGYPREFABNAME_OFFSET UNITYSDK_OFFSET(0x1A07770)
#define MX_DATA_EXCEL_CAMPAIGNUNITEXCEL_GETSTRATEGYPREFABNAMEBYTES_OFFSET UNITYSDK_OFFSET(0x1A077B0)
#define MX_DATA_EXCEL_CAMPAIGNUNITEXCEL_ENTERSCENARIOGROUPID_OFFSET UNITYSDK_OFFSET(0x1A077D0)
#define MX_DATA_EXCEL_CAMPAIGNUNITEXCEL_GET_ENTERSCENARIOGROUPIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1A07830)
#define MX_DATA_EXCEL_CAMPAIGNUNITEXCEL_GETENTERSCENARIOGROUPIDBYTES_OFFSET UNITYSDK_OFFSET(0x1A07870)
#define MX_DATA_EXCEL_CAMPAIGNUNITEXCEL_CLEARSCENARIOGROUPID_OFFSET UNITYSDK_OFFSET(0x1A07890)
#define MX_DATA_EXCEL_CAMPAIGNUNITEXCEL_GET_CLEARSCENARIOGROUPIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1A078F0)
#define MX_DATA_EXCEL_CAMPAIGNUNITEXCEL_GETCLEARSCENARIOGROUPIDBYTES_OFFSET UNITYSDK_OFFSET(0x1A07930)
#define MX_DATA_EXCEL_CAMPAIGNUNITEXCEL_GET_GROUNDID_OFFSET UNITYSDK_OFFSET(0x1A07950)
#define MX_DATA_EXCEL_CAMPAIGNUNITEXCEL_GET_MOVERANGE_OFFSET UNITYSDK_OFFSET(0x1A079A0)
#define MX_DATA_EXCEL_CAMPAIGNUNITEXCEL_GET_AIMOVETYPE_OFFSET UNITYSDK_OFFSET(0x1A079F0)
#define MX_DATA_EXCEL_CAMPAIGNUNITEXCEL_GET_GRADE_OFFSET UNITYSDK_OFFSET(0x1A07A40)
#define MX_DATA_EXCEL_CAMPAIGNUNITEXCEL_GET_ENVIRONMENTTYPE_OFFSET UNITYSDK_OFFSET(0x1A07A90)
#define MX_DATA_EXCEL_CAMPAIGNUNITEXCEL_GET_SCALE_OFFSET UNITYSDK_OFFSET(0x1A07AE0)
#define MX_DATA_EXCEL_CAMPAIGNUNITEXCEL_GET_ISTACTICSKIP_OFFSET UNITYSDK_OFFSET(0x1A07B30)
#define MX_DATA_EXCEL_CAMPAIGNUNITEXCEL_CREATECAMPAIGNUNITEXCEL_OFFSET UNITYSDK_OFFSET(0x1A07B80)
#define MX_DATA_EXCEL_CAMPAIGNUNITEXCEL_STARTCAMPAIGNUNITEXCEL_OFFSET UNITYSDK_OFFSET(0x1A080F0)
#define MX_DATA_EXCEL_CAMPAIGNUNITEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1A07E30)
#define MX_DATA_EXCEL_CAMPAIGNUNITEXCEL_ADDKEY_OFFSET UNITYSDK_OFFSET(0x1A08040)
#define MX_DATA_EXCEL_CAMPAIGNUNITEXCEL_ADDNAME_OFFSET UNITYSDK_OFFSET(0x1A08010)
#define MX_DATA_EXCEL_CAMPAIGNUNITEXCEL_ADDPREFABNAME_OFFSET UNITYSDK_OFFSET(0x1A07FE0)
#define MX_DATA_EXCEL_CAMPAIGNUNITEXCEL_ADDSTRATEGYPREFABNAME_OFFSET UNITYSDK_OFFSET(0x1A07FB0)
#define MX_DATA_EXCEL_CAMPAIGNUNITEXCEL_ADDENTERSCENARIOGROUPID_OFFSET UNITYSDK_OFFSET(0x1A07F80)
#define MX_DATA_EXCEL_CAMPAIGNUNITEXCEL_CREATEENTERSCENARIOGROUPIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1A08110)
#define MX_DATA_EXCEL_CAMPAIGNUNITEXCEL_STARTENTERSCENARIOGROUPIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1A081A0)
#define MX_DATA_EXCEL_CAMPAIGNUNITEXCEL_ADDCLEARSCENARIOGROUPID_OFFSET UNITYSDK_OFFSET(0x1A07F50)
#define MX_DATA_EXCEL_CAMPAIGNUNITEXCEL_CREATECLEARSCENARIOGROUPIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1A081E0)
#define MX_DATA_EXCEL_CAMPAIGNUNITEXCEL_STARTCLEARSCENARIOGROUPIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1A08270)
#define MX_DATA_EXCEL_CAMPAIGNUNITEXCEL_ADDGROUNDID_OFFSET UNITYSDK_OFFSET(0x1A07E00)
#define MX_DATA_EXCEL_CAMPAIGNUNITEXCEL_ADDMOVERANGE_OFFSET UNITYSDK_OFFSET(0x1A07F20)
#define MX_DATA_EXCEL_CAMPAIGNUNITEXCEL_ADDAIMOVETYPE_OFFSET UNITYSDK_OFFSET(0x1A07EF0)
#define MX_DATA_EXCEL_CAMPAIGNUNITEXCEL_ADDGRADE_OFFSET UNITYSDK_OFFSET(0x1A07EC0)
#define MX_DATA_EXCEL_CAMPAIGNUNITEXCEL_ADDENVIRONMENTTYPE_OFFSET UNITYSDK_OFFSET(0x1A07E90)
#define MX_DATA_EXCEL_CAMPAIGNUNITEXCEL_ADDSCALE_OFFSET UNITYSDK_OFFSET(0x1A07E60)
#define MX_DATA_EXCEL_CAMPAIGNUNITEXCEL_ADDISTACTICSKIP_OFFSET UNITYSDK_OFFSET(0x1A08070)
#define MX_DATA_EXCEL_CAMPAIGNUNITEXCEL_ENDCAMPAIGNUNITEXCEL_OFFSET UNITYSDK_OFFSET(0x1A080A0)
#define MX_DATA_EXCEL_CAMPAIGNUNITEXCEL_FINISHCAMPAIGNUNITEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A082B0)
#define MX_DATA_EXCEL_CAMPAIGNUNITEXCEL_FINISHSIZEPREFIXEDCAMPAIGNUNITEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A082D0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int CampaignUnitExcel_TypeDefinitionIndex = 16903;

	class CampaignUnitExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNUNITEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::CampaignUnitExcel* GetRootAsCampaignUnitExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::CampaignUnitExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNUNITEXCEL_GETROOTASCAMPAIGNUNITEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::CampaignUnitExcel* GetRootAsCampaignUnitExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::CampaignUnitExcel* arg)
		{
			return (return (::MX::Data::Excel::CampaignUnitExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::CampaignUnitExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNUNITEXCEL_GETROOTASCAMPAIGNUNITEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNUNITEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::CampaignUnitExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::CampaignUnitExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNUNITEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNUNITEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::UInt32 get_Key()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNUNITEXCEL_GET_KEY_OFFSET))(nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNUNITEXCEL_GET_NAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetNameBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNUNITEXCEL_GETNAMEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_PrefabName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNUNITEXCEL_GET_PREFABNAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetPrefabNameBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNUNITEXCEL_GETPREFABNAMEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_StrategyPrefabName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNUNITEXCEL_GET_STRATEGYPREFABNAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetStrategyPrefabNameBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNUNITEXCEL_GETSTRATEGYPREFABNAMEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 EnterScenarioGroupId(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNUNITEXCEL_ENTERSCENARIOGROUPID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_EnterScenarioGroupIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNUNITEXCEL_GET_ENTERSCENARIOGROUPIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetEnterScenarioGroupIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNUNITEXCEL_GETENTERSCENARIOGROUPIDBYTES_OFFSET))(nullptr);
		}

		::System::Int64 ClearScenarioGroupId(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNUNITEXCEL_CLEARSCENARIOGROUPID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ClearScenarioGroupIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNUNITEXCEL_GET_CLEARSCENARIOGROUPIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetClearScenarioGroupIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNUNITEXCEL_GETCLEARSCENARIOGROUPIDBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_GroundId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNUNITEXCEL_GET_GROUNDID_OFFSET))(nullptr);
		}

		::System::Int32 get_MoveRange()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNUNITEXCEL_GET_MOVERANGE_OFFSET))(nullptr);
		}

		::FlatData::StrategyAIType* get_AIMoveType()
		{
			return (return (::FlatData::StrategyAIType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNUNITEXCEL_GET_AIMOVETYPE_OFFSET))(nullptr);
		}

		::FlatData::HexaUnitGrade* get_Grade()
		{
			return (return (::FlatData::HexaUnitGrade*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNUNITEXCEL_GET_GRADE_OFFSET))(nullptr);
		}

		::FlatData::TacticEnvironment* get_EnvironmentType()
		{
			return (return (::FlatData::TacticEnvironment*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNUNITEXCEL_GET_ENVIRONMENTTYPE_OFFSET))(nullptr);
		}

		::System::Single get_Scale()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNUNITEXCEL_GET_SCALE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsTacticSkip()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNUNITEXCEL_GET_ISTACTICSKIP_OFFSET))(nullptr);
		}

		Il2CppObject* CreateCampaignUnitExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::UInt32 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::System::Int64 arg, ::System::Int32 arg, ::FlatData::StrategyAIType* arg, ::FlatData::HexaUnitGrade* arg, ::FlatData::TacticEnvironment* arg, ::System::Single arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::UInt32, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::System::Int64, ::System::Int32, ::FlatData::StrategyAIType*, ::FlatData::HexaUnitGrade*, ::FlatData::TacticEnvironment*, ::System::Single, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNUNITEXCEL_CREATECAMPAIGNUNITEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartCampaignUnitExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNUNITEXCEL_STARTCAMPAIGNUNITEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNUNITEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddKey(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNUNITEXCEL_ADDKEY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNUNITEXCEL_ADDNAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPrefabName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNUNITEXCEL_ADDPREFABNAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStrategyPrefabName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNUNITEXCEL_ADDSTRATEGYPREFABNAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEnterScenarioGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNUNITEXCEL_ADDENTERSCENARIOGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateEnterScenarioGroupIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNUNITEXCEL_CREATEENTERSCENARIOGROUPIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartEnterScenarioGroupIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNUNITEXCEL_STARTENTERSCENARIOGROUPIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddClearScenarioGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNUNITEXCEL_ADDCLEARSCENARIOGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateClearScenarioGroupIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNUNITEXCEL_CREATECLEARSCENARIOGROUPIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartClearScenarioGroupIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNUNITEXCEL_STARTCLEARSCENARIOGROUPIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddGroundId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNUNITEXCEL_ADDGROUNDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMoveRange(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNUNITEXCEL_ADDMOVERANGE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddAIMoveType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::StrategyAIType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::StrategyAIType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNUNITEXCEL_ADDAIMOVETYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddGrade(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::HexaUnitGrade* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::HexaUnitGrade*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNUNITEXCEL_ADDGRADE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEnvironmentType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::TacticEnvironment* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::TacticEnvironment*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNUNITEXCEL_ADDENVIRONMENTTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddScale(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNUNITEXCEL_ADDSCALE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIsTacticSkip(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNUNITEXCEL_ADDISTACTICSKIP_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndCampaignUnitExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNUNITEXCEL_ENDCAMPAIGNUNITEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishCampaignUnitExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNUNITEXCEL_FINISHCAMPAIGNUNITEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedCampaignUnitExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNUNITEXCEL_FINISHSIZEPREFIXEDCAMPAIGNUNITEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

