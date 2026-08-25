#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor { class NXPRedeemCouponInfo; }
namespace NPA::Editor { class NXPWebRedeemCouponInfo; }

#define NPA_EDITOR_COMMERCE_NXPCOMMERCESTANDALONE_REDEEMCOUPON_OFFSET UNITYSDK_OFFSET(0x9C4B640)
#define NPA_EDITOR_COMMERCE_NXPCOMMERCESTANDALONE_SHOWCOUPONREDEMPTIONWEB_OFFSET UNITYSDK_OFFSET(0x9C4B650)
#define NPA_EDITOR_COMMERCE_NXPCOMMERCESTANDALONE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C4B660)

namespace NPA::Editor::Commerce
{
	inline static constexpr unsigned int NXPCommerceStandalone_TypeDefinitionIndex = 26868;

	class NXPCommerceStandalone : public Il2CppObject
	{
	public:
		::System::Void RedeemCoupon(::NPA::Editor::NXPRedeemCouponInfo* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::Editor::NXPRedeemCouponInfo*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMERCE_NXPCOMMERCESTANDALONE_REDEEMCOUPON_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ShowCouponRedemptionWeb(::NPA::Editor::NXPWebRedeemCouponInfo* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::Editor::NXPWebRedeemCouponInfo*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMERCE_NXPCOMMERCESTANDALONE_SHOWCOUPONREDEMPTIONWEB_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMERCE_NXPCOMMERCESTANDALONE_.CTOR_OFFSET))(nullptr);
		}

	};
}

