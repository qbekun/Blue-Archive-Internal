#pragma once
#include "../../../unitysdk.h"

namespace Mono::Globalization::Unicode { class CodePointIndexer; }

#define MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLEUTIL_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9126DB0)

namespace Mono::Globalization::Unicode
{
	inline static constexpr unsigned int MSCompatUnicodeTableUtil_TypeDefinitionIndex = 23607;

	class MSCompatUnicodeTableUtil : public Il2CppObject
	{
	public:
		::Mono::Globalization::Unicode::CodePointIndexer* Ignorable; // 0x0
		::Mono::Globalization::Unicode::CodePointIndexer* Category; // 0x8
		::Mono::Globalization::Unicode::CodePointIndexer* Level1; // 0x10
		::Mono::Globalization::Unicode::CodePointIndexer* Level2; // 0x18
		::Mono::Globalization::Unicode::CodePointIndexer* Level3; // 0x20
		::Mono::Globalization::Unicode::CodePointIndexer* CjkCHS; // 0x28
		::Mono::Globalization::Unicode::CodePointIndexer* Cjk; // 0x30

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_MSCOMPATUNICODETABLEUTIL_.CCTOR_OFFSET))(nullptr);
		}

	};
}

