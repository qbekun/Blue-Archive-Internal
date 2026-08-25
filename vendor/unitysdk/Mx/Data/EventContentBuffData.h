#pragma once
#include "../../unitysdk.h"

namespace FlatData { class Tag; }
namespace FlatData { class EventContentBuffFindRule; }
namespace MX::Data::Excel { class EventContentBuffExcel; }

#define MX_DATA_EVENTCONTENTBUFFDATA_GET_ISBUFF_OFFSET UNITYSDK_OFFSET(0x1841850)
#define MX_DATA_EVENTCONTENTBUFFDATA_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1841860)
#define MX_DATA_EVENTCONTENTBUFFDATA_SET_SPRITENAME_OFFSET UNITYSDK_OFFSET(0x1841870)
#define MX_DATA_EVENTCONTENTBUFFDATA_SET_BUFFDESCRIPTIONICONPATH_OFFSET UNITYSDK_OFFSET(0x1841880)
#define MX_DATA_EVENTCONTENTBUFFDATA_SET_SKILLGROUPID_OFFSET UNITYSDK_OFFSET(0x1841890)
#define MX_DATA_EVENTCONTENTBUFFDATA_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x18418A0)
#define MX_DATA_EVENTCONTENTBUFFDATA_GET_SPRITENAME_OFFSET UNITYSDK_OFFSET(0x18418B0)
#define MX_DATA_EVENTCONTENTBUFFDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x18415B0)
#define MX_DATA_EVENTCONTENTBUFFDATA_SET_CHARACTERTAG_OFFSET UNITYSDK_OFFSET(0x18418C0)
#define MX_DATA_EVENTCONTENTBUFFDATA_GET_CHARACTERTAG_OFFSET UNITYSDK_OFFSET(0x18418D0)
#define MX_DATA_EVENTCONTENTBUFFDATA_GET_EVENTCONTENTBUFFENUMVALUES_OFFSET UNITYSDK_OFFSET(0x18418E0)
#define MX_DATA_EVENTCONTENTBUFFDATA_GET_BUFFID_OFFSET UNITYSDK_OFFSET(0x18418F0)
#define MX_DATA_EVENTCONTENTBUFFDATA_SET_ISBUFF_OFFSET UNITYSDK_OFFSET(0x1841900)
#define MX_DATA_EVENTCONTENTBUFFDATA_SET_BUFFID_OFFSET UNITYSDK_OFFSET(0x1841910)
#define MX_DATA_EVENTCONTENTBUFFDATA_GET_EVENTCONTENTBUFFENUMTYPE_OFFSET UNITYSDK_OFFSET(0x1841920)
#define MX_DATA_EVENTCONTENTBUFFDATA_GET_BUFFDESCRIPTIONICONPATH_OFFSET UNITYSDK_OFFSET(0x1841930)
#define MX_DATA_EVENTCONTENTBUFFDATA_SET_BUFFNAMELOCALIZECODEID_OFFSET UNITYSDK_OFFSET(0x1841940)
#define MX_DATA_EVENTCONTENTBUFFDATA_GET_BUFFDESCRIPTIONLOCALIZECODEID_OFFSET UNITYSDK_OFFSET(0x1841950)
#define MX_DATA_EVENTCONTENTBUFFDATA_SET_EVENTCONTENTBUFFENUMTYPE_OFFSET UNITYSDK_OFFSET(0x1841960)
#define MX_DATA_EVENTCONTENTBUFFDATA_SET_BUFFDESCRIPTIONLOCALIZECODEID_OFFSET UNITYSDK_OFFSET(0x1841970)
#define MX_DATA_EVENTCONTENTBUFFDATA_GET_BUFFNAMELOCALIZECODEID_OFFSET UNITYSDK_OFFSET(0x1841980)
#define MX_DATA_EVENTCONTENTBUFFDATA_SET_EVENTCONTENTBUFFENUMVALUES_OFFSET UNITYSDK_OFFSET(0x1841990)
#define MX_DATA_EVENTCONTENTBUFFDATA_GET_SKILLGROUPID_OFFSET UNITYSDK_OFFSET(0x18419A0)

namespace MX::Data
{
	inline static constexpr unsigned int EventContentBuffData_TypeDefinitionIndex = 15784;

