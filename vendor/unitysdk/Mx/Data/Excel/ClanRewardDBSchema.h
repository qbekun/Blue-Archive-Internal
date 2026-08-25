#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class ClanRewardType; }

#define MX_DATA_EXCEL_CLANREWARDDBSCHEMA_SET_CLANREWARDTYPE_OFFSET UNITYSDK_OFFSET(0x1A4F0E0)
#define MX_DATA_EXCEL_CLANREWARDDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A4F0F0)
#define MX_DATA_EXCEL_CLANREWARDDBSCHEMA_GET_CLANREWARDTYPE_OFFSET UNITYSDK_OFFSET(0x1A4F100)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ClanRewardDBSchema_TypeDefinitionIndex = 17176;

	class ClanRewardDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::FlatData::ClanRewardType* _ClanRewardType_k__BackingField; // 0x20

		::System::Void set_ClanRewardType(::FlatData::ClanRewardType* arg)
		{
			((::System::Void(*)(::FlatData::ClanRewardType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CLANREWARDDBSCHEMA_SET_CLANREWARDTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CLANREWARDDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::FlatData::ClanRewardType* get_ClanRewardType()
		{
			return (return (::FlatData::ClanRewardType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CLANREWARDDBSCHEMA_GET_CLANREWARDTYPE_OFFSET))(nullptr);
		}

	};
}

