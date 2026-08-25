#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class MinigameTBGEncounterExcel; }
namespace FlatData { class TBGThemaType; }
namespace FlatData { class TBGObjectType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1C01990)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_GETROOTASMINIGAMETBGENCOUNTEREXCEL_OFFSET UNITYSDK_OFFSET(0x1C019A0)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_GETROOTASMINIGAMETBGENCOUNTEREXCEL_OFFSET UNITYSDK_OFFSET(0x1C01A00)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1C01A90)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1C01A60)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1C01AB0)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1C01B00)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_GET_ALLTHEMA_OFFSET UNITYSDK_OFFSET(0x1C01B50)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_GET_THEMAINDEX_OFFSET UNITYSDK_OFFSET(0x1C01BA0)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_GET_THEMATYPE_OFFSET UNITYSDK_OFFSET(0x1C01BF0)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_GET_OBJECTTYPE_OFFSET UNITYSDK_OFFSET(0x1C01C40)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_GET_ENEMYIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1C01C90)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_GETENEMYIMAGEPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1C01CD0)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_GET_ENEMYPREFABNAME_OFFSET UNITYSDK_OFFSET(0x1C01CF0)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_GETENEMYPREFABNAMEBYTES_OFFSET UNITYSDK_OFFSET(0x1C01D30)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_GET_ENEMYNAMELOCALIZE_OFFSET UNITYSDK_OFFSET(0x1C01D50)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_GETENEMYNAMELOCALIZEBYTES_OFFSET UNITYSDK_OFFSET(0x1C01D90)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_GET_OPTIONGROUPID_OFFSET UNITYSDK_OFFSET(0x1C01DB0)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_GET_REWARDHIDE_OFFSET UNITYSDK_OFFSET(0x1C01E00)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_GET_ENCOUNTERTITLELOCALIZE_OFFSET UNITYSDK_OFFSET(0x1C01E50)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_GETENCOUNTERTITLELOCALIZEBYTES_OFFSET UNITYSDK_OFFSET(0x1C01E90)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_GET_STORYIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1C01EB0)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_GETSTORYIMAGEPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1C01EF0)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_GET_BEFORESTORYLOCALIZE_OFFSET UNITYSDK_OFFSET(0x1C01F10)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_GETBEFORESTORYLOCALIZEBYTES_OFFSET UNITYSDK_OFFSET(0x1C01F50)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_GET_BEFORESTORYOPTION1LOCALIZE_OFFSET UNITYSDK_OFFSET(0x1C01F70)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_GETBEFORESTORYOPTION1LOCALIZEBYTES_OFFSET UNITYSDK_OFFSET(0x1C01FB0)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_GET_BEFORESTORYOPTION2LOCALIZE_OFFSET UNITYSDK_OFFSET(0x1C01FD0)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_GETBEFORESTORYOPTION2LOCALIZEBYTES_OFFSET UNITYSDK_OFFSET(0x1C02010)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_GET_BEFORESTORYOPTION3LOCALIZE_OFFSET UNITYSDK_OFFSET(0x1C02030)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_GETBEFORESTORYOPTION3LOCALIZEBYTES_OFFSET UNITYSDK_OFFSET(0x1C02070)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_GET_ALLYATTACKLOCALIZE_OFFSET UNITYSDK_OFFSET(0x1C02090)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_GETALLYATTACKLOCALIZEBYTES_OFFSET UNITYSDK_OFFSET(0x1C020D0)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_GET_ENEMYATTACKLOCALIZE_OFFSET UNITYSDK_OFFSET(0x1C020F0)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_GETENEMYATTACKLOCALIZEBYTES_OFFSET UNITYSDK_OFFSET(0x1C02130)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_GET_ATTACKDEFENCELOCALIZE_OFFSET UNITYSDK_OFFSET(0x1C02150)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_GETATTACKDEFENCELOCALIZEBYTES_OFFSET UNITYSDK_OFFSET(0x1C02190)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_GET_CLEARSTORYLOCALIZE_OFFSET UNITYSDK_OFFSET(0x1C021B0)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_GETCLEARSTORYLOCALIZEBYTES_OFFSET UNITYSDK_OFFSET(0x1C021F0)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_GET_DEFEATSTORYLOCALIZE_OFFSET UNITYSDK_OFFSET(0x1C02210)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_GETDEFEATSTORYLOCALIZEBYTES_OFFSET UNITYSDK_OFFSET(0x1C02250)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_GET_RUNAWAYSTORYLOCALIZE_OFFSET UNITYSDK_OFFSET(0x1C02270)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_GETRUNAWAYSTORYLOCALIZEBYTES_OFFSET UNITYSDK_OFFSET(0x1C022B0)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_CREATEMINIGAMETBGENCOUNTEREXCEL_OFFSET UNITYSDK_OFFSET(0x1C022D0)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_STARTMINIGAMETBGENCOUNTEREXCEL_OFFSET UNITYSDK_OFFSET(0x1C02B50)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_ADDEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1C02710)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_ADDUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1C026E0)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_ADDALLTHEMA_OFFSET UNITYSDK_OFFSET(0x1C02AD0)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_ADDTHEMAINDEX_OFFSET UNITYSDK_OFFSET(0x1C02A70)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_ADDTHEMATYPE_OFFSET UNITYSDK_OFFSET(0x1C02A40)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_ADDOBJECTTYPE_OFFSET UNITYSDK_OFFSET(0x1C02A10)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_ADDENEMYIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1C029E0)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_ADDENEMYPREFABNAME_OFFSET UNITYSDK_OFFSET(0x1C029B0)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_ADDENEMYNAMELOCALIZE_OFFSET UNITYSDK_OFFSET(0x1C02980)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_ADDOPTIONGROUPID_OFFSET UNITYSDK_OFFSET(0x1C026B0)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_ADDREWARDHIDE_OFFSET UNITYSDK_OFFSET(0x1C02AA0)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_ADDENCOUNTERTITLELOCALIZE_OFFSET UNITYSDK_OFFSET(0x1C02950)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_ADDSTORYIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1C02920)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_ADDBEFORESTORYLOCALIZE_OFFSET UNITYSDK_OFFSET(0x1C028F0)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_ADDBEFORESTORYOPTION1LOCALIZE_OFFSET UNITYSDK_OFFSET(0x1C028C0)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_ADDBEFORESTORYOPTION2LOCALIZE_OFFSET UNITYSDK_OFFSET(0x1C02890)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_ADDBEFORESTORYOPTION3LOCALIZE_OFFSET UNITYSDK_OFFSET(0x1C02860)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_ADDALLYATTACKLOCALIZE_OFFSET UNITYSDK_OFFSET(0x1C02830)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_ADDENEMYATTACKLOCALIZE_OFFSET UNITYSDK_OFFSET(0x1C02800)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_ADDATTACKDEFENCELOCALIZE_OFFSET UNITYSDK_OFFSET(0x1C027D0)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_ADDCLEARSTORYLOCALIZE_OFFSET UNITYSDK_OFFSET(0x1C027A0)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_ADDDEFEATSTORYLOCALIZE_OFFSET UNITYSDK_OFFSET(0x1C02770)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_ADDRUNAWAYSTORYLOCALIZE_OFFSET UNITYSDK_OFFSET(0x1C02740)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_ENDMINIGAMETBGENCOUNTEREXCEL_OFFSET UNITYSDK_OFFSET(0x1C02B00)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_FINISHMINIGAMETBGENCOUNTEREXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C02B70)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_FINISHSIZEPREFIXEDMINIGAMETBGENCOUNTEREXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C02B90)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MinigameTBGEncounterExcel_TypeDefinitionIndex = 18866;

	class MinigameTBGEncounterExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::MinigameTBGEncounterExcel* GetRootAsMinigameTBGEncounterExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MinigameTBGEncounterExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_GETROOTASMINIGAMETBGENCOUNTEREXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::MinigameTBGEncounterExcel* GetRootAsMinigameTBGEncounterExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::MinigameTBGEncounterExcel* arg)
		{
			return (return (::MX::Data::Excel::MinigameTBGEncounterExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::MinigameTBGEncounterExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_GETROOTASMINIGAMETBGENCOUNTEREXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::MinigameTBGEncounterExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MinigameTBGEncounterExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::Boolean get_AllThema()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_GET_ALLTHEMA_OFFSET))(nullptr);
		}

		::System::Int32 get_ThemaIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_GET_THEMAINDEX_OFFSET))(nullptr);
		}

		::FlatData::TBGThemaType* get_ThemaType()
		{
			return (return (::FlatData::TBGThemaType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_GET_THEMATYPE_OFFSET))(nullptr);
		}

		::FlatData::TBGObjectType* get_ObjectType()
		{
			return (return (::FlatData::TBGObjectType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_GET_OBJECTTYPE_OFFSET))(nullptr);
		}

		::System::String* get_EnemyImagePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_GET_ENEMYIMAGEPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetEnemyImagePathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_GETENEMYIMAGEPATHBYTES_OFFSET))(nullptr);
		}

		::System::String* get_EnemyPrefabName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_GET_ENEMYPREFABNAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetEnemyPrefabNameBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_GETENEMYPREFABNAMEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_EnemyNameLocalize()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_GET_ENEMYNAMELOCALIZE_OFFSET))(nullptr);
		}

		Il2CppObject* GetEnemyNameLocalizeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_GETENEMYNAMELOCALIZEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_OptionGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_GET_OPTIONGROUPID_OFFSET))(nullptr);
		}

		::System::Boolean get_RewardHide()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_GET_REWARDHIDE_OFFSET))(nullptr);
		}

		::System::String* get_EncounterTitleLocalize()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_GET_ENCOUNTERTITLELOCALIZE_OFFSET))(nullptr);
		}

		Il2CppObject* GetEncounterTitleLocalizeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_GETENCOUNTERTITLELOCALIZEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_StoryImagePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_GET_STORYIMAGEPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetStoryImagePathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_GETSTORYIMAGEPATHBYTES_OFFSET))(nullptr);
		}

		::System::String* get_BeforeStoryLocalize()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_GET_BEFORESTORYLOCALIZE_OFFSET))(nullptr);
		}

		Il2CppObject* GetBeforeStoryLocalizeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_GETBEFORESTORYLOCALIZEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_BeforeStoryOption1Localize()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_GET_BEFORESTORYOPTION1LOCALIZE_OFFSET))(nullptr);
		}

		Il2CppObject* GetBeforeStoryOption1LocalizeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_GETBEFORESTORYOPTION1LOCALIZEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_BeforeStoryOption2Localize()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_GET_BEFORESTORYOPTION2LOCALIZE_OFFSET))(nullptr);
		}

		Il2CppObject* GetBeforeStoryOption2LocalizeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_GETBEFORESTORYOPTION2LOCALIZEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_BeforeStoryOption3Localize()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_GET_BEFORESTORYOPTION3LOCALIZE_OFFSET))(nullptr);
		}

		Il2CppObject* GetBeforeStoryOption3LocalizeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_GETBEFORESTORYOPTION3LOCALIZEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_AllyAttackLocalize()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_GET_ALLYATTACKLOCALIZE_OFFSET))(nullptr);
		}

		Il2CppObject* GetAllyAttackLocalizeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_GETALLYATTACKLOCALIZEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_EnemyAttackLocalize()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_GET_ENEMYATTACKLOCALIZE_OFFSET))(nullptr);
		}

		Il2CppObject* GetEnemyAttackLocalizeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_GETENEMYATTACKLOCALIZEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_AttackDefenceLocalize()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_GET_ATTACKDEFENCELOCALIZE_OFFSET))(nullptr);
		}

		Il2CppObject* GetAttackDefenceLocalizeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_GETATTACKDEFENCELOCALIZEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_ClearStoryLocalize()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_GET_CLEARSTORYLOCALIZE_OFFSET))(nullptr);
		}

		Il2CppObject* GetClearStoryLocalizeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_GETCLEARSTORYLOCALIZEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_DefeatStoryLocalize()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_GET_DEFEATSTORYLOCALIZE_OFFSET))(nullptr);
		}

		Il2CppObject* GetDefeatStoryLocalizeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_GETDEFEATSTORYLOCALIZEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_RunawayStoryLocalize()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_GET_RUNAWAYSTORYLOCALIZE_OFFSET))(nullptr);
		}

		Il2CppObject* GetRunawayStoryLocalizeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_GETRUNAWAYSTORYLOCALIZEBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateMinigameTBGEncounterExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Boolean arg, ::System::Int32 arg, ::FlatData::TBGThemaType* arg, ::FlatData::TBGObjectType* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::System::Int64 arg, ::System::Boolean arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::System::Boolean, ::System::Int32, ::FlatData::TBGThemaType*, ::FlatData::TBGObjectType*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::System::Int64, ::System::Boolean, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_CREATEMINIGAMETBGENCOUNTEREXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartMinigameTBGEncounterExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_STARTMINIGAMETBGENCOUNTEREXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddEventContentId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_ADDEVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddUniqueId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_ADDUNIQUEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddAllThema(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_ADDALLTHEMA_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddThemaIndex(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_ADDTHEMAINDEX_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddThemaType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::TBGThemaType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::TBGThemaType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_ADDTHEMATYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddObjectType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::TBGObjectType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::TBGObjectType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_ADDOBJECTTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEnemyImagePath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_ADDENEMYIMAGEPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEnemyPrefabName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_ADDENEMYPREFABNAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEnemyNameLocalize(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_ADDENEMYNAMELOCALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddOptionGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_ADDOPTIONGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardHide(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_ADDREWARDHIDE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEncounterTitleLocalize(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_ADDENCOUNTERTITLELOCALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStoryImagePath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_ADDSTORYIMAGEPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBeforeStoryLocalize(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_ADDBEFORESTORYLOCALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBeforeStoryOption1Localize(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_ADDBEFORESTORYOPTION1LOCALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBeforeStoryOption2Localize(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_ADDBEFORESTORYOPTION2LOCALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBeforeStoryOption3Localize(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_ADDBEFORESTORYOPTION3LOCALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddAllyAttackLocalize(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_ADDALLYATTACKLOCALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEnemyAttackLocalize(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_ADDENEMYATTACKLOCALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddAttackDefenceLocalize(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_ADDATTACKDEFENCELOCALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddClearStoryLocalize(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_ADDCLEARSTORYLOCALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDefeatStoryLocalize(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_ADDDEFEATSTORYLOCALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRunawayStoryLocalize(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_ADDRUNAWAYSTORYLOCALIZE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndMinigameTBGEncounterExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_ENDMINIGAMETBGENCOUNTEREXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishMinigameTBGEncounterExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_FINISHMINIGAMETBGENCOUNTEREXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedMinigameTBGEncounterExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTEREXCEL_FINISHSIZEPREFIXEDMINIGAMETBGENCOUNTEREXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

