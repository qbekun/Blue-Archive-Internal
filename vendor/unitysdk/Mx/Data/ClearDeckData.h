#pragma once
#include "../../unitysdk.h"

namespace FlatData { class ContentType; }
namespace FlatData { class ClearDeckRuleExcel&; }

#define MX_DATA_CLEARDECKDATA_VALIDATEDATA_OFFSET UNITYSDK_OFFSET(0x18A4C20)
#define MX_DATA_CLEARDECKDATA_LOADDATAFROMTABLES_OFFSET UNITYSDK_OFFSET(0x18A4C30)
#define MX_DATA_CLEARDECKDATA_VALIDATEEXCEL_OFFSET UNITYSDK_OFFSET(0x18A4DC0)
#define MX_DATA_CLEARDECKDATA_LOADALLTABLESFROMASSET_OFFSET UNITYSDK_OFFSET(0x18A4DD0)
#define MX_DATA_CLEARDECKDATA_TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0x18A4E10)
#define MX_DATA_CLEARDECKDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x18A4E70)
#define MX_DATA_CLEARDECKDATA_LOADALLTABLESFROMFILE_OFFSET UNITYSDK_OFFSET(0x18A4EF0)
#define MX_DATA_CLEARDECKDATA_GET_CLEARDECKRULEDICT_OFFSET UNITYSDK_OFFSET(0x18A4F00)
#define MX_DATA_CLEARDECKDATA_DATAPREPROCESSING_OFFSET UNITYSDK_OFFSET(0x18A4F10)
#define MX_DATA_CLEARDECKDATA_SET_CLEARDECKRULEDICT_OFFSET UNITYSDK_OFFSET(0x18A4F20)

namespace MX::Data
{
	inline static constexpr unsigned int ClearDeckData_TypeDefinitionIndex = 16025;

	class ClearDeckData : public Il2CppObject
	{
	public:
		Il2CppObject* _clearDeckRuleDict_k__BackingField; // 0x18

		::System::Boolean ValidateData()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CLEARDECKDATA_VALIDATEDATA_OFFSET))(nullptr);
		}

		::System::Void LoadDataFromTables()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CLEARDECKDATA_LOADDATAFROMTABLES_OFFSET))(nullptr);
		}

		::System::Boolean ValidateExcel()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CLEARDECKDATA_VALIDATEEXCEL_OFFSET))(nullptr);
		}

		::System::Void LoadAllTablesFromAsset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CLEARDECKDATA_LOADALLTABLESFROMASSET_OFFSET))(nullptr);
		}

		::System::Boolean TryGetValue(::FlatData::ContentType* arg, ::FlatData::ClearDeckRuleExcel&* arg)
		{
			return (return (::System::Boolean(*)(::FlatData::ContentType*, ::FlatData::ClearDeckRuleExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CLEARDECKDATA_TRYGETVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CLEARDECKDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void LoadAllTablesFromFile(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CLEARDECKDATA_LOADALLTABLESFROMFILE_OFFSET))(str, nullptr);
		}

		Il2CppObject* get_clearDeckRuleDict()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CLEARDECKDATA_GET_CLEARDECKRULEDICT_OFFSET))(nullptr);
		}

		::System::Void DataPreprocessing()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CLEARDECKDATA_DATAPREPROCESSING_OFFSET))(nullptr);
		}

		::System::Void set_clearDeckRuleDict(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CLEARDECKDATA_SET_CLEARDECKRULEDICT_OFFSET))(arg, nullptr);
		}

	};
}

