#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class CraftNodeTier; }

#define MX_DATA_EXCEL_GACHACRAFTOPENTAGDBSCHEMA_GET_NODETIER_OFFSET UNITYSDK_OFFSET(0x1B33D90)
#define MX_DATA_EXCEL_GACHACRAFTOPENTAGDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B33DA0)
#define MX_DATA_EXCEL_GACHACRAFTOPENTAGDBSCHEMA_SET_NODETIER_OFFSET UNITYSDK_OFFSET(0x1B33DB0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int GachaCraftOpenTagDBSchema_TypeDefinitionIndex = 18067;

	class GachaCraftOpenTagDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::FlatData::CraftNodeTier* _NodeTier_k__BackingField; // 0x20

		::FlatData::CraftNodeTier* get_NodeTier()
		{
			return (return (::FlatData::CraftNodeTier*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHACRAFTOPENTAGDBSCHEMA_GET_NODETIER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHACRAFTOPENTAGDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_NodeTier(::FlatData::CraftNodeTier* arg)
		{
			((::System::Void(*)(::FlatData::CraftNodeTier*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHACRAFTOPENTAGDBSCHEMA_SET_NODETIER_OFFSET))(arg, nullptr);
		}

	};
}

