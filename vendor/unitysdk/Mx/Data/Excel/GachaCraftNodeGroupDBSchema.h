#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_GACHACRAFTNODEGROUPDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B32BE0)
#define MX_DATA_EXCEL_GACHACRAFTNODEGROUPDBSCHEMA_GET_NODEID_OFFSET UNITYSDK_OFFSET(0x1B32BF0)
#define MX_DATA_EXCEL_GACHACRAFTNODEGROUPDBSCHEMA_SET_NODEID_OFFSET UNITYSDK_OFFSET(0x1B32C00)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int GachaCraftNodeGroupDBSchema_TypeDefinitionIndex = 18060;

	class GachaCraftNodeGroupDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _NodeId_k__BackingField; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHACRAFTNODEGROUPDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_NodeId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHACRAFTNODEGROUPDBSCHEMA_GET_NODEID_OFFSET))(nullptr);
		}

		::System::Void set_NodeId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHACRAFTNODEGROUPDBSCHEMA_SET_NODEID_OFFSET))(arg, nullptr);
		}

	};
}

