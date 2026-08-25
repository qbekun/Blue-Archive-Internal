#pragma once
#include "../../unitysdk.h"

#define MX_DATA_COUPONSTUFFDATA_GET_DICTIONARY_OFFSET UNITYSDK_OFFSET(0x18B1370)
#define MX_DATA_COUPONSTUFFDATA_LOADALLTABLESFROMFILE_OFFSET UNITYSDK_OFFSET(0x18B1380)
#define MX_DATA_COUPONSTUFFDATA_VALIDATEEXCEL_OFFSET UNITYSDK_OFFSET(0x18B1390)
#define MX_DATA_COUPONSTUFFDATA_LOADALLTABLESFROMASSET_OFFSET UNITYSDK_OFFSET(0x18B1690)
#define MX_DATA_COUPONSTUFFDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x18B16D0)
#define MX_DATA_COUPONSTUFFDATA_VALIDATEDATA_OFFSET UNITYSDK_OFFSET(0x18B1750)
#define MX_DATA_COUPONSTUFFDATA_SET_DICTIONARY_OFFSET UNITYSDK_OFFSET(0x18B1760)
#define MX_DATA_COUPONSTUFFDATA_LOADDATAFROMTABLES_OFFSET UNITYSDK_OFFSET(0x18B1770)

namespace MX::Data
{
	inline static constexpr unsigned int CouponStuffData_TypeDefinitionIndex = 16040;

	class CouponStuffData : public Il2CppObject
	{
	public:
		Il2CppObject* _Dictionary_k__BackingField; // 0x18

		Il2CppObject* get_Dictionary()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_COUPONSTUFFDATA_GET_DICTIONARY_OFFSET))(nullptr);
		}

		::System::Void LoadAllTablesFromFile(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_COUPONSTUFFDATA_LOADALLTABLESFROMFILE_OFFSET))(str, nullptr);
		}

		::System::Boolean ValidateExcel()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_COUPONSTUFFDATA_VALIDATEEXCEL_OFFSET))(nullptr);
		}

		::System::Void LoadAllTablesFromAsset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_COUPONSTUFFDATA_LOADALLTABLESFROMASSET_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_COUPONSTUFFDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean ValidateData()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_COUPONSTUFFDATA_VALIDATEDATA_OFFSET))(nullptr);
		}

		::System::Void set_Dictionary(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_COUPONSTUFFDATA_SET_DICTIONARY_OFFSET))(arg, nullptr);
		}

		::System::Void LoadDataFromTables()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_COUPONSTUFFDATA_LOADDATAFROMTABLES_OFFSET))(nullptr);
		}

	};
}

