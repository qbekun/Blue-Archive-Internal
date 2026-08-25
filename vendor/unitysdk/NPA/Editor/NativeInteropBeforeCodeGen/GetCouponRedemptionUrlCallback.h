#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::NativeInteropBeforeCodeGen { class CouponRedemptionUrlResult&; }

#define NPA_EDITOR_NATIVEINTEROPBEFORECODEGEN_GETCOUPONREDEMPTIONURLCALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C3B810)
#define NPA_EDITOR_NATIVEINTEROPBEFORECODEGEN_GETCOUPONREDEMPTIONURLCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x9C3B8E0)
#define NPA_EDITOR_NATIVEINTEROPBEFORECODEGEN_GETCOUPONREDEMPTIONURLCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9C3B8F0)
#define NPA_EDITOR_NATIVEINTEROPBEFORECODEGEN_GETCOUPONREDEMPTIONURLCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9C3B990)

namespace NPA::Editor::NativeInteropBeforeCodeGen
{
	inline static constexpr unsigned int GetCouponRedemptionUrlCallback_TypeDefinitionIndex = 26800;

	class GetCouponRedemptionUrlCallback : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NATIVEINTEROPBEFORECODEGEN_GETCOUPONREDEMPTIONURLCALLBACK_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Int32 arg, ::NPA::Editor::NativeInteropBeforeCodeGen::CouponRedemptionUrlResult&* arg)
		{
			((::System::Void(*)(::System::Int32, ::NPA::Editor::NativeInteropBeforeCodeGen::CouponRedemptionUrlResult&*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NATIVEINTEROPBEFORECODEGEN_GETCOUPONREDEMPTIONURLCALLBACK_INVOKE_OFFSET))(arg, arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 arg, ::NPA::Editor::NativeInteropBeforeCodeGen::CouponRedemptionUrlResult&* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::Int32, ::NPA::Editor::NativeInteropBeforeCodeGen::CouponRedemptionUrlResult&*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NATIVEINTEROPBEFORECODEGEN_GETCOUPONREDEMPTIONURLCALLBACK_BEGININVOKE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void EndInvoke(::NPA::Editor::NativeInteropBeforeCodeGen::CouponRedemptionUrlResult&* arg, ::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::NPA::Editor::NativeInteropBeforeCodeGen::CouponRedemptionUrlResult&*, ::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NATIVEINTEROPBEFORECODEGEN_GETCOUPONREDEMPTIONURLCALLBACK_ENDINVOKE_OFFSET))(arg, arg, nullptr);
		}

	};
}

