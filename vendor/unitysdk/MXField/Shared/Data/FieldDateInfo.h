#pragma once
#include "../../../unitysdk.h"

namespace MXField::Shared::Condition { class ConditionElement; }
namespace FlatData { class FieldDateExcel; }

#define MXFIELD_SHARED_DATA_FIELDDATEINFO_GET_ENDCONDITION_OFFSET UNITYSDK_OFFSET(0xE746C0)
#define MXFIELD_SHARED_DATA_FIELDDATEINFO_GET_ENTRYSCENEID_OFFSET UNITYSDK_OFFSET(0xE746D0)
#define MXFIELD_SHARED_DATA_FIELDDATEINFO_GET_OPENCONDITIONSTAGEID_OFFSET UNITYSDK_OFFSET(0xE746E0)
#define MXFIELD_SHARED_DATA_FIELDDATEINFO_GET_ENDREADYCONDITION_OFFSET UNITYSDK_OFFSET(0xE746F0)
#define MXFIELD_SHARED_DATA_FIELDDATEINFO_GET_DATERESULTSPINEPATH_OFFSET UNITYSDK_OFFSET(0xE74700)
#define MXFIELD_SHARED_DATA_FIELDDATEINFO_GET_NAME_OFFSET UNITYSDK_OFFSET(0xE74710)
#define MXFIELD_SHARED_DATA_FIELDDATEINFO_GET_CHARACTERICONPATH_OFFSET UNITYSDK_OFFSET(0xE747B0)
#define MXFIELD_SHARED_DATA_FIELDDATEINFO_SET_OPENDATE_OFFSET UNITYSDK_OFFSET(0xE747C0)
#define MXFIELD_SHARED_DATA_FIELDDATEINFO_GET_DATERESULTSPINEOFFSETX_OFFSET UNITYSDK_OFFSET(0xE747D0)
#define MXFIELD_SHARED_DATA_FIELDDATEINFO_GET_DATERESULTBGPATH_OFFSET UNITYSDK_OFFSET(0xE747E0)
#define MXFIELD_SHARED_DATA_FIELDDATEINFO_GET_DATELOCALIZEKEY_OFFSET UNITYSDK_OFFSET(0xE747F0)
#define MXFIELD_SHARED_DATA_FIELDDATEINFO_GET_ID_OFFSET UNITYSDK_OFFSET(0xE74800)
#define MXFIELD_SHARED_DATA_FIELDDATEINFO_GET_SEASONID_OFFSET UNITYSDK_OFFSET(0xE74810)
#define MXFIELD_SHARED_DATA_FIELDDATEINFO_CHECKSTAGECONDITION_OFFSET UNITYSDK_OFFSET(0xE74820)
#define MXFIELD_SHARED_DATA_FIELDDATEINFO_GET_OPENDATE_OFFSET UNITYSDK_OFFSET(0xE74880)
#define MXFIELD_SHARED_DATA_FIELDDATEINFO_ISALREADYCLEAR_OFFSET UNITYSDK_OFFSET(0xE74890)
#define MXFIELD_SHARED_DATA_FIELDDATEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0xE748E0)

namespace MXField::Shared::Data
{
	inline static constexpr unsigned int FieldDateInfo_TypeDefinitionIndex = 10558;

	class FieldDateInfo : public Il2CppObject
	{
	public:
		::System::Int64 _SeasonId_k__BackingField; // 0x10
		::System::Int64 _Id_k__BackingField; // 0x18
		::System::Int64 _OpenDate_k__BackingField; // 0x20
		::System::Int64 _EntrySceneId_k__BackingField; // 0x28
		::System::String* _DateLocalizeKey_k__BackingField; // 0x30
		::MXField::Shared::Condition::ConditionElement* _EndCondition_k__BackingField; // 0x38
		::MXField::Shared::Condition::ConditionElement* _EndReadyCondition_k__BackingField; // 0x40
		::System::Int64 _OpenConditionStageId_k__BackingField; // 0x48
		::System::String* _CharacterIconPath_k__BackingField; // 0x50
		::System::String* _DateResultBGPath_k__BackingField; // 0x58
		::System::String* _DateResultSpinePath_k__BackingField; // 0x60
		::System::Single _DateResultSpineOffsetX_k__BackingField; // 0x68

		::MXField::Shared::Condition::ConditionElement* get_EndCondition()
		{
			return ((::MXField::Shared::Condition::ConditionElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDDATEINFO_GET_ENDCONDITION_OFFSET))(nullptr);
		}

		::System::Int64 get_EntrySceneId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDDATEINFO_GET_ENTRYSCENEID_OFFSET))(nullptr);
		}

		::System::Int64 get_OpenConditionStageId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDDATEINFO_GET_OPENCONDITIONSTAGEID_OFFSET))(nullptr);
		}

		::MXField::Shared::Condition::ConditionElement* get_EndReadyCondition()
		{
			return ((::MXField::Shared::Condition::ConditionElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDDATEINFO_GET_ENDREADYCONDITION_OFFSET))(nullptr);
		}

		::System::String* get_DateResultSpinePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDDATEINFO_GET_DATERESULTSPINEPATH_OFFSET))(nullptr);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDDATEINFO_GET_NAME_OFFSET))(nullptr);
		}

		::System::String* get_CharacterIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDDATEINFO_GET_CHARACTERICONPATH_OFFSET))(nullptr);
		}

		::System::Void set_OpenDate(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDDATEINFO_SET_OPENDATE_OFFSET))(arg, nullptr);
		}

		::System::Single get_DateResultSpineOffsetX()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDDATEINFO_GET_DATERESULTSPINEOFFSETX_OFFSET))(nullptr);
		}

		::System::String* get_DateResultBGPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDDATEINFO_GET_DATERESULTBGPATH_OFFSET))(nullptr);
		}

		::System::String* get_DateLocalizeKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDDATEINFO_GET_DATELOCALIZEKEY_OFFSET))(nullptr);
		}

		::System::Int64 get_Id()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDDATEINFO_GET_ID_OFFSET))(nullptr);
		}

		::System::Int64 get_SeasonId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDDATEINFO_GET_SEASONID_OFFSET))(nullptr);
		}

		::System::Boolean CheckStageCondition(Il2CppObject* arg)
		{
			return ((::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDDATEINFO_CHECKSTAGECONDITION_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_OpenDate()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDDATEINFO_GET_OPENDATE_OFFSET))(nullptr);
		}

		::System::Boolean IsAlreadyClear(Il2CppObject* arg)
		{
			return ((::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDDATEINFO_ISALREADYCLEAR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::FlatData::FieldDateExcel* arg)
		{
			((::System::Void(*)(::FlatData::FieldDateExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDDATEINFO_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

