#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::DBModel { class FurnitureDB; }
namespace MX::GameLogic::DBModel { class CafeDB; }
class CafeCharacterDB;
namespace MX::GameLogic::DBModel { class CharacterDB; }
namespace MX::GameLogic::DBModel { class ConsumeRequestDB; }
namespace MX::GameLogic::Parcel { class ParcelInfo; }
namespace MX::Data { class CafeData; }
namespace FlatData { class FurnitureLocation; }

#define MX_GAMELOGIC_SERVICE_CAFESERVICE_GET_CAFEAUTOCHARGEINTERVALMILLISEC_OFFSET UNITYSDK_OFFSET(0xF59960)
#define MX_GAMELOGIC_SERVICE_CAFESERVICE_GET_CAFEPRODUCTIONMULTIPLIER_OFFSET UNITYSDK_OFFSET(0xF599F0)
#define MX_GAMELOGIC_SERVICE_CAFESERVICE_SERIALIZEITEMCOORDINATE_OFFSET UNITYSDK_OFFSET(0xF59B00)
#define MX_GAMELOGIC_SERVICE_CAFESERVICE_DESERIALIZEITEMCOORDINATE_OFFSET UNITYSDK_OFFSET(0xF59BC0)
#define MX_GAMELOGIC_SERVICE_CAFESERVICE_FINDDEPLOIEDFURNITURESERVERID_OFFSET UNITYSDK_OFFSET(0xF59C70)
#define MX_GAMELOGIC_SERVICE_CAFESERVICE_GET_INTERACTCOOLTIME_OFFSET UNITYSDK_OFFSET(0xF5A240)
#define MX_GAMELOGIC_SERVICE_CAFESERVICE_GETINTERACTIONFAVOREXP_OFFSET UNITYSDK_OFFSET(0xF5A290)
#define MX_GAMELOGIC_SERVICE_CAFESERVICE_GETINTERACTABLECAFECHARACTER_OFFSET UNITYSDK_OFFSET(0xF5A3C0)
#define MX_GAMELOGIC_SERVICE_CAFESERVICE_GETINTERACTABLECAFECHARACTER_OFFSET UNITYSDK_OFFSET(0xF5A440)
#define MX_GAMELOGIC_SERVICE_CAFESERVICE_CANINTERACT_OFFSET UNITYSDK_OFFSET(0xF5A610)
#define MX_GAMELOGIC_SERVICE_CAFESERVICE_GETVISITCHARACTER_OFFSET UNITYSDK_OFFSET(0xF5A580)
#define MX_GAMELOGIC_SERVICE_CAFESERVICE_CANGIVEGIFTTOCHARACTER_OFFSET UNITYSDK_OFFSET(0xF5A720)
#define MX_GAMELOGIC_SERVICE_CAFESERVICE_CANGIVEGIFTTOCHARACTER_OFFSET UNITYSDK_OFFSET(0xF5A7A0)
#define MX_GAMELOGIC_SERVICE_CAFESERVICE_CALCGIVEGIFTTAGCOEFFICIENT_OFFSET UNITYSDK_OFFSET(0xF5AFD0)
#define MX_GAMELOGIC_SERVICE_CAFESERVICE_CALCGIVEGIFTTAGCOEFFICIENT_OFFSET UNITYSDK_OFFSET(0xF5AE80)
#define MX_GAMELOGIC_SERVICE_CAFESERVICE_ISINTERIOR_OFFSET UNITYSDK_OFFSET(0xF5B150)
#define MX_GAMELOGIC_SERVICE_CAFESERVICE_ISINTERIOR_OFFSET UNITYSDK_OFFSET(0xF5B260)
#define MX_GAMELOGIC_SERVICE_CAFESERVICE_ISINTERIOR_OFFSET UNITYSDK_OFFSET(0xF5B2F0)
#define MX_GAMELOGIC_SERVICE_CAFESERVICE_FINDPREVIOUSINTERIOR_OFFSET UNITYSDK_OFFSET(0xF5B340)
#define MX_GAMELOGIC_SERVICE_CAFESERVICE_GETFURNITURE_OFFSET UNITYSDK_OFFSET(0xF5B6D0)
#define MX_GAMELOGIC_SERVICE_CAFESERVICE_GETINTERIORFURNITUREDBS_OFFSET UNITYSDK_OFFSET(0xF5B7F0)
#define MX_GAMELOGIC_SERVICE_CAFESERVICE_GETEXTERIORFURNITUREDBS_OFFSET UNITYSDK_OFFSET(0xF5B940)
#define MX_GAMELOGIC_SERVICE_CAFESERVICE_GETINTERIORFURNITUREDBIDSBYSUBCATEGORY_OFFSET UNITYSDK_OFFSET(0xF5BA90)
#define MX_GAMELOGIC_SERVICE_CAFESERVICE_FILTERDEPLOYEDFURNITUREDBSORDERBYDEPLOYSEQUENCE_OFFSET UNITYSDK_OFFSET(0xF5BE70)
#define MX_GAMELOGIC_SERVICE_CAFESERVICE_CALCSETGROUPCOMFORTBONUS_OFFSET UNITYSDK_OFFSET(0xF5C0A0)
#define MX_GAMELOGIC_SERVICE_CAFESERVICE_APPLIABLESETGROUPSBYCOMFORTBONUS_OFFSET UNITYSDK_OFFSET(0xF5C840)
#define MX_GAMELOGIC_SERVICE_CAFESERVICE_APPLIABLESETGROUPSBYCOMFORTBONUS_OFFSET UNITYSDK_OFFSET(0xF5C210)
#define MX_GAMELOGIC_SERVICE_CAFESERVICE_APPLIABLESETGROUPSBYEXISTINGFURNITURECOUNT_OFFSET UNITYSDK_OFFSET(0xF5CF60)
#define MX_GAMELOGIC_SERVICE_CAFESERVICE_APPLIABLESETGROUPSBYEXISTINGFURNITURECOUNT_OFFSET UNITYSDK_OFFSET(0xF5CAA0)
#define MX_GAMELOGIC_SERVICE_CAFESERVICE_CALCCOMFORT_OFFSET UNITYSDK_OFFSET(0xF5D200)
#define MX_GAMELOGIC_SERVICE_CAFESERVICE_CALCCOMFORT_OFFSET UNITYSDK_OFFSET(0xF5D2B0)
#define MX_GAMELOGIC_SERVICE_CAFESERVICE_CALCCOMFORT_OFFSET UNITYSDK_OFFSET(0xF5D440)
#define MX_GAMELOGIC_SERVICE_CAFESERVICE_CALCCAFEPRODUCTIONPERHOUR_FORISSUE_OFFSET UNITYSDK_OFFSET(0xF5D630)
#define MX_GAMELOGIC_SERVICE_CAFESERVICE_CALCCAFEPRODUCTIONPERHOUR_FORISSUE_OFFSET UNITYSDK_OFFSET(0xF5D6B0)
#define MX_GAMELOGIC_SERVICE_CAFESERVICE_ISCAFERESETTIME_OFFSET UNITYSDK_OFFSET(0xF5DB90)
#define MX_GAMELOGIC_SERVICE_CAFESERVICE_APPLYTIMEBIASCAFERESET_OFFSET UNITYSDK_OFFSET(0xF5DC80)
#define MX_GAMELOGIC_SERVICE_CAFESERVICE_CANSUMMONCHARACTERBYCOOLTIME_OFFSET UNITYSDK_OFFSET(0xF5DD80)
#define MX_GAMELOGIC_SERVICE_CAFESERVICE_CANSUMMONCHARACTERBYCOOLTIME_OFFSET UNITYSDK_OFFSET(0xF5DE30)
#define MX_GAMELOGIC_SERVICE_CAFESERVICE_GETNEXTSUMMONTIME_OFFSET UNITYSDK_OFFSET(0xF5DFD0)
#define MX_GAMELOGIC_SERVICE_CAFESERVICE_GETNEXTSUMMONTIME_OFFSET UNITYSDK_OFFSET(0xF5DF50)
#define MX_GAMELOGIC_SERVICE_CAFESERVICE_GETMULTIPLIEDPRODUCTIONVALUES_FORISSUE_OFFSET UNITYSDK_OFFSET(0xF5E110)
#define MX_GAMELOGIC_SERVICE_CAFESERVICE_CREATECAFEPRODUCTION_OFFSET UNITYSDK_OFFSET(0xF5E660)
#define MX_GAMELOGIC_SERVICE_CAFESERVICE_TRYGETRANKUPANDRECIPEDATA_OFFSET UNITYSDK_OFFSET(0xF5EAC0)
#define MX_GAMELOGIC_SERVICE_CAFESERVICE_GETNEXTREFRESHTIME_OFFSET UNITYSDK_OFFSET(0xF5EC10)
#define MX_GAMELOGIC_SERVICE_CAFESERVICE_CALCCAFEPRODUCTIONPERHOUR2_OFFSET UNITYSDK_OFFSET(0xF5EDA0)
#define MX_GAMELOGIC_SERVICE_CAFESERVICE_CALCCAFEPRODUCTIONPERHOUR2_OFFSET UNITYSDK_OFFSET(0xF5EE20)
#define MX_GAMELOGIC_SERVICE_CAFESERVICE_GETMULTIPLIEDPRODUCTIONVALUES2_OFFSET UNITYSDK_OFFSET(0xF5F2D0)
#define MX_GAMELOGIC_SERVICE_CAFESERVICE_GETMULTIPLIEDPRODUCTIONVALUES2_OFFSET UNITYSDK_OFFSET(0xF5F330)
#define MX_GAMELOGIC_SERVICE_CAFESERVICE_GETACTUALVALUES_OFFSET UNITYSDK_OFFSET(0xF5FA60)
#define MX_GAMELOGIC_SERVICE_CAFESERVICE_GETACTUALVALUES_OFFSET UNITYSDK_OFFSET(0xF5FC90)
#define MX_GAMELOGIC_SERVICE_CAFESERVICE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF5FEC0)
#define MX_GAMELOGIC_SERVICE_CAFESERVICE_.CCTOR_OFFSET UNITYSDK_OFFSET(0xF5FED0)

