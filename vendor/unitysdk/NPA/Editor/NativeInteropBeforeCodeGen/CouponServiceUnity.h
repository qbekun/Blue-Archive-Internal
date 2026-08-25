#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::NativeInteropBeforeCodeGen { class RedeemCouponCallback; }
namespace NPA::Editor::NativeInteropBeforeCodeGen { class GetCouponRedemptionUrlCallback; }
namespace NPA::Editor::NativeInteropBeforeCodeGen { class RedeemCouponInfo; }
namespace NPA::Editor::NativeInteropBeforeCodeGen { class WebRedeemCouponInfo; }
namespace NPA::Editor::NativeInteropBeforeCodeGen { class StandardResult&; }
namespace NPA::Editor::NativeInteropBeforeCodeGen { class CouponRedemptionUrlResult&; }

#define NPA_EDITOR_NATIVEINTEROPBEFORECODEGEN_COUPONSERVICEUNITY_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C3C020)
#define NPA_EDITOR_NATIVEINTEROPBEFORECODEGEN_COUPONSERVICEUNITY_REDEEMCOUPON_OFFSET UNITYSDK_OFFSET(0x9C3C040)
#define NPA_EDITOR_NATIVEINTEROPBEFORECODEGEN_COUPONSERVICEUNITY_GETCOUPONREDEMPTIONURL_OFFSET UNITYSDK_OFFSET(0x9C3C170)
#define NPA_EDITOR_NATIVEINTEROPBEFORECODEGEN_COUPONSERVICEUNITY_ONUSECOUPONCALLBACK_OFFSET UNITYSDK_OFFSET(0x9C3C2A0)
#define NPA_EDITOR_NATIVEINTEROPBEFORECODEGEN_COUPONSERVICEUNITY_ONGETCOUPONREDEMPTIONURLCALLBACK_OFFSET UNITYSDK_OFFSET(0x9C3C310)
#define NPA_EDITOR_NATIVEINTEROPBEFORECODEGEN_COUPONSERVICEUNITY_STATICREDEEMCOUPONCALLBACK_OFFSET UNITYSDK_OFFSET(0x9C3BDE0)
#define NPA_EDITOR_NATIVEINTEROPBEFORECODEGEN_COUPONSERVICEUNITY_STATICGETCOUPONREDEMPTIONURLCALLBACK_OFFSET UNITYSDK_OFFSET(0x9C3BF10)
#define NPA_EDITOR_NATIVEINTEROPBEFORECODEGEN_COUPONSERVICEUNITY_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9C3C370)

namespace NPA::Editor::NativeInteropBeforeCodeGen
{
	inline static constexpr unsigned int CouponServiceUnity_TypeDefinitionIndex = 26802;

	class CouponServiceUnity : public Il2CppObject
	{
	public:
		::NPA::Editor::NativeInteropBeforeCodeGen::RedeemCouponCallback* redeemCouponCallback; // 0x0
		::NPA::Editor::NativeInteropBeforeCodeGen::GetCouponRedemptionUrlCallback* getCouponRedemptionUrlCallback; // 0x8
		::System::Int32 _inface; // 0x10
		Il2CppObject* _useCouponHandler; // 0x18
		Il2CppObject* _getCouponUrlHandler; // 0x20

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NATIVEINTEROPBEFORECODEGEN_COUPONSERVICEUNITY_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void RedeemCoupon(::NPA::Editor::NativeInteropBeforeCodeGen::RedeemCouponInfo* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::Editor::NativeInteropBeforeCodeGen::RedeemCouponInfo*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NATIVEINTEROPBEFORECODEGEN_COUPONSERVICEUNITY_REDEEMCOUPON_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GetCouponRedemptionUrl(::NPA::Editor::NativeInteropBeforeCodeGen::WebRedeemCouponInfo* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::Editor::NativeInteropBeforeCodeGen::WebRedeemCouponInfo*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NATIVEINTEROPBEFORECODEGEN_COUPONSERVICEUNITY_GETCOUPONREDEMPTIONURL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnUseCouponCallback(::NPA::Editor::NativeInteropBeforeCodeGen::StandardResult&* arg)
		{
			((::System::Void(*)(::NPA::Editor::NativeInteropBeforeCodeGen::StandardResult&*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NATIVEINTEROPBEFORECODEGEN_COUPONSERVICEUNITY_ONUSECOUPONCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void OnGetCouponRedemptionUrlCallback(::NPA::Editor::NativeInteropBeforeCodeGen::CouponRedemptionUrlResult&* arg)
		{
			((::System::Void(*)(::NPA::Editor::NativeInteropBeforeCodeGen::CouponRedemptionUrlResult&*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NATIVEINTEROPBEFORECODEGEN_COUPONSERVICEUNITY_ONGETCOUPONREDEMPTIONURLCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void StaticRedeemCouponCallback(::System::Int32 arg, ::NPA::Editor::NativeInteropBeforeCodeGen::StandardResult&* arg)
		{
			((::System::Void(*)(::System::Int32, ::NPA::Editor::NativeInteropBeforeCodeGen::StandardResult&*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NATIVEINTEROPBEFORECODEGEN_COUPONSERVICEUNITY_STATICREDEEMCOUPONCALLBACK_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StaticGetCouponRedemptionUrlCallback(::System::Int32 arg, ::NPA::Editor::NativeInteropBeforeCodeGen::CouponRedemptionUrlResult&* arg)
		{
			((::System::Void(*)(::System::Int32, ::NPA::Editor::NativeInteropBeforeCodeGen::CouponRedemptionUrlResult&*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NATIVEINTEROPBEFORECODEGEN_COUPONSERVICEUNITY_STATICGETCOUPONREDEMPTIONURLCALLBACK_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NATIVEINTEROPBEFORECODEGEN_COUPONSERVICEUNITY_.CCTOR_OFFSET))(nullptr);
		}

	};
}

