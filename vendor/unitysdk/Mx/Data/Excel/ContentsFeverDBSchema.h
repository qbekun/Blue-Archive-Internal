#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class FeverBattleType; }

#define MX_DATA_EXCEL_CONTENTSFEVERDBSCHEMA_GET_CONDITIONCONTENT_OFFSET UNITYSDK_OFFSET(0x1A6F540)
#define MX_DATA_EXCEL_CONTENTSFEVERDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A6F550)
#define MX_DATA_EXCEL_CONTENTSFEVERDBSCHEMA_SET_CONDITIONCONTENT_OFFSET UNITYSDK_OFFSET(0x1A6F560)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ContentsFeverDBSchema_TypeDefinitionIndex = 17317;

	class ContentsFeverDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::FlatData::FeverBattleType* _ConditionContent_k__BackingField; // 0x20

		::FlatData::FeverBattleType* get_ConditionContent()
		{
			return (return (::FlatData::FeverBattleType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSFEVERDBSCHEMA_GET_CONDITIONCONTENT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSFEVERDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_ConditionContent(::FlatData::FeverBattleType* arg)
		{
			((::System::Void(*)(::FlatData::FeverBattleType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSFEVERDBSCHEMA_SET_CONDITIONCONTENT_OFFSET))(arg, nullptr);
		}

	};
}

