#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class CharacterDialogEmojiExcel; }
namespace FlatData { class CVCollectionType; }
namespace FlatData { class CVUnlockScenarioType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1A14DA0)
#define MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_GETROOTASCHARACTERDIALOGEMOJIEXCEL_OFFSET UNITYSDK_OFFSET(0x1A14DB0)
#define MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_GETROOTASCHARACTERDIALOGEMOJIEXCEL_OFFSET UNITYSDK_OFFSET(0x1A14E10)
#define MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1A14EA0)
#define MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1A14E70)
#define MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1A14EC0)
#define MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_GET_TARGETINDEX_OFFSET UNITYSDK_OFFSET(0x1A14F10)
#define MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_GET_DIALOGTYPE_OFFSET UNITYSDK_OFFSET(0x1A14F60)
#define MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_GETDIALOGTYPEBYTES_OFFSET UNITYSDK_OFFSET(0x1A14FA0)
#define MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x1A14FC0)
#define MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_GET_DURATIONKR_OFFSET UNITYSDK_OFFSET(0x1A15010)
#define MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_GET_DURATIONADD_OFFSET UNITYSDK_OFFSET(0x1A15060)
#define MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_GET_HIDEUI_OFFSET UNITYSDK_OFFSET(0x1A150B0)
#define MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_GET_LOCALIZEKR_OFFSET UNITYSDK_OFFSET(0x1A15100)
#define MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_GETLOCALIZEKRBYTES_OFFSET UNITYSDK_OFFSET(0x1A15140)
#define MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_GET_LOCALIZEJP_OFFSET UNITYSDK_OFFSET(0x1A15160)
#define MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_GETLOCALIZEJPBYTES_OFFSET UNITYSDK_OFFSET(0x1A151A0)
#define MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_GET_LOCALIZETH_OFFSET UNITYSDK_OFFSET(0x1A151C0)
#define MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_GETLOCALIZETHBYTES_OFFSET UNITYSDK_OFFSET(0x1A15200)
#define MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_GET_LOCALIZETW_OFFSET UNITYSDK_OFFSET(0x1A15220)
#define MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_GETLOCALIZETWBYTES_OFFSET UNITYSDK_OFFSET(0x1A15260)
#define MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_GET_LOCALIZEEN_OFFSET UNITYSDK_OFFSET(0x1A15280)
#define MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_GETLOCALIZEENBYTES_OFFSET UNITYSDK_OFFSET(0x1A152C0)
#define MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_VOICEID_OFFSET UNITYSDK_OFFSET(0x1A152E0)
#define MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_GET_VOICEIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1A15340)
#define MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_GETVOICEIDBYTES_OFFSET UNITYSDK_OFFSET(0x1A15380)
#define MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_GET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x1A153A0)
#define MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_GET_COSTUMEUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1A153F0)
#define MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_GET_DISPLAYORDER_OFFSET UNITYSDK_OFFSET(0x1A15440)
#define MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_GET_COLLECTIONVISIBLE_OFFSET UNITYSDK_OFFSET(0x1A15490)
#define MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_GET_CVCOLLECTIONTYPE_OFFSET UNITYSDK_OFFSET(0x1A154E0)
#define MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_GET_CVUNLOCKSCENARIOTYPE_OFFSET UNITYSDK_OFFSET(0x1A15530)
#define MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_GET_SCENARIOGROUPID_OFFSET UNITYSDK_OFFSET(0x1A15580)
#define MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_GET_UNLOCKEVENTSEASON_OFFSET UNITYSDK_OFFSET(0x1A155D0)
#define MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_GET_LOCALIZECVGROUP_OFFSET UNITYSDK_OFFSET(0x1A15620)
#define MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_GETLOCALIZECVGROUPBYTES_OFFSET UNITYSDK_OFFSET(0x1A15660)
#define MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_CREATECHARACTERDIALOGEMOJIEXCEL_OFFSET UNITYSDK_OFFSET(0x1A15680)
#define MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_STARTCHARACTERDIALOGEMOJIEXCEL_OFFSET UNITYSDK_OFFSET(0x1A15EB0)
#define MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_ADDGROUPID_OFFSET UNITYSDK_OFFSET(0x1A15BC0)
#define MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_ADDTARGETINDEX_OFFSET UNITYSDK_OFFSET(0x1A15DD0)
#define MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_ADDDIALOGTYPE_OFFSET UNITYSDK_OFFSET(0x1A15DA0)
#define MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_ADDDURATION_OFFSET UNITYSDK_OFFSET(0x1A15B90)
#define MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_ADDDURATIONKR_OFFSET UNITYSDK_OFFSET(0x1A15B60)
#define MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_ADDDURATIONADD_OFFSET UNITYSDK_OFFSET(0x1A15B30)
#define MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_ADDHIDEUI_OFFSET UNITYSDK_OFFSET(0x1A15E30)
#define MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_ADDLOCALIZEKR_OFFSET UNITYSDK_OFFSET(0x1A15D70)
#define MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_ADDLOCALIZEJP_OFFSET UNITYSDK_OFFSET(0x1A15D40)
#define MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_ADDLOCALIZETH_OFFSET UNITYSDK_OFFSET(0x1A15D10)
#define MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_ADDLOCALIZETW_OFFSET UNITYSDK_OFFSET(0x1A15CE0)
#define MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_ADDLOCALIZEEN_OFFSET UNITYSDK_OFFSET(0x1A15CB0)
#define MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_ADDVOICEID_OFFSET UNITYSDK_OFFSET(0x1A15C80)
#define MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_CREATEVOICEIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1A15ED0)
#define MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_STARTVOICEIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1A15F60)
#define MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_ADDCHARACTERID_OFFSET UNITYSDK_OFFSET(0x1A15B00)
#define MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_ADDCOSTUMEUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1A15AD0)
#define MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_ADDDISPLAYORDER_OFFSET UNITYSDK_OFFSET(0x1A15AA0)
#define MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_ADDCOLLECTIONVISIBLE_OFFSET UNITYSDK_OFFSET(0x1A15E00)
#define MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_ADDCVCOLLECTIONTYPE_OFFSET UNITYSDK_OFFSET(0x1A15C50)
#define MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_ADDCVUNLOCKSCENARIOTYPE_OFFSET UNITYSDK_OFFSET(0x1A15C20)
#define MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_ADDSCENARIOGROUPID_OFFSET UNITYSDK_OFFSET(0x1A15A70)
#define MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_ADDUNLOCKEVENTSEASON_OFFSET UNITYSDK_OFFSET(0x1A15A40)
#define MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_ADDLOCALIZECVGROUP_OFFSET UNITYSDK_OFFSET(0x1A15BF0)
#define MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_ENDCHARACTERDIALOGEMOJIEXCEL_OFFSET UNITYSDK_OFFSET(0x1A15E60)
#define MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_FINISHCHARACTERDIALOGEMOJIEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A15FA0)
#define MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_FINISHSIZEPREFIXEDCHARACTERDIALOGEMOJIEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A15FC0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int CharacterDialogEmojiExcel_TypeDefinitionIndex = 16957;

	class CharacterDialogEmojiExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::CharacterDialogEmojiExcel* GetRootAsCharacterDialogEmojiExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::CharacterDialogEmojiExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_GETROOTASCHARACTERDIALOGEMOJIEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::CharacterDialogEmojiExcel* GetRootAsCharacterDialogEmojiExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::CharacterDialogEmojiExcel* arg)
		{
			return (return (::MX::Data::Excel::CharacterDialogEmojiExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::CharacterDialogEmojiExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_GETROOTASCHARACTERDIALOGEMOJIEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::CharacterDialogEmojiExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::CharacterDialogEmojiExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_GroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_GET_GROUPID_OFFSET))(nullptr);
		}

		::System::Int32 get_TargetIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_GET_TARGETINDEX_OFFSET))(nullptr);
		}

		::System::String* get_DialogType()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_GET_DIALOGTYPE_OFFSET))(nullptr);
		}

		Il2CppObject* GetDialogTypeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_GETDIALOGTYPEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_Duration()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_GET_DURATION_OFFSET))(nullptr);
		}

		::System::Int64 get_DurationKr()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_GET_DURATIONKR_OFFSET))(nullptr);
		}

		::System::Int64 get_DurationAdd()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_GET_DURATIONADD_OFFSET))(nullptr);
		}

		::System::Boolean get_HideUI()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_GET_HIDEUI_OFFSET))(nullptr);
		}

		::System::String* get_LocalizeKR()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_GET_LOCALIZEKR_OFFSET))(nullptr);
		}

		Il2CppObject* GetLocalizeKRBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_GETLOCALIZEKRBYTES_OFFSET))(nullptr);
		}

		::System::String* get_LocalizeJP()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_GET_LOCALIZEJP_OFFSET))(nullptr);
		}

		Il2CppObject* GetLocalizeJPBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_GETLOCALIZEJPBYTES_OFFSET))(nullptr);
		}

		::System::String* get_LocalizeTH()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_GET_LOCALIZETH_OFFSET))(nullptr);
		}

		Il2CppObject* GetLocalizeTHBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_GETLOCALIZETHBYTES_OFFSET))(nullptr);
		}

		::System::String* get_LocalizeTW()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_GET_LOCALIZETW_OFFSET))(nullptr);
		}

		Il2CppObject* GetLocalizeTWBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_GETLOCALIZETWBYTES_OFFSET))(nullptr);
		}

		::System::String* get_LocalizeEN()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_GET_LOCALIZEEN_OFFSET))(nullptr);
		}

		Il2CppObject* GetLocalizeENBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_GETLOCALIZEENBYTES_OFFSET))(nullptr);
		}

		::System::UInt32 VoiceId(::System::Int32 arg)
		{
			return (return (::System::UInt32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_VOICEID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_VoiceIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_GET_VOICEIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetVoiceIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_GETVOICEIDBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_CharacterId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_GET_CHARACTERID_OFFSET))(nullptr);
		}

		::System::Int64 get_CostumeUniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_GET_COSTUMEUNIQUEID_OFFSET))(nullptr);
		}

		::System::Int64 get_DisplayOrder()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_GET_DISPLAYORDER_OFFSET))(nullptr);
		}

		::System::Boolean get_CollectionVisible()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_GET_COLLECTIONVISIBLE_OFFSET))(nullptr);
		}

		::FlatData::CVCollectionType* get_CVCollectionType()
		{
			return (return (::FlatData::CVCollectionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_GET_CVCOLLECTIONTYPE_OFFSET))(nullptr);
		}

		::FlatData::CVUnlockScenarioType* get_CVUnlockScenarioType()
		{
			return (return (::FlatData::CVUnlockScenarioType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_GET_CVUNLOCKSCENARIOTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_ScenarioGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_GET_SCENARIOGROUPID_OFFSET))(nullptr);
		}

		::System::Int64 get_UnlockEventSeason()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_GET_UNLOCKEVENTSEASON_OFFSET))(nullptr);
		}

		::System::String* get_LocalizeCVGroup()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_GET_LOCALIZECVGROUP_OFFSET))(nullptr);
		}

		Il2CppObject* GetLocalizeCVGroupBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_GETLOCALIZECVGROUPBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateCharacterDialogEmojiExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int32 arg, ::FlatBuffers::StringOffset* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Boolean arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::VectorOffset* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Boolean arg, ::FlatData::CVCollectionType* arg, ::FlatData::CVUnlockScenarioType* arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int32, ::FlatBuffers::StringOffset*, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Boolean, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::VectorOffset*, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Boolean, ::FlatData::CVCollectionType*, ::FlatData::CVUnlockScenarioType*, ::System::Int64, ::System::Int64, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_CREATECHARACTERDIALOGEMOJIEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartCharacterDialogEmojiExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_STARTCHARACTERDIALOGEMOJIEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_ADDGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTargetIndex(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_ADDTARGETINDEX_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDialogType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_ADDDIALOGTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDuration(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_ADDDURATION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDurationKr(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_ADDDURATIONKR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDurationAdd(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_ADDDURATIONADD_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddHideUI(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_ADDHIDEUI_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLocalizeKR(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_ADDLOCALIZEKR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLocalizeJP(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_ADDLOCALIZEJP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLocalizeTH(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_ADDLOCALIZETH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLocalizeTW(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_ADDLOCALIZETW_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLocalizeEN(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_ADDLOCALIZEEN_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddVoiceId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_ADDVOICEID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateVoiceIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_CREATEVOICEIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartVoiceIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_STARTVOICEIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCharacterId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_ADDCHARACTERID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCostumeUniqueId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_ADDCOSTUMEUNIQUEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDisplayOrder(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_ADDDISPLAYORDER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCollectionVisible(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_ADDCOLLECTIONVISIBLE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCVCollectionType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::CVCollectionType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::CVCollectionType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_ADDCVCOLLECTIONTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCVUnlockScenarioType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::CVUnlockScenarioType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::CVUnlockScenarioType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_ADDCVUNLOCKSCENARIOTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddScenarioGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_ADDSCENARIOGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddUnlockEventSeason(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_ADDUNLOCKEVENTSEASON_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLocalizeCVGroup(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_ADDLOCALIZECVGROUP_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndCharacterDialogEmojiExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_ENDCHARACTERDIALOGEMOJIEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishCharacterDialogEmojiExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_FINISHCHARACTERDIALOGEMOJIEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedCharacterDialogEmojiExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEMOJIEXCEL_FINISHSIZEPREFIXEDCHARACTERDIALOGEMOJIEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

