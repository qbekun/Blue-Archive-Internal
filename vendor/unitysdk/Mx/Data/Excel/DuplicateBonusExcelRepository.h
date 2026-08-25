#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_DUPLICATEBONUSEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1A7CAC0)
#define MX_DATA_EXCEL_DUPLICATEBONUSEXCELREPOSITORY_SELECTFIRST_ITEMID_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x1A7CC30)
#define MX_DATA_EXCEL_DUPLICATEBONUSEXCELREPOSITORY_SELECT_ITEMID_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x1A7D030)
#define MX_DATA_EXCEL_DUPLICATEBONUSEXCELREPOSITORY_SELECT_ITEMID_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x1A7D410)
#define MX_DATA_EXCEL_DUPLICATEBONUSEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A7D9B0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int DuplicateBonusExcelRepository_TypeDefinitionIndex = 17377;

	class DuplicateBonusExcelRepository : public ::FlatData::ShopRefreshPeriodType
	{
	public:
		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_DUPLICATEBONUSEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SelectFirst_ItemId_CharacterId(::System::Int64 arg, ::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_DUPLICATEBONUSEXCELREPOSITORY_SELECTFIRST_ITEMID_CHARACTERID_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_ItemId_CharacterId(::System::Int64 arg, ::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_DUPLICATEBONUSEXCELREPOSITORY_SELECT_ITEMID_CHARACTERID_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_ItemId_CharacterId(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_DUPLICATEBONUSEXCELREPOSITORY_SELECT_ITEMID_CHARACTERID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_DUPLICATEBONUSEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

