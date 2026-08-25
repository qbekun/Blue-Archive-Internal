#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelInfo; }
class UIRewardPopup;

#define <>C__DISPLAYCLASS78_1_.CTOR_OFFSET UNITYSDK_OFFSET(0x24450D0)
#define <>C__DISPLAYCLASS78_1__EVENTCHANGEPRODUCTION_B__1_OFFSET UNITYSDK_OFFSET(0x2445150)

	inline static constexpr unsigned int <>c__DisplayClass78_1_TypeDefinitionIndex = 5526;

	class <>c__DisplayClass78_1 : public Il2CppObject
	{
	public:
		::MX::GameLogic::Parcel::ParcelInfo* subRewardParcel; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS78_1_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _EventChangeProduction_b__1(UIRewardPopup* arg)
		{
			((::System::Void(*)(UIRewardPopup*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS78_1__EVENTCHANGEPRODUCTION_B__1_OFFSET))(arg, nullptr);
		}

	};

