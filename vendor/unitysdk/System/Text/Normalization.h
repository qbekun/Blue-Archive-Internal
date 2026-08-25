#pragma once
#include "../../unitysdk.h"

#define SYSTEM_TEXT_NORMALIZATION_PROPVALUE_OFFSET UNITYSDK_OFFSET(0x9179160)
#define SYSTEM_TEXT_NORMALIZATION_CHARMAPIDX_OFFSET UNITYSDK_OFFSET(0x91791F0)
#define SYSTEM_TEXT_NORMALIZATION_GETCOMBININGCLASS_OFFSET UNITYSDK_OFFSET(0x9179280)
#define SYSTEM_TEXT_NORMALIZATION_GETPRIMARYCOMPOSITEFROMMAPINDEX_OFFSET UNITYSDK_OFFSET(0x9179320)
#define SYSTEM_TEXT_NORMALIZATION_GETPRIMARYCOMPOSITEHELPERINDEX_OFFSET UNITYSDK_OFFSET(0x91793C0)
#define SYSTEM_TEXT_NORMALIZATION_COMPOSE_OFFSET UNITYSDK_OFFSET(0x9179460)
#define SYSTEM_TEXT_NORMALIZATION_COMBINE_OFFSET UNITYSDK_OFFSET(0x9179680)
#define SYSTEM_TEXT_NORMALIZATION_COMBINE_OFFSET UNITYSDK_OFFSET(0x9179790)
#define SYSTEM_TEXT_NORMALIZATION_COMBINEHANGUL_OFFSET UNITYSDK_OFFSET(0x9179C60)
#define SYSTEM_TEXT_NORMALIZATION_FETCH_OFFSET UNITYSDK_OFFSET(0x917A260)
#define SYSTEM_TEXT_NORMALIZATION_TRYCOMPOSEWITHPREVIOUSSTARTER_OFFSET UNITYSDK_OFFSET(0x9179E90)
#define SYSTEM_TEXT_NORMALIZATION_TRYCOMPOSE_OFFSET UNITYSDK_OFFSET(0x917A2A0)
#define SYSTEM_TEXT_NORMALIZATION_DECOMPOSE_OFFSET UNITYSDK_OFFSET(0x917A4C0)
#define SYSTEM_TEXT_NORMALIZATION_DECOMPOSE_OFFSET UNITYSDK_OFFSET(0x9179540)
#define SYSTEM_TEXT_NORMALIZATION_REORDERCANONICAL_OFFSET UNITYSDK_OFFSET(0x917A730)
#define SYSTEM_TEXT_NORMALIZATION_DECOMPOSECHAR_OFFSET UNITYSDK_OFFSET(0x917A540)
#define SYSTEM_TEXT_NORMALIZATION_QUICKCHECK_OFFSET UNITYSDK_OFFSET(0x9179880)
#define SYSTEM_TEXT_NORMALIZATION_GETCANONICALHANGUL_OFFSET UNITYSDK_OFFSET(0x917ACB0)
#define SYSTEM_TEXT_NORMALIZATION_GETCANONICAL_OFFSET UNITYSDK_OFFSET(0x917AA10)
#define SYSTEM_TEXT_NORMALIZATION_NORMALIZE_OFFSET UNITYSDK_OFFSET(0x917ADD0)
#define SYSTEM_TEXT_NORMALIZATION_NORMALIZE_OFFSET UNITYSDK_OFFSET(0x917AF20)
#define SYSTEM_TEXT_NORMALIZATION_LOAD_NORMALIZATION_RESOURCE_OFFSET UNITYSDK_OFFSET(0x917B040)
#define SYSTEM_TEXT_NORMALIZATION_.CCTOR_OFFSET UNITYSDK_OFFSET(0x917B050)

namespace System::Text
{
	inline static constexpr unsigned int Normalization_TypeDefinitionIndex = 24269;

	class Normalization : public Il2CppObject
	{
	public:
		::System::Object** props; // 0x0
		::System::Object** mappedChars; // 0x8
		::System::Object** charMapIndex; // 0x10
		::System::Object** helperIndex; // 0x18
		::System::Object** mapIdxToComposite; // 0x20
		::System::Object** combiningClass; // 0x28
		::System::Object* forLock; // 0x30
		::System::Boolean isReady; // 0x38

