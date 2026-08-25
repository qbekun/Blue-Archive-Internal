#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::NativeInteropBeforeCodeGen { class RedeemCouponInfo&; }
namespace NPA::Editor::NativeInteropBeforeCodeGen { class RedeemCouponCallback; }
namespace NPA::Editor::NativeInteropBeforeCodeGen { class WebRedeemCouponInfo&; }
namespace NPA::Editor::NativeInteropBeforeCodeGen { class GetCouponRedemptionUrlCallback; }
namespace NPA::Editor::NativeInteropBeforeCodeGen { class PatchExecutionInfoCallback; }
namespace NPA::Editor::NativeInteropBeforeCodeGen { class SupportUploadScreenshotInfoNative&; }
namespace NPA::Editor::NativeInteropBeforeCodeGen { class SupportUploadScreenshotCallback; }

#define NPA_EDITOR_NATIVEINTEROPBEFORECODEGEN_NATIVEMETHODS_COUPON_REDEEMCOUPON_OFFSET UNITYSDK_OFFSET(0x9C3B9B0)
#define NPA_EDITOR_NATIVEINTEROPBEFORECODEGEN_NATIVEMETHODS_COUPON_GETCOUPONREDEMPTIONURL_OFFSET UNITYSDK_OFFSET(0x9C3BA50)
#define NPA_EDITOR_NATIVEINTEROPBEFORECODEGEN_NATIVEMETHODS_PATCH_GETEXECUTIONINFO_OFFSET UNITYSDK_OFFSET(0x9C3BAF0)
#define NPA_EDITOR_NATIVEINTEROPBEFORECODEGEN_NATIVEMETHODS_SUPPORT_UPLOADSCREENSHOT_OFFSET UNITYSDK_OFFSET(0x9C3BB90)

namespace NPA::Editor::NativeInteropBeforeCodeGen
{
	inline static constexpr unsigned int NativeMethods_TypeDefinitionIndex = 26801;

	class NativeMethods : public Il2CppObject
	{
	public:
		::System::String* DLL_NAME; // 0x0

		::System::Void Coupon_RedeemCoupon(::System::Int32 arg, ::NPA::Editor::NativeInteropBeforeCodeGen::RedeemCouponInfo&* arg, ::System::Int32 arg, ::NPA::Editor::NativeInteropBeforeCodeGen::RedeemCouponCallback* arg)
		{
			((::System::Void(*)(::System::Int32, ::NPA::Editor::NativeInteropBeforeCodeGen::RedeemCouponInfo&*, ::System::Int32, ::NPA::Editor::NativeInteropBeforeCodeGen::RedeemCouponCallback*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NATIVEINTEROPBEFORECODEGEN_NATIVEMETHODS_COUPON_REDEEMCOUPON_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void Coupon_GetCouponRedemptionUrl(::System::Int32 arg, ::NPA::Editor::NativeInteropBeforeCodeGen::WebRedeemCouponInfo&* arg, ::System::Int32 arg, ::NPA::Editor::NativeInteropBeforeCodeGen::GetCouponRedemptionUrlCallback* arg)
		{
			((::System::Void(*)(::System::Int32, ::NPA::Editor::NativeInteropBeforeCodeGen::WebRedeemCouponInfo&*, ::System::Int32, ::NPA::Editor::NativeInteropBeforeCodeGen::GetCouponRedemptionUrlCallback*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NATIVEINTEROPBEFORECODEGEN_NATIVEMETHODS_COUPON_GETCOUPONREDEMPTIONURL_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void Patch_GetExecutionInfo(::System::Int32 arg, ::System::Int32 arg, ::NPA::Editor::NativeInteropBeforeCodeGen::PatchExecutionInfoCallback* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::NPA::Editor::NativeInteropBeforeCodeGen::PatchExecutionInfoCallback*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NATIVEINTEROPBEFORECODEGEN_NATIVEMETHODS_PATCH_GETEXECUTIONINFO_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Support_UploadScreenshot(::System::Int32 arg, ::NPA::Editor::NativeInteropBeforeCodeGen::SupportUploadScreenshotInfoNative&* arg, ::System::Int32 arg, ::NPA::Editor::NativeInteropBeforeCodeGen::SupportUploadScreenshotCallback* arg)
		{
			((::System::Void(*)(::System::Int32, ::NPA::Editor::NativeInteropBeforeCodeGen::SupportUploadScreenshotInfoNative&*, ::System::Int32, ::NPA::Editor::NativeInteropBeforeCodeGen::SupportUploadScreenshotCallback*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NATIVEINTEROPBEFORECODEGEN_NATIVEMETHODS_SUPPORT_UPLOADSCREENSHOT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

