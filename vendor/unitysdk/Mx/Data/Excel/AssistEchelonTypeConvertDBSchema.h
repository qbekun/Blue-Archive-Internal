#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class EchelonType; }

#define MX_DATA_EXCEL_ASSISTECHELONTYPECONVERTDBSCHEMA_GET_CONTENTS_OFFSET UNITYSDK_OFFSET(0x19D8020)
#define MX_DATA_EXCEL_ASSISTECHELONTYPECONVERTDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x19D8030)
#define MX_DATA_EXCEL_ASSISTECHELONTYPECONVERTDBSCHEMA_SET_CONTENTS_OFFSET UNITYSDK_OFFSET(0x19D8040)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int AssistEchelonTypeConvertDBSchema_TypeDefinitionIndex = 16683;

	class AssistEchelonTypeConvertDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::FlatData::EchelonType* _Contents_k__BackingField; // 0x20

		::FlatData::EchelonType* get_Contents()
		{
			return (return (::FlatData::EchelonType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ASSISTECHELONTYPECONVERTDBSCHEMA_GET_CONTENTS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ASSISTECHELONTYPECONVERTDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_Contents(::FlatData::EchelonType* arg)
		{
			((::System::Void(*)(::FlatData::EchelonType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ASSISTECHELONTYPECONVERTDBSCHEMA_SET_CONTENTS_OFFSET))(arg, nullptr);
		}

	};
}

