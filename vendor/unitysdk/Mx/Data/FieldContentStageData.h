#pragma once
#include "../../unitysdk.h"

namespace MX::Data { class FieldContentStageInfo&; }

#define MX_DATA_FIELDCONTENTSTAGEDATA_LOADALLTABLESFROMFILE_OFFSET UNITYSDK_OFFSET(0x18DA450)
#define MX_DATA_FIELDCONTENTSTAGEDATA_LOADDATAFROMTABLES_OFFSET UNITYSDK_OFFSET(0x18DA460)
#define MX_DATA_FIELDCONTENTSTAGEDATA_TRYGETSTAGEINFO_OFFSET UNITYSDK_OFFSET(0x18DAA10)
#define MX_DATA_FIELDCONTENTSTAGEDATA_GETALLSTAGEINFOS_OFFSET UNITYSDK_OFFSET(0x18DAA70)
#define MX_DATA_FIELDCONTENTSTAGEDATA_LOADALLTABLESFROMASSET_OFFSET UNITYSDK_OFFSET(0x18DAAC0)
#define MX_DATA_FIELDCONTENTSTAGEDATA_GETSTAGEINFOSBYAREAID_OFFSET UNITYSDK_OFFSET(0x18DAB20)
#define MX_DATA_FIELDCONTENTSTAGEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x18DABE0)
#define MX_DATA_FIELDCONTENTSTAGEDATA_GETSTAGEINFOS_OFFSET UNITYSDK_OFFSET(0x18DAC60)
#define MX_DATA_FIELDCONTENTSTAGEDATA_VALIDATEDATA_OFFSET UNITYSDK_OFFSET(0x18DAD10)
#define MX_DATA_FIELDCONTENTSTAGEDATA_VALIDATEEXCEL_OFFSET UNITYSDK_OFFSET(0x18DAD20)

namespace MX::Data
{
	inline static constexpr unsigned int FieldContentStageData_TypeDefinitionIndex = 16124;

	class FieldContentStageData : public Il2CppObject
	{
	public:
		Il2CppObject* stageInfos; // 0x18

		::System::Void LoadAllTablesFromFile(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_FIELDCONTENTSTAGEDATA_LOADALLTABLESFROMFILE_OFFSET))(str, nullptr);
		}

		::System::Void LoadDataFromTables()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_FIELDCONTENTSTAGEDATA_LOADDATAFROMTABLES_OFFSET))(nullptr);
		}

		::System::Boolean TryGetStageInfo(::System::Int64 arg, ::MX::Data::FieldContentStageInfo&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::FieldContentStageInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_FIELDCONTENTSTAGEDATA_TRYGETSTAGEINFO_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetAllStageInfos()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_FIELDCONTENTSTAGEDATA_GETALLSTAGEINFOS_OFFSET))(nullptr);
		}

		::System::Void LoadAllTablesFromAsset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_FIELDCONTENTSTAGEDATA_LOADALLTABLESFROMASSET_OFFSET))(nullptr);
		}

		Il2CppObject* GetStageInfosByAreaId(::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_FIELDCONTENTSTAGEDATA_GETSTAGEINFOSBYAREAID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_FIELDCONTENTSTAGEDATA_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* GetStageInfos(::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_FIELDCONTENTSTAGEDATA_GETSTAGEINFOS_OFFSET))(arg, nullptr);
		}

		::System::Boolean ValidateData()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_FIELDCONTENTSTAGEDATA_VALIDATEDATA_OFFSET))(nullptr);
		}

		::System::Boolean ValidateExcel()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_FIELDCONTENTSTAGEDATA_VALIDATEEXCEL_OFFSET))(nullptr);
		}

	};
}

