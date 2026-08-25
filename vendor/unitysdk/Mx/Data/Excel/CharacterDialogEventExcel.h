#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class CharacterDialogEventExcel; }
namespace FlatData { class ProductionStep; }
namespace FlatData { class DialogCategory; }
namespace FlatData { class DialogCondition; }
namespace FlatData { class DialogConditionDetail; }
namespace FlatData { class DialogType; }
namespace FlatData { class CVCollectionType; }
namespace FlatData { class CVUnlockScenarioType; }
namespace FlatData { class ScenarioCharacterShapes; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1A178C0)
#define MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_GETROOTASCHARACTERDIALOGEVENTEXCEL_OFFSET UNITYSDK_OFFSET(0x1A178D0)
#define MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_GETROOTASCHARACTERDIALOGEVENTEXCEL_OFFSET UNITYSDK_OFFSET(0x1A17930)
#define MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1A179C0)
#define MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1A17990)
#define MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_GET_COSTUMEUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1A179E0)
#define MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_GET_ORIGINALCHARACTERID_OFFSET UNITYSDK_OFFSET(0x1A17A30)
#define MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_GET_DISPLAYORDER_OFFSET UNITYSDK_OFFSET(0x1A17A80)
#define MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_GET_EVENTID_OFFSET UNITYSDK_OFFSET(0x1A17AD0)
#define MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_GET_PRODUCTIONSTEP_OFFSET UNITYSDK_OFFSET(0x1A17B20)
#define MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_GET_DIALOGCATEGORY_OFFSET UNITYSDK_OFFSET(0x1A17B70)
#define MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_GET_DIALOGCONDITION_OFFSET UNITYSDK_OFFSET(0x1A17BC0)
#define MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_GET_DIALOGCONDITIONDETAIL_OFFSET UNITYSDK_OFFSET(0x1A17C10)
#define MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_GET_DIALOGCONDITIONDETAILVALUE_OFFSET UNITYSDK_OFFSET(0x1A17C60)
#define MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1A17CB0)
#define MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_GET_DIALOGTYPE_OFFSET UNITYSDK_OFFSET(0x1A17D00)
#define MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_GET_ACTIONNAME_OFFSET UNITYSDK_OFFSET(0x1A17D50)
#define MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_GETACTIONNAMEBYTES_OFFSET UNITYSDK_OFFSET(0x1A17D90)
#define MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x1A17DB0)
#define MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_GET_DURATIONKR_OFFSET UNITYSDK_OFFSET(0x1A17E00)
#define MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_GET_ANIMATIONNAME_OFFSET UNITYSDK_OFFSET(0x1A17E50)
#define MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_GETANIMATIONNAMEBYTES_OFFSET UNITYSDK_OFFSET(0x1A17E90)
#define MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_GET_LOCALIZEKR_OFFSET UNITYSDK_OFFSET(0x1A17EB0)
#define MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_GETLOCALIZEKRBYTES_OFFSET UNITYSDK_OFFSET(0x1A17EF0)
#define MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_GET_LOCALIZEJP_OFFSET UNITYSDK_OFFSET(0x1A17F10)
#define MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_GETLOCALIZEJPBYTES_OFFSET UNITYSDK_OFFSET(0x1A17F50)
#define MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_GET_LOCALIZETH_OFFSET UNITYSDK_OFFSET(0x1A17F70)
#define MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_GETLOCALIZETHBYTES_OFFSET UNITYSDK_OFFSET(0x1A17FB0)
#define MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_GET_LOCALIZETW_OFFSET UNITYSDK_OFFSET(0x1A17FD0)
#define MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_GETLOCALIZETWBYTES_OFFSET UNITYSDK_OFFSET(0x1A18010)
#define MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_GET_LOCALIZEEN_OFFSET UNITYSDK_OFFSET(0x1A18030)
#define MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_GETLOCALIZEENBYTES_OFFSET UNITYSDK_OFFSET(0x1A18070)
#define MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_VOICEID_OFFSET UNITYSDK_OFFSET(0x1A18090)
#define MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_GET_VOICEIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1A180F0)
#define MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_GETVOICEIDBYTES_OFFSET UNITYSDK_OFFSET(0x1A18130)
#define MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_GET_COLLECTIONVISIBLE_OFFSET UNITYSDK_OFFSET(0x1A18150)
#define MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_GET_CVCOLLECTIONTYPE_OFFSET UNITYSDK_OFFSET(0x1A181A0)
#define MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_GET_CVUNLOCKSCENARIOTYPE_OFFSET UNITYSDK_OFFSET(0x1A181F0)
#define MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_GET_UNLOCKEVENTSEASON_OFFSET UNITYSDK_OFFSET(0x1A18240)
#define MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_GET_SCENARIOGROUPID_OFFSET UNITYSDK_OFFSET(0x1A18290)
#define MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_GET_LOCALIZECVGROUP_OFFSET UNITYSDK_OFFSET(0x1A182E0)
#define MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_GETLOCALIZECVGROUPBYTES_OFFSET UNITYSDK_OFFSET(0x1A18320)
#define MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_GET_SCENARIOCHARACTERSHAPES_OFFSET UNITYSDK_OFFSET(0x1A18340)
#define MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_CREATECHARACTERDIALOGEVENTEXCEL_OFFSET UNITYSDK_OFFSET(0x1A18390)
#define MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_STARTCHARACTERDIALOGEVENTEXCEL_OFFSET UNITYSDK_OFFSET(0x1A18DE0)
#define MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_ADDCOSTUMEUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1A18A00)
#define MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_ADDORIGINALCHARACTERID_OFFSET UNITYSDK_OFFSET(0x1A189D0)
#define MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_ADDDISPLAYORDER_OFFSET UNITYSDK_OFFSET(0x1A189A0)
#define MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_ADDEVENTID_OFFSET UNITYSDK_OFFSET(0x1A18970)
#define MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_ADDPRODUCTIONSTEP_OFFSET UNITYSDK_OFFSET(0x1A18D30)
#define MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_ADDDIALOGCATEGORY_OFFSET UNITYSDK_OFFSET(0x1A18D00)
#define MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_ADDDIALOGCONDITION_OFFSET UNITYSDK_OFFSET(0x1A18CD0)
#define MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_ADDDIALOGCONDITIONDETAIL_OFFSET UNITYSDK_OFFSET(0x1A18CA0)
#define MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_ADDDIALOGCONDITIONDETAILVALUE_OFFSET UNITYSDK_OFFSET(0x1A18940)
#define MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_ADDGROUPID_OFFSET UNITYSDK_OFFSET(0x1A18910)
#define MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_ADDDIALOGTYPE_OFFSET UNITYSDK_OFFSET(0x1A18C70)
#define MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_ADDACTIONNAME_OFFSET UNITYSDK_OFFSET(0x1A18C40)
#define MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_ADDDURATION_OFFSET UNITYSDK_OFFSET(0x1A188E0)
#define MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_ADDDURATIONKR_OFFSET UNITYSDK_OFFSET(0x1A188B0)
#define MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_ADDANIMATIONNAME_OFFSET UNITYSDK_OFFSET(0x1A18C10)
#define MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_ADDLOCALIZEKR_OFFSET UNITYSDK_OFFSET(0x1A18BE0)
#define MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_ADDLOCALIZEJP_OFFSET UNITYSDK_OFFSET(0x1A18BB0)
#define MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_ADDLOCALIZETH_OFFSET UNITYSDK_OFFSET(0x1A18B80)
#define MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_ADDLOCALIZETW_OFFSET UNITYSDK_OFFSET(0x1A18B50)
#define MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_ADDLOCALIZEEN_OFFSET UNITYSDK_OFFSET(0x1A18B20)
#define MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_ADDVOICEID_OFFSET UNITYSDK_OFFSET(0x1A18AF0)
#define MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_CREATEVOICEIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1A18E00)
#define MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_STARTVOICEIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1A18E90)
#define MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_ADDCOLLECTIONVISIBLE_OFFSET UNITYSDK_OFFSET(0x1A18D60)
#define MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_ADDCVCOLLECTIONTYPE_OFFSET UNITYSDK_OFFSET(0x1A18AC0)
#define MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_ADDCVUNLOCKSCENARIOTYPE_OFFSET UNITYSDK_OFFSET(0x1A18A90)
#define MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_ADDUNLOCKEVENTSEASON_OFFSET UNITYSDK_OFFSET(0x1A18880)
#define MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_ADDSCENARIOGROUPID_OFFSET UNITYSDK_OFFSET(0x1A18850)
#define MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_ADDLOCALIZECVGROUP_OFFSET UNITYSDK_OFFSET(0x1A18A60)
#define MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_ADDSCENARIOCHARACTERSHAPES_OFFSET UNITYSDK_OFFSET(0x1A18A30)
#define MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_ENDCHARACTERDIALOGEVENTEXCEL_OFFSET UNITYSDK_OFFSET(0x1A18D90)
#define MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_FINISHCHARACTERDIALOGEVENTEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A18ED0)
#define MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_FINISHSIZEPREFIXEDCHARACTERDIALOGEVENTEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A18EF0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int CharacterDialogEventExcel_TypeDefinitionIndex = 16967;

	class CharacterDialogEventExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::CharacterDialogEventExcel* GetRootAsCharacterDialogEventExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::CharacterDialogEventExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_GETROOTASCHARACTERDIALOGEVENTEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::CharacterDialogEventExcel* GetRootAsCharacterDialogEventExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::CharacterDialogEventExcel* arg)
		{
			return (return (::MX::Data::Excel::CharacterDialogEventExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::CharacterDialogEventExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_GETROOTASCHARACTERDIALOGEVENTEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::CharacterDialogEventExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::CharacterDialogEventExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_CostumeUniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_GET_COSTUMEUNIQUEID_OFFSET))(nullptr);
		}

		::System::Int64 get_OriginalCharacterId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_GET_ORIGINALCHARACTERID_OFFSET))(nullptr);
		}

		::System::Int64 get_DisplayOrder()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_GET_DISPLAYORDER_OFFSET))(nullptr);
		}

		::System::Int64 get_EventID()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_GET_EVENTID_OFFSET))(nullptr);
		}

		::FlatData::ProductionStep* get_ProductionStep()
		{
			return (return (::FlatData::ProductionStep*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_GET_PRODUCTIONSTEP_OFFSET))(nullptr);
		}

		::FlatData::DialogCategory* get_DialogCategory()
		{
			return (return (::FlatData::DialogCategory*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_GET_DIALOGCATEGORY_OFFSET))(nullptr);
		}

		::FlatData::DialogCondition* get_DialogCondition()
		{
			return (return (::FlatData::DialogCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_GET_DIALOGCONDITION_OFFSET))(nullptr);
		}

		::FlatData::DialogConditionDetail* get_DialogConditionDetail()
		{
			return (return (::FlatData::DialogConditionDetail*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_GET_DIALOGCONDITIONDETAIL_OFFSET))(nullptr);
		}

		::System::Int64 get_DialogConditionDetailValue()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_GET_DIALOGCONDITIONDETAILVALUE_OFFSET))(nullptr);
		}

		::System::Int64 get_GroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_GET_GROUPID_OFFSET))(nullptr);
		}

		::FlatData::DialogType* get_DialogType()
		{
			return (return (::FlatData::DialogType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_GET_DIALOGTYPE_OFFSET))(nullptr);
		}

		::System::String* get_ActionName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_GET_ACTIONNAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetActionNameBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_GETACTIONNAMEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_Duration()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_GET_DURATION_OFFSET))(nullptr);
		}

		::System::Int64 get_DurationKr()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_GET_DURATIONKR_OFFSET))(nullptr);
		}

		::System::String* get_AnimationName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_GET_ANIMATIONNAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetAnimationNameBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_GETANIMATIONNAMEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_LocalizeKR()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_GET_LOCALIZEKR_OFFSET))(nullptr);
		}

		Il2CppObject* GetLocalizeKRBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_GETLOCALIZEKRBYTES_OFFSET))(nullptr);
		}

		::System::String* get_LocalizeJP()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_GET_LOCALIZEJP_OFFSET))(nullptr);
		}

		Il2CppObject* GetLocalizeJPBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_GETLOCALIZEJPBYTES_OFFSET))(nullptr);
		}

		::System::String* get_LocalizeTH()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_GET_LOCALIZETH_OFFSET))(nullptr);
		}

		Il2CppObject* GetLocalizeTHBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_GETLOCALIZETHBYTES_OFFSET))(nullptr);
		}

		::System::String* get_LocalizeTW()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_GET_LOCALIZETW_OFFSET))(nullptr);
		}

		Il2CppObject* GetLocalizeTWBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_GETLOCALIZETWBYTES_OFFSET))(nullptr);
		}

		::System::String* get_LocalizeEN()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_GET_LOCALIZEEN_OFFSET))(nullptr);
		}

		Il2CppObject* GetLocalizeENBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_GETLOCALIZEENBYTES_OFFSET))(nullptr);
		}

		::System::UInt32 VoiceId(::System::Int32 arg)
		{
			return (return (::System::UInt32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_VOICEID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_VoiceIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_GET_VOICEIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetVoiceIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_GETVOICEIDBYTES_OFFSET))(nullptr);
		}

		::System::Boolean get_CollectionVisible()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_GET_COLLECTIONVISIBLE_OFFSET))(nullptr);
		}

		::FlatData::CVCollectionType* get_CVCollectionType()
		{
			return (return (::FlatData::CVCollectionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_GET_CVCOLLECTIONTYPE_OFFSET))(nullptr);
		}

		::FlatData::CVUnlockScenarioType* get_CVUnlockScenarioType()
		{
			return (return (::FlatData::CVUnlockScenarioType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_GET_CVUNLOCKSCENARIOTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_UnlockEventSeason()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_GET_UNLOCKEVENTSEASON_OFFSET))(nullptr);
		}

		::System::Int64 get_ScenarioGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_GET_SCENARIOGROUPID_OFFSET))(nullptr);
		}

		::System::String* get_LocalizeCVGroup()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_GET_LOCALIZECVGROUP_OFFSET))(nullptr);
		}

		Il2CppObject* GetLocalizeCVGroupBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_GETLOCALIZECVGROUPBYTES_OFFSET))(nullptr);
		}

		::FlatData::ScenarioCharacterShapes* get_ScenarioCharacterShapes()
		{
			return (return (::FlatData::ScenarioCharacterShapes*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_GET_SCENARIOCHARACTERSHAPES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateCharacterDialogEventExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatData::ProductionStep* arg, ::FlatData::DialogCategory* arg, ::FlatData::DialogCondition* arg, ::FlatData::DialogConditionDetail* arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatData::DialogType* arg, ::FlatBuffers::StringOffset* arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::VectorOffset* arg, ::System::Boolean arg, ::FlatData::CVCollectionType* arg, ::FlatData::CVUnlockScenarioType* arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::FlatData::ScenarioCharacterShapes* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::FlatData::ProductionStep*, ::FlatData::DialogCategory*, ::FlatData::DialogCondition*, ::FlatData::DialogConditionDetail*, ::System::Int64, ::System::Int64, ::FlatData::DialogType*, ::FlatBuffers::StringOffset*, ::System::Int64, ::System::Int64, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::VectorOffset*, ::System::Boolean, ::FlatData::CVCollectionType*, ::FlatData::CVUnlockScenarioType*, ::System::Int64, ::System::Int64, ::FlatBuffers::StringOffset*, ::FlatData::ScenarioCharacterShapes*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_CREATECHARACTERDIALOGEVENTEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartCharacterDialogEventExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_STARTCHARACTERDIALOGEVENTEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddCostumeUniqueId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_ADDCOSTUMEUNIQUEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddOriginalCharacterId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_ADDORIGINALCHARACTERID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDisplayOrder(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_ADDDISPLAYORDER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEventID(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_ADDEVENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddProductionStep(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ProductionStep* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ProductionStep*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_ADDPRODUCTIONSTEP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDialogCategory(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::DialogCategory* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::DialogCategory*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_ADDDIALOGCATEGORY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDialogCondition(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::DialogCondition* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::DialogCondition*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_ADDDIALOGCONDITION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDialogConditionDetail(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::DialogConditionDetail* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::DialogConditionDetail*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_ADDDIALOGCONDITIONDETAIL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDialogConditionDetailValue(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_ADDDIALOGCONDITIONDETAILVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_ADDGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDialogType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::DialogType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::DialogType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_ADDDIALOGTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddActionName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_ADDACTIONNAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDuration(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_ADDDURATION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDurationKr(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_ADDDURATIONKR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddAnimationName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_ADDANIMATIONNAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLocalizeKR(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_ADDLOCALIZEKR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLocalizeJP(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_ADDLOCALIZEJP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLocalizeTH(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_ADDLOCALIZETH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLocalizeTW(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_ADDLOCALIZETW_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLocalizeEN(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_ADDLOCALIZEEN_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddVoiceId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_ADDVOICEID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateVoiceIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_CREATEVOICEIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartVoiceIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_STARTVOICEIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCollectionVisible(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_ADDCOLLECTIONVISIBLE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCVCollectionType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::CVCollectionType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::CVCollectionType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_ADDCVCOLLECTIONTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCVUnlockScenarioType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::CVUnlockScenarioType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::CVUnlockScenarioType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_ADDCVUNLOCKSCENARIOTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddUnlockEventSeason(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_ADDUNLOCKEVENTSEASON_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddScenarioGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_ADDSCENARIOGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLocalizeCVGroup(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_ADDLOCALIZECVGROUP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddScenarioCharacterShapes(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ScenarioCharacterShapes* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ScenarioCharacterShapes*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_ADDSCENARIOCHARACTERSHAPES_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndCharacterDialogEventExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_ENDCHARACTERDIALOGEVENTEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishCharacterDialogEventExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_FINISHCHARACTERDIALOGEVENTEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedCharacterDialogEventExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCEL_FINISHSIZEPREFIXEDCHARACTERDIALOGEVENTEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

