#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class MiniGameDefenseStageExcel; }
namespace FlatData { class StageDifficulty; }
namespace FlatData { class EchelonExtensionType; }
namespace FlatData { class ParcelType; }
namespace FlatData { class StageTopography; }
namespace FlatData { class ContentType; }
namespace FlatData { class StarGoalType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1BA97F0)
#define MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_GETROOTASMINIGAMEDEFENSESTAGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1BA9800)
#define MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_GETROOTASMINIGAMEDEFENSESTAGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1BA9860)
#define MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1BA98F0)
#define MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1BA98C0)
#define MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1BA9910)
#define MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1BA9960)
#define MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_GETNAMEBYTES_OFFSET UNITYSDK_OFFSET(0x1BA99A0)
#define MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1BA99C0)
#define MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_GET_STAGEDIFFICULTY_OFFSET UNITYSDK_OFFSET(0x1BA9A10)
#define MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_GET_STAGEDIFFICULTYLOCALIZE_OFFSET UNITYSDK_OFFSET(0x1BA9A60)
#define MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_GET_STAGENUMBER_OFFSET UNITYSDK_OFFSET(0x1BA9AB0)
#define MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_GET_STAGEDISPLAY_OFFSET UNITYSDK_OFFSET(0x1BA9B00)
#define MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_GET_PREVSTAGEID_OFFSET UNITYSDK_OFFSET(0x1BA9B50)
#define MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_GET_ECHELONEXTENSIONTYPE_OFFSET UNITYSDK_OFFSET(0x1BA9BA0)
#define MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_GET_BATTLEDURATION_OFFSET UNITYSDK_OFFSET(0x1BA9BF0)
#define MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_GET_STAGEENTERCOSTTYPE_OFFSET UNITYSDK_OFFSET(0x1BA9C40)
#define MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_GET_STAGEENTERCOSTID_OFFSET UNITYSDK_OFFSET(0x1BA9C90)
#define MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_GET_STAGEENTERCOSTAMOUNT_OFFSET UNITYSDK_OFFSET(0x1BA9CE0)
#define MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_GET_EVENTCONTENTSTAGEREWARDID_OFFSET UNITYSDK_OFFSET(0x1BA9D30)
#define MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_ENTERSCENARIOGROUPID_OFFSET UNITYSDK_OFFSET(0x1BA9D80)
#define MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_GET_ENTERSCENARIOGROUPIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1BA9DE0)
#define MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_GETENTERSCENARIOGROUPIDBYTES_OFFSET UNITYSDK_OFFSET(0x1BA9E20)
#define MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_CLEARSCENARIOGROUPID_OFFSET UNITYSDK_OFFSET(0x1BA9E40)
#define MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_GET_CLEARSCENARIOGROUPIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1BA9EA0)
#define MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_GETCLEARSCENARIOGROUPIDBYTES_OFFSET UNITYSDK_OFFSET(0x1BA9EE0)
#define MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_GET_STAGETOPOGRAPHY_OFFSET UNITYSDK_OFFSET(0x1BA9F00)
#define MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_GET_RECOMMANDLEVEL_OFFSET UNITYSDK_OFFSET(0x1BA9F50)
#define MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_GET_GROUNDID_OFFSET UNITYSDK_OFFSET(0x1BA9FA0)
#define MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_GET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1BA9FF0)
#define MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_STARGOAL_OFFSET UNITYSDK_OFFSET(0x1BAA040)
#define MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_GET_STARGOALLENGTH_OFFSET UNITYSDK_OFFSET(0x1BAA0A0)
#define MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_GETSTARGOALBYTES_OFFSET UNITYSDK_OFFSET(0x1BAA0E0)
#define MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_STARGOALAMOUNT_OFFSET UNITYSDK_OFFSET(0x1BAA100)
#define MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_GET_STARGOALAMOUNTLENGTH_OFFSET UNITYSDK_OFFSET(0x1BAA160)
#define MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_GETSTARGOALAMOUNTBYTES_OFFSET UNITYSDK_OFFSET(0x1BAA1A0)
#define MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_GET_DEFENSEFORMATIONBGPREFAB_OFFSET UNITYSDK_OFFSET(0x1BAA1C0)
#define MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_GETDEFENSEFORMATIONBGPREFABBYTES_OFFSET UNITYSDK_OFFSET(0x1BAA200)
#define MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_GET_DEFENSEFORMATIONBGPREFABSCALE_OFFSET UNITYSDK_OFFSET(0x1BAA220)
#define MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_GET_FIXEDECHELON_OFFSET UNITYSDK_OFFSET(0x1BAA270)
#define MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_GET_MININAGEDEFENSEFIXEDSTATID_OFFSET UNITYSDK_OFFSET(0x1BAA2C0)
#define MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_GET_STAGEHINT_OFFSET UNITYSDK_OFFSET(0x1BAA310)
#define MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_CREATEMINIGAMEDEFENSESTAGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1BAA360)
#define MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_STARTMINIGAMEDEFENSESTAGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1BAAD60)
#define MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1BAA980)
#define MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_ADDNAME_OFFSET UNITYSDK_OFFSET(0x1BAACE0)
#define MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_ADDEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1BAA950)
#define MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_ADDSTAGEDIFFICULTY_OFFSET UNITYSDK_OFFSET(0x1BAACB0)
#define MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_ADDSTAGEDIFFICULTYLOCALIZE_OFFSET UNITYSDK_OFFSET(0x1BAAC80)
#define MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_ADDSTAGENUMBER_OFFSET UNITYSDK_OFFSET(0x1BAAC50)
#define MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_ADDSTAGEDISPLAY_OFFSET UNITYSDK_OFFSET(0x1BAAC20)
#define MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_ADDPREVSTAGEID_OFFSET UNITYSDK_OFFSET(0x1BAA920)
#define MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_ADDECHELONEXTENSIONTYPE_OFFSET UNITYSDK_OFFSET(0x1BAABF0)
#define MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_ADDBATTLEDURATION_OFFSET UNITYSDK_OFFSET(0x1BAA8F0)
#define MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_ADDSTAGEENTERCOSTTYPE_OFFSET UNITYSDK_OFFSET(0x1BAABC0)
#define MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_ADDSTAGEENTERCOSTID_OFFSET UNITYSDK_OFFSET(0x1BAA8C0)
#define MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_ADDSTAGEENTERCOSTAMOUNT_OFFSET UNITYSDK_OFFSET(0x1BAAB90)
#define MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_ADDEVENTCONTENTSTAGEREWARDID_OFFSET UNITYSDK_OFFSET(0x1BAA890)
#define MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_ADDENTERSCENARIOGROUPID_OFFSET UNITYSDK_OFFSET(0x1BAAB60)
#define MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_CREATEENTERSCENARIOGROUPIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1BAAD80)
#define MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_STARTENTERSCENARIOGROUPIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1BAAE10)
#define MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_ADDCLEARSCENARIOGROUPID_OFFSET UNITYSDK_OFFSET(0x1BAAB30)
#define MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_CREATECLEARSCENARIOGROUPIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1BAAE50)
#define MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_STARTCLEARSCENARIOGROUPIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1BAAEE0)
#define MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_ADDSTAGETOPOGRAPHY_OFFSET UNITYSDK_OFFSET(0x1BAAB00)
#define MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_ADDRECOMMANDLEVEL_OFFSET UNITYSDK_OFFSET(0x1BAAAD0)
#define MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_ADDGROUNDID_OFFSET UNITYSDK_OFFSET(0x1BAA860)
#define MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_ADDCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1BAAAA0)
#define MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_ADDSTARGOAL_OFFSET UNITYSDK_OFFSET(0x1BAAA70)
#define MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_CREATESTARGOALVECTOR_OFFSET UNITYSDK_OFFSET(0x1BAAF20)
#define MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_STARTSTARGOALVECTOR_OFFSET UNITYSDK_OFFSET(0x1BAAFB0)
#define MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_ADDSTARGOALAMOUNT_OFFSET UNITYSDK_OFFSET(0x1BAAA40)
#define MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_CREATESTARGOALAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1BAAFF0)
#define MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_STARTSTARGOALAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1BAB080)
#define MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_ADDDEFENSEFORMATIONBGPREFAB_OFFSET UNITYSDK_OFFSET(0x1BAAA10)
#define MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_ADDDEFENSEFORMATIONBGPREFABSCALE_OFFSET UNITYSDK_OFFSET(0x1BAA9E0)
#define MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_ADDFIXEDECHELON_OFFSET UNITYSDK_OFFSET(0x1BAA830)
#define MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_ADDMININAGEDEFENSEFIXEDSTATID_OFFSET UNITYSDK_OFFSET(0x1BAA800)
#define MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_ADDSTAGEHINT_OFFSET UNITYSDK_OFFSET(0x1BAA9B0)
#define MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_ENDMINIGAMEDEFENSESTAGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1BAAD10)
#define MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_FINISHMINIGAMEDEFENSESTAGEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1BAB0C0)
#define MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_FINISHSIZEPREFIXEDMINIGAMEDEFENSESTAGEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1BAB0E0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MiniGameDefenseStageExcel_TypeDefinitionIndex = 18593;

	class MiniGameDefenseStageExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::MiniGameDefenseStageExcel* GetRootAsMiniGameDefenseStageExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MiniGameDefenseStageExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_GETROOTASMINIGAMEDEFENSESTAGEEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::MiniGameDefenseStageExcel* GetRootAsMiniGameDefenseStageExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::MiniGameDefenseStageExcel* arg)
		{
			return (return (::MX::Data::Excel::MiniGameDefenseStageExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::MiniGameDefenseStageExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_GETROOTASMINIGAMEDEFENSESTAGEEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::MiniGameDefenseStageExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MiniGameDefenseStageExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_GET_NAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetNameBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_GETNAMEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::FlatData::StageDifficulty* get_StageDifficulty()
		{
			return (return (::FlatData::StageDifficulty*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_GET_STAGEDIFFICULTY_OFFSET))(nullptr);
		}

		::System::UInt32 get_StageDifficultyLocalize()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_GET_STAGEDIFFICULTYLOCALIZE_OFFSET))(nullptr);
		}

		::System::Int32 get_StageNumber()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_GET_STAGENUMBER_OFFSET))(nullptr);
		}

		::System::Int32 get_StageDisplay()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_GET_STAGEDISPLAY_OFFSET))(nullptr);
		}

		::System::Int64 get_PrevStageId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_GET_PREVSTAGEID_OFFSET))(nullptr);
		}

		::FlatData::EchelonExtensionType* get_EchelonExtensionType()
		{
			return (return (::FlatData::EchelonExtensionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_GET_ECHELONEXTENSIONTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_BattleDuration()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_GET_BATTLEDURATION_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* get_StageEnterCostType()
		{
			return (return (::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_GET_STAGEENTERCOSTTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_StageEnterCostId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_GET_STAGEENTERCOSTID_OFFSET))(nullptr);
		}

		::System::Int32 get_StageEnterCostAmount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_GET_STAGEENTERCOSTAMOUNT_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentStageRewardId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_GET_EVENTCONTENTSTAGEREWARDID_OFFSET))(nullptr);
		}

		::System::Int64 EnterScenarioGroupId(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_ENTERSCENARIOGROUPID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_EnterScenarioGroupIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_GET_ENTERSCENARIOGROUPIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetEnterScenarioGroupIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_GETENTERSCENARIOGROUPIDBYTES_OFFSET))(nullptr);
		}

		::System::Int64 ClearScenarioGroupId(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_CLEARSCENARIOGROUPID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ClearScenarioGroupIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_GET_CLEARSCENARIOGROUPIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetClearScenarioGroupIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_GETCLEARSCENARIOGROUPIDBYTES_OFFSET))(nullptr);
		}

		::FlatData::StageTopography* get_StageTopography()
		{
			return (return (::FlatData::StageTopography*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_GET_STAGETOPOGRAPHY_OFFSET))(nullptr);
		}

		::System::Int32 get_RecommandLevel()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_GET_RECOMMANDLEVEL_OFFSET))(nullptr);
		}

		::System::Int64 get_GroundID()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_GET_GROUNDID_OFFSET))(nullptr);
		}

		::FlatData::ContentType* get_ContentType()
		{
			return (return (::FlatData::ContentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_GET_CONTENTTYPE_OFFSET))(nullptr);
		}

		::FlatData::StarGoalType* StarGoal(::System::Int32 arg)
		{
			return (return (::FlatData::StarGoalType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_STARGOAL_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_StarGoalLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_GET_STARGOALLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetStarGoalBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_GETSTARGOALBYTES_OFFSET))(nullptr);
		}

		::System::Int32 StarGoalAmount(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_STARGOALAMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_StarGoalAmountLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_GET_STARGOALAMOUNTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetStarGoalAmountBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_GETSTARGOALAMOUNTBYTES_OFFSET))(nullptr);
		}

		::System::String* get_DefenseFormationBGPrefab()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_GET_DEFENSEFORMATIONBGPREFAB_OFFSET))(nullptr);
		}

		Il2CppObject* GetDefenseFormationBGPrefabBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_GETDEFENSEFORMATIONBGPREFABBYTES_OFFSET))(nullptr);
		}

		::System::Single get_DefenseFormationBGPrefabScale()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_GET_DEFENSEFORMATIONBGPREFABSCALE_OFFSET))(nullptr);
		}

		::System::Int64 get_FixedEchelon()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_GET_FIXEDECHELON_OFFSET))(nullptr);
		}

		::System::Int64 get_MininageDefenseFixedStatId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_GET_MININAGEDEFENSEFIXEDSTATID_OFFSET))(nullptr);
		}

		::System::UInt32 get_StageHint()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_GET_STAGEHINT_OFFSET))(nullptr);
		}

		Il2CppObject* CreateMiniGameDefenseStageExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::System::Int64 arg, ::FlatData::StageDifficulty* arg, ::System::UInt32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int64 arg, ::FlatData::EchelonExtensionType* arg, ::System::Int64 arg, ::FlatData::ParcelType* arg, ::System::Int64 arg, ::System::Int32 arg, ::System::Int64 arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatData::StageTopography* arg, ::System::Int32 arg, ::System::Int64 arg, ::FlatData::ContentType* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::StringOffset* arg, ::System::Single arg, ::System::Int64 arg, ::System::Int64 arg, ::System::UInt32 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatBuffers::StringOffset*, ::System::Int64, ::FlatData::StageDifficulty*, ::System::UInt32, ::System::Int32, ::System::Int32, ::System::Int64, ::FlatData::EchelonExtensionType*, ::System::Int64, ::FlatData::ParcelType*, ::System::Int64, ::System::Int32, ::System::Int64, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatData::StageTopography*, ::System::Int32, ::System::Int64, ::FlatData::ContentType*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::StringOffset*, ::System::Single, ::System::Int64, ::System::Int64, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_CREATEMINIGAMEDEFENSESTAGEEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartMiniGameDefenseStageExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_STARTMINIGAMEDEFENSESTAGEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_ADDNAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEventContentId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_ADDEVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStageDifficulty(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::StageDifficulty* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::StageDifficulty*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_ADDSTAGEDIFFICULTY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStageDifficultyLocalize(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_ADDSTAGEDIFFICULTYLOCALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStageNumber(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_ADDSTAGENUMBER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStageDisplay(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_ADDSTAGEDISPLAY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPrevStageId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_ADDPREVSTAGEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEchelonExtensionType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::EchelonExtensionType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::EchelonExtensionType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_ADDECHELONEXTENSIONTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBattleDuration(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_ADDBATTLEDURATION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStageEnterCostType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ParcelType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ParcelType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_ADDSTAGEENTERCOSTTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStageEnterCostId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_ADDSTAGEENTERCOSTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStageEnterCostAmount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_ADDSTAGEENTERCOSTAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEventContentStageRewardId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_ADDEVENTCONTENTSTAGEREWARDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEnterScenarioGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_ADDENTERSCENARIOGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateEnterScenarioGroupIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_CREATEENTERSCENARIOGROUPIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartEnterScenarioGroupIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_STARTENTERSCENARIOGROUPIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddClearScenarioGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_ADDCLEARSCENARIOGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateClearScenarioGroupIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_CREATECLEARSCENARIOGROUPIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartClearScenarioGroupIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_STARTCLEARSCENARIOGROUPIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStageTopography(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::StageTopography* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::StageTopography*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_ADDSTAGETOPOGRAPHY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRecommandLevel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_ADDRECOMMANDLEVEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddGroundID(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_ADDGROUNDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddContentType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ContentType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ContentType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_ADDCONTENTTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStarGoal(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_ADDSTARGOAL_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateStarGoalVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_CREATESTARGOALVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartStarGoalVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_STARTSTARGOALVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStarGoalAmount(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_ADDSTARGOALAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateStarGoalAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_CREATESTARGOALAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartStarGoalAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_STARTSTARGOALAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDefenseFormationBGPrefab(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_ADDDEFENSEFORMATIONBGPREFAB_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDefenseFormationBGPrefabScale(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_ADDDEFENSEFORMATIONBGPREFABSCALE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddFixedEchelon(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_ADDFIXEDECHELON_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMininageDefenseFixedStatId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_ADDMININAGEDEFENSEFIXEDSTATID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStageHint(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_ADDSTAGEHINT_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndMiniGameDefenseStageExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_ENDMINIGAMEDEFENSESTAGEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishMiniGameDefenseStageExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_FINISHMINIGAMEDEFENSESTAGEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedMiniGameDefenseStageExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSESTAGEEXCEL_FINISHSIZEPREFIXEDMINIGAMEDEFENSESTAGEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

