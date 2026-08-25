#pragma once
#include "../../../unitysdk.h"

#define MXFIELD_SHARED_DATA_FIELDDIALOGDATA_LOADALLTABLESFROMFILE_OFFSET UNITYSDK_OFFSET(0xE75E00)
#define MXFIELD_SHARED_DATA_FIELDDIALOGDATA_TRYGETDIALOGINFO_OFFSET UNITYSDK_OFFSET(0xE75E10)
#define MXFIELD_SHARED_DATA_FIELDDIALOGDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0xE75E70)
#define MXFIELD_SHARED_DATA_FIELDDIALOGDATA_LOADDATAFROMTABLES_OFFSET UNITYSDK_OFFSET(0xE75EF0)
#define MXFIELD_SHARED_DATA_FIELDDIALOGDATA_VALIDATEDATA_OFFSET UNITYSDK_OFFSET(0xE76280)
#define MXFIELD_SHARED_DATA_FIELDDIALOGDATA_VALIDATEEXCEL_OFFSET UNITYSDK_OFFSET(0xE76290)
#define MXFIELD_SHARED_DATA_FIELDDIALOGDATA_LOADALLTABLESFROMASSET_OFFSET UNITYSDK_OFFSET(0xE762A0)

namespace MXField::Shared::Data
{
	inline static constexpr unsigned int FieldDialogData_TypeDefinitionIndex = 10565;

	class FieldDialogData : public Il2CppObject
	{
	public:
		Il2CppObject* fieldDialogInfos; // 0x18

		::System::Void LoadAllTablesFromFile(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDDIALOGDATA_LOADALLTABLESFROMFILE_OFFSET))(str, nullptr);
		}

		::System::Boolean TryGetDialogInfo(::System::Int64 arg, ::MXField::Shared::Data::FieldDialogInfo&* arg2)
		{
			return ((::System::Boolean(*)(::System::Int64, ::MXField::Shared::Data::FieldDialogInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDDIALOGDATA_TRYGETDIALOGINFO_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDDIALOGDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void LoadDataFromTables()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDDIALOGDATA_LOADDATAFROMTABLES_OFFSET))(nullptr);
		}

		::System::Boolean ValidateData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDDIALOGDATA_VALIDATEDATA_OFFSET))(nullptr);
		}

		::System::Boolean ValidateExcel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDDIALOGDATA_VALIDATEEXCEL_OFFSET))(nullptr);
		}

		::System::Void LoadAllTablesFromAsset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDDIALOGDATA_LOADALLTABLESFROMASSET_OFFSET))(nullptr);
		}

	};
}

