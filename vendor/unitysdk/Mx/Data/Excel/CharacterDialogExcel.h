#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class CharacterDialogExcel; }
namespace FlatData { class ProductionStep; }
namespace FlatData { class DialogCategory; }
namespace FlatData { class DialogCondition; }
namespace FlatData { class Anniversary; }
namespace FlatData { class DialogType; }
namespace FlatData { class CVCollectionType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1A1D1B0)
#define MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_GETROOTASCHARACTERDIALOGEXCEL_OFFSET UNITYSDK_OFFSET(0x1A1D1C0)
#define MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_GETROOTASCHARACTERDIALOGEXCEL_OFFSET UNITYSDK_OFFSET(0x1A1D220)
#define MX_DATA_EXCEL_CHARACTERDIALOGEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1A1D2B0)
#define MX_DATA_EXCEL_CHARACTERDIALOGEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1A1D280)
#define MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_GET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x1A1D2D0)
#define MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_GET_COSTUMEUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1A1D320)
#define MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_GET_DISPLAYORDER_OFFSET UNITYSDK_OFFSET(0x1A1D370)
#define MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_GET_PRODUCTIONSTEP_OFFSET UNITYSDK_OFFSET(0x1A1D3C0)
#define MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_GET_DIALOGCATEGORY_OFFSET UNITYSDK_OFFSET(0x1A1D410)
#define MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_GET_DIALOGCONDITION_OFFSET UNITYSDK_OFFSET(0x1A1D460)
#define MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_GET_ANNIVERSARY_OFFSET UNITYSDK_OFFSET(0x1A1D4B0)
#define MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_GET_STARTDATE_OFFSET UNITYSDK_OFFSET(0x1A1D500)
#define MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_GETSTARTDATEBYTES_OFFSET UNITYSDK_OFFSET(0x1A1D540)
#define MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_GET_ENDDATE_OFFSET UNITYSDK_OFFSET(0x1A1D560)
#define MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_GETENDDATEBYTES_OFFSET UNITYSDK_OFFSET(0x1A1D5A0)
#define MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1A1D5C0)
#define MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_GET_DIALOGTYPE_OFFSET UNITYSDK_OFFSET(0x1A1D610)
#define MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_GET_ACTIONNAME_OFFSET UNITYSDK_OFFSET(0x1A1D660)
#define MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_GETACTIONNAMEBYTES_OFFSET UNITYSDK_OFFSET(0x1A1D6A0)
#define MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x1A1D6C0)
#define MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_GET_DURATIONKR_OFFSET UNITYSDK_OFFSET(0x1A1D710)
#define MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_GET_ANIMATIONNAME_OFFSET UNITYSDK_OFFSET(0x1A1D760)
#define MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_GETANIMATIONNAMEBYTES_OFFSET UNITYSDK_OFFSET(0x1A1D7A0)
#define MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_GET_LOCALIZEKR_OFFSET UNITYSDK_OFFSET(0x1A1D7C0)
#define MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_GETLOCALIZEKRBYTES_OFFSET UNITYSDK_OFFSET(0x1A1D800)
#define MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_GET_LOCALIZEJP_OFFSET UNITYSDK_OFFSET(0x1A1D820)
#define MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_GETLOCALIZEJPBYTES_OFFSET UNITYSDK_OFFSET(0x1A1D860)
#define MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_GET_LOCALIZETH_OFFSET UNITYSDK_OFFSET(0x1A1D880)
#define MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_GETLOCALIZETHBYTES_OFFSET UNITYSDK_OFFSET(0x1A1D8C0)
#define MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_GET_LOCALIZETW_OFFSET UNITYSDK_OFFSET(0x1A1D8E0)
#define MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_GETLOCALIZETWBYTES_OFFSET UNITYSDK_OFFSET(0x1A1D920)
#define MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_GET_LOCALIZEEN_OFFSET UNITYSDK_OFFSET(0x1A1D940)
#define MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_GETLOCALIZEENBYTES_OFFSET UNITYSDK_OFFSET(0x1A1D980)
#define MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_VOICEID_OFFSET UNITYSDK_OFFSET(0x1A1D9A0)
#define MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_GET_VOICEIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1A1DA00)
#define MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_GETVOICEIDBYTES_OFFSET UNITYSDK_OFFSET(0x1A1DA40)
#define MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_GET_APPLYPOSITION_OFFSET UNITYSDK_OFFSET(0x1A1DA60)
#define MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_GET_POSX_OFFSET UNITYSDK_OFFSET(0x1A1DAB0)
#define MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_GET_POSY_OFFSET UNITYSDK_OFFSET(0x1A1DB00)
#define MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_GET_COLLECTIONVISIBLE_OFFSET UNITYSDK_OFFSET(0x1A1DB50)
#define MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_GET_CVCOLLECTIONTYPE_OFFSET UNITYSDK_OFFSET(0x1A1DBA0)
#define MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_GET_UNLOCKFAVORRANK_OFFSET UNITYSDK_OFFSET(0x1A1DBF0)
#define MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_GET_UNLOCKEQUIPWEAPON_OFFSET UNITYSDK_OFFSET(0x1A1DC40)
#define MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_GET_LOCALIZECVGROUP_OFFSET UNITYSDK_OFFSET(0x1A1DC90)
#define MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_GETLOCALIZECVGROUPBYTES_OFFSET UNITYSDK_OFFSET(0x1A1DCD0)
#define MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_GET_TEENMODE_OFFSET UNITYSDK_OFFSET(0x1A1DCF0)
#define MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_CREATECHARACTERDIALOGEXCEL_OFFSET UNITYSDK_OFFSET(0x1A1DD40)
#define MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_STARTCHARACTERDIALOGEXCEL_OFFSET UNITYSDK_OFFSET(0x1A1E850)
#define MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_ADDCHARACTERID_OFFSET UNITYSDK_OFFSET(0x1A1E380)
#define MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_ADDCOSTUMEUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1A1E350)
#define MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_ADDDISPLAYORDER_OFFSET UNITYSDK_OFFSET(0x1A1E320)
#define MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_ADDPRODUCTIONSTEP_OFFSET UNITYSDK_OFFSET(0x1A1E710)
#define MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_ADDDIALOGCATEGORY_OFFSET UNITYSDK_OFFSET(0x1A1E6E0)
#define MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_ADDDIALOGCONDITION_OFFSET UNITYSDK_OFFSET(0x1A1E6B0)
#define MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_ADDANNIVERSARY_OFFSET UNITYSDK_OFFSET(0x1A1E680)
#define MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_ADDSTARTDATE_OFFSET UNITYSDK_OFFSET(0x1A1E650)
#define MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_ADDENDDATE_OFFSET UNITYSDK_OFFSET(0x1A1E620)
#define MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_ADDGROUPID_OFFSET UNITYSDK_OFFSET(0x1A1E2F0)
#define MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_ADDDIALOGTYPE_OFFSET UNITYSDK_OFFSET(0x1A1E5F0)
#define MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_ADDACTIONNAME_OFFSET UNITYSDK_OFFSET(0x1A1E5C0)
#define MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_ADDDURATION_OFFSET UNITYSDK_OFFSET(0x1A1E2C0)
#define MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_ADDDURATIONKR_OFFSET UNITYSDK_OFFSET(0x1A1E290)
#define MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_ADDANIMATIONNAME_OFFSET UNITYSDK_OFFSET(0x1A1E590)
#define MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_ADDLOCALIZEKR_OFFSET UNITYSDK_OFFSET(0x1A1E560)
#define MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_ADDLOCALIZEJP_OFFSET UNITYSDK_OFFSET(0x1A1E530)
#define MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_ADDLOCALIZETH_OFFSET UNITYSDK_OFFSET(0x1A1E500)
#define MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_ADDLOCALIZETW_OFFSET UNITYSDK_OFFSET(0x1A1E4D0)
#define MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_ADDLOCALIZEEN_OFFSET UNITYSDK_OFFSET(0x1A1E4A0)
#define MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_ADDVOICEID_OFFSET UNITYSDK_OFFSET(0x1A1E470)
#define MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_CREATEVOICEIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1A1E870)
#define MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_STARTVOICEIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1A1E900)
#define MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_ADDAPPLYPOSITION_OFFSET UNITYSDK_OFFSET(0x1A1E7D0)
#define MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_ADDPOSX_OFFSET UNITYSDK_OFFSET(0x1A1E440)
#define MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_ADDPOSY_OFFSET UNITYSDK_OFFSET(0x1A1E410)
#define MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_ADDCOLLECTIONVISIBLE_OFFSET UNITYSDK_OFFSET(0x1A1E7A0)
#define MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_ADDCVCOLLECTIONTYPE_OFFSET UNITYSDK_OFFSET(0x1A1E3E0)
#define MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_ADDUNLOCKFAVORRANK_OFFSET UNITYSDK_OFFSET(0x1A1E260)
#define MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_ADDUNLOCKEQUIPWEAPON_OFFSET UNITYSDK_OFFSET(0x1A1E770)
#define MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_ADDLOCALIZECVGROUP_OFFSET UNITYSDK_OFFSET(0x1A1E3B0)
#define MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_ADDTEENMODE_OFFSET UNITYSDK_OFFSET(0x1A1E740)
#define MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_ENDCHARACTERDIALOGEXCEL_OFFSET UNITYSDK_OFFSET(0x1A1E800)
#define MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_FINISHCHARACTERDIALOGEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A1E940)
#define MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_FINISHSIZEPREFIXEDCHARACTERDIALOGEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A1E960)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int CharacterDialogExcel_TypeDefinitionIndex = 16983;

	class CharacterDialogExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::CharacterDialogExcel* GetRootAsCharacterDialogExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::CharacterDialogExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_GETROOTASCHARACTERDIALOGEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::CharacterDialogExcel* GetRootAsCharacterDialogExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::CharacterDialogExcel* arg)
		{
			return (return (::MX::Data::Excel::CharacterDialogExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::CharacterDialogExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_GETROOTASCHARACTERDIALOGEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::CharacterDialogExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::CharacterDialogExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_CharacterId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_GET_CHARACTERID_OFFSET))(nullptr);
		}

		::System::Int64 get_CostumeUniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_GET_COSTUMEUNIQUEID_OFFSET))(nullptr);
		}

		::System::Int64 get_DisplayOrder()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_GET_DISPLAYORDER_OFFSET))(nullptr);
		}

		::FlatData::ProductionStep* get_ProductionStep()
		{
			return (return (::FlatData::ProductionStep*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_GET_PRODUCTIONSTEP_OFFSET))(nullptr);
		}

		::FlatData::DialogCategory* get_DialogCategory()
		{
			return (return (::FlatData::DialogCategory*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_GET_DIALOGCATEGORY_OFFSET))(nullptr);
		}

		::FlatData::DialogCondition* get_DialogCondition()
		{
			return (return (::FlatData::DialogCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_GET_DIALOGCONDITION_OFFSET))(nullptr);
		}

		::FlatData::Anniversary* get_Anniversary()
		{
			return (return (::FlatData::Anniversary*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_GET_ANNIVERSARY_OFFSET))(nullptr);
		}

		::System::String* get_StartDate()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_GET_STARTDATE_OFFSET))(nullptr);
		}

		Il2CppObject* GetStartDateBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_GETSTARTDATEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_EndDate()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_GET_ENDDATE_OFFSET))(nullptr);
		}

		Il2CppObject* GetEndDateBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_GETENDDATEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_GroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_GET_GROUPID_OFFSET))(nullptr);
		}

		::FlatData::DialogType* get_DialogType()
		{
			return (return (::FlatData::DialogType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_GET_DIALOGTYPE_OFFSET))(nullptr);
		}

		::System::String* get_ActionName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_GET_ACTIONNAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetActionNameBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_GETACTIONNAMEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_Duration()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_GET_DURATION_OFFSET))(nullptr);
		}

		::System::Int64 get_DurationKr()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_GET_DURATIONKR_OFFSET))(nullptr);
		}

		::System::String* get_AnimationName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_GET_ANIMATIONNAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetAnimationNameBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_GETANIMATIONNAMEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_LocalizeKR()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_GET_LOCALIZEKR_OFFSET))(nullptr);
		}

		Il2CppObject* GetLocalizeKRBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_GETLOCALIZEKRBYTES_OFFSET))(nullptr);
		}

		::System::String* get_LocalizeJP()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_GET_LOCALIZEJP_OFFSET))(nullptr);
		}

		Il2CppObject* GetLocalizeJPBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_GETLOCALIZEJPBYTES_OFFSET))(nullptr);
		}

		::System::String* get_LocalizeTH()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_GET_LOCALIZETH_OFFSET))(nullptr);
		}

		Il2CppObject* GetLocalizeTHBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_GETLOCALIZETHBYTES_OFFSET))(nullptr);
		}

		::System::String* get_LocalizeTW()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_GET_LOCALIZETW_OFFSET))(nullptr);
		}

		Il2CppObject* GetLocalizeTWBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_GETLOCALIZETWBYTES_OFFSET))(nullptr);
		}

		::System::String* get_LocalizeEN()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_GET_LOCALIZEEN_OFFSET))(nullptr);
		}

		Il2CppObject* GetLocalizeENBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_GETLOCALIZEENBYTES_OFFSET))(nullptr);
		}

		::System::UInt32 VoiceId(::System::Int32 arg)
		{
			return (return (::System::UInt32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_VOICEID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_VoiceIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_GET_VOICEIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetVoiceIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_GETVOICEIDBYTES_OFFSET))(nullptr);
		}

		::System::Boolean get_ApplyPosition()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_GET_APPLYPOSITION_OFFSET))(nullptr);
		}

		::System::Single get_PosX()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_GET_POSX_OFFSET))(nullptr);
		}

		::System::Single get_PosY()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_GET_POSY_OFFSET))(nullptr);
		}

		::System::Boolean get_CollectionVisible()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_GET_COLLECTIONVISIBLE_OFFSET))(nullptr);
		}

		::FlatData::CVCollectionType* get_CVCollectionType()
		{
			return (return (::FlatData::CVCollectionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_GET_CVCOLLECTIONTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_UnlockFavorRank()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_GET_UNLOCKFAVORRANK_OFFSET))(nullptr);
		}

		::System::Boolean get_UnlockEquipWeapon()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_GET_UNLOCKEQUIPWEAPON_OFFSET))(nullptr);
		}

		::System::String* get_LocalizeCVGroup()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_GET_LOCALIZECVGROUP_OFFSET))(nullptr);
		}

		Il2CppObject* GetLocalizeCVGroupBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_GETLOCALIZECVGROUPBYTES_OFFSET))(nullptr);
		}

		::System::Boolean get_TeenMode()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_GET_TEENMODE_OFFSET))(nullptr);
		}

		Il2CppObject* CreateCharacterDialogExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatData::ProductionStep* arg, ::FlatData::DialogCategory* arg, ::FlatData::DialogCondition* arg, ::FlatData::Anniversary* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::System::Int64 arg, ::FlatData::DialogType* arg, ::FlatBuffers::StringOffset* arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::VectorOffset* arg, ::System::Boolean arg, ::System::Single arg, ::System::Single arg, ::System::Boolean arg, ::FlatData::CVCollectionType* arg, ::System::Int64 arg, ::System::Boolean arg, ::FlatBuffers::StringOffset* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::System::Int64, ::FlatData::ProductionStep*, ::FlatData::DialogCategory*, ::FlatData::DialogCondition*, ::FlatData::Anniversary*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::System::Int64, ::FlatData::DialogType*, ::FlatBuffers::StringOffset*, ::System::Int64, ::System::Int64, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::VectorOffset*, ::System::Boolean, ::System::Single, ::System::Single, ::System::Boolean, ::FlatData::CVCollectionType*, ::System::Int64, ::System::Boolean, ::FlatBuffers::StringOffset*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_CREATECHARACTERDIALOGEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartCharacterDialogExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_STARTCHARACTERDIALOGEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddCharacterId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_ADDCHARACTERID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCostumeUniqueId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_ADDCOSTUMEUNIQUEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDisplayOrder(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_ADDDISPLAYORDER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddProductionStep(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ProductionStep* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ProductionStep*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_ADDPRODUCTIONSTEP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDialogCategory(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::DialogCategory* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::DialogCategory*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_ADDDIALOGCATEGORY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDialogCondition(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::DialogCondition* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::DialogCondition*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_ADDDIALOGCONDITION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddAnniversary(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::Anniversary* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::Anniversary*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_ADDANNIVERSARY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStartDate(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_ADDSTARTDATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEndDate(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_ADDENDDATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_ADDGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDialogType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::DialogType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::DialogType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_ADDDIALOGTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddActionName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_ADDACTIONNAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDuration(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_ADDDURATION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDurationKr(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_ADDDURATIONKR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddAnimationName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_ADDANIMATIONNAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLocalizeKR(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_ADDLOCALIZEKR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLocalizeJP(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_ADDLOCALIZEJP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLocalizeTH(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_ADDLOCALIZETH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLocalizeTW(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_ADDLOCALIZETW_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLocalizeEN(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_ADDLOCALIZEEN_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddVoiceId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_ADDVOICEID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateVoiceIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_CREATEVOICEIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartVoiceIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_STARTVOICEIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddApplyPosition(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_ADDAPPLYPOSITION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPosX(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_ADDPOSX_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPosY(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_ADDPOSY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCollectionVisible(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_ADDCOLLECTIONVISIBLE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCVCollectionType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::CVCollectionType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::CVCollectionType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_ADDCVCOLLECTIONTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddUnlockFavorRank(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_ADDUNLOCKFAVORRANK_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddUnlockEquipWeapon(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_ADDUNLOCKEQUIPWEAPON_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLocalizeCVGroup(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_ADDLOCALIZECVGROUP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTeenMode(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_ADDTEENMODE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndCharacterDialogExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_ENDCHARACTERDIALOGEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishCharacterDialogExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_FINISHCHARACTERDIALOGEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedCharacterDialogExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEXCEL_FINISHSIZEPREFIXEDCHARACTERDIALOGEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

