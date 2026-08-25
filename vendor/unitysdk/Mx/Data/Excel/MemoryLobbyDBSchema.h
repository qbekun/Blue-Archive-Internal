#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_MEMORYLOBBYDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B88560)
#define MX_DATA_EXCEL_MEMORYLOBBYDBSCHEMA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1B88570)
#define MX_DATA_EXCEL_MEMORYLOBBYDBSCHEMA_SET_ID_OFFSET UNITYSDK_OFFSET(0x1B88580)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MemoryLobbyDBSchema_TypeDefinitionIndex = 18417;

	class MemoryLobbyDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _Id_k__BackingField; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MEMORYLOBBYDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MEMORYLOBBYDBSCHEMA_GET_ID_OFFSET))(nullptr);
		}

		::System::Void set_Id(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MEMORYLOBBYDBSCHEMA_SET_ID_OFFSET))(arg, nullptr);
		}

	};
}

