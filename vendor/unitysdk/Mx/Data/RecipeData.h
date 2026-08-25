#pragma once
#include "../../unitysdk.h"

namespace MX::Data { class RecipeIngredientInfo; }
namespace MX::Data::Excel { class RecipeIngredientExcel&; }
namespace MX::GameLogic::Parcel { class ParcelKeyPair; }
namespace MX::Data { class RecipeInfo; }
namespace MX::Data { class RecipeInfo&; }
namespace MX::Data { class RecipeIngredientInfo&; }

#define MX_DATA_RECIPEDATA_HASCRAFTDATA_OFFSET UNITYSDK_OFFSET(0x1931170)
#define MX_DATA_RECIPEDATA_INITIALIZECOMMON_OFFSET UNITYSDK_OFFSET(0x19311C0)
#define MX_DATA_RECIPEDATA_GETINGREDIENTDATA_OFFSET UNITYSDK_OFFSET(0x1932A20)
#define MX_DATA_RECIPEDATA_TRYGETRECIPEINGREDIENTEXCEL_OFFSET UNITYSDK_OFFSET(0x1932A70)
#define MX_DATA_RECIPEDATA_TRYGETSELECTIONPRIORITYDICTFORTARGETITEM_OFFSET UNITYSDK_OFFSET(0x1932AD0)
#define MX_DATA_RECIPEDATA_GETCRAFTDATA_OFFSET UNITYSDK_OFFSET(0x1932B30)
#define MX_DATA_RECIPEDATA_HASINGREDIENTDATA_OFFSET UNITYSDK_OFFSET(0x1932B80)
#define MX_DATA_RECIPEDATA_TRYGETCRAFTDATA_OFFSET UNITYSDK_OFFSET(0x1932BD0)
#define MX_DATA_RECIPEDATA_TRYGETINGREDIENTDATA_OFFSET UNITYSDK_OFFSET(0x1932C30)
#define MX_DATA_RECIPEDATA_PREPAREINITIALDATA_OFFSET UNITYSDK_OFFSET(0x19312D0)
#define MX_DATA_RECIPEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1932CA0)
#define MX_DATA_RECIPEDATA_PREPROCESSCOMMON_OFFSET UNITYSDK_OFFSET(0x1932E60)

namespace MX::Data
{
	inline static constexpr unsigned int RecipeData_TypeDefinitionIndex = 16333;

	class RecipeData : public Il2CppObject
	{
	public:
		Il2CppObject* recipeCraftDataDictionary; // 0x28
		Il2CppObject* recipeIngredientInfoDictionary; // 0x30
		Il2CppObject* recipeIngredientExcelDictionary; // 0x38
		Il2CppObject* recipeSelectionGroupExcelList; // 0x40
		Il2CppObject* targetParcelToSelectionPriority; // 0x48

		::System::Boolean HasCraftData(::System::Int64 arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RECIPEDATA_HASCRAFTDATA_OFFSET))(arg, nullptr);
		}

		::System::Void InitializeCommon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RECIPEDATA_INITIALIZECOMMON_OFFSET))(nullptr);
		}

		::MX::Data::RecipeIngredientInfo* GetIngredientData(::System::Int64 arg)
		{
			return (return (::MX::Data::RecipeIngredientInfo*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RECIPEDATA_GETINGREDIENTDATA_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetRecipeIngredientExcel(::System::Int64 arg, ::MX::Data::Excel::RecipeIngredientExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::Excel::RecipeIngredientExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RECIPEDATA_TRYGETRECIPEINGREDIENTEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetSelectionPriorityDictForTargetItem(::MX::GameLogic::Parcel::ParcelKeyPair* arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::MX::GameLogic::Parcel::ParcelKeyPair*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RECIPEDATA_TRYGETSELECTIONPRIORITYDICTFORTARGETITEM_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::RecipeInfo* GetCraftData(::System::Int64 arg)
		{
			return (return (::MX::Data::RecipeInfo*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RECIPEDATA_GETCRAFTDATA_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasIngredientData(::System::Int64 arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RECIPEDATA_HASINGREDIENTDATA_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetCraftData(::System::Int64 arg, ::MX::Data::RecipeInfo&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::RecipeInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RECIPEDATA_TRYGETCRAFTDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetIngredientData(::System::Int64 arg, ::MX::Data::RecipeIngredientInfo&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::RecipeIngredientInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RECIPEDATA_TRYGETINGREDIENTDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Void PrepareInitialData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RECIPEDATA_PREPAREINITIALDATA_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RECIPEDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void PreprocessCommon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RECIPEDATA_PREPROCESSCOMMON_OFFSET))(nullptr);
		}

	};
}

