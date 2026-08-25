#pragma once
#include "../unitysdk.h"

namespace TMPro { class TMP_SpriteGlyph; }
namespace TMPro { class TMP_SpriteAsset; }

#define TMPRO_TMP_SPRITECHARACTER_GET_NAME_OFFSET UNITYSDK_OFFSET(0xA17AE80)
#define TMPRO_TMP_SPRITECHARACTER_SET_NAME_OFFSET UNITYSDK_OFFSET(0xA17AC10)
#define TMPRO_TMP_SPRITECHARACTER_GET_HASHCODE_OFFSET UNITYSDK_OFFSET(0xA17AEE0)
#define TMPRO_TMP_SPRITECHARACTER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA17ABF0)
#define TMPRO_TMP_SPRITECHARACTER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA17AF00)
#define TMPRO_TMP_SPRITECHARACTER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA17AF60)
#define TMPRO_TMP_SPRITECHARACTER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA17AFD0)

namespace TMPro
{
	inline static constexpr unsigned int TMP_SpriteCharacter_TypeDefinitionIndex = 33724;

	class TMP_SpriteCharacter : public Il2CppObject
	{
	public:
		::System::String* m_Name; // 0x30
		::System::Int32 m_HashCode; // 0x38

		::System::String* get_name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITECHARACTER_GET_NAME_OFFSET))(nullptr);
		}

		::System::Void set_name(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITECHARACTER_SET_NAME_OFFSET))(str, nullptr);
		}

		::System::Int32 get_hashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITECHARACTER_GET_HASHCODE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITECHARACTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::UInt32 arg, ::TMPro::TMP_SpriteGlyph* arg)
		{
			((::System::Void(*)(::System::UInt32, ::TMPro::TMP_SpriteGlyph*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITECHARACTER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::UInt32 arg, ::TMPro::TMP_SpriteAsset* arg, ::TMPro::TMP_SpriteGlyph* arg)
		{
			((::System::Void(*)(::System::UInt32, ::TMPro::TMP_SpriteAsset*, ::TMPro::TMP_SpriteGlyph*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITECHARACTER_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::UInt32 arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITECHARACTER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

