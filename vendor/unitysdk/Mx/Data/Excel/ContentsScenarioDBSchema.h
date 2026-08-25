#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_CONTENTSSCENARIODBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A71C60)
#define MX_DATA_EXCEL_CONTENTSSCENARIODBSCHEMA_SET_ID_OFFSET UNITYSDK_OFFSET(0x1A71C70)
#define MX_DATA_EXCEL_CONTENTSSCENARIODBSCHEMA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1A71C80)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ContentsScenarioDBSchema_TypeDefinitionIndex = 17331;

	class ContentsScenarioDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::UInt32 _Id_k__BackingField; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSSCENARIODBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_Id(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSSCENARIODBSCHEMA_SET_ID_OFFSET))(arg, nullptr);
		}

		::System::UInt32 get_Id()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSSCENARIODBSCHEMA_GET_ID_OFFSET))(nullptr);
		}

	};
}

