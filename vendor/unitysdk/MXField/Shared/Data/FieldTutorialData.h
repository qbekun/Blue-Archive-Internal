#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class FieldTutorialType; }

#define MXFIELD_SHARED_DATA_FIELDTUTORIALDATA_LOADALLTABLESFROMASSET_OFFSET UNITYSDK_OFFSET(0xE80210)
#define MXFIELD_SHARED_DATA_FIELDTUTORIALDATA_VALIDATEEXCEL_OFFSET UNITYSDK_OFFSET(0xE80250)
#define MXFIELD_SHARED_DATA_FIELDTUTORIALDATA_TRYGETFIELDTUTORIALINFO_OFFSET UNITYSDK_OFFSET(0xE80260)
#define MXFIELD_SHARED_DATA_FIELDTUTORIALDATA_LOADALLTABLESFROMFILE_OFFSET UNITYSDK_OFFSET(0xE80470)
#define MXFIELD_SHARED_DATA_FIELDTUTORIALDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0xE80480)
#define MXFIELD_SHARED_DATA_FIELDTUTORIALDATA_LOADDATAFROMTABLES_OFFSET UNITYSDK_OFFSET(0xE80500)
#define MXFIELD_SHARED_DATA_FIELDTUTORIALDATA_TRYGETFIELDSEASONTUTORIALINFOS_OFFSET UNITYSDK_OFFSET(0xE809C0)

namespace MXField::Shared::Data
{
	inline static constexpr unsigned int FieldTutorialData_TypeDefinitionIndex = 10614;

	class FieldTutorialData : public Il2CppObject
	{
	public:
		Il2CppObject* tutorialDict; // 0x18

		::System::Void LoadAllTablesFromAsset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDTUTORIALDATA_LOADALLTABLESFROMASSET_OFFSET))(nullptr);
		}

		::System::Boolean ValidateExcel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDTUTORIALDATA_VALIDATEEXCEL_OFFSET))(nullptr);
		}

		::System::Boolean TryGetFieldTutorialInfo(::System::Int64 arg, ::FlatData::FieldTutorialType* arg2, ::MXField::Shared::Data::FieldTutorialInfo&* arg3)
		{
			return ((::System::Boolean(*)(::System::Int64, ::FlatData::FieldTutorialType*, ::MXField::Shared::Data::FieldTutorialInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDTUTORIALDATA_TRYGETFIELDTUTORIALINFO_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void LoadAllTablesFromFile(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDTUTORIALDATA_LOADALLTABLESFROMFILE_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDTUTORIALDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void LoadDataFromTables()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDTUTORIALDATA_LOADDATAFROMTABLES_OFFSET))(nullptr);
		}

		::System::Boolean TryGetFieldSeasonTutorialInfos(::System::Int64 arg, Il2CppObject&* arg2)
		{
			return ((::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDTUTORIALDATA_TRYGETFIELDSEASONTUTORIALINFOS_OFFSET))(arg, arg2, nullptr);
		}

	};
}

