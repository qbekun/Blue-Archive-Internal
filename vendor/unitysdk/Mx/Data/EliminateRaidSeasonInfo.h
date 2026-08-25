#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class EliminateRaidSeasonManageExcel; }
namespace FlatData { class ContentType; }

#define MX_DATA_ELIMINATERAIDSEASONINFO_GET_LIMITEDREWARDTABLE_OFFSET UNITYSDK_OFFSET(0x183CF10)
#define MX_DATA_ELIMINATERAIDSEASONINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x183CF20)
#define MX_DATA_ELIMINATERAIDSEASONINFO_SET_LOBBYTABLEBGPATH_OFFSET UNITYSDK_OFFSET(0x183D5B0)
#define MX_DATA_ELIMINATERAIDSEASONINFO_SET_LIMITEDREWARDTABLE_OFFSET UNITYSDK_OFFSET(0x183D5C0)
#define MX_DATA_ELIMINATERAIDSEASONINFO_GET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x183D5D0)
#define MX_DATA_ELIMINATERAIDSEASONINFO_SET_LOBBYSCREENBGPATH_OFFSET UNITYSDK_OFFSET(0x183D5E0)
#define MX_DATA_ELIMINATERAIDSEASONINFO_GET_LOBBYTABLEBGPATH_OFFSET UNITYSDK_OFFSET(0x183D5F0)
#define MX_DATA_ELIMINATERAIDSEASONINFO_GET_LOBBYSCREENBGPATH_OFFSET UNITYSDK_OFFSET(0x183D600)

namespace MX::Data
{
	inline static constexpr unsigned int EliminateRaidSeasonInfo_TypeDefinitionIndex = 15775;

	class EliminateRaidSeasonInfo : public Il2CppObject
	{
	public:
		::System::String* _LobbyScreenBGPath_k__BackingField; // 0x60
		::System::String* _LobbyTableBGPath_k__BackingField; // 0x68
		Il2CppObject* _LimitedRewardTable_k__BackingField; // 0x70

		Il2CppObject* get_LimitedRewardTable()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ELIMINATERAIDSEASONINFO_GET_LIMITEDREWARDTABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::EliminateRaidSeasonManageExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::EliminateRaidSeasonManageExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ELIMINATERAIDSEASONINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void set_LobbyTableBGPath(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ELIMINATERAIDSEASONINFO_SET_LOBBYTABLEBGPATH_OFFSET))(str, nullptr);
		}

		::System::Void set_LimitedRewardTable(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ELIMINATERAIDSEASONINFO_SET_LIMITEDREWARDTABLE_OFFSET))(arg, nullptr);
		}

		::FlatData::ContentType* get_ContentType()
		{
			return (return (::FlatData::ContentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ELIMINATERAIDSEASONINFO_GET_CONTENTTYPE_OFFSET))(nullptr);
		}

		::System::Void set_LobbyScreenBGPath(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ELIMINATERAIDSEASONINFO_SET_LOBBYSCREENBGPATH_OFFSET))(str, nullptr);
		}

		::System::String* get_LobbyTableBGPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ELIMINATERAIDSEASONINFO_GET_LOBBYTABLEBGPATH_OFFSET))(nullptr);
		}

		::System::String* get_LobbyScreenBGPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ELIMINATERAIDSEASONINFO_GET_LOBBYSCREENBGPATH_OFFSET))(nullptr);
		}

	};
}

