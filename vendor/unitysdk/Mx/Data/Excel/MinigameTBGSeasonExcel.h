#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class MinigameTBGSeasonExcel; }
namespace FlatData { class ParcelType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1C08F70)
#define MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_GETROOTASMINIGAMETBGSEASONEXCEL_OFFSET UNITYSDK_OFFSET(0x1C08F80)
#define MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_GETROOTASMINIGAMETBGSEASONEXCEL_OFFSET UNITYSDK_OFFSET(0x1C08FE0)
#define MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1C09070)
#define MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1C09040)
#define MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1C09090)
#define MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_GET_ITEMSLOT_OFFSET UNITYSDK_OFFSET(0x1C090E0)
#define MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_GET_DEFAULTECHELONHP_OFFSET UNITYSDK_OFFSET(0x1C09130)
#define MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_GET_DEFAULTITEMDICEID_OFFSET UNITYSDK_OFFSET(0x1C09180)
#define MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_GET_ECHELONSLOT1CHARACTERID_OFFSET UNITYSDK_OFFSET(0x1C091D0)
#define MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_GET_ECHELONSLOT2CHARACTERID_OFFSET UNITYSDK_OFFSET(0x1C09220)
#define MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_GET_ECHELONSLOT3CHARACTERID_OFFSET UNITYSDK_OFFSET(0x1C09270)
#define MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_GET_ECHELONSLOT4CHARACTERID_OFFSET UNITYSDK_OFFSET(0x1C092C0)
#define MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_GET_ECHELONSLOT1PORTRAIT_OFFSET UNITYSDK_OFFSET(0x1C09310)
#define MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_GETECHELONSLOT1PORTRAITBYTES_OFFSET UNITYSDK_OFFSET(0x1C09350)
#define MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_GET_ECHELONSLOT2PORTRAIT_OFFSET UNITYSDK_OFFSET(0x1C09370)
#define MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_GETECHELONSLOT2PORTRAITBYTES_OFFSET UNITYSDK_OFFSET(0x1C093B0)
#define MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_GET_ECHELONSLOT3PORTRAIT_OFFSET UNITYSDK_OFFSET(0x1C093D0)
#define MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_GETECHELONSLOT3PORTRAITBYTES_OFFSET UNITYSDK_OFFSET(0x1C09410)
#define MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_GET_ECHELONSLOT4PORTRAIT_OFFSET UNITYSDK_OFFSET(0x1C09430)
#define MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_GETECHELONSLOT4PORTRAITBYTES_OFFSET UNITYSDK_OFFSET(0x1C09470)
#define MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_GET_EVENTUSECOSTTYPE_OFFSET UNITYSDK_OFFSET(0x1C09490)
#define MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_GET_EVENTUSECOSTID_OFFSET UNITYSDK_OFFSET(0x1C094E0)
#define MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_GET_ECHELONREVIVALCOSTTYPE_OFFSET UNITYSDK_OFFSET(0x1C09530)
#define MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_GET_ECHELONREVIVALCOSTID_OFFSET UNITYSDK_OFFSET(0x1C09580)
#define MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_GET_ECHELONREVIVALCOSTAMOUNT_OFFSET UNITYSDK_OFFSET(0x1C095D0)
#define MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_GET_ENEMYBOSSHP_OFFSET UNITYSDK_OFFSET(0x1C09620)
#define MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_GET_ENEMYMINIONHP_OFFSET UNITYSDK_OFFSET(0x1C09670)
#define MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_GET_ATTACKDAMAGE_OFFSET UNITYSDK_OFFSET(0x1C096C0)
#define MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_GET_CRITICALATTACKDAMAGE_OFFSET UNITYSDK_OFFSET(0x1C09710)
#define MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_GET_ROUNDITEMSELECTLIMIT_OFFSET UNITYSDK_OFFSET(0x1C09760)
#define MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_GET_INSTANTCLEARROUND_OFFSET UNITYSDK_OFFSET(0x1C097B0)
#define MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_GET_MAXHP_OFFSET UNITYSDK_OFFSET(0x1C09800)
#define MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_GET_MAPIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1C09850)
#define MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_GETMAPIMAGEPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1C09890)
#define MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_GET_MAPNAMELOCALIZE_OFFSET UNITYSDK_OFFSET(0x1C098B0)
#define MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_GETMAPNAMELOCALIZEBYTES_OFFSET UNITYSDK_OFFSET(0x1C098F0)
#define MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_GET_STARTTHEMAINDEX_OFFSET UNITYSDK_OFFSET(0x1C09910)
#define MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_GET_LOOPTHEMAINDEX_OFFSET UNITYSDK_OFFSET(0x1C09960)
#define MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_GET_MAXDICEPLUS_OFFSET UNITYSDK_OFFSET(0x1C099B0)
#define MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_CREATEMINIGAMETBGSEASONEXCEL_OFFSET UNITYSDK_OFFSET(0x1C09A00)
#define MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_STARTMINIGAMETBGSEASONEXCEL_OFFSET UNITYSDK_OFFSET(0x1C0A4A0)
#define MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_ADDEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1C0A030)
#define MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_ADDITEMSLOT_OFFSET UNITYSDK_OFFSET(0x1C0A420)
#define MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_ADDDEFAULTECHELONHP_OFFSET UNITYSDK_OFFSET(0x1C0A3F0)
#define MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_ADDDEFAULTITEMDICEID_OFFSET UNITYSDK_OFFSET(0x1C0A000)
#define MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_ADDECHELONSLOT1CHARACTERID_OFFSET UNITYSDK_OFFSET(0x1C09FD0)
#define MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_ADDECHELONSLOT2CHARACTERID_OFFSET UNITYSDK_OFFSET(0x1C09FA0)
#define MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_ADDECHELONSLOT3CHARACTERID_OFFSET UNITYSDK_OFFSET(0x1C09F70)
#define MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_ADDECHELONSLOT4CHARACTERID_OFFSET UNITYSDK_OFFSET(0x1C09F40)
#define MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_ADDECHELONSLOT1PORTRAIT_OFFSET UNITYSDK_OFFSET(0x1C0A3C0)
#define MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_ADDECHELONSLOT2PORTRAIT_OFFSET UNITYSDK_OFFSET(0x1C0A390)
#define MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_ADDECHELONSLOT3PORTRAIT_OFFSET UNITYSDK_OFFSET(0x1C0A360)
#define MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_ADDECHELONSLOT4PORTRAIT_OFFSET UNITYSDK_OFFSET(0x1C0A330)
#define MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_ADDEVENTUSECOSTTYPE_OFFSET UNITYSDK_OFFSET(0x1C0A300)
#define MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_ADDEVENTUSECOSTID_OFFSET UNITYSDK_OFFSET(0x1C09F10)
#define MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_ADDECHELONREVIVALCOSTTYPE_OFFSET UNITYSDK_OFFSET(0x1C0A2D0)
#define MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_ADDECHELONREVIVALCOSTID_OFFSET UNITYSDK_OFFSET(0x1C09EE0)
#define MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_ADDECHELONREVIVALCOSTAMOUNT_OFFSET UNITYSDK_OFFSET(0x1C0A2A0)
#define MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_ADDENEMYBOSSHP_OFFSET UNITYSDK_OFFSET(0x1C0A270)
#define MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_ADDENEMYMINIONHP_OFFSET UNITYSDK_OFFSET(0x1C0A240)
#define MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_ADDATTACKDAMAGE_OFFSET UNITYSDK_OFFSET(0x1C0A210)
#define MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_ADDCRITICALATTACKDAMAGE_OFFSET UNITYSDK_OFFSET(0x1C0A1E0)
#define MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_ADDROUNDITEMSELECTLIMIT_OFFSET UNITYSDK_OFFSET(0x1C0A1B0)
#define MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_ADDINSTANTCLEARROUND_OFFSET UNITYSDK_OFFSET(0x1C0A180)
#define MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_ADDMAXHP_OFFSET UNITYSDK_OFFSET(0x1C0A150)
#define MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_ADDMAPIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1C0A120)
#define MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_ADDMAPNAMELOCALIZE_OFFSET UNITYSDK_OFFSET(0x1C0A0F0)
#define MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_ADDSTARTTHEMAINDEX_OFFSET UNITYSDK_OFFSET(0x1C0A0C0)
#define MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_ADDLOOPTHEMAINDEX_OFFSET UNITYSDK_OFFSET(0x1C0A090)
#define MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_ADDMAXDICEPLUS_OFFSET UNITYSDK_OFFSET(0x1C0A060)
#define MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_ENDMINIGAMETBGSEASONEXCEL_OFFSET UNITYSDK_OFFSET(0x1C0A450)
#define MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_FINISHMINIGAMETBGSEASONEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C0A4C0)
#define MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_FINISHSIZEPREFIXEDMINIGAMETBGSEASONEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C0A4E0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MinigameTBGSeasonExcel_TypeDefinitionIndex = 18901;

	class MinigameTBGSeasonExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::MinigameTBGSeasonExcel* GetRootAsMinigameTBGSeasonExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MinigameTBGSeasonExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_GETROOTASMINIGAMETBGSEASONEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::MinigameTBGSeasonExcel* GetRootAsMinigameTBGSeasonExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::MinigameTBGSeasonExcel* arg)
		{
			return (return (::MX::Data::Excel::MinigameTBGSeasonExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::MinigameTBGSeasonExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_GETROOTASMINIGAMETBGSEASONEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::MinigameTBGSeasonExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MinigameTBGSeasonExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Int32 get_ItemSlot()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_GET_ITEMSLOT_OFFSET))(nullptr);
		}

		::System::Int32 get_DefaultEchelonHp()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_GET_DEFAULTECHELONHP_OFFSET))(nullptr);
		}

		::System::Int64 get_DefaultItemDiceId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_GET_DEFAULTITEMDICEID_OFFSET))(nullptr);
		}

		::System::Int64 get_EchelonSlot1CharacterId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_GET_ECHELONSLOT1CHARACTERID_OFFSET))(nullptr);
		}

		::System::Int64 get_EchelonSlot2CharacterId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_GET_ECHELONSLOT2CHARACTERID_OFFSET))(nullptr);
		}

		::System::Int64 get_EchelonSlot3CharacterId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_GET_ECHELONSLOT3CHARACTERID_OFFSET))(nullptr);
		}

		::System::Int64 get_EchelonSlot4CharacterId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_GET_ECHELONSLOT4CHARACTERID_OFFSET))(nullptr);
		}

		::System::String* get_EchelonSlot1Portrait()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_GET_ECHELONSLOT1PORTRAIT_OFFSET))(nullptr);
		}

		Il2CppObject* GetEchelonSlot1PortraitBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_GETECHELONSLOT1PORTRAITBYTES_OFFSET))(nullptr);
		}

		::System::String* get_EchelonSlot2Portrait()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_GET_ECHELONSLOT2PORTRAIT_OFFSET))(nullptr);
		}

		Il2CppObject* GetEchelonSlot2PortraitBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_GETECHELONSLOT2PORTRAITBYTES_OFFSET))(nullptr);
		}

		::System::String* get_EchelonSlot3Portrait()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_GET_ECHELONSLOT3PORTRAIT_OFFSET))(nullptr);
		}

		Il2CppObject* GetEchelonSlot3PortraitBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_GETECHELONSLOT3PORTRAITBYTES_OFFSET))(nullptr);
		}

		::System::String* get_EchelonSlot4Portrait()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_GET_ECHELONSLOT4PORTRAIT_OFFSET))(nullptr);
		}

		Il2CppObject* GetEchelonSlot4PortraitBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_GETECHELONSLOT4PORTRAITBYTES_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* get_EventUseCostType()
		{
			return (return (::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_GET_EVENTUSECOSTTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_EventUseCostId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_GET_EVENTUSECOSTID_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* get_EchelonRevivalCostType()
		{
			return (return (::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_GET_ECHELONREVIVALCOSTTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_EchelonRevivalCostId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_GET_ECHELONREVIVALCOSTID_OFFSET))(nullptr);
		}

		::System::Int32 get_EchelonRevivalCostAmount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_GET_ECHELONREVIVALCOSTAMOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_EnemyBossHP()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_GET_ENEMYBOSSHP_OFFSET))(nullptr);
		}

		::System::Int32 get_EnemyMinionHP()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_GET_ENEMYMINIONHP_OFFSET))(nullptr);
		}

		::System::Int32 get_AttackDamage()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_GET_ATTACKDAMAGE_OFFSET))(nullptr);
		}

		::System::Int32 get_CriticalAttackDamage()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_GET_CRITICALATTACKDAMAGE_OFFSET))(nullptr);
		}

		::System::Int32 get_RoundItemSelectLimit()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_GET_ROUNDITEMSELECTLIMIT_OFFSET))(nullptr);
		}

		::System::Int32 get_InstantClearRound()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_GET_INSTANTCLEARROUND_OFFSET))(nullptr);
		}

		::System::Int32 get_MaxHp()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_GET_MAXHP_OFFSET))(nullptr);
		}

		::System::String* get_MapImagePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_GET_MAPIMAGEPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetMapImagePathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_GETMAPIMAGEPATHBYTES_OFFSET))(nullptr);
		}

		::System::String* get_MapNameLocalize()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_GET_MAPNAMELOCALIZE_OFFSET))(nullptr);
		}

		Il2CppObject* GetMapNameLocalizeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_GETMAPNAMELOCALIZEBYTES_OFFSET))(nullptr);
		}

		::System::Int32 get_StartThemaIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_GET_STARTTHEMAINDEX_OFFSET))(nullptr);
		}

		::System::Int32 get_LoopThemaIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_GET_LOOPTHEMAINDEX_OFFSET))(nullptr);
		}

		::System::Int32 get_MaxDicePlus()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_GET_MAXDICEPLUS_OFFSET))(nullptr);
		}

		Il2CppObject* CreateMinigameTBGSeasonExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatData::ParcelType* arg, ::System::Int64 arg, ::FlatData::ParcelType* arg, ::System::Int64 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int32, ::System::Int32, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatData::ParcelType*, ::System::Int64, ::FlatData::ParcelType*, ::System::Int64, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_CREATEMINIGAMETBGSEASONEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartMinigameTBGSeasonExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_STARTMINIGAMETBGSEASONEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddEventContentId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_ADDEVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddItemSlot(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_ADDITEMSLOT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDefaultEchelonHp(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_ADDDEFAULTECHELONHP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDefaultItemDiceId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_ADDDEFAULTITEMDICEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEchelonSlot1CharacterId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_ADDECHELONSLOT1CHARACTERID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEchelonSlot2CharacterId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_ADDECHELONSLOT2CHARACTERID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEchelonSlot3CharacterId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_ADDECHELONSLOT3CHARACTERID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEchelonSlot4CharacterId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_ADDECHELONSLOT4CHARACTERID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEchelonSlot1Portrait(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_ADDECHELONSLOT1PORTRAIT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEchelonSlot2Portrait(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_ADDECHELONSLOT2PORTRAIT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEchelonSlot3Portrait(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_ADDECHELONSLOT3PORTRAIT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEchelonSlot4Portrait(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_ADDECHELONSLOT4PORTRAIT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEventUseCostType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ParcelType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ParcelType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_ADDEVENTUSECOSTTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEventUseCostId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_ADDEVENTUSECOSTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEchelonRevivalCostType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ParcelType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ParcelType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_ADDECHELONREVIVALCOSTTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEchelonRevivalCostId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_ADDECHELONREVIVALCOSTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEchelonRevivalCostAmount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_ADDECHELONREVIVALCOSTAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEnemyBossHP(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_ADDENEMYBOSSHP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEnemyMinionHP(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_ADDENEMYMINIONHP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddAttackDamage(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_ADDATTACKDAMAGE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCriticalAttackDamage(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_ADDCRITICALATTACKDAMAGE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRoundItemSelectLimit(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_ADDROUNDITEMSELECTLIMIT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddInstantClearRound(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_ADDINSTANTCLEARROUND_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMaxHp(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_ADDMAXHP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMapImagePath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_ADDMAPIMAGEPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMapNameLocalize(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_ADDMAPNAMELOCALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStartThemaIndex(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_ADDSTARTTHEMAINDEX_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLoopThemaIndex(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_ADDLOOPTHEMAINDEX_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMaxDicePlus(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_ADDMAXDICEPLUS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndMinigameTBGSeasonExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_ENDMINIGAMETBGSEASONEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishMinigameTBGSeasonExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_FINISHMINIGAMETBGSEASONEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedMinigameTBGSeasonExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGSEASONEXCEL_FINISHSIZEPREFIXEDMINIGAMETBGSEASONEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

