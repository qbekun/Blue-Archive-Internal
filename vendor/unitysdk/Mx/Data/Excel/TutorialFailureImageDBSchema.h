#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class TutorialFailureContentType; }

#define MX_DATA_EXCEL_TUTORIALFAILUREIMAGEDBSCHEMA_SET_CONTENTS_OFFSET UNITYSDK_OFFSET(0x1CAC390)
#define MX_DATA_EXCEL_TUTORIALFAILUREIMAGEDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CAC3A0)
#define MX_DATA_EXCEL_TUTORIALFAILUREIMAGEDBSCHEMA_GET_CONTENTS_OFFSET UNITYSDK_OFFSET(0x1CAC3B0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int TutorialFailureImageDBSchema_TypeDefinitionIndex = 19653;

	class TutorialFailureImageDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::FlatData::TutorialFailureContentType* _Contents_k__BackingField; // 0x20

		::System::Void set_Contents(::FlatData::TutorialFailureContentType* arg)
		{
			((::System::Void(*)(::FlatData::TutorialFailureContentType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TUTORIALFAILUREIMAGEDBSCHEMA_SET_CONTENTS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TUTORIALFAILUREIMAGEDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::FlatData::TutorialFailureContentType* get_Contents()
		{
			return (return (::FlatData::TutorialFailureContentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TUTORIALFAILUREIMAGEDBSCHEMA_GET_CONTENTS_OFFSET))(nullptr);
		}

	};
}

