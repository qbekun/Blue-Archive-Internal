#pragma once
#include "unitysdk.h"

namespace FlatData { class RewardTag; }
namespace MX::GameLogic::Parcel { class ParcelInfo; }

#define <>C__DISPLAYCLASS79_1_.CTOR_OFFSET UNITYSDK_OFFSET(0xACD660)
#define <>C__DISPLAYCLASS79_1__SETPRODUCTREWARDLIST_B__5_OFFSET UNITYSDK_OFFSET(0xAD1750)

	inline static constexpr unsigned int <>c__DisplayClass79_1_TypeDefinitionIndex = 8054;

	class <>c__DisplayClass79_1 : public Il2CppObject
	{
	public:
		::FlatData::RewardTag* productDailyRewardTag; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS79_1_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* _SetProductRewardList_b__5(::MX::GameLogic::Parcel::ParcelInfo* arg)
		{
			return ((Il2CppObject*(*)(::MX::GameLogic::Parcel::ParcelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS79_1__SETPRODUCTREWARDLIST_B__5_OFFSET))(arg, nullptr);
		}

	};

