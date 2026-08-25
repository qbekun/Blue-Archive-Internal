#pragma once
#include "../../../../unitysdk.h"

namespace NPA::Ex::Steam { class NXPSteamAPICall_t; }
namespace NPA::Ex::Steam { class NXPSteamInventoryResult_t; }
namespace NPA::Ex::Steam { class NXPSteamInventoryResult_t&; }
namespace NPA::Ex::Steam { class NXPSteamItemDef_t; }
namespace NPA::Ex::Steam { class NXPCSteamID; }

#define NPA_EX_STEAM_NATIVE_NXPSTEAMINVENTORY_GETITEMDEFINITIONIDS_OFFSET UNITYSDK_OFFSET(0x9D38310)
#define NPA_EX_STEAM_NATIVE_NXPSTEAMINVENTORY_REQUESTPRICES_OFFSET UNITYSDK_OFFSET(0x9D38490)
#define NPA_EX_STEAM_NATIVE_NXPSTEAMINVENTORY_GETRESULTITEMS_OFFSET UNITYSDK_OFFSET(0x9D385D0)
#define NPA_EX_STEAM_NATIVE_NXPSTEAMINVENTORY_GETALLITEMS_OFFSET UNITYSDK_OFFSET(0x9D38750)
#define NPA_EX_STEAM_NATIVE_NXPSTEAMINVENTORY_DESTROYRESULT_OFFSET UNITYSDK_OFFSET(0x9D38870)
#define NPA_EX_STEAM_NATIVE_NXPSTEAMINVENTORY_STARTPURCHASE_OFFSET UNITYSDK_OFFSET(0x9D38990)
#define NPA_EX_STEAM_NATIVE_NXPSTEAMINVENTORY_LOADITEMDEFINITIONS_OFFSET UNITYSDK_OFFSET(0x9D38AF0)
#define NPA_EX_STEAM_NATIVE_NXPSTEAMINVENTORY_GETITEMPRICE_OFFSET UNITYSDK_OFFSET(0x9D38C00)
#define NPA_EX_STEAM_NATIVE_NXPSTEAMINVENTORY_GETELIGIBLEPROMOITEMDEFINITIONIDS_OFFSET UNITYSDK_OFFSET(0x9D38D30)
#define NPA_EX_STEAM_NATIVE_NXPSTEAMINVENTORY_REQUESTELIGIBLEPROMOITEMDEFINITIONSIDS_OFFSET UNITYSDK_OFFSET(0x9D38EB0)
#define NPA_EX_STEAM_NATIVE_NXPSTEAMINVENTORY_GETITEMDEFINITIONPROPERTY_OFFSET UNITYSDK_OFFSET(0x9D38FF0)

namespace NPA::Ex::Steam::Native
{
	inline static constexpr unsigned int NXPSteamInventory_TypeDefinitionIndex = 26080;

	class NXPSteamInventory : public Il2CppObject
	{
	public:
		::System::Boolean GetItemDefinitionIDs(::Il2CppArray<::System::Object*>* arg, uint32_t&* arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, uint32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NATIVE_NXPSTEAMINVENTORY_GETITEMDEFINITIONIDS_OFFSET))(arg, arg, nullptr);
		}

		::NPA::Ex::Steam::NXPSteamAPICall_t* RequestPrices()
		{
			return (return (::NPA::Ex::Steam::NXPSteamAPICall_t*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NATIVE_NXPSTEAMINVENTORY_REQUESTPRICES_OFFSET))(nullptr);
		}

		::System::Boolean GetResultItems(::NPA::Ex::Steam::NXPSteamInventoryResult_t* arg, ::Il2CppArray<::System::Object*>* arg, uint32_t&* arg)
		{
			return (return (::System::Boolean(*)(::NPA::Ex::Steam::NXPSteamInventoryResult_t*, ::Il2CppArray<::System::Object*>*, uint32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NATIVE_NXPSTEAMINVENTORY_GETRESULTITEMS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean GetAllItems(::NPA::Ex::Steam::NXPSteamInventoryResult_t&* arg)
		{
			return (return (::System::Boolean(*)(::NPA::Ex::Steam::NXPSteamInventoryResult_t&*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NATIVE_NXPSTEAMINVENTORY_GETALLITEMS_OFFSET))(arg, nullptr);
		}

		::System::Void DestroyResult(::NPA::Ex::Steam::NXPSteamInventoryResult_t* arg)
		{
			((::System::Void(*)(::NPA::Ex::Steam::NXPSteamInventoryResult_t*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NATIVE_NXPSTEAMINVENTORY_DESTROYRESULT_OFFSET))(arg, nullptr);
		}

		::NPA::Ex::Steam::NXPSteamAPICall_t* StartPurchase(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::System::UInt32 arg)
		{
			return (return (::NPA::Ex::Steam::NXPSteamAPICall_t*(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NATIVE_NXPSTEAMINVENTORY_STARTPURCHASE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean LoadItemDefinitions()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NATIVE_NXPSTEAMINVENTORY_LOADITEMDEFINITIONS_OFFSET))(nullptr);
		}

		::System::Boolean GetItemPrice(::NPA::Ex::Steam::NXPSteamItemDef_t* arg, uint64_t&* arg, uint64_t&* arg)
		{
			return (return (::System::Boolean(*)(::NPA::Ex::Steam::NXPSteamItemDef_t*, uint64_t&*, uint64_t&*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NATIVE_NXPSTEAMINVENTORY_GETITEMPRICE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean GetEligiblePromoItemDefinitionIDs(::NPA::Ex::Steam::NXPCSteamID* arg, ::Il2CppArray<::System::Object*>* arg, uint32_t&* arg)
		{
			return (return (::System::Boolean(*)(::NPA::Ex::Steam::NXPCSteamID*, ::Il2CppArray<::System::Object*>*, uint32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NATIVE_NXPSTEAMINVENTORY_GETELIGIBLEPROMOITEMDEFINITIONIDS_OFFSET))(arg, arg, arg, nullptr);
		}

		::NPA::Ex::Steam::NXPSteamAPICall_t* RequestEligiblePromoItemDefinitionsIDs(::NPA::Ex::Steam::NXPCSteamID* arg)
		{
			return (return (::NPA::Ex::Steam::NXPSteamAPICall_t*(*)(::NPA::Ex::Steam::NXPCSteamID*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NATIVE_NXPSTEAMINVENTORY_REQUESTELIGIBLEPROMOITEMDEFINITIONSIDS_OFFSET))(arg, nullptr);
		}

		::System::Boolean GetItemDefinitionProperty(::NPA::Ex::Steam::NXPSteamItemDef_t* arg, ::System::String* str, ::System::String&* arg, uint32_t&* arg)
		{
			return (return (::System::Boolean(*)(::NPA::Ex::Steam::NXPSteamItemDef_t*, ::System::String*, ::System::String&*, uint32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NATIVE_NXPSTEAMINVENTORY_GETITEMDEFINITIONPROPERTY_OFFSET))(arg, str, arg, arg, nullptr);
		}

	};
}

