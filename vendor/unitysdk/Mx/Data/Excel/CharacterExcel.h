#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class CharacterExcel; }
namespace FlatData { class ProductionStep; }
namespace FlatData { class Rarity; }
namespace FlatData { class TacticEntityType; }
namespace FlatData { class TacticRole; }
namespace FlatData { class WeaponType; }
namespace FlatData { class TacticRange; }
namespace FlatData { class BulletType; }
namespace FlatData { class ArmorType; }
namespace FlatData { class AimIKType; }
namespace FlatData { class School; }
namespace FlatData { class Club; }
namespace FlatData { class StatLevelUpType; }
namespace FlatData { class SquadType; }
namespace FlatData { class EquipmentCategory; }
namespace FlatData { class Tag; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_CHARACTEREXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1A22180)
#define MX_DATA_EXCEL_CHARACTEREXCEL_GETROOTASCHARACTEREXCEL_OFFSET UNITYSDK_OFFSET(0x1A22190)
#define MX_DATA_EXCEL_CHARACTEREXCEL_GETROOTASCHARACTEREXCEL_OFFSET UNITYSDK_OFFSET(0x1A221F0)
#define MX_DATA_EXCEL_CHARACTEREXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1A22280)
#define MX_DATA_EXCEL_CHARACTEREXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1A22250)
#define MX_DATA_EXCEL_CHARACTEREXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1A222A0)
#define MX_DATA_EXCEL_CHARACTEREXCEL_GET_DEVNAME_OFFSET UNITYSDK_OFFSET(0x1A222F0)
#define MX_DATA_EXCEL_CHARACTEREXCEL_GETDEVNAMEBYTES_OFFSET UNITYSDK_OFFSET(0x1A22330)
#define MX_DATA_EXCEL_CHARACTEREXCEL_GET_COSTUMEGROUPID_OFFSET UNITYSDK_OFFSET(0x1A22350)
#define MX_DATA_EXCEL_CHARACTEREXCEL_GET_ISPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1A223A0)
#define MX_DATA_EXCEL_CHARACTEREXCEL_GET_PRODUCTIONSTEP_OFFSET UNITYSDK_OFFSET(0x1A223F0)
#define MX_DATA_EXCEL_CHARACTEREXCEL_GET_COLLECTIONVISIBLE_OFFSET UNITYSDK_OFFSET(0x1A22440)
#define MX_DATA_EXCEL_CHARACTEREXCEL_GET_RELEASEDATE_OFFSET UNITYSDK_OFFSET(0x1A22490)
#define MX_DATA_EXCEL_CHARACTEREXCEL_GETRELEASEDATEBYTES_OFFSET UNITYSDK_OFFSET(0x1A224D0)
#define MX_DATA_EXCEL_CHARACTEREXCEL_GET_COLLECTIONVISIBLESTARTDATE_OFFSET UNITYSDK_OFFSET(0x1A224F0)
#define MX_DATA_EXCEL_CHARACTEREXCEL_GETCOLLECTIONVISIBLESTARTDATEBYTES_OFFSET UNITYSDK_OFFSET(0x1A22530)
#define MX_DATA_EXCEL_CHARACTEREXCEL_GET_COLLECTIONVISIBLEENDDATE_OFFSET UNITYSDK_OFFSET(0x1A22550)
#define MX_DATA_EXCEL_CHARACTEREXCEL_GETCOLLECTIONVISIBLEENDDATEBYTES_OFFSET UNITYSDK_OFFSET(0x1A22590)
#define MX_DATA_EXCEL_CHARACTEREXCEL_GET_ISPLAYABLECHARACTER_OFFSET UNITYSDK_OFFSET(0x1A225B0)
#define MX_DATA_EXCEL_CHARACTEREXCEL_GET_LOCALIZEETCID_OFFSET UNITYSDK_OFFSET(0x1A22600)
#define MX_DATA_EXCEL_CHARACTEREXCEL_GET_RARITY_OFFSET UNITYSDK_OFFSET(0x1A22650)
#define MX_DATA_EXCEL_CHARACTEREXCEL_GET_ISNPC_OFFSET UNITYSDK_OFFSET(0x1A226A0)
#define MX_DATA_EXCEL_CHARACTEREXCEL_GET_TACTICENTITYTYPE_OFFSET UNITYSDK_OFFSET(0x1A226F0)
#define MX_DATA_EXCEL_CHARACTEREXCEL_GET_CANSURVIVE_OFFSET UNITYSDK_OFFSET(0x1A22740)
#define MX_DATA_EXCEL_CHARACTEREXCEL_GET_ISDUMMY_OFFSET UNITYSDK_OFFSET(0x1A22790)
#define MX_DATA_EXCEL_CHARACTEREXCEL_GET_SUBPARTSCOUNT_OFFSET UNITYSDK_OFFSET(0x1A227E0)
#define MX_DATA_EXCEL_CHARACTEREXCEL_GET_TACTICROLE_OFFSET UNITYSDK_OFFSET(0x1A22830)
#define MX_DATA_EXCEL_CHARACTEREXCEL_GET_WEAPONTYPE_OFFSET UNITYSDK_OFFSET(0x1A22880)
#define MX_DATA_EXCEL_CHARACTEREXCEL_GET_TACTICRANGE_OFFSET UNITYSDK_OFFSET(0x1A228D0)
#define MX_DATA_EXCEL_CHARACTEREXCEL_GET_BULLETTYPE_OFFSET UNITYSDK_OFFSET(0x1A22920)
#define MX_DATA_EXCEL_CHARACTEREXCEL_GET_ARMORTYPE_OFFSET UNITYSDK_OFFSET(0x1A22970)
#define MX_DATA_EXCEL_CHARACTEREXCEL_GET_AIMIKTYPE_OFFSET UNITYSDK_OFFSET(0x1A229C0)
#define MX_DATA_EXCEL_CHARACTEREXCEL_GET_SCHOOL_OFFSET UNITYSDK_OFFSET(0x1A22A10)
#define MX_DATA_EXCEL_CHARACTEREXCEL_GET_CLUB_OFFSET UNITYSDK_OFFSET(0x1A22A60)
#define MX_DATA_EXCEL_CHARACTEREXCEL_GET_DEFAULTSTARGRADE_OFFSET UNITYSDK_OFFSET(0x1A22AB0)
#define MX_DATA_EXCEL_CHARACTEREXCEL_GET_MAXSTARGRADE_OFFSET UNITYSDK_OFFSET(0x1A22B00)
#define MX_DATA_EXCEL_CHARACTEREXCEL_GET_STATLEVELUPTYPE_OFFSET UNITYSDK_OFFSET(0x1A22B50)
#define MX_DATA_EXCEL_CHARACTEREXCEL_GET_SQUADTYPE_OFFSET UNITYSDK_OFFSET(0x1A22BA0)
#define MX_DATA_EXCEL_CHARACTEREXCEL_GET_JUMPABLE_OFFSET UNITYSDK_OFFSET(0x1A22BF0)
#define MX_DATA_EXCEL_CHARACTEREXCEL_GET_PERSONALITYID_OFFSET UNITYSDK_OFFSET(0x1A22C40)
#define MX_DATA_EXCEL_CHARACTEREXCEL_GET_CHARACTERAIID_OFFSET UNITYSDK_OFFSET(0x1A22C90)
#define MX_DATA_EXCEL_CHARACTEREXCEL_GET_EXTERNALBTID_OFFSET UNITYSDK_OFFSET(0x1A22CE0)
#define MX_DATA_EXCEL_CHARACTEREXCEL_GET_MAINCOMBATSTYLEID_OFFSET UNITYSDK_OFFSET(0x1A22D30)
#define MX_DATA_EXCEL_CHARACTEREXCEL_GET_COMBATSTYLEINDEX_OFFSET UNITYSDK_OFFSET(0x1A22D80)
#define MX_DATA_EXCEL_CHARACTEREXCEL_GET_USEREPSTYLEONCHARACTERGROWTH_OFFSET UNITYSDK_OFFSET(0x1A22DD0)
#define MX_DATA_EXCEL_CHARACTEREXCEL_GET_SCENARIOCHARACTER_OFFSET UNITYSDK_OFFSET(0x1A22E20)
#define MX_DATA_EXCEL_CHARACTEREXCEL_GETSCENARIOCHARACTERBYTES_OFFSET UNITYSDK_OFFSET(0x1A22E60)
#define MX_DATA_EXCEL_CHARACTEREXCEL_GET_SPAWNTEMPLATEID_OFFSET UNITYSDK_OFFSET(0x1A22E80)
#define MX_DATA_EXCEL_CHARACTEREXCEL_GET_FAVORLEVELUPTYPE_OFFSET UNITYSDK_OFFSET(0x1A22ED0)
#define MX_DATA_EXCEL_CHARACTEREXCEL_EQUIPMENTSLOT_OFFSET UNITYSDK_OFFSET(0x1A22F20)
#define MX_DATA_EXCEL_CHARACTEREXCEL_GET_EQUIPMENTSLOTLENGTH_OFFSET UNITYSDK_OFFSET(0x1A22F80)
#define MX_DATA_EXCEL_CHARACTEREXCEL_GETEQUIPMENTSLOTBYTES_OFFSET UNITYSDK_OFFSET(0x1A22FC0)
#define MX_DATA_EXCEL_CHARACTEREXCEL_GET_WEAPONLOCALIZEID_OFFSET UNITYSDK_OFFSET(0x1A22FE0)
#define MX_DATA_EXCEL_CHARACTEREXCEL_GET_DISPLAYENEMYINFO_OFFSET UNITYSDK_OFFSET(0x1A23030)
#define MX_DATA_EXCEL_CHARACTEREXCEL_GET_BODYRADIUS_OFFSET UNITYSDK_OFFSET(0x1A23080)
#define MX_DATA_EXCEL_CHARACTEREXCEL_GET_RANDOMEFFECTRADIUS_OFFSET UNITYSDK_OFFSET(0x1A230D0)
#define MX_DATA_EXCEL_CHARACTEREXCEL_GET_TARGETGUIDESCALE_OFFSET UNITYSDK_OFFSET(0x1A23120)
#define MX_DATA_EXCEL_CHARACTEREXCEL_GET_HPBARHIDE_OFFSET UNITYSDK_OFFSET(0x1A23170)
#define MX_DATA_EXCEL_CHARACTEREXCEL_GET_HPBARHEIGHT_OFFSET UNITYSDK_OFFSET(0x1A231C0)
#define MX_DATA_EXCEL_CHARACTEREXCEL_GET_HIGHLIGHTFLOATERHEIGHT_OFFSET UNITYSDK_OFFSET(0x1A23210)
#define MX_DATA_EXCEL_CHARACTEREXCEL_GET_EMOJIOFFSETX_OFFSET UNITYSDK_OFFSET(0x1A23260)
#define MX_DATA_EXCEL_CHARACTEREXCEL_GET_EMOJIOFFSETY_OFFSET UNITYSDK_OFFSET(0x1A232B0)
#define MX_DATA_EXCEL_CHARACTEREXCEL_GET_MOVESTARTFRAME_OFFSET UNITYSDK_OFFSET(0x1A23300)
#define MX_DATA_EXCEL_CHARACTEREXCEL_GET_MOVEENDFRAME_OFFSET UNITYSDK_OFFSET(0x1A23350)
#define MX_DATA_EXCEL_CHARACTEREXCEL_GET_JUMPMOTIONFRAME_OFFSET UNITYSDK_OFFSET(0x1A233A0)
#define MX_DATA_EXCEL_CHARACTEREXCEL_GET_APPEARFRAME_OFFSET UNITYSDK_OFFSET(0x1A233F0)
#define MX_DATA_EXCEL_CHARACTEREXCEL_GET_CANMOVE_OFFSET UNITYSDK_OFFSET(0x1A23440)
#define MX_DATA_EXCEL_CHARACTEREXCEL_GET_CANFIX_OFFSET UNITYSDK_OFFSET(0x1A23490)
#define MX_DATA_EXCEL_CHARACTEREXCEL_GET_CANCROWDCONTROL_OFFSET UNITYSDK_OFFSET(0x1A234E0)
#define MX_DATA_EXCEL_CHARACTEREXCEL_GET_CANBATTLEITEMMOVE_OFFSET UNITYSDK_OFFSET(0x1A23530)
#define MX_DATA_EXCEL_CHARACTEREXCEL_GET_IGNOREOBSTACLE_OFFSET UNITYSDK_OFFSET(0x1A23580)
#define MX_DATA_EXCEL_CHARACTEREXCEL_GET_ISAIRUNIT_OFFSET UNITYSDK_OFFSET(0x1A235D0)
#define MX_DATA_EXCEL_CHARACTEREXCEL_GET_AIRUNITHEIGHT_OFFSET UNITYSDK_OFFSET(0x1A23620)
#define MX_DATA_EXCEL_CHARACTEREXCEL_TAGS_OFFSET UNITYSDK_OFFSET(0x1A23670)
#define MX_DATA_EXCEL_CHARACTEREXCEL_GET_TAGSLENGTH_OFFSET UNITYSDK_OFFSET(0x1A236D0)
#define MX_DATA_EXCEL_CHARACTEREXCEL_GETTAGSBYTES_OFFSET UNITYSDK_OFFSET(0x1A23710)
#define MX_DATA_EXCEL_CHARACTEREXCEL_GET_SECRETSTONEITEMID_OFFSET UNITYSDK_OFFSET(0x1A23730)
#define MX_DATA_EXCEL_CHARACTEREXCEL_GET_SECRETSTONEITEMAMOUNT_OFFSET UNITYSDK_OFFSET(0x1A23780)
#define MX_DATA_EXCEL_CHARACTEREXCEL_GET_CHARACTERPIECEITEMID_OFFSET UNITYSDK_OFFSET(0x1A237D0)
#define MX_DATA_EXCEL_CHARACTEREXCEL_GET_CHARACTERPIECEITEMAMOUNT_OFFSET UNITYSDK_OFFSET(0x1A23820)
#define MX_DATA_EXCEL_CHARACTEREXCEL_GET_COMBINERECIPEID_OFFSET UNITYSDK_OFFSET(0x1A23870)
#define MX_DATA_EXCEL_CHARACTEREXCEL_CREATECHARACTEREXCEL_OFFSET UNITYSDK_OFFSET(0x1A238C0)
#define MX_DATA_EXCEL_CHARACTEREXCEL_STARTCHARACTEREXCEL_OFFSET UNITYSDK_OFFSET(0x1A25190)
#define MX_DATA_EXCEL_CHARACTEREXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1A246C0)
#define MX_DATA_EXCEL_CHARACTEREXCEL_ADDDEVNAME_OFFSET UNITYSDK_OFFSET(0x1A24E10)
#define MX_DATA_EXCEL_CHARACTEREXCEL_ADDCOSTUMEGROUPID_OFFSET UNITYSDK_OFFSET(0x1A24690)
#define MX_DATA_EXCEL_CHARACTEREXCEL_ADDISPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1A25110)
#define MX_DATA_EXCEL_CHARACTEREXCEL_ADDPRODUCTIONSTEP_OFFSET UNITYSDK_OFFSET(0x1A24DE0)
#define MX_DATA_EXCEL_CHARACTEREXCEL_ADDCOLLECTIONVISIBLE_OFFSET UNITYSDK_OFFSET(0x1A250E0)
#define MX_DATA_EXCEL_CHARACTEREXCEL_ADDRELEASEDATE_OFFSET UNITYSDK_OFFSET(0x1A24DB0)
#define MX_DATA_EXCEL_CHARACTEREXCEL_ADDCOLLECTIONVISIBLESTARTDATE_OFFSET UNITYSDK_OFFSET(0x1A24D80)
#define MX_DATA_EXCEL_CHARACTEREXCEL_ADDCOLLECTIONVISIBLEENDDATE_OFFSET UNITYSDK_OFFSET(0x1A24D50)
#define MX_DATA_EXCEL_CHARACTEREXCEL_ADDISPLAYABLECHARACTER_OFFSET UNITYSDK_OFFSET(0x1A250B0)
#define MX_DATA_EXCEL_CHARACTEREXCEL_ADDLOCALIZEETCID_OFFSET UNITYSDK_OFFSET(0x1A24D20)
#define MX_DATA_EXCEL_CHARACTEREXCEL_ADDRARITY_OFFSET UNITYSDK_OFFSET(0x1A24CF0)
#define MX_DATA_EXCEL_CHARACTEREXCEL_ADDISNPC_OFFSET UNITYSDK_OFFSET(0x1A25080)
#define MX_DATA_EXCEL_CHARACTEREXCEL_ADDTACTICENTITYTYPE_OFFSET UNITYSDK_OFFSET(0x1A24CC0)
#define MX_DATA_EXCEL_CHARACTEREXCEL_ADDCANSURVIVE_OFFSET UNITYSDK_OFFSET(0x1A25050)
#define MX_DATA_EXCEL_CHARACTEREXCEL_ADDISDUMMY_OFFSET UNITYSDK_OFFSET(0x1A25020)
#define MX_DATA_EXCEL_CHARACTEREXCEL_ADDSUBPARTSCOUNT_OFFSET UNITYSDK_OFFSET(0x1A24C90)
#define MX_DATA_EXCEL_CHARACTEREXCEL_ADDTACTICROLE_OFFSET UNITYSDK_OFFSET(0x1A24C60)
#define MX_DATA_EXCEL_CHARACTEREXCEL_ADDWEAPONTYPE_OFFSET UNITYSDK_OFFSET(0x1A24C30)
#define MX_DATA_EXCEL_CHARACTEREXCEL_ADDTACTICRANGE_OFFSET UNITYSDK_OFFSET(0x1A24C00)
#define MX_DATA_EXCEL_CHARACTEREXCEL_ADDBULLETTYPE_OFFSET UNITYSDK_OFFSET(0x1A24BD0)
#define MX_DATA_EXCEL_CHARACTEREXCEL_ADDARMORTYPE_OFFSET UNITYSDK_OFFSET(0x1A24BA0)
#define MX_DATA_EXCEL_CHARACTEREXCEL_ADDAIMIKTYPE_OFFSET UNITYSDK_OFFSET(0x1A24B70)
#define MX_DATA_EXCEL_CHARACTEREXCEL_ADDSCHOOL_OFFSET UNITYSDK_OFFSET(0x1A24B40)
#define MX_DATA_EXCEL_CHARACTEREXCEL_ADDCLUB_OFFSET UNITYSDK_OFFSET(0x1A24B10)
#define MX_DATA_EXCEL_CHARACTEREXCEL_ADDDEFAULTSTARGRADE_OFFSET UNITYSDK_OFFSET(0x1A24AE0)
#define MX_DATA_EXCEL_CHARACTEREXCEL_ADDMAXSTARGRADE_OFFSET UNITYSDK_OFFSET(0x1A24AB0)
#define MX_DATA_EXCEL_CHARACTEREXCEL_ADDSTATLEVELUPTYPE_OFFSET UNITYSDK_OFFSET(0x1A24A80)
#define MX_DATA_EXCEL_CHARACTEREXCEL_ADDSQUADTYPE_OFFSET UNITYSDK_OFFSET(0x1A24A50)
#define MX_DATA_EXCEL_CHARACTEREXCEL_ADDJUMPABLE_OFFSET UNITYSDK_OFFSET(0x1A24FF0)
#define MX_DATA_EXCEL_CHARACTEREXCEL_ADDPERSONALITYID_OFFSET UNITYSDK_OFFSET(0x1A24660)
#define MX_DATA_EXCEL_CHARACTEREXCEL_ADDCHARACTERAIID_OFFSET UNITYSDK_OFFSET(0x1A24630)
#define MX_DATA_EXCEL_CHARACTEREXCEL_ADDEXTERNALBTID_OFFSET UNITYSDK_OFFSET(0x1A24600)
#define MX_DATA_EXCEL_CHARACTEREXCEL_ADDMAINCOMBATSTYLEID_OFFSET UNITYSDK_OFFSET(0x1A245D0)
#define MX_DATA_EXCEL_CHARACTEREXCEL_ADDCOMBATSTYLEINDEX_OFFSET UNITYSDK_OFFSET(0x1A24A20)
#define MX_DATA_EXCEL_CHARACTEREXCEL_ADDUSEREPSTYLEONCHARACTERGROWTH_OFFSET UNITYSDK_OFFSET(0x1A24FC0)
#define MX_DATA_EXCEL_CHARACTEREXCEL_ADDSCENARIOCHARACTER_OFFSET UNITYSDK_OFFSET(0x1A249F0)
#define MX_DATA_EXCEL_CHARACTEREXCEL_ADDSPAWNTEMPLATEID_OFFSET UNITYSDK_OFFSET(0x1A249C0)
#define MX_DATA_EXCEL_CHARACTEREXCEL_ADDFAVORLEVELUPTYPE_OFFSET UNITYSDK_OFFSET(0x1A24990)
#define MX_DATA_EXCEL_CHARACTEREXCEL_ADDEQUIPMENTSLOT_OFFSET UNITYSDK_OFFSET(0x1A24960)
#define MX_DATA_EXCEL_CHARACTEREXCEL_CREATEEQUIPMENTSLOTVECTOR_OFFSET UNITYSDK_OFFSET(0x1A251B0)
#define MX_DATA_EXCEL_CHARACTEREXCEL_STARTEQUIPMENTSLOTVECTOR_OFFSET UNITYSDK_OFFSET(0x1A25240)
#define MX_DATA_EXCEL_CHARACTEREXCEL_ADDWEAPONLOCALIZEID_OFFSET UNITYSDK_OFFSET(0x1A24930)
#define MX_DATA_EXCEL_CHARACTEREXCEL_ADDDISPLAYENEMYINFO_OFFSET UNITYSDK_OFFSET(0x1A24F90)
#define MX_DATA_EXCEL_CHARACTEREXCEL_ADDBODYRADIUS_OFFSET UNITYSDK_OFFSET(0x1A245A0)
#define MX_DATA_EXCEL_CHARACTEREXCEL_ADDRANDOMEFFECTRADIUS_OFFSET UNITYSDK_OFFSET(0x1A24570)
#define MX_DATA_EXCEL_CHARACTEREXCEL_ADDTARGETGUIDESCALE_OFFSET UNITYSDK_OFFSET(0x1A24900)
#define MX_DATA_EXCEL_CHARACTEREXCEL_ADDHPBARHIDE_OFFSET UNITYSDK_OFFSET(0x1A24F60)
#define MX_DATA_EXCEL_CHARACTEREXCEL_ADDHPBARHEIGHT_OFFSET UNITYSDK_OFFSET(0x1A248D0)
#define MX_DATA_EXCEL_CHARACTEREXCEL_ADDHIGHLIGHTFLOATERHEIGHT_OFFSET UNITYSDK_OFFSET(0x1A248A0)
#define MX_DATA_EXCEL_CHARACTEREXCEL_ADDEMOJIOFFSETX_OFFSET UNITYSDK_OFFSET(0x1A24870)
#define MX_DATA_EXCEL_CHARACTEREXCEL_ADDEMOJIOFFSETY_OFFSET UNITYSDK_OFFSET(0x1A24840)
#define MX_DATA_EXCEL_CHARACTEREXCEL_ADDMOVESTARTFRAME_OFFSET UNITYSDK_OFFSET(0x1A24810)
#define MX_DATA_EXCEL_CHARACTEREXCEL_ADDMOVEENDFRAME_OFFSET UNITYSDK_OFFSET(0x1A247E0)
#define MX_DATA_EXCEL_CHARACTEREXCEL_ADDJUMPMOTIONFRAME_OFFSET UNITYSDK_OFFSET(0x1A247B0)
#define MX_DATA_EXCEL_CHARACTEREXCEL_ADDAPPEARFRAME_OFFSET UNITYSDK_OFFSET(0x1A24780)
#define MX_DATA_EXCEL_CHARACTEREXCEL_ADDCANMOVE_OFFSET UNITYSDK_OFFSET(0x1A24F30)
#define MX_DATA_EXCEL_CHARACTEREXCEL_ADDCANFIX_OFFSET UNITYSDK_OFFSET(0x1A24F00)
#define MX_DATA_EXCEL_CHARACTEREXCEL_ADDCANCROWDCONTROL_OFFSET UNITYSDK_OFFSET(0x1A24ED0)
#define MX_DATA_EXCEL_CHARACTEREXCEL_ADDCANBATTLEITEMMOVE_OFFSET UNITYSDK_OFFSET(0x1A24EA0)
#define MX_DATA_EXCEL_CHARACTEREXCEL_ADDIGNOREOBSTACLE_OFFSET UNITYSDK_OFFSET(0x1A24E70)
#define MX_DATA_EXCEL_CHARACTEREXCEL_ADDISAIRUNIT_OFFSET UNITYSDK_OFFSET(0x1A24E40)
#define MX_DATA_EXCEL_CHARACTEREXCEL_ADDAIRUNITHEIGHT_OFFSET UNITYSDK_OFFSET(0x1A24540)
#define MX_DATA_EXCEL_CHARACTEREXCEL_ADDTAGS_OFFSET UNITYSDK_OFFSET(0x1A24750)
#define MX_DATA_EXCEL_CHARACTEREXCEL_CREATETAGSVECTOR_OFFSET UNITYSDK_OFFSET(0x1A25280)
#define MX_DATA_EXCEL_CHARACTEREXCEL_STARTTAGSVECTOR_OFFSET UNITYSDK_OFFSET(0x1A25310)
#define MX_DATA_EXCEL_CHARACTEREXCEL_ADDSECRETSTONEITEMID_OFFSET UNITYSDK_OFFSET(0x1A24510)
#define MX_DATA_EXCEL_CHARACTEREXCEL_ADDSECRETSTONEITEMAMOUNT_OFFSET UNITYSDK_OFFSET(0x1A24720)
#define MX_DATA_EXCEL_CHARACTEREXCEL_ADDCHARACTERPIECEITEMID_OFFSET UNITYSDK_OFFSET(0x1A244E0)
#define MX_DATA_EXCEL_CHARACTEREXCEL_ADDCHARACTERPIECEITEMAMOUNT_OFFSET UNITYSDK_OFFSET(0x1A246F0)
#define MX_DATA_EXCEL_CHARACTEREXCEL_ADDCOMBINERECIPEID_OFFSET UNITYSDK_OFFSET(0x1A244B0)
#define MX_DATA_EXCEL_CHARACTEREXCEL_ENDCHARACTEREXCEL_OFFSET UNITYSDK_OFFSET(0x1A25140)
#define MX_DATA_EXCEL_CHARACTEREXCEL_FINISHCHARACTEREXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A25350)
#define MX_DATA_EXCEL_CHARACTEREXCEL_FINISHSIZEPREFIXEDCHARACTEREXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A25370)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int CharacterExcel_TypeDefinitionIndex = 17000;

	class CharacterExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::CharacterExcel* GetRootAsCharacterExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::CharacterExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_GETROOTASCHARACTEREXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::CharacterExcel* GetRootAsCharacterExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::CharacterExcel* arg)
		{
			return (return (::MX::Data::Excel::CharacterExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::CharacterExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_GETROOTASCHARACTEREXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::CharacterExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::CharacterExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::String* get_DevName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_GET_DEVNAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetDevNameBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_GETDEVNAMEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_CostumeGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_GET_COSTUMEGROUPID_OFFSET))(nullptr);
		}

		::System::Boolean get_IsPlayable()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_GET_ISPLAYABLE_OFFSET))(nullptr);
		}

		::FlatData::ProductionStep* get_ProductionStep()
		{
			return (return (::FlatData::ProductionStep*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_GET_PRODUCTIONSTEP_OFFSET))(nullptr);
		}

		::System::Boolean get_CollectionVisible()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_GET_COLLECTIONVISIBLE_OFFSET))(nullptr);
		}

		::System::String* get_ReleaseDate()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_GET_RELEASEDATE_OFFSET))(nullptr);
		}

		Il2CppObject* GetReleaseDateBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_GETRELEASEDATEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_CollectionVisibleStartDate()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_GET_COLLECTIONVISIBLESTARTDATE_OFFSET))(nullptr);
		}

		Il2CppObject* GetCollectionVisibleStartDateBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_GETCOLLECTIONVISIBLESTARTDATEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_CollectionVisibleEndDate()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_GET_COLLECTIONVISIBLEENDDATE_OFFSET))(nullptr);
		}

		Il2CppObject* GetCollectionVisibleEndDateBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_GETCOLLECTIONVISIBLEENDDATEBYTES_OFFSET))(nullptr);
		}

		::System::Boolean get_IsPlayableCharacter()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_GET_ISPLAYABLECHARACTER_OFFSET))(nullptr);
		}

		::System::UInt32 get_LocalizeEtcId()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_GET_LOCALIZEETCID_OFFSET))(nullptr);
		}

		::FlatData::Rarity* get_Rarity()
		{
			return (return (::FlatData::Rarity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_GET_RARITY_OFFSET))(nullptr);
		}

		::System::Boolean get_IsNPC()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_GET_ISNPC_OFFSET))(nullptr);
		}

		::FlatData::TacticEntityType* get_TacticEntityType()
		{
			return (return (::FlatData::TacticEntityType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_GET_TACTICENTITYTYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_CanSurvive()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_GET_CANSURVIVE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsDummy()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_GET_ISDUMMY_OFFSET))(nullptr);
		}

		::System::Int32 get_SubPartsCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_GET_SUBPARTSCOUNT_OFFSET))(nullptr);
		}

		::FlatData::TacticRole* get_TacticRole()
		{
			return (return (::FlatData::TacticRole*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_GET_TACTICROLE_OFFSET))(nullptr);
		}

		::FlatData::WeaponType* get_WeaponType()
		{
			return (return (::FlatData::WeaponType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_GET_WEAPONTYPE_OFFSET))(nullptr);
		}

		::FlatData::TacticRange* get_TacticRange()
		{
			return (return (::FlatData::TacticRange*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_GET_TACTICRANGE_OFFSET))(nullptr);
		}

		::FlatData::BulletType* get_BulletType()
		{
			return (return (::FlatData::BulletType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_GET_BULLETTYPE_OFFSET))(nullptr);
		}

		::FlatData::ArmorType* get_ArmorType()
		{
			return (return (::FlatData::ArmorType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_GET_ARMORTYPE_OFFSET))(nullptr);
		}

		::FlatData::AimIKType* get_AimIKType()
		{
			return (return (::FlatData::AimIKType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_GET_AIMIKTYPE_OFFSET))(nullptr);
		}

		::FlatData::School* get_School()
		{
			return (return (::FlatData::School*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_GET_SCHOOL_OFFSET))(nullptr);
		}

		::FlatData::Club* get_Club()
		{
			return (return (::FlatData::Club*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_GET_CLUB_OFFSET))(nullptr);
		}

		::System::Int32 get_DefaultStarGrade()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_GET_DEFAULTSTARGRADE_OFFSET))(nullptr);
		}

		::System::Int32 get_MaxStarGrade()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_GET_MAXSTARGRADE_OFFSET))(nullptr);
		}

		::FlatData::StatLevelUpType* get_StatLevelUpType()
		{
			return (return (::FlatData::StatLevelUpType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_GET_STATLEVELUPTYPE_OFFSET))(nullptr);
		}

		::FlatData::SquadType* get_SquadType()
		{
			return (return (::FlatData::SquadType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_GET_SQUADTYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_Jumpable()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_GET_JUMPABLE_OFFSET))(nullptr);
		}

		::System::Int64 get_PersonalityId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_GET_PERSONALITYID_OFFSET))(nullptr);
		}

		::System::Int64 get_CharacterAIId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_GET_CHARACTERAIID_OFFSET))(nullptr);
		}

		::System::Int64 get_ExternalBTId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_GET_EXTERNALBTID_OFFSET))(nullptr);
		}

		::System::Int64 get_MainCombatStyleId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_GET_MAINCOMBATSTYLEID_OFFSET))(nullptr);
		}

		::System::Int32 get_CombatStyleIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_GET_COMBATSTYLEINDEX_OFFSET))(nullptr);
		}

		::System::Boolean get_UseRepStyleOnCharacterGrowth()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_GET_USEREPSTYLEONCHARACTERGROWTH_OFFSET))(nullptr);
		}

		::System::String* get_ScenarioCharacter()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_GET_SCENARIOCHARACTER_OFFSET))(nullptr);
		}

		Il2CppObject* GetScenarioCharacterBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_GETSCENARIOCHARACTERBYTES_OFFSET))(nullptr);
		}

		::System::UInt32 get_SpawnTemplateId()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_GET_SPAWNTEMPLATEID_OFFSET))(nullptr);
		}

		::System::Int32 get_FavorLevelupType()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_GET_FAVORLEVELUPTYPE_OFFSET))(nullptr);
		}

		::FlatData::EquipmentCategory* EquipmentSlot(::System::Int32 arg)
		{
			return (return (::FlatData::EquipmentCategory*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_EQUIPMENTSLOT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_EquipmentSlotLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_GET_EQUIPMENTSLOTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetEquipmentSlotBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_GETEQUIPMENTSLOTBYTES_OFFSET))(nullptr);
		}

		::System::UInt32 get_WeaponLocalizeId()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_GET_WEAPONLOCALIZEID_OFFSET))(nullptr);
		}

		::System::Boolean get_DisplayEnemyInfo()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_GET_DISPLAYENEMYINFO_OFFSET))(nullptr);
		}

		::System::Int64 get_BodyRadius()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_GET_BODYRADIUS_OFFSET))(nullptr);
		}

		::System::Int64 get_RandomEffectRadius()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_GET_RANDOMEFFECTRADIUS_OFFSET))(nullptr);
		}

		::System::Single get_TargetGuideScale()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_GET_TARGETGUIDESCALE_OFFSET))(nullptr);
		}

		::System::Boolean get_HPBarHide()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_GET_HPBARHIDE_OFFSET))(nullptr);
		}

		::System::Single get_HpBarHeight()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_GET_HPBARHEIGHT_OFFSET))(nullptr);
		}

		::System::Single get_HighlightFloaterHeight()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_GET_HIGHLIGHTFLOATERHEIGHT_OFFSET))(nullptr);
		}

		::System::Single get_EmojiOffsetX()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_GET_EMOJIOFFSETX_OFFSET))(nullptr);
		}

		::System::Single get_EmojiOffsetY()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_GET_EMOJIOFFSETY_OFFSET))(nullptr);
		}

		::System::Int32 get_MoveStartFrame()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_GET_MOVESTARTFRAME_OFFSET))(nullptr);
		}

		::System::Int32 get_MoveEndFrame()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_GET_MOVEENDFRAME_OFFSET))(nullptr);
		}

		::System::Int32 get_JumpMotionFrame()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_GET_JUMPMOTIONFRAME_OFFSET))(nullptr);
		}

		::System::Int32 get_AppearFrame()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_GET_APPEARFRAME_OFFSET))(nullptr);
		}

		::System::Boolean get_CanMove()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_GET_CANMOVE_OFFSET))(nullptr);
		}

		::System::Boolean get_CanFix()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_GET_CANFIX_OFFSET))(nullptr);
		}

		::System::Boolean get_CanCrowdControl()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_GET_CANCROWDCONTROL_OFFSET))(nullptr);
		}

		::System::Boolean get_CanBattleItemMove()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_GET_CANBATTLEITEMMOVE_OFFSET))(nullptr);
		}

		::System::Boolean get_IgnoreObstacle()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_GET_IGNOREOBSTACLE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsAirUnit()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_GET_ISAIRUNIT_OFFSET))(nullptr);
		}

		::System::Int64 get_AirUnitHeight()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_GET_AIRUNITHEIGHT_OFFSET))(nullptr);
		}

		::FlatData::Tag* Tags(::System::Int32 arg)
		{
			return (return (::FlatData::Tag*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_TAGS_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_TagsLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_GET_TAGSLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetTagsBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_GETTAGSBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_SecretStoneItemId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_GET_SECRETSTONEITEMID_OFFSET))(nullptr);
		}

		::System::Int32 get_SecretStoneItemAmount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_GET_SECRETSTONEITEMAMOUNT_OFFSET))(nullptr);
		}

		::System::Int64 get_CharacterPieceItemId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_GET_CHARACTERPIECEITEMID_OFFSET))(nullptr);
		}

		::System::Int32 get_CharacterPieceItemAmount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_GET_CHARACTERPIECEITEMAMOUNT_OFFSET))(nullptr);
		}

		::System::Int64 get_CombineRecipeId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_GET_COMBINERECIPEID_OFFSET))(nullptr);
		}

		Il2CppObject* CreateCharacterExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::System::Int64 arg, ::System::Boolean arg, ::FlatData::ProductionStep* arg, ::System::Boolean arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::System::Boolean arg, ::System::UInt32 arg, ::FlatData::Rarity* arg, ::System::Boolean arg, ::FlatData::TacticEntityType* arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Int32 arg, ::FlatData::TacticRole* arg, ::FlatData::WeaponType* arg, ::FlatData::TacticRange* arg, ::FlatData::BulletType* arg, ::FlatData::ArmorType* arg, ::FlatData::AimIKType* arg, ::FlatData::School* arg, ::FlatData::Club* arg, ::System::Int32 arg, ::System::Int32 arg, ::FlatData::StatLevelUpType* arg, ::FlatData::SquadType* arg, ::System::Boolean arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int32 arg, ::System::Boolean arg, ::FlatBuffers::StringOffset* arg, ::System::UInt32 arg, ::System::Int32 arg, ::FlatBuffers::VectorOffset* arg, ::System::UInt32 arg, ::System::Boolean arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Single arg, ::System::Boolean arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Int64 arg, ::FlatBuffers::VectorOffset* arg, ::System::Int64 arg, ::System::Int32 arg, ::System::Int64 arg, ::System::Int32 arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatBuffers::StringOffset*, ::System::Int64, ::System::Boolean, ::FlatData::ProductionStep*, ::System::Boolean, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::System::Boolean, ::System::UInt32, ::FlatData::Rarity*, ::System::Boolean, ::FlatData::TacticEntityType*, ::System::Boolean, ::System::Boolean, ::System::Int32, ::FlatData::TacticRole*, ::FlatData::WeaponType*, ::FlatData::TacticRange*, ::FlatData::BulletType*, ::FlatData::ArmorType*, ::FlatData::AimIKType*, ::FlatData::School*, ::FlatData::Club*, ::System::Int32, ::System::Int32, ::FlatData::StatLevelUpType*, ::FlatData::SquadType*, ::System::Boolean, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int32, ::System::Boolean, ::FlatBuffers::StringOffset*, ::System::UInt32, ::System::Int32, ::FlatBuffers::VectorOffset*, ::System::UInt32, ::System::Boolean, ::System::Int64, ::System::Int64, ::System::Single, ::System::Boolean, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Int64, ::FlatBuffers::VectorOffset*, ::System::Int64, ::System::Int32, ::System::Int64, ::System::Int32, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_CREATECHARACTEREXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartCharacterExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_STARTCHARACTEREXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDevName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_ADDDEVNAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCostumeGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_ADDCOSTUMEGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIsPlayable(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_ADDISPLAYABLE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddProductionStep(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ProductionStep* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ProductionStep*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_ADDPRODUCTIONSTEP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCollectionVisible(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_ADDCOLLECTIONVISIBLE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddReleaseDate(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_ADDRELEASEDATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCollectionVisibleStartDate(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_ADDCOLLECTIONVISIBLESTARTDATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCollectionVisibleEndDate(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_ADDCOLLECTIONVISIBLEENDDATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIsPlayableCharacter(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_ADDISPLAYABLECHARACTER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLocalizeEtcId(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_ADDLOCALIZEETCID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRarity(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::Rarity* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::Rarity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_ADDRARITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIsNPC(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_ADDISNPC_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTacticEntityType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::TacticEntityType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::TacticEntityType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_ADDTACTICENTITYTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCanSurvive(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_ADDCANSURVIVE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIsDummy(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_ADDISDUMMY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSubPartsCount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_ADDSUBPARTSCOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTacticRole(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::TacticRole* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::TacticRole*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_ADDTACTICROLE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddWeaponType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::WeaponType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::WeaponType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_ADDWEAPONTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTacticRange(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::TacticRange* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::TacticRange*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_ADDTACTICRANGE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBulletType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::BulletType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::BulletType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_ADDBULLETTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddArmorType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ArmorType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ArmorType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_ADDARMORTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddAimIKType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::AimIKType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::AimIKType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_ADDAIMIKTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSchool(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::School* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::School*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_ADDSCHOOL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddClub(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::Club* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::Club*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_ADDCLUB_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDefaultStarGrade(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_ADDDEFAULTSTARGRADE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMaxStarGrade(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_ADDMAXSTARGRADE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStatLevelUpType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::StatLevelUpType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::StatLevelUpType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_ADDSTATLEVELUPTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSquadType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::SquadType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::SquadType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_ADDSQUADTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddJumpable(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_ADDJUMPABLE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPersonalityId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_ADDPERSONALITYID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCharacterAIId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_ADDCHARACTERAIID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddExternalBTId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_ADDEXTERNALBTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMainCombatStyleId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_ADDMAINCOMBATSTYLEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCombatStyleIndex(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_ADDCOMBATSTYLEINDEX_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddUseRepStyleOnCharacterGrowth(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_ADDUSEREPSTYLEONCHARACTERGROWTH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddScenarioCharacter(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_ADDSCENARIOCHARACTER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSpawnTemplateId(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_ADDSPAWNTEMPLATEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddFavorLevelupType(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_ADDFAVORLEVELUPTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEquipmentSlot(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_ADDEQUIPMENTSLOT_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateEquipmentSlotVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_CREATEEQUIPMENTSLOTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartEquipmentSlotVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_STARTEQUIPMENTSLOTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddWeaponLocalizeId(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_ADDWEAPONLOCALIZEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDisplayEnemyInfo(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_ADDDISPLAYENEMYINFO_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBodyRadius(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_ADDBODYRADIUS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRandomEffectRadius(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_ADDRANDOMEFFECTRADIUS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTargetGuideScale(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_ADDTARGETGUIDESCALE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddHPBarHide(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_ADDHPBARHIDE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddHpBarHeight(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_ADDHPBARHEIGHT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddHighlightFloaterHeight(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_ADDHIGHLIGHTFLOATERHEIGHT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEmojiOffsetX(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_ADDEMOJIOFFSETX_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEmojiOffsetY(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_ADDEMOJIOFFSETY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMoveStartFrame(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_ADDMOVESTARTFRAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMoveEndFrame(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_ADDMOVEENDFRAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddJumpMotionFrame(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_ADDJUMPMOTIONFRAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddAppearFrame(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_ADDAPPEARFRAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCanMove(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_ADDCANMOVE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCanFix(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_ADDCANFIX_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCanCrowdControl(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_ADDCANCROWDCONTROL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCanBattleItemMove(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_ADDCANBATTLEITEMMOVE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIgnoreObstacle(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_ADDIGNOREOBSTACLE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIsAirUnit(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_ADDISAIRUNIT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddAirUnitHeight(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_ADDAIRUNITHEIGHT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTags(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_ADDTAGS_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateTagsVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_CREATETAGSVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartTagsVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_STARTTAGSVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSecretStoneItemId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_ADDSECRETSTONEITEMID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSecretStoneItemAmount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_ADDSECRETSTONEITEMAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCharacterPieceItemId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_ADDCHARACTERPIECEITEMID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCharacterPieceItemAmount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_ADDCHARACTERPIECEITEMAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCombineRecipeId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_ADDCOMBINERECIPEID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndCharacterExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_ENDCHARACTEREXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishCharacterExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_FINISHCHARACTEREXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedCharacterExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCEL_FINISHSIZEPREFIXEDCHARACTEREXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

