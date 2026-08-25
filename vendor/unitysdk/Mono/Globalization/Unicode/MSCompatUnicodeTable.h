#pragma once
#include "../../../unitysdk.h"

namespace Mono::Globalization::Unicode { class TailoringInfo; }
namespace Mono::Globalization::Unicode { class CodePointIndexer&; }

#define MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_GETTAILORINGINFO_OFFSET UNITYSDK_OFFSET(0x91249F0)
#define MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_BUILDTAILORINGTABLES_OFFSET UNITYSDK_OFFSET(0x9124B00)
#define MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_SETCJKREFERENCES_OFFSET UNITYSDK_OFFSET(0x91253F0)
#define MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_CATEGORY_OFFSET UNITYSDK_OFFSET(0x91256D0)
#define MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_LEVEL1_OFFSET UNITYSDK_OFFSET(0x91257B0)
#define MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_LEVEL2_OFFSET UNITYSDK_OFFSET(0x9125890)
#define MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_LEVEL3_OFFSET UNITYSDK_OFFSET(0x9125970)
#define MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_ISIGNORABLE_OFFSET UNITYSDK_OFFSET(0x9125A50)
#define MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_ISIGNORABLENONSPACING_OFFSET UNITYSDK_OFFSET(0x9125BD0)
#define MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_TOKANATYPEINSENSITIVE_OFFSET UNITYSDK_OFFSET(0x9125C20)
#define MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_TOWIDTHCOMPAT_OFFSET UNITYSDK_OFFSET(0x9125C40)
#define MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_HASSPECIALWEIGHT_OFFSET UNITYSDK_OFFSET(0x9125D70)
#define MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_ISHALFWIDTHKANA_OFFSET UNITYSDK_OFFSET(0x9125DF0)
#define MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_ISHIRAGANA_OFFSET UNITYSDK_OFFSET(0x9125E10)
#define MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_ISJAPANESESMALLLETTER_OFFSET UNITYSDK_OFFSET(0x9125E30)
#define MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_GET_ISREADY_OFFSET UNITYSDK_OFFSET(0x9125F00)
#define MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_GETRESOURCE_OFFSET UNITYSDK_OFFSET(0x9125F50)
#define MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_UINT32FROMBYTEPTR_OFFSET UNITYSDK_OFFSET(0x9126010)
#define MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9126040)
#define MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_FILLCJK_OFFSET UNITYSDK_OFFSET(0x9126560)
#define MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_FILLCJKCORE_OFFSET UNITYSDK_OFFSET(0x9126710)

namespace Mono::Globalization::Unicode
{
	inline static constexpr unsigned int MSCompatUnicodeTable_TypeDefinitionIndex = 23606;

	class MSCompatUnicodeTable : public Il2CppObject
	{
	public:
		::System::Int32 MaxExpansionLength; // 0x0
		::System::Object** ignorableFlags; // 0x8
		::System::Object** categories; // 0x10
		::System::Object** level1; // 0x18
		::System::Object** level2; // 0x20
		::System::Object** level3; // 0x28
		::System::Object** cjkCHScategory; // 0x30
		::System::Object** cjkCHTcategory; // 0x38
		::System::Object** cjkJAcategory; // 0x40
		::System::Object** cjkKOcategory; // 0x48
		::System::Object** cjkCHSlv1; // 0x50
		::System::Object** cjkCHTlv1; // 0x58
		::System::Object** cjkJAlv1; // 0x60
		::System::Object** cjkKOlv1; // 0x68
		::System::Object** cjkKOlv2; // 0x70
		::Il2CppArray<::System::Object*>* tailoringArr; // 0x78
		::Il2CppArray<::System::Object*>* tailoringInfos; // 0x80
		::System::Object* forLock; // 0x88
		::System::Boolean isReady; // 0x90

		::Mono::Globalization::Unicode::TailoringInfo* GetTailoringInfo(::System::Int32 arg)
		{
			return (return (::Mono::Globalization::Unicode::TailoringInfo*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_GETTAILORINGINFO_OFFSET))(arg, nullptr);
		}

