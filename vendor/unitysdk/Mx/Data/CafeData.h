#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class CafeInfoExcel&; }
namespace MX::GameLogic::Parcel { class ParcelInfo&; }
namespace FlatData { class Tag; }
namespace MX::Data { class CafeVisitIgnoreInfo&; }
namespace MX::Data { class CafeRankExcelInfo&; }
namespace MX::Data::Excel { class FurnitureExcel; }
namespace MX::Data::Excel { class FurnitureExcel&; }
namespace MX::Data::Excel { class TrophyCollectionExcel&; }
namespace MX::Data::Excel { class FurnitureGroupExcel&; }
namespace MX::Data::Excel { class FurnitureTemplateExcel&; }
namespace MX::Data::Excel { class CafeInteractionExcel&; }

#define MX_DATA_CAFEDATA_MAXCAFERANK_OFFSET UNITYSDK_OFFSET(0x187D3E0)
#define MX_DATA_CAFEDATA_PREPAREINITIALDATA_OFFSET UNITYSDK_OFFSET(0x187D5C0)
#define MX_DATA_CAFEDATA_TRYGETCAFEINFOEXCEL_OFFSET UNITYSDK_OFFSET(0x1880700)
#define MX_DATA_CAFEDATA_TRYGETFURNITURETAGS_OFFSET UNITYSDK_OFFSET(0x1880760)
#define MX_DATA_CAFEDATA_TRYGETINTERACTIONREWARD_OFFSET UNITYSDK_OFFSET(0x18807C0)
#define MX_DATA_CAFEDATA_GETFURNITUREINTERACTIONCHARACTERS_OFFSET UNITYSDK_OFFSET(0x1880820)
#define MX_DATA_CAFEDATA_GETFURNITUREIDLISTFROMTAG_OFFSET UNITYSDK_OFFSET(0x18808A0)
#define MX_DATA_CAFEDATA_TRYGETCAFEVISITIGNOREINFO_OFFSET UNITYSDK_OFFSET(0x1880C20)
#define MX_DATA_CAFEDATA_GET_FURNITUREKEYS_OFFSET UNITYSDK_OFFSET(0x1880C80)
#define MX_DATA_CAFEDATA_GETFURNITUREIDSTOGROUPID_OFFSET UNITYSDK_OFFSET(0x1880CD0)
#define MX_DATA_CAFEDATA_GET_TROPHYCOLLECTIONGROUPIDS_OFFSET UNITYSDK_OFFSET(0x1880F00)
#define MX_DATA_CAFEDATA_TRYGETCAFEPRODUCTIONTYPES_OFFSET UNITYSDK_OFFSET(0x1880F50)
#define MX_DATA_CAFEDATA_TRYGETCAFERANK_OFFSET UNITYSDK_OFFSET(0x1880FE0)
#define MX_DATA_CAFEDATA_GETFURNITURECOMFORT_OFFSET UNITYSDK_OFFSET(0x1881080)
#define MX_DATA_CAFEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1881150)
#define MX_DATA_CAFEDATA_GETFURNITURETAGS_OFFSET UNITYSDK_OFFSET(0x18815A0)
#define MX_DATA_CAFEDATA_GET_CAFERANKEXCELINFOS_OFFSET UNITYSDK_OFFSET(0x1881600)
#define MX_DATA_CAFEDATA_GET_CAFEOPENEXCELS_OFFSET UNITYSDK_OFFSET(0x1881650)
#define MX_DATA_CAFEDATA_GETFURNITURE_OFFSET UNITYSDK_OFFSET(0x18816A0)
#define MX_DATA_CAFEDATA_GET_FURNITUREEXCELS_OFFSET UNITYSDK_OFFSET(0x1881710)
#define MX_DATA_CAFEDATA_GET_INTERACTABLECHARACTERS_OFFSET UNITYSDK_OFFSET(0x1881760)
#define MX_DATA_CAFEDATA_TRYGETFURNITURE_OFFSET UNITYSDK_OFFSET(0x18810F0)
#define MX_DATA_CAFEDATA_TRYGETTROPHYCOLLECTIONEXCEL_OFFSET UNITYSDK_OFFSET(0x18817B0)
#define MX_DATA_CAFEDATA_TRYGETFURNITUREGROUP_OFFSET UNITYSDK_OFFSET(0x1881810)
#define MX_DATA_CAFEDATA_INITIALIZECOMMON_OFFSET UNITYSDK_OFFSET(0x1881870)
#define MX_DATA_CAFEDATA_GET_DEFAULTCAFEID_OFFSET UNITYSDK_OFFSET(0x1881AA0)
#define MX_DATA_CAFEDATA_TRYGETFURNITURETEMPLATEEXCEL_OFFSET UNITYSDK_OFFSET(0x1881AB0)
#define MX_DATA_CAFEDATA_GET_TEMPLATEEXCELS_OFFSET UNITYSDK_OFFSET(0x1881C00)
#define MX_DATA_CAFEDATA_GET_TROPHYCOLLECTIONEXCELS_OFFSET UNITYSDK_OFFSET(0x1881C50)
#define MX_DATA_CAFEDATA_TRYGETSUMMONTICKETCOST_OFFSET UNITYSDK_OFFSET(0x1881CA0)
#define MX_DATA_CAFEDATA_TRYGETINTERACTION_OFFSET UNITYSDK_OFFSET(0x1881DB0)

