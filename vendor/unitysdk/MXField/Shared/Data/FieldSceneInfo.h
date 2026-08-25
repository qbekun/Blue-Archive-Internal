#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class FieldSceneExcel; }
namespace MXField::Shared::Data { class FieldSceneInfo; }

#define MXFIELD_SHARED_DATA_FIELDSCENEINFO_GET_ID_OFFSET UNITYSDK_OFFSET(0xE7E420)
#define MXFIELD_SHARED_DATA_FIELDSCENEINFO_GET_DATEID_OFFSET UNITYSDK_OFFSET(0xE7E430)
#define MXFIELD_SHARED_DATA_FIELDSCENEINFO_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0xE7E440)
#define MXFIELD_SHARED_DATA_FIELDSCENEINFO_GET_BGMID_OFFSET UNITYSDK_OFFSET(0xE7E450)
#define MXFIELD_SHARED_DATA_FIELDSCENEINFO_GET_ARTLEVELPATH_OFFSET UNITYSDK_OFFSET(0xE7E460)
#define MXFIELD_SHARED_DATA_FIELDSCENEINFO_GET_DESIGNLEVELPATH_OFFSET UNITYSDK_OFFSET(0xE7E470)
#define MXFIELD_SHARED_DATA_FIELDSCENEINFO_GET_CONDITIONALBGMINFOS_OFFSET UNITYSDK_OFFSET(0xE7E480)
#define MXFIELD_SHARED_DATA_FIELDSCENEINFO_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0xE7E490)
#define MXFIELD_SHARED_DATA_FIELDSCENEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0xE7E4A0)
#define MXFIELD_SHARED_DATA_FIELDSCENEINFO_TRYGETCONDITIONALBGMINFOBYSCENARIOGROUPID_OFFSET UNITYSDK_OFFSET(0xE7E6C0)
#define MXFIELD_SHARED_DATA_FIELDSCENEINFO_ISCONDITIONALBGMQUEST_OFFSET UNITYSDK_OFFSET(0xE7E8C0)
#define MXFIELD_SHARED_DATA_FIELDSCENEINFO_EQUALS_OFFSET UNITYSDK_OFFSET(0xE7E990)
#define MXFIELD_SHARED_DATA_FIELDSCENEINFO_EQUALS_OFFSET UNITYSDK_OFFSET(0xE7E9B0)
#define MXFIELD_SHARED_DATA_FIELDSCENEINFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xE7EAA0)

namespace MXField::Shared::Data
{
	inline static constexpr unsigned int FieldSceneInfo_TypeDefinitionIndex = 10605;

	class FieldSceneInfo : public Il2CppObject
	{
	public:
		::System::Int64 _Id_k__BackingField; // 0x10
		::System::Int64 _DateId_k__BackingField; // 0x18
		::System::Int64 _GroupId_k__BackingField; // 0x20
		::System::Int64 _BGMId_k__BackingField; // 0x28
		::System::String* _ArtLevelPath_k__BackingField; // 0x30
		::System::String* _DesignLevelPath_k__BackingField; // 0x38
		::Il2CppArray<::System::Object*>* _ConditionalBGMInfos_k__BackingField; // 0x40

		::System::Int64 get_Id()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDSCENEINFO_GET_ID_OFFSET))(nullptr);
		}

		::System::Int64 get_DateId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDSCENEINFO_GET_DATEID_OFFSET))(nullptr);
		}

		::System::Int64 get_GroupId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDSCENEINFO_GET_GROUPID_OFFSET))(nullptr);
		}

		::System::Int64 get_BGMId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDSCENEINFO_GET_BGMID_OFFSET))(nullptr);
		}

		::System::String* get_ArtLevelPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDSCENEINFO_GET_ARTLEVELPATH_OFFSET))(nullptr);
		}

		::System::String* get_DesignLevelPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDSCENEINFO_GET_DESIGNLEVELPATH_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_ConditionalBGMInfos()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDSCENEINFO_GET_CONDITIONALBGMINFOS_OFFSET))(nullptr);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDSCENEINFO_GET_ISVALID_OFFSET))(nullptr);
		}

		::System::Void .ctor(::FlatData::FieldSceneExcel* arg)
		{
			((::System::Void(*)(::FlatData::FieldSceneExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDSCENEINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetConditionalBGMInfoByScenarioGroupId(::System::Int64 arg, Il2CppObject&* arg2)
		{
			return ((::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDSCENEINFO_TRYGETCONDITIONALBGMINFOBYSCENARIOGROUPID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean IsConditionalBGMQuest(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDSCENEINFO_ISCONDITIONALBGMQUEST_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::MXField::Shared::Data::FieldSceneInfo* arg)
		{
			return ((::System::Boolean(*)(::MXField::Shared::Data::FieldSceneInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDSCENEINFO_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDSCENEINFO_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDSCENEINFO_GETHASHCODE_OFFSET))(nullptr);
		}

	};
}

