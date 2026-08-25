#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor { class NXPRedeemCouponInfo; }
namespace NPA::Editor { class NXPWebRedeemCouponInfo; }

#define NPA_EDITOR_COMMERCE_INXPCOMMERCE_REDEEMCOUPON_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_COMMERCE_INXPCOMMERCE_SHOWCOUPONREDEMPTIONWEB_OFFSET UNITYSDK_OFFSET(0x000000)

namespace NPA::Editor::Commerce
{
	inline static constexpr unsigned int INXPCommerce_TypeDefinitionIndex = 26864;

	class INXPCommerce : public Il2CppObject
	{
	public:
		::System::Void RedeemCoupon(::NPA::Editor::NXPRedeemCouponInfo* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::Editor::NXPRedeemCouponInfo*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMERCE_INXPCOMMERCE_REDEEMCOUPON_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ShowCouponRedemptionWeb(::NPA::Editor::NXPWebRedeemCouponInfo* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::Editor::NXPWebRedeemCouponInfo*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMERCE_INXPCOMMERCE_SHOWCOUPONREDEMPTIONWEB_OFFSET))(arg, arg, nullptr);
		}

	};
}