		::System::Void BuildTailoringTables(::System::Globalization::CultureInfo* arg, ::Mono::Globalization::Unicode::TailoringInfo* arg, ::System::Object[]&* arg, ::System::Object[]&* arg)
		{
			((::System::Void(*)(::System::Globalization::CultureInfo*, ::Mono::Globalization::Unicode::TailoringInfo*, ::System::Object[]&*, ::System::Object[]&*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_BUILDTAILORINGTABLES_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void SetCJKReferences(::System::String* str, ::Mono::Globalization::Unicode::CodePointIndexer&* arg, ::System::Object*&* arg, ::System::Object*&* arg, ::Mono::Globalization::Unicode::CodePointIndexer&* arg, ::System::Object*&* arg)
		{
			((::System::Void(*)(::System::String*, ::Mono::Globalization::Unicode::CodePointIndexer&*, ::System::Object*&*, ::System::Object*&*, ::Mono::Globalization::Unicode::CodePointIndexer&*, ::System::Object*&*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_SETCJKREFERENCES_OFFSET))(str, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Byte Category(::System::Int32 arg)
		{
			return (return (::System::Byte(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_CATEGORY_OFFSET))(arg, nullptr);
		}

		::System::Byte Level1(::System::Int32 arg)
		{
			return (return (::System::Byte(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_LEVEL1_OFFSET))(arg, nullptr);
		}

		::System::Byte Level2(::System::Int32 arg)
		{
			return (return (::System::Byte(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_LEVEL2_OFFSET))(arg, nullptr);
		}

		::System::Byte Level3(::System::Int32 arg)
		{
			return (return (::System::Byte(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_LEVEL3_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsIgnorable(::System::Int32 arg, ::System::Byte arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_ISIGNORABLE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsIgnorableNonSpacing(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_ISIGNORABLENONSPACING_OFFSET))(arg, nullptr);
		}

		::System::Int32 ToKanaTypeInsensitive(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_TOKANATYPEINSENSITIVE_OFFSET))(arg, nullptr);
		}

		::System::Int32 ToWidthCompat(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_TOWIDTHCOMPAT_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasSpecialWeight(::System::Char arg)
		{
			return (return (::System::Boolean(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_HASSPECIALWEIGHT_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsHalfWidthKana(::System::Char arg)
		{
			return (return (::System::Boolean(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_ISHALFWIDTHKANA_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsHiragana(::System::Char arg)
		{
			return (return (::System::Boolean(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_ISHIRAGANA_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsJapaneseSmallLetter(::System::Char arg)
		{
			return (return (::System::Boolean(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_ISJAPANESESMALLLETTER_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsReady()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_GET_ISREADY_OFFSET))(nullptr);
		}

		::System::Int32 GetResource(::System::String* str)
		{
			return (return (::System::Int32(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_GETRESOURCE_OFFSET))(str, nullptr);
		}

		::System::UInt32 UInt32FromBytePtr(::System::Object** arg, ::System::UInt32 arg)
		{
			return (return (::System::UInt32(*)(::System::Object**, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_UINT32FROMBYTEPTR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void FillCJK(::System::String* str, ::Mono::Globalization::Unicode::CodePointIndexer&* arg, ::System::Object*&* arg, ::System::Object*&* arg, ::Mono::Globalization::Unicode::CodePointIndexer&* arg, ::System::Object*&* arg)
		{
			((::System::Void(*)(::System::String*, ::Mono::Globalization::Unicode::CodePointIndexer&*, ::System::Object*&*, ::System::Object*&*, ::Mono::Globalization::Unicode::CodePointIndexer&*, ::System::Object*&*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_FILLCJK_OFFSET))(str, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void FillCJKCore(::System::String* str, ::Mono::Globalization::Unicode::CodePointIndexer&* arg, ::System::Object*&* arg, ::System::Object*&* arg, ::Mono::Globalization::Unicode::CodePointIndexer&* arg, ::System::Object*&* arg)
		{
			((::System::Void(*)(::System::String*, ::Mono::Globalization::Unicode::CodePointIndexer&*, ::System::Object*&*, ::System::Object*&*, ::Mono::Globalization::Unicode::CodePointIndexer&*, ::System::Object*&*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLE_FILLCJKCORE_OFFSET))(str, arg, arg, arg, arg, arg, nullptr);
		}

	};
}

