#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::Parcel { class CurrencySnapshot; }
namespace MX::GameLogic::Parcel { class ParcelCost; }
namespace MX::Core::Math { class IRandomService; }

#define MX_GAMELOGIC_SERVICE_RECIPESERVICE_CHECKRECIPEINGREDIENTWITHFILTEREDDBS_OFFSET UNITYSDK_OFFSET(0xFC6880)
#define MX_GAMELOGIC_SERVICE_RECIPESERVICE_CRAFTCOST_OFFSET UNITYSDK_OFFSET(0xFC69A0)
#define MX_GAMELOGIC_SERVICE_RECIPESERVICE_CREATECRAFTRESULTPARCEL_OFFSET UNITYSDK_OFFSET(0xFC6A80)
#define MX_GAMELOGIC_SERVICE_RECIPESERVICE_CHECKRECIPEINGREDIENT_OFFSET UNITYSDK_OFFSET(0xFC6EA0)

namespace MX::GameLogic::Service
{
	inline static constexpr unsigned int RecipeService_TypeDefinitionIndex = 12408;

	class RecipeService : public Il2CppObject
	{
	public:
		::System::Boolean CheckRecipeIngredientWithFilteredDBs(::System::Int64 arg, ::MX::GameLogic::Parcel::CurrencySnapshot* arg2, Il2CppObject* arg3, Il2CppObject* arg4, Il2CppObject* arg5)
		{
			return ((::System::Boolean(*)(::System::Int64, ::MX::GameLogic::Parcel::CurrencySnapshot*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_RECIPESERVICE_CHECKRECIPEINGREDIENTWITHFILTEREDDBS_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelCost* CraftCost(::System::Int64 arg)
		{
			return ((::MX::GameLogic::Parcel::ParcelCost*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_RECIPESERVICE_CRAFTCOST_OFFSET))(arg, nullptr);
		}

		Il2CppObject* CreateCraftResultParcel(::MX::Core::Math::IRandomService* arg, Il2CppObject* arg2)
		{
			return ((Il2CppObject*(*)(::MX::Core::Math::IRandomService*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_RECIPESERVICE_CREATECRAFTRESULTPARCEL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean CheckRecipeIngredient(::System::Int64 arg, ::MX::GameLogic::Parcel::CurrencySnapshot* arg2, Il2CppObject* arg3, Il2CppObject* arg4, Il2CppObject* arg5)
		{
			return ((::System::Boolean(*)(::System::Int64, ::MX::GameLogic::Parcel::CurrencySnapshot*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_RECIPESERVICE_CHECKRECIPEINGREDIENT_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

	};
}

