#pragma once
#include "../../unitysdk.h"

#define MX_DATA_KATAKANADATA_VALIDATEEXCEL_OFFSET UNITYSDK_OFFSET(0x18E8470)
#define MX_DATA_KATAKANADATA_LOADALLTABLESFROMASSET_OFFSET UNITYSDK_OFFSET(0x18E8480)
#define MX_DATA_KATAKANADATA_LOADALLTABLESFROMFILE_OFFSET UNITYSDK_OFFSET(0x18E84C0)
#define MX_DATA_KATAKANADATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x18E84D0)
#define MX_DATA_KATAKANADATA_LOADDATAFROMTABLES_OFFSET UNITYSDK_OFFSET(0x18E8550)
#define MX_DATA_KATAKANADATA_GETDATA_OFFSET UNITYSDK_OFFSET(0x18E87B0)
#define MX_DATA_KATAKANADATA_VALIDATEDATA_OFFSET UNITYSDK_OFFSET(0x18E8830)

namespace MX::Data
{
	inline static constexpr unsigned int KatakanaData_TypeDefinitionIndex = 16164;

	class KatakanaData : public Il2CppObject
	{
	public:
		Il2CppObject* dic; // 0x18

		::System::Boolean ValidateExcel()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_KATAKANADATA_VALIDATEEXCEL_OFFSET))(nullptr);
		}

		::System::Void LoadAllTablesFromAsset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_KATAKANADATA_LOADALLTABLESFROMASSET_OFFSET))(nullptr);
		}

		::System::Void LoadAllTablesFromFile(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_KATAKANADATA_LOADALLTABLESFROMFILE_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_KATAKANADATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void LoadDataFromTables()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_KATAKANADATA_LOADDATAFROMTABLES_OFFSET))(nullptr);
		}

		::System::String* GetData(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_KATAKANADATA_GETDATA_OFFSET))(str, nullptr);
		}

		::System::Boolean ValidateData()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_KATAKANADATA_VALIDATEDATA_OFFSET))(nullptr);
		}

	};
}

