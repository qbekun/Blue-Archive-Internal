#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class SchoolDungeonStageExcel; }
namespace FlatData { class SchoolDungeonType; }
namespace FlatData { class ParcelType; }
namespace FlatData { class StarGoalType; }
namespace FlatData { class StageTopography; }
namespace FlatData { class EchelonExtensionType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1C6C3B0)
#define MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_GETROOTASSCHOOLDUNGEONSTAGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1C6C3C0)
#define MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_GETROOTASSCHOOLDUNGEONSTAGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1C6C420)
#define MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1C6C4B0)
#define MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1C6C480)
#define MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_GET_STAGEID_OFFSET UNITYSDK_OFFSET(0x1C6C4D0)
#define MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_GET_DUNGEONTYPE_OFFSET UNITYSDK_OFFSET(0x1C6C520)
#define MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_GET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0x1C6C570)
#define MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_GET_BATTLEDURATION_OFFSET UNITYSDK_OFFSET(0x1C6C5C0)
#define MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_GET_PREVSTAGEID_OFFSET UNITYSDK_OFFSET(0x1C6C610)
#define MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_STAGEENTERCOSTTYPE_OFFSET UNITYSDK_OFFSET(0x1C6C660)
#define MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_GET_STAGEENTERCOSTTYPELENGTH_OFFSET UNITYSDK_OFFSET(0x1C6C6C0)
#define MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_GETSTAGEENTERCOSTTYPEBYTES_OFFSET UNITYSDK_OFFSET(0x1C6C700)
#define MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_STAGEENTERCOSTID_OFFSET UNITYSDK_OFFSET(0x1C6C720)
#define MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_GET_STAGEENTERCOSTIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1C6C780)
#define MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_GETSTAGEENTERCOSTIDBYTES_OFFSET UNITYSDK_OFFSET(0x1C6C7C0)
#define MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_STAGEENTERCOSTAMOUNT_OFFSET UNITYSDK_OFFSET(0x1C6C7E0)
#define MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_GET_STAGEENTERCOSTAMOUNTLENGTH_OFFSET UNITYSDK_OFFSET(0x1C6C840)
#define MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_GETSTAGEENTERCOSTAMOUNTBYTES_OFFSET UNITYSDK_OFFSET(0x1C6C880)
#define MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_STAGEENTERCOSTMINIMUMAMOUNT_OFFSET UNITYSDK_OFFSET(0x1C6C8A0)
#define MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_GET_STAGEENTERCOSTMINIMUMAMOUNTLENGTH_OFFSET UNITYSDK_OFFSET(0x1C6C900)
#define MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_GETSTAGEENTERCOSTMINIMUMAMOUNTBYTES_OFFSET UNITYSDK_OFFSET(0x1C6C940)
#define MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_GET_GROUNDID_OFFSET UNITYSDK_OFFSET(0x1C6C960)
#define MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_STARGOAL_OFFSET UNITYSDK_OFFSET(0x1C6C9B0)
#define MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_GET_STARGOALLENGTH_OFFSET UNITYSDK_OFFSET(0x1C6CA10)
#define MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_GETSTARGOALBYTES_OFFSET UNITYSDK_OFFSET(0x1C6CA50)
#define MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_STARGOALAMOUNT_OFFSET UNITYSDK_OFFSET(0x1C6CA70)
#define MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_GET_STARGOALAMOUNTLENGTH_OFFSET UNITYSDK_OFFSET(0x1C6CAD0)
#define MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_GETSTARGOALAMOUNTBYTES_OFFSET UNITYSDK_OFFSET(0x1C6CB10)
#define MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_GET_STAGETOPOGRAPHY_OFFSET UNITYSDK_OFFSET(0x1C6CB30)
#define MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_GET_RECOMMANDLEVEL_OFFSET UNITYSDK_OFFSET(0x1C6CB80)
#define MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_GET_STAGEREWARDID_OFFSET UNITYSDK_OFFSET(0x1C6CBD0)
#define MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_GET_PLAYTIMELIMITINSECONDS_OFFSET UNITYSDK_OFFSET(0x1C6CC20)
#define MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_GET_ECHELONEXTENSIONTYPE_OFFSET UNITYSDK_OFFSET(0x1C6CC70)
#define MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_CREATESCHOOLDUNGEONSTAGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1C6CCC0)
#define MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_STARTSCHOOLDUNGEONSTAGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1C6D330)
#define MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_ADDSTAGEID_OFFSET UNITYSDK_OFFSET(0x1C6D0A0)
#define MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_ADDDUNGEONTYPE_OFFSET UNITYSDK_OFFSET(0x1C6D2B0)
#define MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_ADDDIFFICULTY_OFFSET UNITYSDK_OFFSET(0x1C6D280)
#define MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_ADDBATTLEDURATION_OFFSET UNITYSDK_OFFSET(0x1C6D070)
#define MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_ADDPREVSTAGEID_OFFSET UNITYSDK_OFFSET(0x1C6D040)
#define MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_ADDSTAGEENTERCOSTTYPE_OFFSET UNITYSDK_OFFSET(0x1C6D250)
#define MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_CREATESTAGEENTERCOSTTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1C6D350)
#define MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_STARTSTAGEENTERCOSTTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1C6D3E0)
#define MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_ADDSTAGEENTERCOSTID_OFFSET UNITYSDK_OFFSET(0x1C6D220)
#define MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_CREATESTAGEENTERCOSTIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1C6D420)
#define MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_STARTSTAGEENTERCOSTIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1C6D4B0)
#define MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_ADDSTAGEENTERCOSTAMOUNT_OFFSET UNITYSDK_OFFSET(0x1C6D1F0)
#define MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_CREATESTAGEENTERCOSTAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1C6D4F0)
#define MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_STARTSTAGEENTERCOSTAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1C6D580)
#define MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_ADDSTAGEENTERCOSTMINIMUMAMOUNT_OFFSET UNITYSDK_OFFSET(0x1C6D1C0)
#define MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_CREATESTAGEENTERCOSTMINIMUMAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1C6D5C0)
#define MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_STARTSTAGEENTERCOSTMINIMUMAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1C6D650)
#define MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_ADDGROUNDID_OFFSET UNITYSDK_OFFSET(0x1C6D190)
#define MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_ADDSTARGOAL_OFFSET UNITYSDK_OFFSET(0x1C6D160)
#define MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_CREATESTARGOALVECTOR_OFFSET UNITYSDK_OFFSET(0x1C6D690)
#define MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_STARTSTARGOALVECTOR_OFFSET UNITYSDK_OFFSET(0x1C6D720)
#define MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_ADDSTARGOALAMOUNT_OFFSET UNITYSDK_OFFSET(0x1C6D130)
#define MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_CREATESTARGOALAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1C6D760)
#define MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_STARTSTARGOALAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1C6D7F0)
#define MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_ADDSTAGETOPOGRAPHY_OFFSET UNITYSDK_OFFSET(0x1C6D100)
#define MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_ADDRECOMMANDLEVEL_OFFSET UNITYSDK_OFFSET(0x1C6D010)
#define MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_ADDSTAGEREWARDID_OFFSET UNITYSDK_OFFSET(0x1C6CFE0)
#define MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_ADDPLAYTIMELIMITINSECONDS_OFFSET UNITYSDK_OFFSET(0x1C6CFB0)
#define MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_ADDECHELONEXTENSIONTYPE_OFFSET UNITYSDK_OFFSET(0x1C6D0D0)
#define MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_ENDSCHOOLDUNGEONSTAGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1C6D2E0)
#define MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_FINISHSCHOOLDUNGEONSTAGEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C6D830)
#define MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_FINISHSIZEPREFIXEDSCHOOLDUNGEONSTAGEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C6D850)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int SchoolDungeonStageExcel_TypeDefinitionIndex = 19346;

	class SchoolDungeonStageExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::SchoolDungeonStageExcel* GetRootAsSchoolDungeonStageExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::SchoolDungeonStageExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_GETROOTASSCHOOLDUNGEONSTAGEEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::SchoolDungeonStageExcel* GetRootAsSchoolDungeonStageExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::SchoolDungeonStageExcel* arg)
		{
			return (return (::MX::Data::Excel::SchoolDungeonStageExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::SchoolDungeonStageExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_GETROOTASSCHOOLDUNGEONSTAGEEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::SchoolDungeonStageExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::SchoolDungeonStageExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_StageId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_GET_STAGEID_OFFSET))(nullptr);
		}

		::FlatData::SchoolDungeonType* get_DungeonType()
		{
			return (return (::FlatData::SchoolDungeonType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_GET_DUNGEONTYPE_OFFSET))(nullptr);
		}

		::System::Int32 get_Difficulty()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_GET_DIFFICULTY_OFFSET))(nullptr);
		}

		::System::Int64 get_BattleDuration()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_GET_BATTLEDURATION_OFFSET))(nullptr);
		}

		::System::Int64 get_PrevStageId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_GET_PREVSTAGEID_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* StageEnterCostType(::System::Int32 arg)
		{
			return (return (::FlatData::ParcelType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_STAGEENTERCOSTTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_StageEnterCostTypeLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_GET_STAGEENTERCOSTTYPELENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetStageEnterCostTypeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_GETSTAGEENTERCOSTTYPEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 StageEnterCostId(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_STAGEENTERCOSTID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_StageEnterCostIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_GET_STAGEENTERCOSTIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetStageEnterCostIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_GETSTAGEENTERCOSTIDBYTES_OFFSET))(nullptr);
		}

		::System::Int64 StageEnterCostAmount(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_STAGEENTERCOSTAMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_StageEnterCostAmountLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_GET_STAGEENTERCOSTAMOUNTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetStageEnterCostAmountBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_GETSTAGEENTERCOSTAMOUNTBYTES_OFFSET))(nullptr);
		}

		::System::Int64 StageEnterCostMinimumAmount(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_STAGEENTERCOSTMINIMUMAMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_StageEnterCostMinimumAmountLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_GET_STAGEENTERCOSTMINIMUMAMOUNTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetStageEnterCostMinimumAmountBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_GETSTAGEENTERCOSTMINIMUMAMOUNTBYTES_OFFSET))(nullptr);
		}

		::System::Int32 get_GroundId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_GET_GROUNDID_OFFSET))(nullptr);
		}

		::FlatData::StarGoalType* StarGoal(::System::Int32 arg)
		{
			return (return (::FlatData::StarGoalType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_STARGOAL_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_StarGoalLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_GET_STARGOALLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetStarGoalBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_GETSTARGOALBYTES_OFFSET))(nullptr);
		}

		::System::Int32 StarGoalAmount(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_STARGOALAMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_StarGoalAmountLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_GET_STARGOALAMOUNTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetStarGoalAmountBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_GETSTARGOALAMOUNTBYTES_OFFSET))(nullptr);
		}

		::FlatData::StageTopography* get_StageTopography()
		{
			return (return (::FlatData::StageTopography*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_GET_STAGETOPOGRAPHY_OFFSET))(nullptr);
		}

		::System::Int64 get_RecommandLevel()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_GET_RECOMMANDLEVEL_OFFSET))(nullptr);
		}

		::System::Int64 get_StageRewardId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_GET_STAGEREWARDID_OFFSET))(nullptr);
		}

		::System::Int64 get_PlayTimeLimitInSeconds()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_GET_PLAYTIMELIMITINSECONDS_OFFSET))(nullptr);
		}

		::FlatData::EchelonExtensionType* get_EchelonExtensionType()
		{
			return (return (::FlatData::EchelonExtensionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_GET_ECHELONEXTENSIONTYPE_OFFSET))(nullptr);
		}

		Il2CppObject* CreateSchoolDungeonStageExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatData::SchoolDungeonType* arg, ::System::Int32 arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::System::Int32 arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatData::StageTopography* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatData::EchelonExtensionType* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatData::SchoolDungeonType*, ::System::Int32, ::System::Int64, ::System::Int64, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::System::Int32, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatData::StageTopography*, ::System::Int64, ::System::Int64, ::System::Int64, ::FlatData::EchelonExtensionType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_CREATESCHOOLDUNGEONSTAGEEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartSchoolDungeonStageExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_STARTSCHOOLDUNGEONSTAGEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddStageId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_ADDSTAGEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDungeonType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::SchoolDungeonType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::SchoolDungeonType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_ADDDUNGEONTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDifficulty(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_ADDDIFFICULTY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBattleDuration(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_ADDBATTLEDURATION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPrevStageId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_ADDPREVSTAGEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStageEnterCostType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_ADDSTAGEENTERCOSTTYPE_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateStageEnterCostTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_CREATESTAGEENTERCOSTTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartStageEnterCostTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_STARTSTAGEENTERCOSTTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStageEnterCostId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_ADDSTAGEENTERCOSTID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateStageEnterCostIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_CREATESTAGEENTERCOSTIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartStageEnterCostIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_STARTSTAGEENTERCOSTIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStageEnterCostAmount(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_ADDSTAGEENTERCOSTAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateStageEnterCostAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_CREATESTAGEENTERCOSTAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartStageEnterCostAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_STARTSTAGEENTERCOSTAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStageEnterCostMinimumAmount(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_ADDSTAGEENTERCOSTMINIMUMAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateStageEnterCostMinimumAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_CREATESTAGEENTERCOSTMINIMUMAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartStageEnterCostMinimumAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_STARTSTAGEENTERCOSTMINIMUMAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddGroundId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_ADDGROUNDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStarGoal(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_ADDSTARGOAL_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateStarGoalVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_CREATESTARGOALVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartStarGoalVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_STARTSTARGOALVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStarGoalAmount(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_ADDSTARGOALAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateStarGoalAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_CREATESTARGOALAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartStarGoalAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_STARTSTARGOALAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStageTopography(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::StageTopography* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::StageTopography*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_ADDSTAGETOPOGRAPHY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRecommandLevel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_ADDRECOMMANDLEVEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStageRewardId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_ADDSTAGEREWARDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPlayTimeLimitInSeconds(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_ADDPLAYTIMELIMITINSECONDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEchelonExtensionType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::EchelonExtensionType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::EchelonExtensionType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_ADDECHELONEXTENSIONTYPE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndSchoolDungeonStageExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_ENDSCHOOLDUNGEONSTAGEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishSchoolDungeonStageExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_FINISHSCHOOLDUNGEONSTAGEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedSchoolDungeonStageExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCEL_FINISHSIZEPREFIXEDSCHOOLDUNGEONSTAGEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

