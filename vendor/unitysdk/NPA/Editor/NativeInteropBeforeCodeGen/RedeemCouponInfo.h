#pragma once
#include "../../../unitysdk.h"

#define NPA_EDITOR_NATIVEINTEROPBEFORECODEGEN_REDEEMCOUPONINFO_TOUTF8PTR_OFFSET UNITYSDK_OFFSET(0x9C3AC70)
#define NPA_EDITOR_NATIVEINTEROPBEFORECODEGEN_REDEEMCOUPONINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C3AD60)
#define NPA_EDITOR_NATIVEINTEROPBEFORECODEGEN_REDEEMCOUPONINFO_FREE_OFFSET UNITYSDK_OFFSET(0x9C3AE10)

namespace NPA::Editor::NativeInteropBeforeCodeGen
{
	inline static constexpr unsigned int RedeemCouponInfo_TypeDefinitionIndex = 26796;

	class RedeemCouponInfo : public Il2CppObject
	{
	public:
		::System::Int32 orderId; // 0x10
		::System::Int32 pin; // 0x18
		::System::Int32 characterName; // 0x20
		::System::Int32 characterClass; // 0x28
		::System::Int32 characterLevel; // 0x30
		::System::Int32 worldName; // 0x38
		::System::Int32 realmId; // 0x40
		::System::Int32 token; // 0x48

		::System::Int32 ToUtf8Ptr(::System::String* str)
		{
			return (return (::System::Int32(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NATIVEINTEROPBEFORECODEGEN_REDEEMCOUPONINFO_TOUTF8PTR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::String* str, ::System::String* str, ::System::String* str, ::System::Int32 arg, ::System::String* str, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Int32, ::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NATIVEINTEROPBEFORECODEGEN_REDEEMCOUPONINFO_.CTOR_OFFSET))(str, str, str, str, arg, str, str, str, nullptr);
		}

		::System::Void Free()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NATIVEINTEROPBEFORECODEGEN_REDEEMCOUPONINFO_FREE_OFFSET))(nullptr);
		}

	};
}

