#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class CharacterDialogBattlePassExcel; }
namespace FlatData { class ProductionStep; }
namespace FlatData { class DialogCategory; }
namespace FlatData { class DialogCondition; }
namespace FlatData { class DialogConditionDetail; }
namespace FlatData { class DialogType; }
namespace FlatData { class CVCollectionType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1A0F830)
#define MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_GETROOTASCHARACTERDIALOGBATTLEPASSEXCEL_OFFSET UNITYSDK_OFFSET(0x1A0F840)
#define MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_GETROOTASCHARACTERDIALOGBATTLEPASSEXCEL_OFFSET UNITYSDK_OFFSET(0x1A0F8A0)
#define MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1A0F930)
#define MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1A0F900)
#define MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_GET_COSTUMEUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1A0F950)
#define MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_GET_ORIGINALCHARACTERID_OFFSET UNITYSDK_OFFSET(0x1A0F9A0)
#define MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_GET_DISPLAYORDER_OFFSET UNITYSDK_OFFSET(0x1A0F9F0)
#define MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_GET_BATTLEPASSID_OFFSET UNITYSDK_OFFSET(0x1A0FA40)
#define MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_GET_PRODUCTIONSTEP_OFFSET UNITYSDK_OFFSET(0x1A0FA90)
#define MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_GET_DIALOGCATEGORY_OFFSET UNITYSDK_OFFSET(0x1A0FAE0)
#define MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_GET_DIALOGCONDITION_OFFSET UNITYSDK_OFFSET(0x1A0FB30)
#define MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_GET_DIALOGCONDITIONDETAIL_OFFSET UNITYSDK_OFFSET(0x1A0FB80)
#define MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_GET_DIALOGCONDITIONDETAILVALUE_OFFSET UNITYSDK_OFFSET(0x1A0FBD0)
#define MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1A0FC20)
#define MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_GET_DIALOGTYPE_OFFSET UNITYSDK_OFFSET(0x1A0FC70)
#define MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x1A0FCC0)
#define MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_GET_DURATIONKR_OFFSET UNITYSDK_OFFSET(0x1A0FD10)
#define MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_GET_ANIMATIONNAME_OFFSET UNITYSDK_OFFSET(0x1A0FD60)
#define MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_GETANIMATIONNAMEBYTES_OFFSET UNITYSDK_OFFSET(0x1A0FDA0)
#define MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_GET_LOCALIZEKR_OFFSET UNITYSDK_OFFSET(0x1A0FDC0)
#define MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_GETLOCALIZEKRBYTES_OFFSET UNITYSDK_OFFSET(0x1A0FE00)
#define MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_GET_LOCALIZEJP_OFFSET UNITYSDK_OFFSET(0x1A0FE20)
#define MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_GETLOCALIZEJPBYTES_OFFSET UNITYSDK_OFFSET(0x1A0FE60)
#define MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_GET_LOCALIZETH_OFFSET UNITYSDK_OFFSET(0x1A0FE80)
#define MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_GETLOCALIZETHBYTES_OFFSET UNITYSDK_OFFSET(0x1A0FEC0)
#define MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_GET_LOCALIZETW_OFFSET UNITYSDK_OFFSET(0x1A0FEE0)
#define MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_GETLOCALIZETWBYTES_OFFSET UNITYSDK_OFFSET(0x1A0FF20)
#define MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_GET_LOCALIZEEN_OFFSET UNITYSDK_OFFSET(0x1A0FF40)
#define MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_GETLOCALIZEENBYTES_OFFSET UNITYSDK_OFFSET(0x1A0FF80)
#define MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_VOICEID_OFFSET UNITYSDK_OFFSET(0x1A0FFA0)
#define MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_GET_VOICEIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1A10000)
#define MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_GETVOICEIDBYTES_OFFSET UNITYSDK_OFFSET(0x1A10040)
#define MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_GET_COLLECTIONVISIBLE_OFFSET UNITYSDK_OFFSET(0x1A10060)
#define MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_GET_CVCOLLECTIONTYPE_OFFSET UNITYSDK_OFFSET(0x1A100B0)
#define MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_GET_UNLOCKBATTLEPASSID_OFFSET UNITYSDK_OFFSET(0x1A10100)
#define MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_GET_LOCALIZECVGROUP_OFFSET UNITYSDK_OFFSET(0x1A10150)
#define MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_GETLOCALIZECVGROUPBYTES_OFFSET UNITYSDK_OFFSET(0x1A10190)
#define MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_GET_TEENMODE_OFFSET UNITYSDK_OFFSET(0x1A101B0)
#define MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_CREATECHARACTERDIALOGBATTLEPASSEXCEL_OFFSET UNITYSDK_OFFSET(0x1A10200)
#define MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_STARTCHARACTERDIALOGBATTLEPASSEXCEL_OFFSET UNITYSDK_OFFSET(0x1A10B40)
#define MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_ADDCOSTUMEUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1A107C0)
#define MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_ADDORIGINALCHARACTERID_OFFSET UNITYSDK_OFFSET(0x1A10790)
#define MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_ADDDISPLAYORDER_OFFSET UNITYSDK_OFFSET(0x1A10760)
#define MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_ADDBATTLEPASSID_OFFSET UNITYSDK_OFFSET(0x1A10730)
#define MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_ADDPRODUCTIONSTEP_OFFSET UNITYSDK_OFFSET(0x1A10A60)
#define MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_ADDDIALOGCATEGORY_OFFSET UNITYSDK_OFFSET(0x1A10A30)
#define MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_ADDDIALOGCONDITION_OFFSET UNITYSDK_OFFSET(0x1A10A00)
#define MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_ADDDIALOGCONDITIONDETAIL_OFFSET UNITYSDK_OFFSET(0x1A109D0)
#define MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_ADDDIALOGCONDITIONDETAILVALUE_OFFSET UNITYSDK_OFFSET(0x1A10700)
#define MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_ADDGROUPID_OFFSET UNITYSDK_OFFSET(0x1A106D0)
#define MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_ADDDIALOGTYPE_OFFSET UNITYSDK_OFFSET(0x1A109A0)
#define MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_ADDDURATION_OFFSET UNITYSDK_OFFSET(0x1A106A0)
#define MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_ADDDURATIONKR_OFFSET UNITYSDK_OFFSET(0x1A10670)
#define MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_ADDANIMATIONNAME_OFFSET UNITYSDK_OFFSET(0x1A10970)
#define MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_ADDLOCALIZEKR_OFFSET UNITYSDK_OFFSET(0x1A10940)
#define MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_ADDLOCALIZEJP_OFFSET UNITYSDK_OFFSET(0x1A10910)
#define MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_ADDLOCALIZETH_OFFSET UNITYSDK_OFFSET(0x1A108E0)
#define MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_ADDLOCALIZETW_OFFSET UNITYSDK_OFFSET(0x1A108B0)
#define MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_ADDLOCALIZEEN_OFFSET UNITYSDK_OFFSET(0x1A10880)
#define MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_ADDVOICEID_OFFSET UNITYSDK_OFFSET(0x1A10850)
#define MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_CREATEVOICEIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1A10B60)
#define MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_STARTVOICEIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1A10BF0)
#define MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_ADDCOLLECTIONVISIBLE_OFFSET UNITYSDK_OFFSET(0x1A10AC0)
#define MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_ADDCVCOLLECTIONTYPE_OFFSET UNITYSDK_OFFSET(0x1A10820)
#define MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_ADDUNLOCKBATTLEPASSID_OFFSET UNITYSDK_OFFSET(0x1A10640)
#define MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_ADDLOCALIZECVGROUP_OFFSET UNITYSDK_OFFSET(0x1A107F0)
#define MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_ADDTEENMODE_OFFSET UNITYSDK_OFFSET(0x1A10A90)
#define MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_ENDCHARACTERDIALOGBATTLEPASSEXCEL_OFFSET UNITYSDK_OFFSET(0x1A10AF0)
#define MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_FINISHCHARACTERDIALOGBATTLEPASSEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A10C30)
#define MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_FINISHSIZEPREFIXEDCHARACTERDIALOGBATTLEPASSEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A10C50)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int CharacterDialogBattlePassExcel_TypeDefinitionIndex = 16941;

	class CharacterDialogBattlePassExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::CharacterDialogBattlePassExcel* GetRootAsCharacterDialogBattlePassExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::CharacterDialogBattlePassExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_GETROOTASCHARACTERDIALOGBATTLEPASSEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::CharacterDialogBattlePassExcel* GetRootAsCharacterDialogBattlePassExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::CharacterDialogBattlePassExcel* arg)
		{
			return (return (::MX::Data::Excel::CharacterDialogBattlePassExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::CharacterDialogBattlePassExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_GETROOTASCHARACTERDIALOGBATTLEPASSEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::CharacterDialogBattlePassExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::CharacterDialogBattlePassExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_CostumeUniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_GET_COSTUMEUNIQUEID_OFFSET))(nullptr);
		}

		::System::Int64 get_OriginalCharacterId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_GET_ORIGINALCHARACTERID_OFFSET))(nullptr);
		}

		::System::Int64 get_DisplayOrder()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_GET_DISPLAYORDER_OFFSET))(nullptr);
		}

		::System::Int64 get_BattlePassID()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_GET_BATTLEPASSID_OFFSET))(nullptr);
		}

		::FlatData::ProductionStep* get_ProductionStep()
		{
			return (return (::FlatData::ProductionStep*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_GET_PRODUCTIONSTEP_OFFSET))(nullptr);
		}

		::FlatData::DialogCategory* get_DialogCategory()
		{
			return (return (::FlatData::DialogCategory*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_GET_DIALOGCATEGORY_OFFSET))(nullptr);
		}

		::FlatData::DialogCondition* get_DialogCondition()
		{
			return (return (::FlatData::DialogCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_GET_DIALOGCONDITION_OFFSET))(nullptr);
		}

		::FlatData::DialogConditionDetail* get_DialogConditionDetail()
		{
			return (return (::FlatData::DialogConditionDetail*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_GET_DIALOGCONDITIONDETAIL_OFFSET))(nullptr);
		}

		::System::Int64 get_DialogConditionDetailValue()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_GET_DIALOGCONDITIONDETAILVALUE_OFFSET))(nullptr);
		}

		::System::Int64 get_GroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_GET_GROUPID_OFFSET))(nullptr);
		}

		::FlatData::DialogType* get_DialogType()
		{
			return (return (::FlatData::DialogType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_GET_DIALOGTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_Duration()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_GET_DURATION_OFFSET))(nullptr);
		}

		::System::Int64 get_DurationKr()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_GET_DURATIONKR_OFFSET))(nullptr);
		}

		::System::String* get_AnimationName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_GET_ANIMATIONNAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetAnimationNameBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_GETANIMATIONNAMEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_LocalizeKR()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_GET_LOCALIZEKR_OFFSET))(nullptr);
		}

		Il2CppObject* GetLocalizeKRBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_GETLOCALIZEKRBYTES_OFFSET))(nullptr);
		}

		::System::String* get_LocalizeJP()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_GET_LOCALIZEJP_OFFSET))(nullptr);
		}

		Il2CppObject* GetLocalizeJPBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_GETLOCALIZEJPBYTES_OFFSET))(nullptr);
		}

		::System::String* get_LocalizeTH()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_GET_LOCALIZETH_OFFSET))(nullptr);
		}

		Il2CppObject* GetLocalizeTHBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_GETLOCALIZETHBYTES_OFFSET))(nullptr);
		}

		::System::String* get_LocalizeTW()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_GET_LOCALIZETW_OFFSET))(nullptr);
		}

		Il2CppObject* GetLocalizeTWBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_GETLOCALIZETWBYTES_OFFSET))(nullptr);
		}

		::System::String* get_LocalizeEN()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_GET_LOCALIZEEN_OFFSET))(nullptr);
		}

		Il2CppObject* GetLocalizeENBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_GETLOCALIZEENBYTES_OFFSET))(nullptr);
		}

		::System::UInt32 VoiceId(::System::Int32 arg)
		{
			return (return (::System::UInt32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_VOICEID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_VoiceIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_GET_VOICEIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetVoiceIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_GETVOICEIDBYTES_OFFSET))(nullptr);
		}

		::System::Boolean get_CollectionVisible()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_GET_COLLECTIONVISIBLE_OFFSET))(nullptr);
		}

		::FlatData::CVCollectionType* get_CVCollectionType()
		{
			return (return (::FlatData::CVCollectionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_GET_CVCOLLECTIONTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_UnlockBattlePassId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_GET_UNLOCKBATTLEPASSID_OFFSET))(nullptr);
		}

		::System::String* get_LocalizeCVGroup()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_GET_LOCALIZECVGROUP_OFFSET))(nullptr);
		}

		Il2CppObject* GetLocalizeCVGroupBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_GETLOCALIZECVGROUPBYTES_OFFSET))(nullptr);
		}

		::System::Boolean get_TeenMode()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_GET_TEENMODE_OFFSET))(nullptr);
		}

		Il2CppObject* CreateCharacterDialogBattlePassExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatData::ProductionStep* arg, ::FlatData::DialogCategory* arg, ::FlatData::DialogCondition* arg, ::FlatData::DialogConditionDetail* arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatData::DialogType* arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::VectorOffset* arg, ::System::Boolean arg, ::FlatData::CVCollectionType* arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::FlatData::ProductionStep*, ::FlatData::DialogCategory*, ::FlatData::DialogCondition*, ::FlatData::DialogConditionDetail*, ::System::Int64, ::System::Int64, ::FlatData::DialogType*, ::System::Int64, ::System::Int64, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::VectorOffset*, ::System::Boolean, ::FlatData::CVCollectionType*, ::System::Int64, ::FlatBuffers::StringOffset*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_CREATECHARACTERDIALOGBATTLEPASSEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartCharacterDialogBattlePassExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_STARTCHARACTERDIALOGBATTLEPASSEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddCostumeUniqueId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_ADDCOSTUMEUNIQUEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddOriginalCharacterId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_ADDORIGINALCHARACTERID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDisplayOrder(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_ADDDISPLAYORDER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBattlePassID(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_ADDBATTLEPASSID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddProductionStep(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ProductionStep* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ProductionStep*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_ADDPRODUCTIONSTEP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDialogCategory(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::DialogCategory* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::DialogCategory*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_ADDDIALOGCATEGORY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDialogCondition(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::DialogCondition* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::DialogCondition*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_ADDDIALOGCONDITION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDialogConditionDetail(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::DialogConditionDetail* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::DialogConditionDetail*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_ADDDIALOGCONDITIONDETAIL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDialogConditionDetailValue(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_ADDDIALOGCONDITIONDETAILVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_ADDGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDialogType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::DialogType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::DialogType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_ADDDIALOGTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDuration(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_ADDDURATION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDurationKr(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_ADDDURATIONKR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddAnimationName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_ADDANIMATIONNAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLocalizeKR(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_ADDLOCALIZEKR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLocalizeJP(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_ADDLOCALIZEJP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLocalizeTH(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_ADDLOCALIZETH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLocalizeTW(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_ADDLOCALIZETW_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLocalizeEN(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_ADDLOCALIZEEN_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddVoiceId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_ADDVOICEID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateVoiceIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_CREATEVOICEIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartVoiceIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_STARTVOICEIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCollectionVisible(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_ADDCOLLECTIONVISIBLE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCVCollectionType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::CVCollectionType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::CVCollectionType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_ADDCVCOLLECTIONTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddUnlockBattlePassId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_ADDUNLOCKBATTLEPASSID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLocalizeCVGroup(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_ADDLOCALIZECVGROUP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTeenMode(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_ADDTEENMODE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndCharacterDialogBattlePassExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_ENDCHARACTERDIALOGBATTLEPASSEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishCharacterDialogBattlePassExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_FINISHCHARACTERDIALOGBATTLEPASSEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedCharacterDialogBattlePassExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCEL_FINISHSIZEPREFIXEDCHARACTERDIALOGBATTLEPASSEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

