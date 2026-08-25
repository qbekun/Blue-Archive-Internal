#pragma once
#include "../../unitysdk.h"

namespace NPA::Editor { class NXPRedeemCouponInfo; }
namespace NPA::Editor { class NXPWebRedeemCouponInfo; }

#define NPA_EDITOR_NXPCOUPONPLUS_REDEEMCOUPON_OFFSET UNITYSDK_OFFSET(0x9D416E0)
#define NPA_EDITOR_NXPCOUPONPLUS_SHOWCOUPONREDEMPTIONWEB_OFFSET UNITYSDK_OFFSET(0x9D41B90)

namespace NPA::Editor
{
	inline static constexpr unsigned int NXPCouponPlus_TypeDefinitionIndex = 26133;

	class NXPCouponPlus : public Il2CppObject
	{
	public:
		::System::Void RedeemCoupon(::NPA::Editor::NXPRedeemCouponInfo* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::Editor::NXPRedeemCouponInfo*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPCOUPONPLUS_REDEEMCOUPON_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ShowCouponRedemptionWeb(::NPA::Editor::NXPWebRedeemCouponInfo* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::Editor::NXPWebRedeemCouponInfo*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPCOUPONPLUS_SHOWCOUPONREDEMPTIONWEB_OFFSET))(arg, arg, nullptr);
		}

	};
}