namespace MX::GameLogic::Service
{
	inline static constexpr unsigned int CafeService_TypeDefinitionIndex = 12243;

	class CafeService : public Il2CppObject
	{
	public:
		::System::TimeSpan* cafeResetBias; // 0x0
		::System::DateTime* cafeResetTime; // 0x8

		::System::Int32 get_CafeAutoChargeIntervalMilliSec()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAFESERVICE_GET_CAFEAUTOCHARGEINTERVALMILLISEC_OFFSET))(nullptr);
		}

		::System::Int32 get_CafeProductionMultiplier()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAFESERVICE_GET_CAFEPRODUCTIONMULTIPLIER_OFFSET))(nullptr);
		}

		::System::String* SerializeItemCoordinate(::MX::GameLogic::DBModel::FurnitureDB* arg)
		{
			return ((::System::String*(*)(::MX::GameLogic::DBModel::FurnitureDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAFESERVICE_SERIALIZEITEMCOORDINATE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* DeserializeItemCoordinate(::System::String* str)
		{
			return ((Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAFESERVICE_DESERIALIZEITEMCOORDINATE_OFFSET))(str, nullptr);
		}

		::System::Int64 FindDeploiedFurnitureServerId(::MX::GameLogic::DBModel::CafeDB* arg, ::MX::GameLogic::DBModel::CafeDB* arg2)
		{
			return ((::System::Int64(*)(::MX::GameLogic::DBModel::CafeDB*, ::MX::GameLogic::DBModel::CafeDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAFESERVICE_FINDDEPLOIEDFURNITURESERVERID_OFFSET))(arg, arg2, nullptr);
		}

		::System::TimeSpan* get_InteractCooltime()
		{
			return ((::System::TimeSpan*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAFESERVICE_GET_INTERACTCOOLTIME_OFFSET))(nullptr);
		}

		::System::Int64 GetInteractionFavorExp(::System::Int64 arg)
		{
			return ((::System::Int64(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAFESERVICE_GETINTERACTIONFAVOREXP_OFFSET))(arg, nullptr);
		}

		CafeCharacterDB* GetInteractableCafeCharacter(::MX::GameLogic::DBModel::CafeDB* arg, ::System::Int64 arg2, ::System::DateTime* arg3)
		{
			return ((CafeCharacterDB*(*)(::MX::GameLogic::DBModel::CafeDB*, ::System::Int64, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAFESERVICE_GETINTERACTABLECAFECHARACTER_OFFSET))(arg, arg2, arg3, nullptr);
		}

		CafeCharacterDB* GetInteractableCafeCharacter(Il2CppObject* arg, ::System::Int64 arg2, ::System::DateTime* arg3)
		{
			return ((CafeCharacterDB*(*)(Il2CppObject*, ::System::Int64, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAFESERVICE_GETINTERACTABLECAFECHARACTER_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean CanInteract(::System::DateTime* arg, ::System::DateTime* arg2)
		{
			return ((::System::Boolean(*)(::System::DateTime*, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAFESERVICE_CANINTERACT_OFFSET))(arg, arg2, nullptr);
		}

		CafeCharacterDB* GetVisitCharacter(Il2CppObject* arg, ::System::Int64 arg2)
		{
			return ((CafeCharacterDB*(*)(Il2CppObject*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAFESERVICE_GETVISITCHARACTER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean CanGiveGiftToCharacter(::MX::GameLogic::DBModel::CafeDB* arg, ::MX::GameLogic::DBModel::CharacterDB* arg2, ::MX::GameLogic::DBModel::ConsumeRequestDB* arg3, Il2CppObject* arg4, Il2CppObject&* arg5, ::MX::GameLogic::Parcel::ParcelCost&* arg6)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::CafeDB*, ::MX::GameLogic::DBModel::CharacterDB*, ::MX::GameLogic::DBModel::ConsumeRequestDB*, Il2CppObject*, Il2CppObject&*, ::MX::GameLogic::Parcel::ParcelCost&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAFESERVICE_CANGIVEGIFTTOCHARACTER_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Boolean CanGiveGiftToCharacter(::MX::GameLogic::DBModel::CharacterDB* arg, ::MX::GameLogic::DBModel::ConsumeRequestDB* arg2, Il2CppObject* arg3, Il2CppObject&* arg4, ::MX::GameLogic::Parcel::ParcelCost&* arg5)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::CharacterDB*, ::MX::GameLogic::DBModel::ConsumeRequestDB*, Il2CppObject*, Il2CppObject&*, ::MX::GameLogic::Parcel::ParcelCost&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAFESERVICE_CANGIVEGIFTTOCHARACTER_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Int64 CalcGiveGiftTagCoefficient(::MX::GameLogic::Parcel::ParcelInfo* arg, ::System::Int64 arg2)
		{
			return ((::System::Int64(*)(::MX::GameLogic::Parcel::ParcelInfo*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAFESERVICE_CALCGIVEGIFTTAGCOEFFICIENT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 CalcGiveGiftTagCoefficient(Il2CppObject* arg, Il2CppObject* arg2, ::System::Int32 arg3)
		{
			return ((::System::Int64(*)(Il2CppObject*, Il2CppObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAFESERVICE_CALCGIVEGIFTTAGCOEFFICIENT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean IsInterior(::MX::GameLogic::DBModel::FurnitureDB* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::FurnitureDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAFESERVICE_ISINTERIOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsInterior(::MX::Data::CafeData* arg, ::MX::GameLogic::DBModel::FurnitureDB* arg2)
		{
			return ((::System::Boolean(*)(::MX::Data::CafeData*, ::MX::GameLogic::DBModel::FurnitureDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAFESERVICE_ISINTERIOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean IsInterior(::MX::Data::CafeData* arg, ::System::Int64 arg2)
		{
			return ((::System::Boolean(*)(::MX::Data::CafeData*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAFESERVICE_ISINTERIOR_OFFSET))(arg, arg2, nullptr);
		}

		::MX::GameLogic::DBModel::FurnitureDB* FindPreviousInterior(::MX::GameLogic::DBModel::CafeDB* arg, ::MX::GameLogic::DBModel::FurnitureDB* arg2)
		{
			return ((::MX::GameLogic::DBModel::FurnitureDB*(*)(::MX::GameLogic::DBModel::CafeDB*, ::MX::GameLogic::DBModel::FurnitureDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAFESERVICE_FINDPREVIOUSINTERIOR_OFFSET))(arg, arg2, nullptr);
		}

		::MX::GameLogic::DBModel::FurnitureDB* GetFurniture(::MX::GameLogic::DBModel::CafeDB* arg, ::System::Int64 arg2, ::FlatData::FurnitureLocation* arg3)
		{
			return ((::MX::GameLogic::DBModel::FurnitureDB*(*)(::MX::GameLogic::DBModel::CafeDB*, ::System::Int64, ::FlatData::FurnitureLocation*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAFESERVICE_GETFURNITURE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		Il2CppObject* GetInteriorFurnitureDBs(::MX::GameLogic::DBModel::CafeDB* arg)
		{
			return ((Il2CppObject*(*)(::MX::GameLogic::DBModel::CafeDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAFESERVICE_GETINTERIORFURNITUREDBS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetExteriorFurnitureDBs(::MX::GameLogic::DBModel::CafeDB* arg)
		{
			return ((Il2CppObject*(*)(::MX::GameLogic::DBModel::CafeDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAFESERVICE_GETEXTERIORFURNITUREDBS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetInteriorFurnitureDBIdsBySubcategory(::MX::GameLogic::DBModel::CafeDB* arg)
		{
			return ((Il2CppObject*(*)(::MX::GameLogic::DBModel::CafeDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAFESERVICE_GETINTERIORFURNITUREDBIDSBYSUBCATEGORY_OFFSET))(arg, nullptr);
		}

		Il2CppObject* FilterDeployedFurnitureDBsOrderByDeploySequence(::MX::GameLogic::DBModel::CafeDB* arg)
		{
			return ((Il2CppObject*(*)(::MX::GameLogic::DBModel::CafeDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAFESERVICE_FILTERDEPLOYEDFURNITUREDBSORDERBYDEPLOYSEQUENCE_OFFSET))(arg, nullptr);
		}

		::System::Int64 CalcSetGroupComfortBonus(Il2CppObject* arg)
		{
			return ((::System::Int64(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAFESERVICE_CALCSETGROUPCOMFORTBONUS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* AppliableSetGroupsByComfortBonus(::MX::GameLogic::DBModel::CafeDB* arg)
		{
			return ((Il2CppObject*(*)(::MX::GameLogic::DBModel::CafeDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAFESERVICE_APPLIABLESETGROUPSBYCOMFORTBONUS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* AppliableSetGroupsByComfortBonus(Il2CppObject* arg)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAFESERVICE_APPLIABLESETGROUPSBYCOMFORTBONUS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* AppliableSetGroupsByExistingFurnitureCount(::MX::GameLogic::DBModel::CafeDB* arg)
		{
			return ((Il2CppObject*(*)(::MX::GameLogic::DBModel::CafeDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAFESERVICE_APPLIABLESETGROUPSBYEXISTINGFURNITURECOUNT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* AppliableSetGroupsByExistingFurnitureCount(Il2CppObject* arg)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAFESERVICE_APPLIABLESETGROUPSBYEXISTINGFURNITURECOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int64 CalcComfort(::MX::GameLogic::DBModel::CafeDB* arg)
		{
			return ((::System::Int64(*)(::MX::GameLogic::DBModel::CafeDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAFESERVICE_CALCCOMFORT_OFFSET))(arg, nullptr);
		}

		::System::Int64 CalcComfort(::System::Int64 arg, ::System::Int64 arg2, Il2CppObject* arg3)
		{
			return ((::System::Int64(*)(::System::Int64, ::System::Int64, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAFESERVICE_CALCCOMFORT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Int64 CalcComfort(::System::Int64 arg, ::System::Int64 arg2, Il2CppObject* arg3)
		{
			return ((::System::Int64(*)(::System::Int64, ::System::Int64, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAFESERVICE_CALCCOMFORT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void CalcCafeProductionPerHour_ForIssue(::MX::GameLogic::DBModel::CafeDB* arg, ::System::Int64 arg2, Il2CppObject&* arg3, Il2CppObject&* arg4)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CafeDB*, ::System::Int64, Il2CppObject&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAFESERVICE_CALCCAFEPRODUCTIONPERHOUR_FORISSUE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void CalcCafeProductionPerHour_ForIssue(::System::Int64 arg, ::System::Int32 arg2, ::System::Int64 arg3, Il2CppObject&* arg4, Il2CppObject&* arg5)
		{
			((::System::Void(*)(::System::Int64, ::System::Int32, ::System::Int64, Il2CppObject&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAFESERVICE_CALCCAFEPRODUCTIONPERHOUR_FORISSUE_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Boolean IsCafeResetTime(::System::DateTime* arg, ::System::DateTime* arg2)
		{
			return ((::System::Boolean(*)(::System::DateTime*, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAFESERVICE_ISCAFERESETTIME_OFFSET))(arg, arg2, nullptr);
		}

		::System::DateTime* ApplyTimeBiasCafeReset(::System::DateTime* arg)
		{
			return ((::System::DateTime*(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAFESERVICE_APPLYTIMEBIASCAFERESET_OFFSET))(arg, nullptr);
		}

		::System::Boolean CanSummonCharacterByCoolTime(::MX::GameLogic::DBModel::CafeDB* arg, ::System::DateTime* arg2)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::CafeDB*, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAFESERVICE_CANSUMMONCHARACTERBYCOOLTIME_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean CanSummonCharacterByCoolTime(::System::DateTime* arg, ::System::DateTime* arg2)
		{
			return ((::System::Boolean(*)(::System::DateTime*, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAFESERVICE_CANSUMMONCHARACTERBYCOOLTIME_OFFSET))(arg, arg2, nullptr);
		}

		::System::DateTime* GetNextSummonTime(::MX::GameLogic::DBModel::CafeDB* arg)
		{
			return ((::System::DateTime*(*)(::MX::GameLogic::DBModel::CafeDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAFESERVICE_GETNEXTSUMMONTIME_OFFSET))(arg, nullptr);
		}

		::System::DateTime* GetNextSummonTime(::System::DateTime* arg)
		{
			return ((::System::DateTime*(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAFESERVICE_GETNEXTSUMMONTIME_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetMultipliedProductionValues_ForIssue(::MX::GameLogic::DBModel::CafeDB* arg, ::System::DateTime* arg2)
		{
			return ((Il2CppObject*(*)(::MX::GameLogic::DBModel::CafeDB*, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAFESERVICE_GETMULTIPLIEDPRODUCTIONVALUES_FORISSUE_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* CreateCafeProduction(Il2CppObject* arg)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAFESERVICE_CREATECAFEPRODUCTION_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetRankUpAndRecipeData(::MX::GameLogic::DBModel::CafeDB* arg, ::MX::Data::RecipeInfo&* arg2)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::CafeDB*, ::MX::Data::RecipeInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAFESERVICE_TRYGETRANKUPANDRECIPEDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::DateTime* GetNextRefreshTime(::System::DateTime* arg)
		{
			return ((::System::DateTime*(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAFESERVICE_GETNEXTREFRESHTIME_OFFSET))(arg, nullptr);
		}

		::System::Void CalcCafeProductionPerHour2(::MX::GameLogic::DBModel::CafeDB* arg, ::System::Int64 arg2, Il2CppObject&* arg3, Il2CppObject&* arg4)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CafeDB*, ::System::Int64, Il2CppObject&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAFESERVICE_CALCCAFEPRODUCTIONPERHOUR2_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void CalcCafeProductionPerHour2(::System::Int64 arg, ::System::Int32 arg2, ::System::Int64 arg3, Il2CppObject&* arg4, Il2CppObject&* arg5)
		{
			((::System::Void(*)(::System::Int64, ::System::Int32, ::System::Int64, Il2CppObject&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAFESERVICE_CALCCAFEPRODUCTIONPERHOUR2_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		Il2CppObject* GetMultipliedProductionValues2(::MX::GameLogic::DBModel::CafeDB* arg, ::System::DateTime* arg2)
		{
			return ((Il2CppObject*(*)(::MX::GameLogic::DBModel::CafeDB*, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAFESERVICE_GETMULTIPLIEDPRODUCTIONVALUES2_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* GetMultipliedProductionValues2(::MX::GameLogic::DBModel::CafeDB* arg, ::System::Int64 arg2, ::System::DateTime* arg3)
		{
			return ((Il2CppObject*(*)(::MX::GameLogic::DBModel::CafeDB*, ::System::Int64, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAFESERVICE_GETMULTIPLIEDPRODUCTIONVALUES2_OFFSET))(arg, arg2, arg3, nullptr);
		}

		Il2CppObject* GetActualValues(Il2CppObject* arg)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAFESERVICE_GETACTUALVALUES_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetActualValues(Il2CppObject* arg)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAFESERVICE_GETACTUALVALUES_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAFESERVICE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAFESERVICE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

