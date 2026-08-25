#pragma once
#include "../../../unitysdk.h"

namespace Mono::Globalization::Unicode { class ContractionComparer; }
namespace Mono::Globalization::Unicode { class Contraction; }

#define MONO_GLOBALIZATION_UNICODE_CONTRACTIONCOMPARER_COMPARE_OFFSET UNITYSDK_OFFSET(0x91248A0)
#define MONO_GLOBALIZATION_UNICODE_CONTRACTIONCOMPARER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9124930)
#define MONO_GLOBALIZATION_UNICODE_CONTRACTIONCOMPARER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9124940)

namespace Mono::Globalization::Unicode
{
	inline static constexpr unsigned int ContractionComparer_TypeDefinitionIndex = 23603;

	class ContractionComparer : public Il2CppObject
	{
	public:
		::Mono::Globalization::Unicode::ContractionComparer* Instance; // 0x0

		::System::Int32 Compare(::Mono::Globalization::Unicode::Contraction* arg, ::Mono::Globalization::Unicode::Contraction* arg)
		{
			return (return (::System::Int32(*)(::Mono::Globalization::Unicode::Contraction*, ::Mono::Globalization::Unicode::Contraction*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_CONTRACTIONCOMPARER_COMPARE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_CONTRACTIONCOMPARER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_CONTRACTIONCOMPARER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

