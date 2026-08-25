#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHADBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1AE09A0)
#define MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHADBSCHEMA_GET_FORTUNEGACHAGROUPID_OFFSET UNITYSDK_OFFSET(0x1AE09B0)
#define MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHADBSCHEMA_SET_FORTUNEGACHAGROUPID_OFFSET UNITYSDK_OFFSET(0x1AE09C0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentFortuneGachaDBSchema_TypeDefinitionIndex = 17700;

	class EventContentFortuneGachaDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int32 _FortuneGachaGroupId_k__BackingField; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHADBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 get_FortuneGachaGroupId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHADBSCHEMA_GET_FORTUNEGACHAGROUPID_OFFSET))(nullptr);
		}

		::System::Void set_FortuneGachaGroupId(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHADBSCHEMA_SET_FORTUNEGACHAGROUPID_OFFSET))(arg, nullptr);
		}

	};
}

