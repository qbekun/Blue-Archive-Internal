#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEDBSCHEMA_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1BFD9E0)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1BFD9F0)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEDBSCHEMA_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1BFDA00)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MiniGameShootingStageDBSchema_TypeDefinitionIndex = 18846;

	class MiniGameShootingStageDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _UniqueId_k__BackingField; // 0x20

		::System::Int64 get_UniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEDBSCHEMA_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_UniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEDBSCHEMA_SET_UNIQUEID_OFFSET))(arg, nullptr);
		}

	};
}

