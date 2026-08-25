#pragma once
#include "../../unitysdk.h"

namespace MX::Data { class ShiftingCraftRecipeExcelInfo; }
namespace MX::Data { class CraftNodeExcelInfo; }
namespace FlatData { class CraftNodeTier; }
namespace MX::Data { class ShiftingCraftRecipeExcelInfo&; }

#define MX_DATA_CRAFTDATA_GETCRAFTNODEEXCELINFOSBYTIER_OFFSET UNITYSDK_OFFSET(0x18B1A40)
#define MX_DATA_CRAFTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x18B1B50)
#define MX_DATA_CRAFTDATA_GETSHIFTINGCRAFTRECIPEEXCELINFO_OFFSET UNITYSDK_OFFSET(0x18B1C70)
#define MX_DATA_CRAFTDATA_GETBASENODEINFO_OFFSET UNITYSDK_OFFSET(0x18B1CF0)
#define MX_DATA_CRAFTDATA_TRYGETCRAFTNODETAGSBYTIER_OFFSET UNITYSDK_OFFSET(0x18B1E20)
#define MX_DATA_CRAFTDATA_GET_CRAFTTICKETCONSUMEAMOUNT_OFFSET UNITYSDK_OFFSET(0x18B1E80)
#define MX_DATA_CRAFTDATA_GETSHIFTINGCRAFTRECIPEEXCELINFOLIST_OFFSET UNITYSDK_OFFSET(0x18B1F10)
#define MX_DATA_CRAFTDATA_TRYGETSHIFTINGCRAFTRECIPEEXCELINFO_OFFSET UNITYSDK_OFFSET(0x18B1F60)
#define MX_DATA_CRAFTDATA_GETSHIFTINGCRAFTLIST_OFFSET UNITYSDK_OFFSET(0x18B1FC0)
#define MX_DATA_CRAFTDATA_GETCRAFTNODEAPPEARANCEPROBTABLE_OFFSET UNITYSDK_OFFSET(0x18B2110)
#define MX_DATA_CRAFTDATA_VALIDATE_OFFSET UNITYSDK_OFFSET(0x18B2510)
#define MX_DATA_CRAFTDATA_PREPAREINITIALDATA_OFFSET UNITYSDK_OFFSET(0x18B2A90)
#define MX_DATA_CRAFTDATA_GET_GACHACRAFTNODEEXCELINFOS_OFFSET UNITYSDK_OFFSET(0x18B3FA0)
#define MX_DATA_CRAFTDATA_GETBASENODEID_OFFSET UNITYSDK_OFFSET(0x18B3FF0)
#define MX_DATA_CRAFTDATA_GET_CRAFTTICKETUNIQUEID_OFFSET UNITYSDK_OFFSET(0x18B4120)
#define MX_DATA_CRAFTDATA_GETCRAFTNODEEXCELINFO_OFFSET UNITYSDK_OFFSET(0x18B41B0)
#define MX_DATA_CRAFTDATA_REQUIREDEXP_OFFSET UNITYSDK_OFFSET(0x18B4220)
#define MX_DATA_CRAFTDATA_INITIALIZECOMMON_OFFSET UNITYSDK_OFFSET(0x18B4300)

namespace MX::Data
{
	inline static constexpr unsigned int CraftData_TypeDefinitionIndex = 16044;

	class CraftData : public Il2CppObject
	{
	public:
		Il2CppObject* gachaCraftNodeExcelInfoDic; // 0x28
		Il2CppObject* shiftingCraftRecipeExcelInfoDic; // 0x30
		Il2CppObject* gachaCraftNodeTagsDict; // 0x38

		Il2CppObject* GetCraftNodeExcelInfosByTier(::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CRAFTDATA_GETCRAFTNODEEXCELINFOSBYTIER_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CRAFTDATA_.CTOR_OFFSET))(nullptr);
		}

		::MX::Data::ShiftingCraftRecipeExcelInfo* GetShiftingCraftRecipeExcelInfo(::System::Int64 arg)
		{
			return (return (::MX::Data::ShiftingCraftRecipeExcelInfo*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CRAFTDATA_GETSHIFTINGCRAFTRECIPEEXCELINFO_OFFSET))(arg, nullptr);
		}

		::MX::Data::CraftNodeExcelInfo* GetBaseNodeInfo()
		{
			return (return (::MX::Data::CraftNodeExcelInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CRAFTDATA_GETBASENODEINFO_OFFSET))(nullptr);
		}

		::System::Boolean TryGetCraftNodeTagsByTier(::FlatData::CraftNodeTier* arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::FlatData::CraftNodeTier*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CRAFTDATA_TRYGETCRAFTNODETAGSBYTIER_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_CraftTicketConsumeAmount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CRAFTDATA_GET_CRAFTTICKETCONSUMEAMOUNT_OFFSET))(nullptr);
		}

		Il2CppObject* GetShiftingCraftRecipeExcelInfoList()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CRAFTDATA_GETSHIFTINGCRAFTRECIPEEXCELINFOLIST_OFFSET))(nullptr);
		}

		::System::Boolean TryGetShiftingCraftRecipeExcelInfo(::System::Int64 arg, ::MX::Data::ShiftingCraftRecipeExcelInfo&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::ShiftingCraftRecipeExcelInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CRAFTDATA_TRYGETSHIFTINGCRAFTRECIPEEXCELINFO_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetShiftingCraftList()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CRAFTDATA_GETSHIFTINGCRAFTLIST_OFFSET))(nullptr);
		}

		Il2CppObject* GetCraftNodeAppearanceProbTable(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CRAFTDATA_GETCRAFTNODEAPPEARANCEPROBTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void Validate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CRAFTDATA_VALIDATE_OFFSET))(nullptr);
		}

		::System::Void PrepareInitialData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CRAFTDATA_PREPAREINITIALDATA_OFFSET))(nullptr);
		}

		Il2CppObject* get_GachaCraftNodeExcelInfos()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CRAFTDATA_GET_GACHACRAFTNODEEXCELINFOS_OFFSET))(nullptr);
		}

		::System::Int64 GetBaseNodeId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CRAFTDATA_GETBASENODEID_OFFSET))(nullptr);
		}

		::System::Int64 get_CraftTicketUniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CRAFTDATA_GET_CRAFTTICKETUNIQUEID_OFFSET))(nullptr);
		}

		::MX::Data::CraftNodeExcelInfo* GetCraftNodeExcelInfo(::System::Int64 arg)
		{
			return (return (::MX::Data::CraftNodeExcelInfo*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CRAFTDATA_GETCRAFTNODEEXCELINFO_OFFSET))(arg, nullptr);
		}

		::System::Int64 RequiredExp(::FlatData::CraftNodeTier* arg)
		{
			return (return (::System::Int64(*)(::FlatData::CraftNodeTier*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CRAFTDATA_REQUIREDEXP_OFFSET))(arg, nullptr);
		}

		::System::Void InitializeCommon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CRAFTDATA_INITIALIZECOMMON_OFFSET))(nullptr);
		}

	};
}

