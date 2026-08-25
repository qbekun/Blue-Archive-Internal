#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTERDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1BFAD90)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTERDBSCHEMA_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1BFADA0)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTERDBSCHEMA_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1BFADB0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MiniGameShootingCharacterDBSchema_TypeDefinitionIndex = 18832;

	class MiniGameShootingCharacterDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _UniqueId_k__BackingField; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTERDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_UniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTERDBSCHEMA_SET_UNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTERDBSCHEMA_GET_UNIQUEID_OFFSET))(nullptr);
		}

	};
}

