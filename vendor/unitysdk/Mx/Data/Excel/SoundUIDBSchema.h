#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_SOUNDUIDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C90250)
#define MX_DATA_EXCEL_SOUNDUIDBSCHEMA_GET_SOUNDUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1C90260)
#define MX_DATA_EXCEL_SOUNDUIDBSCHEMA_SET_SOUNDUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1C90270)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int SoundUIDBSchema_TypeDefinitionIndex = 19510;

	class SoundUIDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::String* _SoundUniqueId_k__BackingField; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SOUNDUIDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::String* get_SoundUniqueId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SOUNDUIDBSCHEMA_GET_SOUNDUNIQUEID_OFFSET))(nullptr);
		}

		::System::Void set_SoundUniqueId(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SOUNDUIDBSCHEMA_SET_SOUNDUNIQUEID_OFFSET))(str, nullptr);
		}

	};
}

