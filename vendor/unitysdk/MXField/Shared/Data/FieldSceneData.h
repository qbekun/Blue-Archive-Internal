#pragma once
#include "../../../unitysdk.h"

#define MXFIELD_SHARED_DATA_FIELDSCENEDATA_VALIDATEDATA_OFFSET UNITYSDK_OFFSET(0xE7EBA0)
#define MXFIELD_SHARED_DATA_FIELDSCENEDATA_LOADALLTABLESFROMFILE_OFFSET UNITYSDK_OFFSET(0xE7EBB0)
#define MXFIELD_SHARED_DATA_FIELDSCENEDATA_TRYGETSCENEINFO_OFFSET UNITYSDK_OFFSET(0xE7EBC0)
#define MXFIELD_SHARED_DATA_FIELDSCENEDATA_LOADALLTABLESFROMASSET_OFFSET UNITYSDK_OFFSET(0xE7EC20)
#define MXFIELD_SHARED_DATA_FIELDSCENEDATA_LOADDATAFROMTABLES_OFFSET UNITYSDK_OFFSET(0xE7EC60)
#define MXFIELD_SHARED_DATA_FIELDSCENEDATA_VALIDATEEXCEL_OFFSET UNITYSDK_OFFSET(0xE7EEF0)
#define MXFIELD_SHARED_DATA_FIELDSCENEDATA_TRYGETALLSCENEINFOS_OFFSET UNITYSDK_OFFSET(0xE7EF00)
#define MXFIELD_SHARED_DATA_FIELDSCENEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0xE7EF90)
#define MXFIELD_SHARED_DATA_FIELDSCENEDATA_TRYGETSCENEINFOBYDATE_OFFSET UNITYSDK_OFFSET(0xE7F010)
#define MXFIELD_SHARED_DATA_FIELDSCENEDATA_GETALLSCENEINFOS_OFFSET UNITYSDK_OFFSET(0xE7F130)

namespace MXField::Shared::Data
{
	inline static constexpr unsigned int FieldSceneData_TypeDefinitionIndex = 10607;

	class FieldSceneData : public Il2CppObject
	{
	public:
		Il2CppObject* fieldSceneInfos; // 0x18

		::System::Boolean ValidateData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDSCENEDATA_VALIDATEDATA_OFFSET))(nullptr);
		}

		::System::Void LoadAllTablesFromFile(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDSCENEDATA_LOADALLTABLESFROMFILE_OFFSET))(str, nullptr);
		}

		::System::Boolean TryGetSceneInfo(::System::Int64 arg, ::MXField::Shared::Data::FieldSceneInfo&* arg2)
		{
			return ((::System::Boolean(*)(::System::Int64, ::MXField::Shared::Data::FieldSceneInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDSCENEDATA_TRYGETSCENEINFO_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void LoadAllTablesFromAsset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDSCENEDATA_LOADALLTABLESFROMASSET_OFFSET))(nullptr);
		}

		::System::Void LoadDataFromTables()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDSCENEDATA_LOADDATAFROMTABLES_OFFSET))(nullptr);
		}

		::System::Boolean ValidateExcel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDSCENEDATA_VALIDATEEXCEL_OFFSET))(nullptr);
		}

		::System::Boolean TryGetAllSceneInfos(Il2CppObject&* arg)
		{
			return ((::System::Boolean(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDSCENEDATA_TRYGETALLSCENEINFOS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDSCENEDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean TryGetSceneInfoByDate(::System::Int64 arg, Il2CppObject&* arg2)
		{
			return ((::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDSCENEDATA_TRYGETSCENEINFOBYDATE_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* GetAllSceneInfos()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDSCENEDATA_GETALLSCENEINFOS_OFFSET))(nullptr);
		}

	};
}

