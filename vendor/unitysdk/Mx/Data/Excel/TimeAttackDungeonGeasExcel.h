#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class TimeAttackDungeonGeasExcel; }
namespace FlatData { class TimeAttackDungeonType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1CA18F0)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL_GETROOTASTIMEATTACKDUNGEONGEASEXCEL_OFFSET UNITYSDK_OFFSET(0x1CA1900)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL_GETROOTASTIMEATTACKDUNGEONGEASEXCEL_OFFSET UNITYSDK_OFFSET(0x1CA1960)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1CA19F0)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1CA19C0)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1CA1A10)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL_GET_TIMEATTACKDUNGEONTYPE_OFFSET UNITYSDK_OFFSET(0x1CA1A60)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL_GET_LOCALIZEETCKEY_OFFSET UNITYSDK_OFFSET(0x1CA1AB0)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL_GET_BATTLEDURATION_OFFSET UNITYSDK_OFFSET(0x1CA1B00)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL_GET_CLEARDEFAULTPOINT_OFFSET UNITYSDK_OFFSET(0x1CA1B50)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL_GET_CLEARTIMEWEIGHTPOINT_OFFSET UNITYSDK_OFFSET(0x1CA1BA0)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL_GET_TIMEWEIGHTCONST_OFFSET UNITYSDK_OFFSET(0x1CA1BF0)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL_GET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0x1CA1C40)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL_GET_RECOMMANDLEVEL_OFFSET UNITYSDK_OFFSET(0x1CA1C90)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL_GET_GROUNDID_OFFSET UNITYSDK_OFFSET(0x1CA1CE0)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL_ALLYPASSIVESKILLID_OFFSET UNITYSDK_OFFSET(0x1CA1D30)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL_GET_ALLYPASSIVESKILLIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1CA1D80)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL_ALLYPASSIVESKILLLEVEL_OFFSET UNITYSDK_OFFSET(0x1CA1DC0)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL_GET_ALLYPASSIVESKILLLEVELLENGTH_OFFSET UNITYSDK_OFFSET(0x1CA1E20)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL_GETALLYPASSIVESKILLLEVELBYTES_OFFSET UNITYSDK_OFFSET(0x1CA1E60)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL_ENEMYPASSIVESKILLID_OFFSET UNITYSDK_OFFSET(0x1CA1E80)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL_GET_ENEMYPASSIVESKILLIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1CA1ED0)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL_ENEMYPASSIVESKILLLEVEL_OFFSET UNITYSDK_OFFSET(0x1CA1F10)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL_GET_ENEMYPASSIVESKILLLEVELLENGTH_OFFSET UNITYSDK_OFFSET(0x1CA1F70)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL_GETENEMYPASSIVESKILLLEVELBYTES_OFFSET UNITYSDK_OFFSET(0x1CA1FB0)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL_GEASICONPATH_OFFSET UNITYSDK_OFFSET(0x1CA1FD0)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL_GET_GEASICONPATHLENGTH_OFFSET UNITYSDK_OFFSET(0x1CA2020)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL_GEASLOCALIZEETCKEY_OFFSET UNITYSDK_OFFSET(0x1CA2060)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL_GET_GEASLOCALIZEETCKEYLENGTH_OFFSET UNITYSDK_OFFSET(0x1CA20C0)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL_GETGEASLOCALIZEETCKEYBYTES_OFFSET UNITYSDK_OFFSET(0x1CA2100)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL_CREATETIMEATTACKDUNGEONGEASEXCEL_OFFSET UNITYSDK_OFFSET(0x1CA2120)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL_STARTTIMEATTACKDUNGEONGEASEXCEL_OFFSET UNITYSDK_OFFSET(0x1CA2730)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1CA24D0)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL_ADDTIMEATTACKDUNGEONTYPE_OFFSET UNITYSDK_OFFSET(0x1CA26B0)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL_ADDLOCALIZEETCKEY_OFFSET UNITYSDK_OFFSET(0x1CA2680)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL_ADDBATTLEDURATION_OFFSET UNITYSDK_OFFSET(0x1CA24A0)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL_ADDCLEARDEFAULTPOINT_OFFSET UNITYSDK_OFFSET(0x1CA2470)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL_ADDCLEARTIMEWEIGHTPOINT_OFFSET UNITYSDK_OFFSET(0x1CA2440)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL_ADDTIMEWEIGHTCONST_OFFSET UNITYSDK_OFFSET(0x1CA2410)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL_ADDDIFFICULTY_OFFSET UNITYSDK_OFFSET(0x1CA2650)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL_ADDRECOMMANDLEVEL_OFFSET UNITYSDK_OFFSET(0x1CA2620)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL_ADDGROUNDID_OFFSET UNITYSDK_OFFSET(0x1CA23E0)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL_ADDALLYPASSIVESKILLID_OFFSET UNITYSDK_OFFSET(0x1CA25F0)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL_CREATEALLYPASSIVESKILLIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1CA2750)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL_STARTALLYPASSIVESKILLIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1CA27E0)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL_ADDALLYPASSIVESKILLLEVEL_OFFSET UNITYSDK_OFFSET(0x1CA25C0)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL_CREATEALLYPASSIVESKILLLEVELVECTOR_OFFSET UNITYSDK_OFFSET(0x1CA2820)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL_STARTALLYPASSIVESKILLLEVELVECTOR_OFFSET UNITYSDK_OFFSET(0x1CA28B0)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL_ADDENEMYPASSIVESKILLID_OFFSET UNITYSDK_OFFSET(0x1CA2590)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL_CREATEENEMYPASSIVESKILLIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1CA28F0)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL_STARTENEMYPASSIVESKILLIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1CA2980)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL_ADDENEMYPASSIVESKILLLEVEL_OFFSET UNITYSDK_OFFSET(0x1CA2560)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL_CREATEENEMYPASSIVESKILLLEVELVECTOR_OFFSET UNITYSDK_OFFSET(0x1CA29C0)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL_STARTENEMYPASSIVESKILLLEVELVECTOR_OFFSET UNITYSDK_OFFSET(0x1CA2A50)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL_ADDGEASICONPATH_OFFSET UNITYSDK_OFFSET(0x1CA2530)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL_CREATEGEASICONPATHVECTOR_OFFSET UNITYSDK_OFFSET(0x1CA2A90)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL_STARTGEASICONPATHVECTOR_OFFSET UNITYSDK_OFFSET(0x1CA2B20)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL_ADDGEASLOCALIZEETCKEY_OFFSET UNITYSDK_OFFSET(0x1CA2500)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL_CREATEGEASLOCALIZEETCKEYVECTOR_OFFSET UNITYSDK_OFFSET(0x1CA2B60)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL_STARTGEASLOCALIZEETCKEYVECTOR_OFFSET UNITYSDK_OFFSET(0x1CA2BF0)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL_ENDTIMEATTACKDUNGEONGEASEXCEL_OFFSET UNITYSDK_OFFSET(0x1CA26E0)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL_FINISHTIMEATTACKDUNGEONGEASEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1CA2C30)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL_FINISHSIZEPREFIXEDTIMEATTACKDUNGEONGEASEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1CA2C50)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int TimeAttackDungeonGeasExcel_TypeDefinitionIndex = 19603;

	class TimeAttackDungeonGeasExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::TimeAttackDungeonGeasExcel* GetRootAsTimeAttackDungeonGeasExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::TimeAttackDungeonGeasExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL_GETROOTASTIMEATTACKDUNGEONGEASEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::TimeAttackDungeonGeasExcel* GetRootAsTimeAttackDungeonGeasExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::TimeAttackDungeonGeasExcel* arg)
		{
			return (return (::MX::Data::Excel::TimeAttackDungeonGeasExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::TimeAttackDungeonGeasExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL_GETROOTASTIMEATTACKDUNGEONGEASEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::TimeAttackDungeonGeasExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::TimeAttackDungeonGeasExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::FlatData::TimeAttackDungeonType* get_TimeAttackDungeonType()
		{
			return (return (::FlatData::TimeAttackDungeonType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL_GET_TIMEATTACKDUNGEONTYPE_OFFSET))(nullptr);
		}

		::System::UInt32 get_LocalizeEtcKey()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL_GET_LOCALIZEETCKEY_OFFSET))(nullptr);
		}

		::System::Int64 get_BattleDuration()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL_GET_BATTLEDURATION_OFFSET))(nullptr);
		}

		::System::Int64 get_ClearDefaultPoint()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL_GET_CLEARDEFAULTPOINT_OFFSET))(nullptr);
		}

		::System::Int64 get_ClearTimeWeightPoint()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL_GET_CLEARTIMEWEIGHTPOINT_OFFSET))(nullptr);
		}

		::System::Int64 get_TimeWeightConst()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL_GET_TIMEWEIGHTCONST_OFFSET))(nullptr);
		}

		::System::Int32 get_Difficulty()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL_GET_DIFFICULTY_OFFSET))(nullptr);
		}

		::System::Int32 get_RecommandLevel()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL_GET_RECOMMANDLEVEL_OFFSET))(nullptr);
		}

		::System::Int64 get_GroundId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL_GET_GROUNDID_OFFSET))(nullptr);
		}

		::System::String* AllyPassiveSkillId(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL_ALLYPASSIVESKILLID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_AllyPassiveSkillIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL_GET_ALLYPASSIVESKILLIDLENGTH_OFFSET))(nullptr);
		}

		::System::Int32 AllyPassiveSkillLevel(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL_ALLYPASSIVESKILLLEVEL_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_AllyPassiveSkillLevelLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL_GET_ALLYPASSIVESKILLLEVELLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetAllyPassiveSkillLevelBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL_GETALLYPASSIVESKILLLEVELBYTES_OFFSET))(nullptr);
		}

		::System::String* EnemyPassiveSkillId(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL_ENEMYPASSIVESKILLID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_EnemyPassiveSkillIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL_GET_ENEMYPASSIVESKILLIDLENGTH_OFFSET))(nullptr);
		}

		::System::Int32 EnemyPassiveSkillLevel(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL_ENEMYPASSIVESKILLLEVEL_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_EnemyPassiveSkillLevelLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL_GET_ENEMYPASSIVESKILLLEVELLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetEnemyPassiveSkillLevelBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL_GETENEMYPASSIVESKILLLEVELBYTES_OFFSET))(nullptr);
		}

		::System::String* GeasIconPath(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL_GEASICONPATH_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_GeasIconPathLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL_GET_GEASICONPATHLENGTH_OFFSET))(nullptr);
		}

		::System::UInt32 GeasLocalizeEtcKey(::System::Int32 arg)
		{
			return (return (::System::UInt32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL_GEASLOCALIZEETCKEY_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_GeasLocalizeEtcKeyLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL_GET_GEASLOCALIZEETCKEYLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetGeasLocalizeEtcKeyBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL_GETGEASLOCALIZEETCKEYBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateTimeAttackDungeonGeasExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatData::TimeAttackDungeonType* arg, ::System::UInt32 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int64 arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatData::TimeAttackDungeonType*, ::System::UInt32, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int32, ::System::Int32, ::System::Int64, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL_CREATETIMEATTACKDUNGEONGEASEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartTimeAttackDungeonGeasExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL_STARTTIMEATTACKDUNGEONGEASEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTimeAttackDungeonType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::TimeAttackDungeonType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::TimeAttackDungeonType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL_ADDTIMEATTACKDUNGEONTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLocalizeEtcKey(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL_ADDLOCALIZEETCKEY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBattleDuration(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL_ADDBATTLEDURATION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddClearDefaultPoint(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL_ADDCLEARDEFAULTPOINT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddClearTimeWeightPoint(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL_ADDCLEARTIMEWEIGHTPOINT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTimeWeightConst(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL_ADDTIMEWEIGHTCONST_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDifficulty(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL_ADDDIFFICULTY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRecommandLevel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL_ADDRECOMMANDLEVEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddGroundId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL_ADDGROUNDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddAllyPassiveSkillId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL_ADDALLYPASSIVESKILLID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateAllyPassiveSkillIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL_CREATEALLYPASSIVESKILLIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartAllyPassiveSkillIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL_STARTALLYPASSIVESKILLIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddAllyPassiveSkillLevel(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL_ADDALLYPASSIVESKILLLEVEL_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateAllyPassiveSkillLevelVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL_CREATEALLYPASSIVESKILLLEVELVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartAllyPassiveSkillLevelVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL_STARTALLYPASSIVESKILLLEVELVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEnemyPassiveSkillId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL_ADDENEMYPASSIVESKILLID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateEnemyPassiveSkillIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL_CREATEENEMYPASSIVESKILLIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartEnemyPassiveSkillIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL_STARTENEMYPASSIVESKILLIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEnemyPassiveSkillLevel(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL_ADDENEMYPASSIVESKILLLEVEL_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateEnemyPassiveSkillLevelVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL_CREATEENEMYPASSIVESKILLLEVELVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartEnemyPassiveSkillLevelVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL_STARTENEMYPASSIVESKILLLEVELVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddGeasIconPath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL_ADDGEASICONPATH_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateGeasIconPathVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL_CREATEGEASICONPATHVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartGeasIconPathVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL_STARTGEASICONPATHVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddGeasLocalizeEtcKey(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL_ADDGEASLOCALIZEETCKEY_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateGeasLocalizeEtcKeyVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL_CREATEGEASLOCALIZEETCKEYVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartGeasLocalizeEtcKeyVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL_STARTGEASLOCALIZEETCKEYVECTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndTimeAttackDungeonGeasExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL_ENDTIMEATTACKDUNGEONGEASEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishTimeAttackDungeonGeasExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL_FINISHTIMEATTACKDUNGEONGEASEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedTimeAttackDungeonGeasExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCEL_FINISHSIZEPREFIXEDTIMEATTACKDUNGEONGEASEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

