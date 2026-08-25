#pragma once
#include "../unitysdk.h"

namespace TMPro { class TMP_Glyph; }

#define TMPRO_TMP_GLYPH_CLONE_OFFSET UNITYSDK_OFFSET(0xA131770)
#define TMPRO_TMP_GLYPH_.CTOR_OFFSET UNITYSDK_OFFSET(0xA131820)

namespace TMPro
{
	inline static constexpr unsigned int TMP_Glyph_TypeDefinitionIndex = 33660;

	class TMP_Glyph : public Il2CppObject
	{
	public:
		::TMPro::TMP_Glyph* Clone(::TMPro::TMP_Glyph* arg)
		{
			return (return (::TMPro::TMP_Glyph*(*)(::TMPro::TMP_Glyph*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_GLYPH_CLONE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_GLYPH_.CTOR_OFFSET))(nullptr);
		}

	};
}

