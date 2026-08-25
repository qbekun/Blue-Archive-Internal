#pragma once
#include "../../../unitysdk.h"

namespace Mono::Globalization::Unicode { class CodePointIndexer; }

#define MONO_GLOBALIZATION_UNICODE_NORMALIZATIONTABLEUTIL_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9127340)
#define MONO_GLOBALIZATION_UNICODE_NORMALIZATIONTABLEUTIL_PROPIDX_OFFSET UNITYSDK_OFFSET(0x9127750)
#define MONO_GLOBALIZATION_UNICODE_NORMALIZATIONTABLEUTIL_MAPIDX_OFFSET UNITYSDK_OFFSET(0x9127820)

namespace Mono::Globalization::Unicode
{
	inline static constexpr unsigned int NormalizationTableUtil_TypeDefinitionIndex = 23608;

	class NormalizationTableUtil : public Il2CppObject
	{
	public:
		::Mono::Globalization::Unicode::CodePointIndexer* Prop; // 0x0
		::Mono::Globalization::Unicode::CodePointIndexer* Map; // 0x8
		::Mono::Globalization::Unicode::CodePointIndexer* Combining; // 0x10
		::Mono::Globalization::Unicode::CodePointIndexer* Composite; // 0x18
		::Mono::Globalization::Unicode::CodePointIndexer* Helper; // 0x20

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_NORMALIZATIONTABLEUTIL_.CCTOR_OFFSET))(nullptr);
		}

		::System::Int32 PropIdx(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_NORMALIZATIONTABLEUTIL_PROPIDX_OFFSET))(arg, nullptr);
		}

		::System::Int32 MapIdx(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_NORMALIZATIONTABLEUTIL_MAPIDX_OFFSET))(arg, nullptr);
		}

	};
}