	class EventContentBuffData : public Il2CppObject
	{
	public:
		::System::Int64 _BuffId_k__BackingField; // 0x10
		::System::Boolean _IsBuff_k__BackingField; // 0x18
		::System::String* _SkillGroupId_k__BackingField; // 0x20
		::System::String* _IconPath_k__BackingField; // 0x28
		::System::String* _SpriteName_k__BackingField; // 0x30
		::System::String* _BuffNameLocalizeCodeId_k__BackingField; // 0x38
		::System::String* _BuffDescriptionLocalizeCodeId_k__BackingField; // 0x40
		::FlatData::Tag* _CharacterTag_k__BackingField; // 0x48
		::System::String* _BuffDescriptionIconPath_k__BackingField; // 0x50
		::FlatData::EventContentBuffFindRule* _EventContentBuffEnumType_k__BackingField; // 0x58
		Il2CppObject* _EventContentBuffEnumValues_k__BackingField; // 0x60

		::System::Boolean get_IsBuff()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTBUFFDATA_GET_ISBUFF_OFFSET))(nullptr);
		}

		::System::String* get_IconPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTBUFFDATA_GET_ICONPATH_OFFSET))(nullptr);
		}

		::System::Void set_SpriteName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTBUFFDATA_SET_SPRITENAME_OFFSET))(str, nullptr);
		}

		::System::Void set_BuffDescriptionIconPath(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTBUFFDATA_SET_BUFFDESCRIPTIONICONPATH_OFFSET))(str, nullptr);
		}

		::System::Void set_SkillGroupId(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTBUFFDATA_SET_SKILLGROUPID_OFFSET))(str, nullptr);
		}

		::System::Void set_IconPath(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTBUFFDATA_SET_ICONPATH_OFFSET))(str, nullptr);
		}

		::System::String* get_SpriteName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTBUFFDATA_GET_SPRITENAME_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::EventContentBuffExcel* arg, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::MX::Data::Excel::EventContentBuffExcel*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTBUFFDATA_.CTOR_OFFSET))(arg, str, str, nullptr);
		}

		::System::Void set_CharacterTag(::FlatData::Tag* arg)
		{
			((::System::Void(*)(::FlatData::Tag*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTBUFFDATA_SET_CHARACTERTAG_OFFSET))(arg, nullptr);
		}

		::FlatData::Tag* get_CharacterTag()
		{
			return (return (::FlatData::Tag*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTBUFFDATA_GET_CHARACTERTAG_OFFSET))(nullptr);
		}

		Il2CppObject* get_EventContentBuffEnumValues()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTBUFFDATA_GET_EVENTCONTENTBUFFENUMVALUES_OFFSET))(nullptr);
		}

		::System::Int64 get_BuffId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTBUFFDATA_GET_BUFFID_OFFSET))(nullptr);
		}

		::System::Void set_IsBuff(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTBUFFDATA_SET_ISBUFF_OFFSET))(arg, nullptr);
		}

		::System::Void set_BuffId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTBUFFDATA_SET_BUFFID_OFFSET))(arg, nullptr);
		}

		::FlatData::EventContentBuffFindRule* get_EventContentBuffEnumType()
		{
			return (return (::FlatData::EventContentBuffFindRule*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTBUFFDATA_GET_EVENTCONTENTBUFFENUMTYPE_OFFSET))(nullptr);
		}

		::System::String* get_BuffDescriptionIconPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTBUFFDATA_GET_BUFFDESCRIPTIONICONPATH_OFFSET))(nullptr);
		}

		::System::Void set_BuffNameLocalizeCodeId(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTBUFFDATA_SET_BUFFNAMELOCALIZECODEID_OFFSET))(str, nullptr);
		}

		::System::String* get_BuffDescriptionLocalizeCodeId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTBUFFDATA_GET_BUFFDESCRIPTIONLOCALIZECODEID_OFFSET))(nullptr);
		}

		::System::Void set_EventContentBuffEnumType(::FlatData::EventContentBuffFindRule* arg)
		{
			((::System::Void(*)(::FlatData::EventContentBuffFindRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTBUFFDATA_SET_EVENTCONTENTBUFFENUMTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void set_BuffDescriptionLocalizeCodeId(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTBUFFDATA_SET_BUFFDESCRIPTIONLOCALIZECODEID_OFFSET))(str, nullptr);
		}

		::System::String* get_BuffNameLocalizeCodeId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTBUFFDATA_GET_BUFFNAMELOCALIZECODEID_OFFSET))(nullptr);
		}

		::System::Void set_EventContentBuffEnumValues(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTBUFFDATA_SET_EVENTCONTENTBUFFENUMVALUES_OFFSET))(arg, nullptr);
		}

		::System::String* get_SkillGroupId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTBUFFDATA_GET_SKILLGROUPID_OFFSET))(nullptr);
		}

	};
}

