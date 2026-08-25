#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor { class NXPRedeemCouponInfo; }
namespace NPA::Editor { class NXPWebRedeemCouponInfo; }

#define NPA_EDITOR_COMMERCE_NXPCOMMERCEMOCK_REDEEMCOUPON_OFFSET UNITYSDK_OFFSET(0x9C4B5A0)
#define NPA_EDITOR_COMMERCE_NXPCOMMERCEMOCK_SHOWCOUPONREDEMPTIONWEB_OFFSET UNITYSDK_OFFSET(0x9C4B5F0)
#define NPA_EDITOR_COMMERCE_NXPCOMMERCEMOCK_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C4B590)

namespace NPA::Editor::Commerce
{
	inline static constexpr unsigned int NXPCommerceMock_TypeDefinitionIndex = 26867;

	class NXPCommerceMock : public Il2CppObject
	{
	public:
		::System::Void RedeemCoupon(::NPA::Editor::NXPRedeemCouponInfo* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::Editor::NXPRedeemCouponInfo*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMERCE_NXPCOMMERCEMOCK_REDEEMCOUPON_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ShowCouponRedemptionWeb(::NPA::Editor::NXPWebRedeemCouponInfo* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::Editor::NXPWebRedeemCouponInfo*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMERCE_NXPCOMMERCEMOCK_SHOWCOUPONREDEMPTIONWEB_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMERCE_NXPCOMMERCEMOCK_.CTOR_OFFSET))(nullptr);
		}

	};
}

