#pragma once
#include "../../../unitysdk.h"

#define NPA_EDITOR_NATIVEINTEROPBEFORECODEGEN_WEBREDEEMCOUPONINFO_TOUTF8PTR_OFFSET UNITYSDK_OFFSET(0x9C3B0A0)
#define NPA_EDITOR_NATIVEINTEROPBEFORECODEGEN_WEBREDEEMCOUPONINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C3B190)
#define NPA_EDITOR_NATIVEINTEROPBEFORECODEGEN_WEBREDEEMCOUPONINFO_FREE_OFFSET UNITYSDK_OFFSET(0x9C3B250)

namespace NPA::Editor::NativeInteropBeforeCodeGen
{
	inline static constexpr unsigned int WebRedeemCouponInfo_TypeDefinitionIndex = 26797;

	class WebRedeemCouponInfo : public Il2CppObject
	{
	public:
		::System::Int32 region_id; // 0x10
		::System::Int32 region_name; // 0x18
		::System::Int32 character_name; // 0x20
		::System::Int32 character_class; // 0x28
		::System::Int32 character_level; // 0x30
		::System::Int32 world_name; // 0x38
		::System::Int32 realm_id; // 0x40
		::System::Int32 theme; // 0x48
		::System::Int32 token; // 0x50

		::System::Int32 ToUtf8Ptr(::System::String* str)
		{
			return (return (::System::Int32(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NATIVEINTEROPBEFORECODEGEN_WEBREDEEMCOUPONINFO_TOUTF8PTR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::String* str, ::System::String* str, ::System::String* str, ::System::Int32 arg, ::System::String* str, ::System::String* str, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Int32, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NATIVEINTEROPBEFORECODEGEN_WEBREDEEMCOUPONINFO_.CTOR_OFFSET))(str, str, str, str, arg, str, str, str, str, nullptr);
		}

		::System::Void Free()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NATIVEINTEROPBEFORECODEGEN_WEBREDEEMCOUPONINFO_FREE_OFFSET))(nullptr);
		}

	};
}

