#pragma once
#include "../../unitysdk.h"

namespace FlatData { class MailType; }
namespace FlatData { class SystemMailExcel&; }

#define MX_DATA_MAILDATA_VALIDATEDATA_OFFSET UNITYSDK_OFFSET(0x18EDC70)
#define MX_DATA_MAILDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x18EDC80)
#define MX_DATA_MAILDATA_LOADALLTABLESFROMFILE_OFFSET UNITYSDK_OFFSET(0x18EDD00)
#define MX_DATA_MAILDATA_LOADDATAFROMTABLES_OFFSET UNITYSDK_OFFSET(0x18EDD10)
#define MX_DATA_MAILDATA_ISSEMIPERMANENTMAIL_OFFSET UNITYSDK_OFFSET(0x18EDF90)
#define MX_DATA_MAILDATA_LOADALLTABLESFROMASSET_OFFSET UNITYSDK_OFFSET(0x18EE060)
#define MX_DATA_MAILDATA_VALIDATEEXCEL_OFFSET UNITYSDK_OFFSET(0x18EE0A0)
#define MX_DATA_MAILDATA_TRYGETSYSTEMMAILEXCEL_OFFSET UNITYSDK_OFFSET(0x18EE000)

namespace MX::Data
{
	inline static constexpr unsigned int MailData_TypeDefinitionIndex = 16175;

	class MailData : public Il2CppObject
	{
	public:
		Il2CppObject* mailExcelDic; // 0x18

		::System::Boolean ValidateData()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MAILDATA_VALIDATEDATA_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MAILDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void LoadAllTablesFromFile(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MAILDATA_LOADALLTABLESFROMFILE_OFFSET))(str, nullptr);
		}

		::System::Void LoadDataFromTables()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MAILDATA_LOADDATAFROMTABLES_OFFSET))(nullptr);
		}

		::System::Boolean IsSemiPermanentMail(::FlatData::MailType* arg)
		{
			return (return (::System::Boolean(*)(::FlatData::MailType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MAILDATA_ISSEMIPERMANENTMAIL_OFFSET))(arg, nullptr);
		}

		::System::Void LoadAllTablesFromAsset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MAILDATA_LOADALLTABLESFROMASSET_OFFSET))(nullptr);
		}

		::System::Boolean ValidateExcel()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MAILDATA_VALIDATEEXCEL_OFFSET))(nullptr);
		}

		::System::Boolean TryGetSystemMailExcel(::FlatData::MailType* arg, ::FlatData::SystemMailExcel&* arg)
		{
			return (return (::System::Boolean(*)(::FlatData::MailType*, ::FlatData::SystemMailExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MAILDATA_TRYGETSYSTEMMAILEXCEL_OFFSET))(arg, arg, nullptr);
		}

	};
}

