#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelKeyPair; }
namespace FlatData { class ParcelType; }

#define MX_DATA_RECIPERESULTINFO_SET_RESULTAMOUNTMAX_OFFSET UNITYSDK_OFFSET(0x185AF70)
#define MX_DATA_RECIPERESULTINFO_GET_RESULTAMOUNTMIN_OFFSET UNITYSDK_OFFSET(0x185AF80)
#define MX_DATA_RECIPERESULTINFO_SET_RESULTAMOUNTMIN_OFFSET UNITYSDK_OFFSET(0x185AF90)
#define MX_DATA_RECIPERESULTINFO_GET_KEY_OFFSET UNITYSDK_OFFSET(0x185AFA0)
#define MX_DATA_RECIPERESULTINFO_GET_RESULTAMOUNTMAX_OFFSET UNITYSDK_OFFSET(0x185AFB0)
#define MX_DATA_RECIPERESULTINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x185AFC0)
#define MX_DATA_RECIPERESULTINFO_SET_KEY_OFFSET UNITYSDK_OFFSET(0x185B020)

namespace MX::Data
{
	inline static constexpr unsigned int RecipeResultInfo_TypeDefinitionIndex = 15883;

	class RecipeResultInfo : public Il2CppObject
	{
	public:
		::MX::GameLogic::Parcel::ParcelKeyPair* _Key_k__BackingField; // 0x10
		::System::Int64 _ResultAmountMin_k__BackingField; // 0x20
		::System::Int64 _ResultAmountMax_k__BackingField; // 0x28

		::System::Void set_ResultAmountMax(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RECIPERESULTINFO_SET_RESULTAMOUNTMAX_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_ResultAmountMin()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RECIPERESULTINFO_GET_RESULTAMOUNTMIN_OFFSET))(nullptr);
		}

		::System::Void set_ResultAmountMin(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RECIPERESULTINFO_SET_RESULTAMOUNTMIN_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelKeyPair* get_Key()
		{
			return (return (::MX::GameLogic::Parcel::ParcelKeyPair*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RECIPERESULTINFO_GET_KEY_OFFSET))(nullptr);
		}

		::System::Int64 get_ResultAmountMax()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RECIPERESULTINFO_GET_RESULTAMOUNTMAX_OFFSET))(nullptr);
		}

		::System::Void .ctor(::FlatData::ParcelType* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatData::ParcelType*, ::System::Int64, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RECIPERESULTINFO_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void set_Key(::MX::GameLogic::Parcel::ParcelKeyPair* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelKeyPair*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RECIPERESULTINFO_SET_KEY_OFFSET))(arg, nullptr);
		}

	};
}

