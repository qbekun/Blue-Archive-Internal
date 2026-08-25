#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_TUTORIALDBSCHEMA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1CAAE20)
#define MX_DATA_EXCEL_TUTORIALDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CAAE30)
#define MX_DATA_EXCEL_TUTORIALDBSCHEMA_SET_ID_OFFSET UNITYSDK_OFFSET(0x1CAAE40)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int TutorialDBSchema_TypeDefinitionIndex = 19646;

	class TutorialDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _ID_k__BackingField; // 0x20

		::System::Int64 get_ID()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TUTORIALDBSCHEMA_GET_ID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TUTORIALDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_ID(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TUTORIALDBSCHEMA_SET_ID_OFFSET))(arg, nullptr);
		}

	};
}

