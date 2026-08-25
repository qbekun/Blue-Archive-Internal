#pragma once
#include "../../unitysdk.h"

#define CYSHARP_TEXT_ENUMUTIL`1_TRYFORMATUTF8_OFFSET UNITYSDK_OFFSET(0x000000)
#define CYSHARP_TEXT_ENUMUTIL`1_TRYFORMATUTF16_OFFSET UNITYSDK_OFFSET(0x000000)
#define CYSHARP_TEXT_ENUMUTIL`1_.CCTOR_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Cysharp::Text
{
	inline static constexpr unsigned int EnumUtil`1_TypeDefinitionIndex = 34669;

	class EnumUtil`1 : public Il2CppObject
	{
	public:
		::System::String* InvalidName; // 0x0
		Il2CppObject* names; // 0x0
		Il2CppObject* utf8names; // 0x0

		::System::Boolean TryFormatUtf8(Il2CppObject* arg, Il2CppObject* arg, int32_t&* arg, ::System::Buffers::StandardFormat* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, Il2CppObject*, int32_t&*, ::System::Buffers::StandardFormat*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_TEXT_ENUMUTIL`1_TRYFORMATUTF8_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean TryFormatUtf16(Il2CppObject* arg, Il2CppObject* arg, int32_t&* arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, Il2CppObject*, int32_t&*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_TEXT_ENUMUTIL`1_TRYFORMATUTF16_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_TEXT_ENUMUTIL`1_.CCTOR_OFFSET))(nullptr);
		}

	};
}