		::System::UInt32 PropValue(::System::Int32 arg)
		{
			return (return (::System::UInt32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_NORMALIZATION_PROPVALUE_OFFSET))(arg, nullptr);
		}

		::System::Int32 CharMapIdx(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_NORMALIZATION_CHARMAPIDX_OFFSET))(arg, nullptr);
		}

		::System::Byte GetCombiningClass(::System::Int32 arg)
		{
			return (return (::System::Byte(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_NORMALIZATION_GETCOMBININGCLASS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetPrimaryCompositeFromMapIndex(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_NORMALIZATION_GETPRIMARYCOMPOSITEFROMMAPINDEX_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetPrimaryCompositeHelperIndex(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_NORMALIZATION_GETPRIMARYCOMPOSITEHELPERINDEX_OFFSET))(arg, nullptr);
		}

		::System::String* Compose(::System::String* str, ::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_NORMALIZATION_COMPOSE_OFFSET))(str, arg, nullptr);
		}

		::System::Text::StringBuilder* Combine(::System::String* str, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Text::StringBuilder*(*)(::System::String*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_NORMALIZATION_COMBINE_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void Combine(::System::Text::StringBuilder* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Text::StringBuilder*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_NORMALIZATION_COMBINE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 CombineHangul(::System::Text::StringBuilder* arg, ::System::String* str, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Text::StringBuilder*, ::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_NORMALIZATION_COMBINEHANGUL_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Int32 Fetch(::System::Text::StringBuilder* arg, ::System::String* str, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Text::StringBuilder*, ::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_NORMALIZATION_FETCH_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Int32 TryComposeWithPreviousStarter(::System::Text::StringBuilder* arg, ::System::String* str, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Text::StringBuilder*, ::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_NORMALIZATION_TRYCOMPOSEWITHPREVIOUSSTARTER_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Int32 TryCompose(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_NORMALIZATION_TRYCOMPOSE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::String* Decompose(::System::String* str, ::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_NORMALIZATION_DECOMPOSE_OFFSET))(str, arg, nullptr);
		}

		::System::Void Decompose(::System::String* str, ::System::Text::StringBuilder&* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Text::StringBuilder&*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_NORMALIZATION_DECOMPOSE_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void ReorderCanonical(::System::String* str, ::System::Text::StringBuilder&* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Text::StringBuilder&*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_NORMALIZATION_REORDERCANONICAL_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void DecomposeChar(::System::Text::StringBuilder&* arg, ::System::Object[]&* arg, ::System::String* str, ::System::Int32 arg, ::System::Int32 arg, int32_t&* arg)
		{
			((::System::Void(*)(::System::Text::StringBuilder&*, ::System::Object[]&*, ::System::String*, ::System::Int32, ::System::Int32, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_NORMALIZATION_DECOMPOSECHAR_OFFSET))(arg, arg, str, arg, arg, arg, nullptr);
		}

		::System::Text::NormalizationCheck* QuickCheck(::System::Char arg, ::System::Int32 arg)
		{
			return (return (::System::Text::NormalizationCheck*(*)(::System::Char, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_NORMALIZATION_QUICKCHECK_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetCanonicalHangul(::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_NORMALIZATION_GETCANONICALHANGUL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 GetCanonical(::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_NORMALIZATION_GETCANONICAL_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::String* Normalize(::System::String* str, ::System::Text::NormalizationForm* arg)
		{
			return (return (::System::String*(*)(::System::String*, ::System::Text::NormalizationForm*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_NORMALIZATION_NORMALIZE_OFFSET))(str, arg, nullptr);
		}

		::System::String* Normalize(::System::String* str, ::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_NORMALIZATION_NORMALIZE_OFFSET))(str, arg, nullptr);
		}

		::System::Void load_normalization_resource(int32_t&* arg, int32_t&* arg, int32_t&* arg, int32_t&* arg, int32_t&* arg, int32_t&* arg)
		{
			((::System::Void(*)(int32_t&*, int32_t&*, int32_t&*, int32_t&*, int32_t&*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_NORMALIZATION_LOAD_NORMALIZATION_RESOURCE_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_NORMALIZATION_.CCTOR_OFFSET))(nullptr);
		}

	};
}

