#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_TUTORIALCHARACTERDIALOGDBSCHEMA_GET_TALKID_OFFSET UNITYSDK_OFFSET(0x1CA9840)
#define MX_DATA_EXCEL_TUTORIALCHARACTERDIALOGDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CA9850)
#define MX_DATA_EXCEL_TUTORIALCHARACTERDIALOGDBSCHEMA_SET_TALKID_OFFSET UNITYSDK_OFFSET(0x1CA9860)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int TutorialCharacterDialogDBSchema_TypeDefinitionIndex = 19639;

	class TutorialCharacterDialogDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _TalkId_k__BackingField; // 0x20

		::System::Int64 get_TalkId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TUTORIALCHARACTERDIALOGDBSCHEMA_GET_TALKID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TUTORIALCHARACTERDIALOGDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_TalkId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TUTORIALCHARACTERDIALOGDBSCHEMA_SET_TALKID_OFFSET))(arg, nullptr);
		}

	};
}

