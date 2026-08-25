#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::NativeInteropBeforeCodeGen { class StandardResult&; }

#define NPA_EDITOR_NATIVEINTEROPBEFORECODEGEN_REDEEMCOUPONCALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C3B670)
#define NPA_EDITOR_NATIVEINTEROPBEFORECODEGEN_REDEEMCOUPONCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x9C3B740)
#define NPA_EDITOR_NATIVEINTEROPBEFORECODEGEN_REDEEMCOUPONCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9C3B750)
#define NPA_EDITOR_NATIVEINTEROPBEFORECODEGEN_REDEEMCOUPONCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9C3B7F0)

namespace NPA::Editor::NativeInteropBeforeCodeGen
{
	inline static constexpr unsigned int RedeemCouponCallback_TypeDefinitionIndex = 26799;

	class RedeemCouponCallback : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NATIVEINTEROPBEFORECODEGEN_REDEEMCOUPONCALLBACK_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Int32 arg, ::NPA::Editor::NativeInteropBeforeCodeGen::StandardResult&* arg)
		{
			((::System::Void(*)(::System::Int32, ::NPA::Editor::NativeInteropBeforeCodeGen::StandardResult&*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NATIVEINTEROPBEFORECODEGEN_REDEEMCOUPONCALLBACK_INVOKE_OFFSET))(arg, arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 arg, ::NPA::Editor::NativeInteropBeforeCodeGen::StandardResult&* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::Int32, ::NPA::Editor::NativeInteropBeforeCodeGen::StandardResult&*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NATIVEINTEROPBEFORECODEGEN_REDEEMCOUPONCALLBACK_BEGININVOKE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void EndInvoke(::NPA::Editor::NativeInteropBeforeCodeGen::StandardResult&* arg, ::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::NPA::Editor::NativeInteropBeforeCodeGen::StandardResult&*, ::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NATIVEINTEROPBEFORECODEGEN_REDEEMCOUPONCALLBACK_ENDINVOKE_OFFSET))(arg, arg, nullptr);
		}

	};
}