namespace MX::Data
{
	inline static constexpr unsigned int CafeData_TypeDefinitionIndex = 15982;

	class CafeData : public Il2CppObject
	{
	public:
		Il2CppObject* interactionTable; // 0x28
		Il2CppObject* interactionRewardTable; // 0x30
		Il2CppObject* furnitureInteractionStateTable; // 0x38
		Il2CppObject* _visitIgnoreTable; // 0x40
		Il2CppObject* cafeRanks; // 0x48
		Il2CppObject* cafeProductionTypes; // 0x50
		Il2CppObject* cafeInfoExcelDict; // 0x58
		::System::Int64 _defaultCafeId; // 0x60
		Il2CppObject* furnitureTable; // 0x68
		Il2CppObject* groupTable; // 0x70
		Il2CppObject* furnitureTags; // 0x78
		Il2CppObject* trophyCollectionTable; // 0x80
		Il2CppObject* furnitureTemplateTable; // 0x88
		Il2CppObject* furnitureTemplateElementTable; // 0x90

		::System::Int64 MaxCafeRank(::System::Int64 arg)
		{
			return (return (::System::Int64(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAFEDATA_MAXCAFERANK_OFFSET))(arg, nullptr);
		}

		::System::Void PrepareInitialData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAFEDATA_PREPAREINITIALDATA_OFFSET))(nullptr);
		}

		::System::Boolean TryGetCafeInfoExcel(::System::Int64 arg, ::MX::Data::Excel::CafeInfoExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::Excel::CafeInfoExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAFEDATA_TRYGETCAFEINFOEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetFurnitureTags(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAFEDATA_TRYGETFURNITURETAGS_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetInteractionReward(::System::Int64 arg, ::MX::GameLogic::Parcel::ParcelInfo&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::GameLogic::Parcel::ParcelInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAFEDATA_TRYGETINTERACTIONREWARD_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetFurnitureInteractionCharacters(::System::String* str)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAFEDATA_GETFURNITUREINTERACTIONCHARACTERS_OFFSET))(str, nullptr);
		}

		Il2CppObject* GetFurnitureIdListFromTag(::FlatData::Tag* arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::Tag*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAFEDATA_GETFURNITUREIDLISTFROMTAG_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetCafeVisitIgnoreInfo(::System::Int64 arg, ::MX::Data::CafeVisitIgnoreInfo&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::CafeVisitIgnoreInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAFEDATA_TRYGETCAFEVISITIGNOREINFO_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* get_FurnitureKeys()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAFEDATA_GET_FURNITUREKEYS_OFFSET))(nullptr);
		}

		Il2CppObject* GetFurnitureIdsToGroupId(::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAFEDATA_GETFURNITUREIDSTOGROUPID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_TrophyCollectionGroupIds()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAFEDATA_GET_TROPHYCOLLECTIONGROUPIDS_OFFSET))(nullptr);
		}

		::System::Boolean TryGetCafeProductionTypes(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAFEDATA_TRYGETCAFEPRODUCTIONTYPES_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetCafeRank(::System::Int64 arg, ::System::Int64 arg, ::MX::Data::CafeRankExcelInfo&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::System::Int64, ::MX::Data::CafeRankExcelInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAFEDATA_TRYGETCAFERANK_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int64 GetFurnitureComfort(::System::Int64 arg)
		{
			return (return (::System::Int64(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAFEDATA_GETFURNITURECOMFORT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAFEDATA_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* GetFurnitureTags(::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAFEDATA_GETFURNITURETAGS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_CafeRankExcelInfos()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAFEDATA_GET_CAFERANKEXCELINFOS_OFFSET))(nullptr);
		}

		Il2CppObject* get_CafeOpenExcels()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAFEDATA_GET_CAFEOPENEXCELS_OFFSET))(nullptr);
		}

		::MX::Data::Excel::FurnitureExcel* GetFurniture(::System::Int64 arg)
		{
			return (return (::MX::Data::Excel::FurnitureExcel*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAFEDATA_GETFURNITURE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_FurnitureExcels()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAFEDATA_GET_FURNITUREEXCELS_OFFSET))(nullptr);
		}

		Il2CppObject* get_InteractableCharacters()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAFEDATA_GET_INTERACTABLECHARACTERS_OFFSET))(nullptr);
		}

		::System::Boolean TryGetFurniture(::System::Int64 arg, ::MX::Data::Excel::FurnitureExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::Excel::FurnitureExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAFEDATA_TRYGETFURNITURE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetTrophyCollectionExcel(::System::Int64 arg, ::MX::Data::Excel::TrophyCollectionExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::Excel::TrophyCollectionExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAFEDATA_TRYGETTROPHYCOLLECTIONEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetFurnitureGroup(::System::Int64 arg, ::MX::Data::Excel::FurnitureGroupExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::Excel::FurnitureGroupExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAFEDATA_TRYGETFURNITUREGROUP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void InitializeCommon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAFEDATA_INITIALIZECOMMON_OFFSET))(nullptr);
		}

		::System::Int64 get_DefaultCafeId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAFEDATA_GET_DEFAULTCAFEID_OFFSET))(nullptr);
		}

		::System::Boolean TryGetFurnitureTemplateExcel(::System::Int64 arg, ::MX::Data::Excel::FurnitureTemplateExcel&* arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::Excel::FurnitureTemplateExcel&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAFEDATA_TRYGETFURNITURETEMPLATEEXCEL_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* get_TemplateExcels()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAFEDATA_GET_TEMPLATEEXCELS_OFFSET))(nullptr);
		}

		Il2CppObject* get_TrophyCollectionExcels()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAFEDATA_GET_TROPHYCOLLECTIONEXCELS_OFFSET))(nullptr);
		}

		::System::Boolean TryGetSummonTicketCost(::System::Int64 arg, ::MX::GameLogic::Parcel::ParcelInfo&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::GameLogic::Parcel::ParcelInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAFEDATA_TRYGETSUMMONTICKETCOST_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetInteraction(::System::Int64 arg, ::MX::Data::Excel::CafeInteractionExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::Excel::CafeInteractionExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAFEDATA_TRYGETINTERACTION_OFFSET))(arg, arg, nullptr);
		}

	};
}

