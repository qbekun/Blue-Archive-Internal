#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class FieldQuestExcel; }

#define MXFIELD_SHARED_DATA_FIELDQUESTINFO_GET_NAME_OFFSET UNITYSDK_OFFSET(0xE7CC10)
#define MXFIELD_SHARED_DATA_FIELDQUESTINFO_GET_PROB_OFFSET UNITYSDK_OFFSET(0xE7CCB0)
#define MXFIELD_SHARED_DATA_FIELDQUESTINFO_GET_SOPATH_OFFSET UNITYSDK_OFFSET(0xE7CCC0)
#define MXFIELD_SHARED_DATA_FIELDQUESTINFO_GET_ISDAILY_OFFSET UNITYSDK_OFFSET(0xE7CD10)
#define MXFIELD_SHARED_DATA_FIELDQUESTINFO_GET_DATAPATH_OFFSET UNITYSDK_OFFSET(0xE7CD20)
#define MXFIELD_SHARED_DATA_FIELDQUESTINFO_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0xE7CD30)
#define MXFIELD_SHARED_DATA_FIELDQUESTINFO_GET_DESCRIPTIONLOCALIZEKEY_OFFSET UNITYSDK_OFFSET(0xE7CDD0)
#define MXFIELD_SHARED_DATA_FIELDQUESTINFO_GET_SEASONID_OFFSET UNITYSDK_OFFSET(0xE7CDE0)
#define MXFIELD_SHARED_DATA_FIELDQUESTINFO_GET_REWARDID_OFFSET UNITYSDK_OFFSET(0xE7CDF0)
#define MXFIELD_SHARED_DATA_FIELDQUESTINFO_GET_DATEID_OFFSET UNITYSDK_OFFSET(0xE7CE00)
#define MXFIELD_SHARED_DATA_FIELDQUESTINFO_GET_ID_OFFSET UNITYSDK_OFFSET(0xE7CE10)
#define MXFIELD_SHARED_DATA_FIELDQUESTINFO_GET_OPENDATE_OFFSET UNITYSDK_OFFSET(0xE7CE20)
#define MXFIELD_SHARED_DATA_FIELDQUESTINFO_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0xE7CE30)
#define MXFIELD_SHARED_DATA_FIELDQUESTINFO_GET_NAMELOCALIZEKEY_OFFSET UNITYSDK_OFFSET(0xE7CE40)
#define MXFIELD_SHARED_DATA_FIELDQUESTINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0xE7CE50)

namespace MXField::Shared::Data
{
	inline static constexpr unsigned int FieldQuestInfo_TypeDefinitionIndex = 10594;

	class FieldQuestInfo : public Il2CppObject
	{
	public:
		::System::Int64 _SeasonId_k__BackingField; // 0x10
		::System::Int64 _Id_k__BackingField; // 0x18
		::System::Int64 _DateId_k__BackingField; // 0x20
		::System::String* _DataPath_k__BackingField; // 0x28
		::System::Int64 _RewardId_k__BackingField; // 0x30
		::System::Boolean _IsDaily_k__BackingField; // 0x38
		::System::Int32 _Prob_k__BackingField; // 0x3C
		::System::Int64 _OpenDate_k__BackingField; // 0x40
		::System::UInt32 _NameLocalizeKey_k__BackingField; // 0x48
		::System::UInt32 _DescriptionLocalizeKey_k__BackingField; // 0x4C
		::System::Int64 _GroupId_k__BackingField; // 0x50

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDQUESTINFO_GET_NAME_OFFSET))(nullptr);
		}

		::System::Int32 get_Prob()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDQUESTINFO_GET_PROB_OFFSET))(nullptr);
		}

		::System::String* get_SOPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDQUESTINFO_GET_SOPATH_OFFSET))(nullptr);
		}

		::System::Boolean get_IsDaily()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDQUESTINFO_GET_ISDAILY_OFFSET))(nullptr);
		}

		::System::String* get_DataPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDQUESTINFO_GET_DATAPATH_OFFSET))(nullptr);
		}

		::System::String* get_Description()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDQUESTINFO_GET_DESCRIPTION_OFFSET))(nullptr);
		}

		::System::UInt32 get_DescriptionLocalizeKey()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDQUESTINFO_GET_DESCRIPTIONLOCALIZEKEY_OFFSET))(nullptr);
		}

		::System::Int64 get_SeasonId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDQUESTINFO_GET_SEASONID_OFFSET))(nullptr);
		}

		::System::Int64 get_RewardId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDQUESTINFO_GET_REWARDID_OFFSET))(nullptr);
		}

		::System::Int64 get_DateId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDQUESTINFO_GET_DATEID_OFFSET))(nullptr);
		}

		::System::Int64 get_Id()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDQUESTINFO_GET_ID_OFFSET))(nullptr);
		}

		::System::Int64 get_OpenDate()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDQUESTINFO_GET_OPENDATE_OFFSET))(nullptr);
		}

		::System::Int64 get_GroupId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDQUESTINFO_GET_GROUPID_OFFSET))(nullptr);
		}

		::System::UInt32 get_NameLocalizeKey()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDQUESTINFO_GET_NAMELOCALIZEKEY_OFFSET))(nullptr);
		}

		::System::Void .ctor(::FlatData::FieldQuestExcel* arg)
		{
			((::System::Void(*)(::FlatData::FieldQuestExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDQUESTINFO_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

