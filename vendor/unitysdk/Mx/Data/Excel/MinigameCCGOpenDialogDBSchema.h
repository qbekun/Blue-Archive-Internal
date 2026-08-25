#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_MINIGAMECCGOPENDIALOGDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B9B360)
#define MX_DATA_EXCEL_MINIGAMECCGOPENDIALOGDBSCHEMA_SET_CONDITIONCARD_OFFSET UNITYSDK_OFFSET(0x1B9B370)
#define MX_DATA_EXCEL_MINIGAMECCGOPENDIALOGDBSCHEMA_SET_DIALOGID_OFFSET UNITYSDK_OFFSET(0x1B9B380)
#define MX_DATA_EXCEL_MINIGAMECCGOPENDIALOGDBSCHEMA_GET_DIALOGID_OFFSET UNITYSDK_OFFSET(0x1B9B390)
#define MX_DATA_EXCEL_MINIGAMECCGOPENDIALOGDBSCHEMA_GET_CONDITIONCARD_OFFSET UNITYSDK_OFFSET(0x1B9B3A0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MinigameCCGOpenDialogDBSchema_TypeDefinitionIndex = 18511;

	class MinigameCCGOpenDialogDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _DialogId_k__BackingField; // 0x20
		::System::Int64 _ConditionCard_k__BackingField; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGOPENDIALOGDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_ConditionCard(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGOPENDIALOGDBSCHEMA_SET_CONDITIONCARD_OFFSET))(arg, nullptr);
		}

		::System::Void set_DialogId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGOPENDIALOGDBSCHEMA_SET_DIALOGID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_DialogId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGOPENDIALOGDBSCHEMA_GET_DIALOGID_OFFSET))(nullptr);
		}

		::System::Int64 get_ConditionCard()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGOPENDIALOGDBSCHEMA_GET_CONDITIONCARD_OFFSET))(nullptr);
		}

	};
}

