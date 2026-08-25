#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class ArenaRewardType; }

#define MX_DATA_EXCEL_ARENAREWARDDBSCHEMA_GET_ARENAREWARDTYPE_OFFSET UNITYSDK_OFFSET(0x19D3950)
#define MX_DATA_EXCEL_ARENAREWARDDBSCHEMA_SET_ARENAREWARDTYPE_OFFSET UNITYSDK_OFFSET(0x19D3960)
#define MX_DATA_EXCEL_ARENAREWARDDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x19D3970)
#define MX_DATA_EXCEL_ARENAREWARDDBSCHEMA_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x19D3980)
#define MX_DATA_EXCEL_ARENAREWARDDBSCHEMA_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x19D3990)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ArenaRewardDBSchema_TypeDefinitionIndex = 16659;

	class ArenaRewardDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _UniqueId_k__BackingField; // 0x20
		::FlatData::ArenaRewardType* _ArenaRewardType_k__BackingField; // 0x28

		::FlatData::ArenaRewardType* get_ArenaRewardType()
		{
			return (return (::FlatData::ArenaRewardType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENAREWARDDBSCHEMA_GET_ARENAREWARDTYPE_OFFSET))(nullptr);
		}

		::System::Void set_ArenaRewardType(::FlatData::ArenaRewardType* arg)
		{
			((::System::Void(*)(::FlatData::ArenaRewardType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENAREWARDDBSCHEMA_SET_ARENAREWARDTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENAREWARDDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENAREWARDDBSCHEMA_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::Void set_UniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENAREWARDDBSCHEMA_SET_UNIQUEID_OFFSET))(arg, nullptr);
		}

	};
}

