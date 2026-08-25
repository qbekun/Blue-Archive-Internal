#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class WeekDungeonExcel; }
namespace FlatData { class WeekDungeonType; }
namespace FlatData { class ParcelType; }
namespace FlatData { class StarGoalType; }
namespace FlatData { class StageTopography; }
namespace FlatData { class EchelonExtensionType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_WEEKDUNGEONEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1CBA5C0)
#define MX_DATA_EXCEL_WEEKDUNGEONEXCEL_GETROOTASWEEKDUNGEONEXCEL_OFFSET UNITYSDK_OFFSET(0x1CBA5D0)
#define MX_DATA_EXCEL_WEEKDUNGEONEXCEL_GETROOTASWEEKDUNGEONEXCEL_OFFSET UNITYSDK_OFFSET(0x1CBA630)
#define MX_DATA_EXCEL_WEEKDUNGEONEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1CBA6C0)
#define MX_DATA_EXCEL_WEEKDUNGEONEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1CBA690)
#define MX_DATA_EXCEL_WEEKDUNGEONEXCEL_GET_STAGEID_OFFSET UNITYSDK_OFFSET(0x1CBA6E0)
#define MX_DATA_EXCEL_WEEKDUNGEONEXCEL_GET_WEEKDUNGEONTYPE_OFFSET UNITYSDK_OFFSET(0x1CBA730)
#define MX_DATA_EXCEL_WEEKDUNGEONEXCEL_GET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0x1CBA780)
#define MX_DATA_EXCEL_WEEKDUNGEONEXCEL_GET_BATTLEDURATION_OFFSET UNITYSDK_OFFSET(0x1CBA7D0)
#define MX_DATA_EXCEL_WEEKDUNGEONEXCEL_GET_PREVSTAGEID_OFFSET UNITYSDK_OFFSET(0x1CBA820)
#define MX_DATA_EXCEL_WEEKDUNGEONEXCEL_STAGEENTERCOSTTYPE_OFFSET UNITYSDK_OFFSET(0x1CBA870)
#define MX_DATA_EXCEL_WEEKDUNGEONEXCEL_GET_STAGEENTERCOSTTYPELENGTH_OFFSET UNITYSDK_OFFSET(0x1CBA8D0)
#define MX_DATA_EXCEL_WEEKDUNGEONEXCEL_GETSTAGEENTERCOSTTYPEBYTES_OFFSET UNITYSDK_OFFSET(0x1CBA910)
#define MX_DATA_EXCEL_WEEKDUNGEONEXCEL_STAGEENTERCOSTID_OFFSET UNITYSDK_OFFSET(0x1CBA930)
#define MX_DATA_EXCEL_WEEKDUNGEONEXCEL_GET_STAGEENTERCOSTIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1CBA990)
#define MX_DATA_EXCEL_WEEKDUNGEONEXCEL_GETSTAGEENTERCOSTIDBYTES_OFFSET UNITYSDK_OFFSET(0x1CBA9D0)
#define MX_DATA_EXCEL_WEEKDUNGEONEXCEL_STAGEENTERCOSTAMOUNT_OFFSET UNITYSDK_OFFSET(0x1CBA9F0)
#define MX_DATA_EXCEL_WEEKDUNGEONEXCEL_GET_STAGEENTERCOSTAMOUNTLENGTH_OFFSET UNITYSDK_OFFSET(0x1CBAA50)
#define MX_DATA_EXCEL_WEEKDUNGEONEXCEL_GETSTAGEENTERCOSTAMOUNTBYTES_OFFSET UNITYSDK_OFFSET(0x1CBAA90)
#define MX_DATA_EXCEL_WEEKDUNGEONEXCEL_GET_GROUNDID_OFFSET UNITYSDK_OFFSET(0x1CBAAB0)
#define MX_DATA_EXCEL_WEEKDUNGEONEXCEL_STARGOAL_OFFSET UNITYSDK_OFFSET(0x1CBAB00)
#define MX_DATA_EXCEL_WEEKDUNGEONEXCEL_GET_STARGOALLENGTH_OFFSET UNITYSDK_OFFSET(0x1CBAB60)
#define MX_DATA_EXCEL_WEEKDUNGEONEXCEL_GETSTARGOALBYTES_OFFSET UNITYSDK_OFFSET(0x1CBABA0)
#define MX_DATA_EXCEL_WEEKDUNGEONEXCEL_STARGOALAMOUNT_OFFSET UNITYSDK_OFFSET(0x1CBABC0)
#define MX_DATA_EXCEL_WEEKDUNGEONEXCEL_GET_STARGOALAMOUNTLENGTH_OFFSET UNITYSDK_OFFSET(0x1CBAC20)
#define MX_DATA_EXCEL_WEEKDUNGEONEXCEL_GETSTARGOALAMOUNTBYTES_OFFSET UNITYSDK_OFFSET(0x1CBAC60)
#define MX_DATA_EXCEL_WEEKDUNGEONEXCEL_GET_STAGETOPOGRAPHY_OFFSET UNITYSDK_OFFSET(0x1CBAC80)
#define MX_DATA_EXCEL_WEEKDUNGEONEXCEL_GET_RECOMMANDLEVEL_OFFSET UNITYSDK_OFFSET(0x1CBACD0)
#define MX_DATA_EXCEL_WEEKDUNGEONEXCEL_GET_STAGEREWARDID_OFFSET UNITYSDK_OFFSET(0x1CBAD20)
#define MX_DATA_EXCEL_WEEKDUNGEONEXCEL_GET_PLAYTIMELIMITINSECONDS_OFFSET UNITYSDK_OFFSET(0x1CBAD70)
#define MX_DATA_EXCEL_WEEKDUNGEONEXCEL_GET_BATTLEREWARDEXP_OFFSET UNITYSDK_OFFSET(0x1CBADC0)
#define MX_DATA_EXCEL_WEEKDUNGEONEXCEL_GET_BATTLEREWARDPLAYEREXP_OFFSET UNITYSDK_OFFSET(0x1CBAE10)
#define MX_DATA_EXCEL_WEEKDUNGEONEXCEL_GROUPBUFFID_OFFSET UNITYSDK_OFFSET(0x1CBAE60)
#define MX_DATA_EXCEL_WEEKDUNGEONEXCEL_GET_GROUPBUFFIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1CBAEC0)
#define MX_DATA_EXCEL_WEEKDUNGEONEXCEL_GETGROUPBUFFIDBYTES_OFFSET UNITYSDK_OFFSET(0x1CBAF00)
#define MX_DATA_EXCEL_WEEKDUNGEONEXCEL_GET_ECHELONEXTENSIONTYPE_OFFSET UNITYSDK_OFFSET(0x1CBAF20)
#define MX_DATA_EXCEL_WEEKDUNGEONEXCEL_CREATEWEEKDUNGEONEXCEL_OFFSET UNITYSDK_OFFSET(0x1CBAF70)
#define MX_DATA_EXCEL_WEEKDUNGEONEXCEL_STARTWEEKDUNGEONEXCEL_OFFSET UNITYSDK_OFFSET(0x1CBB690)
#define MX_DATA_EXCEL_WEEKDUNGEONEXCEL_ADDSTAGEID_OFFSET UNITYSDK_OFFSET(0x1CBB400)
#define MX_DATA_EXCEL_WEEKDUNGEONEXCEL_ADDWEEKDUNGEONTYPE_OFFSET UNITYSDK_OFFSET(0x1CBB610)
#define MX_DATA_EXCEL_WEEKDUNGEONEXCEL_ADDDIFFICULTY_OFFSET UNITYSDK_OFFSET(0x1CBB5E0)
#define MX_DATA_EXCEL_WEEKDUNGEONEXCEL_ADDBATTLEDURATION_OFFSET UNITYSDK_OFFSET(0x1CBB3D0)
#define MX_DATA_EXCEL_WEEKDUNGEONEXCEL_ADDPREVSTAGEID_OFFSET UNITYSDK_OFFSET(0x1CBB3A0)
#define MX_DATA_EXCEL_WEEKDUNGEONEXCEL_ADDSTAGEENTERCOSTTYPE_OFFSET UNITYSDK_OFFSET(0x1CBB5B0)
#define MX_DATA_EXCEL_WEEKDUNGEONEXCEL_CREATESTAGEENTERCOSTTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1CBB6B0)
#define MX_DATA_EXCEL_WEEKDUNGEONEXCEL_STARTSTAGEENTERCOSTTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1CBB740)
#define MX_DATA_EXCEL_WEEKDUNGEONEXCEL_ADDSTAGEENTERCOSTID_OFFSET UNITYSDK_OFFSET(0x1CBB580)
#define MX_DATA_EXCEL_WEEKDUNGEONEXCEL_CREATESTAGEENTERCOSTIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1CBB780)
#define MX_DATA_EXCEL_WEEKDUNGEONEXCEL_STARTSTAGEENTERCOSTIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1CBB810)
#define MX_DATA_EXCEL_WEEKDUNGEONEXCEL_ADDSTAGEENTERCOSTAMOUNT_OFFSET UNITYSDK_OFFSET(0x1CBB550)
#define MX_DATA_EXCEL_WEEKDUNGEONEXCEL_CREATESTAGEENTERCOSTAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1CBB850)
#define MX_DATA_EXCEL_WEEKDUNGEONEXCEL_STARTSTAGEENTERCOSTAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1CBB8E0)
#define MX_DATA_EXCEL_WEEKDUNGEONEXCEL_ADDGROUNDID_OFFSET UNITYSDK_OFFSET(0x1CBB520)
#define MX_DATA_EXCEL_WEEKDUNGEONEXCEL_ADDSTARGOAL_OFFSET UNITYSDK_OFFSET(0x1CBB4F0)
#define MX_DATA_EXCEL_WEEKDUNGEONEXCEL_CREATESTARGOALVECTOR_OFFSET UNITYSDK_OFFSET(0x1CBB920)
#define MX_DATA_EXCEL_WEEKDUNGEONEXCEL_STARTSTARGOALVECTOR_OFFSET UNITYSDK_OFFSET(0x1CBB9B0)
#define MX_DATA_EXCEL_WEEKDUNGEONEXCEL_ADDSTARGOALAMOUNT_OFFSET UNITYSDK_OFFSET(0x1CBB4C0)
#define MX_DATA_EXCEL_WEEKDUNGEONEXCEL_CREATESTARGOALAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1CBB9F0)
#define MX_DATA_EXCEL_WEEKDUNGEONEXCEL_STARTSTARGOALAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1CBBA80)
#define MX_DATA_EXCEL_WEEKDUNGEONEXCEL_ADDSTAGETOPOGRAPHY_OFFSET UNITYSDK_OFFSET(0x1CBB490)
#define MX_DATA_EXCEL_WEEKDUNGEONEXCEL_ADDRECOMMANDLEVEL_OFFSET UNITYSDK_OFFSET(0x1CBB370)
#define MX_DATA_EXCEL_WEEKDUNGEONEXCEL_ADDSTAGEREWARDID_OFFSET UNITYSDK_OFFSET(0x1CBB340)
#define MX_DATA_EXCEL_WEEKDUNGEONEXCEL_ADDPLAYTIMELIMITINSECONDS_OFFSET UNITYSDK_OFFSET(0x1CBB310)
#define MX_DATA_EXCEL_WEEKDUNGEONEXCEL_ADDBATTLEREWARDEXP_OFFSET UNITYSDK_OFFSET(0x1CBB2E0)
#define MX_DATA_EXCEL_WEEKDUNGEONEXCEL_ADDBATTLEREWARDPLAYEREXP_OFFSET UNITYSDK_OFFSET(0x1CBB2B0)
#define MX_DATA_EXCEL_WEEKDUNGEONEXCEL_ADDGROUPBUFFID_OFFSET UNITYSDK_OFFSET(0x1CBB460)
#define MX_DATA_EXCEL_WEEKDUNGEONEXCEL_CREATEGROUPBUFFIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1CBBAC0)
#define MX_DATA_EXCEL_WEEKDUNGEONEXCEL_STARTGROUPBUFFIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1CBBB50)
#define MX_DATA_EXCEL_WEEKDUNGEONEXCEL_ADDECHELONEXTENSIONTYPE_OFFSET UNITYSDK_OFFSET(0x1CBB430)
#define MX_DATA_EXCEL_WEEKDUNGEONEXCEL_ENDWEEKDUNGEONEXCEL_OFFSET UNITYSDK_OFFSET(0x1CBB640)
#define MX_DATA_EXCEL_WEEKDUNGEONEXCEL_FINISHWEEKDUNGEONEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1CBBB90)
#define MX_DATA_EXCEL_WEEKDUNGEONEXCEL_FINISHSIZEPREFIXEDWEEKDUNGEONEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1CBBBB0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int WeekDungeonExcel_TypeDefinitionIndex = 19729;

	class WeekDungeonExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::WeekDungeonExcel* GetRootAsWeekDungeonExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::WeekDungeonExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONEXCEL_GETROOTASWEEKDUNGEONEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::WeekDungeonExcel* GetRootAsWeekDungeonExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::WeekDungeonExcel* arg)
		{
			return (return (::MX::Data::Excel::WeekDungeonExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::WeekDungeonExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONEXCEL_GETROOTASWEEKDUNGEONEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::WeekDungeonExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::WeekDungeonExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_StageId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONEXCEL_GET_STAGEID_OFFSET))(nullptr);
		}

		::FlatData::WeekDungeonType* get_WeekDungeonType()
		{
			return (return (::FlatData::WeekDungeonType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONEXCEL_GET_WEEKDUNGEONTYPE_OFFSET))(nullptr);
		}

		::System::Int32 get_Difficulty()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONEXCEL_GET_DIFFICULTY_OFFSET))(nullptr);
		}

		::System::Int64 get_BattleDuration()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONEXCEL_GET_BATTLEDURATION_OFFSET))(nullptr);
		}

		::System::Int64 get_PrevStageId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONEXCEL_GET_PREVSTAGEID_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* StageEnterCostType(::System::Int32 arg)
		{
			return (return (::FlatData::ParcelType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONEXCEL_STAGEENTERCOSTTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_StageEnterCostTypeLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONEXCEL_GET_STAGEENTERCOSTTYPELENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetStageEnterCostTypeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONEXCEL_GETSTAGEENTERCOSTTYPEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 StageEnterCostId(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONEXCEL_STAGEENTERCOSTID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_StageEnterCostIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONEXCEL_GET_STAGEENTERCOSTIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetStageEnterCostIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONEXCEL_GETSTAGEENTERCOSTIDBYTES_OFFSET))(nullptr);
		}

		::System::Int32 StageEnterCostAmount(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONEXCEL_STAGEENTERCOSTAMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_StageEnterCostAmountLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONEXCEL_GET_STAGEENTERCOSTAMOUNTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetStageEnterCostAmountBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONEXCEL_GETSTAGEENTERCOSTAMOUNTBYTES_OFFSET))(nullptr);
		}

		::System::Int32 get_GroundId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONEXCEL_GET_GROUNDID_OFFSET))(nullptr);
		}

		::FlatData::StarGoalType* StarGoal(::System::Int32 arg)
		{
			return (return (::FlatData::StarGoalType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONEXCEL_STARGOAL_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_StarGoalLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONEXCEL_GET_STARGOALLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetStarGoalBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONEXCEL_GETSTARGOALBYTES_OFFSET))(nullptr);
		}

		::System::Int32 StarGoalAmount(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONEXCEL_STARGOALAMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_StarGoalAmountLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONEXCEL_GET_STARGOALAMOUNTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetStarGoalAmountBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONEXCEL_GETSTARGOALAMOUNTBYTES_OFFSET))(nullptr);
		}

		::FlatData::StageTopography* get_StageTopography()
		{
			return (return (::FlatData::StageTopography*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONEXCEL_GET_STAGETOPOGRAPHY_OFFSET))(nullptr);
		}

		::System::Int64 get_RecommandLevel()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONEXCEL_GET_RECOMMANDLEVEL_OFFSET))(nullptr);
		}

		::System::Int64 get_StageRewardId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONEXCEL_GET_STAGEREWARDID_OFFSET))(nullptr);
		}

		::System::Int64 get_PlayTimeLimitInSeconds()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONEXCEL_GET_PLAYTIMELIMITINSECONDS_OFFSET))(nullptr);
		}

		::System::Int64 get_BattleRewardExp()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONEXCEL_GET_BATTLEREWARDEXP_OFFSET))(nullptr);
		}

		::System::Int64 get_BattleRewardPlayerExp()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONEXCEL_GET_BATTLEREWARDPLAYEREXP_OFFSET))(nullptr);
		}

		::System::Int64 GroupBuffID(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONEXCEL_GROUPBUFFID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_GroupBuffIDLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONEXCEL_GET_GROUPBUFFIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetGroupBuffIDBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONEXCEL_GETGROUPBUFFIDBYTES_OFFSET))(nullptr);
		}

		::FlatData::EchelonExtensionType* get_EchelonExtensionType()
		{
			return (return (::FlatData::EchelonExtensionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONEXCEL_GET_ECHELONEXTENSIONTYPE_OFFSET))(nullptr);
		}

		Il2CppObject* CreateWeekDungeonExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatData::WeekDungeonType* arg, ::System::Int32 arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::System::Int32 arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatData::StageTopography* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatBuffers::VectorOffset* arg, ::FlatData::EchelonExtensionType* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatData::WeekDungeonType*, ::System::Int32, ::System::Int64, ::System::Int64, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::System::Int32, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatData::StageTopography*, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::FlatBuffers::VectorOffset*, ::FlatData::EchelonExtensionType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONEXCEL_CREATEWEEKDUNGEONEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartWeekDungeonExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONEXCEL_STARTWEEKDUNGEONEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddStageId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONEXCEL_ADDSTAGEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddWeekDungeonType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::WeekDungeonType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::WeekDungeonType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONEXCEL_ADDWEEKDUNGEONTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDifficulty(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONEXCEL_ADDDIFFICULTY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBattleDuration(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONEXCEL_ADDBATTLEDURATION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPrevStageId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONEXCEL_ADDPREVSTAGEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStageEnterCostType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONEXCEL_ADDSTAGEENTERCOSTTYPE_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateStageEnterCostTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONEXCEL_CREATESTAGEENTERCOSTTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartStageEnterCostTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONEXCEL_STARTSTAGEENTERCOSTTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStageEnterCostId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONEXCEL_ADDSTAGEENTERCOSTID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateStageEnterCostIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONEXCEL_CREATESTAGEENTERCOSTIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartStageEnterCostIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONEXCEL_STARTSTAGEENTERCOSTIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStageEnterCostAmount(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONEXCEL_ADDSTAGEENTERCOSTAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateStageEnterCostAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONEXCEL_CREATESTAGEENTERCOSTAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartStageEnterCostAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONEXCEL_STARTSTAGEENTERCOSTAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddGroundId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONEXCEL_ADDGROUNDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStarGoal(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONEXCEL_ADDSTARGOAL_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateStarGoalVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONEXCEL_CREATESTARGOALVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartStarGoalVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONEXCEL_STARTSTARGOALVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStarGoalAmount(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONEXCEL_ADDSTARGOALAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateStarGoalAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONEXCEL_CREATESTARGOALAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartStarGoalAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONEXCEL_STARTSTARGOALAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStageTopography(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::StageTopography* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::StageTopography*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONEXCEL_ADDSTAGETOPOGRAPHY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRecommandLevel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONEXCEL_ADDRECOMMANDLEVEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStageRewardId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONEXCEL_ADDSTAGEREWARDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPlayTimeLimitInSeconds(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONEXCEL_ADDPLAYTIMELIMITINSECONDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBattleRewardExp(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONEXCEL_ADDBATTLEREWARDEXP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBattleRewardPlayerExp(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONEXCEL_ADDBATTLEREWARDPLAYEREXP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddGroupBuffID(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONEXCEL_ADDGROUPBUFFID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateGroupBuffIDVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONEXCEL_CREATEGROUPBUFFIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartGroupBuffIDVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONEXCEL_STARTGROUPBUFFIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEchelonExtensionType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::EchelonExtensionType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::EchelonExtensionType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONEXCEL_ADDECHELONEXTENSIONTYPE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndWeekDungeonExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONEXCEL_ENDWEEKDUNGEONEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishWeekDungeonExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONEXCEL_FINISHWEEKDUNGEONEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedWeekDungeonExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONEXCEL_FINISHSIZEPREFIXEDWEEKDUNGEONEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

