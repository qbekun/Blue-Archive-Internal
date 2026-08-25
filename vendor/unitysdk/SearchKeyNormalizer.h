#pragma once
#include "unitysdk.h"

class SearchKeyNormalizer;

#define SEARCHKEYNORMALIZER_NORMALIZE_OFFSET UNITYSDK_OFFSET(0x26AFA80)
#define SEARCHKEYNORMALIZER_.CTOR_OFFSET UNITYSDK_OFFSET(0x26AFBC0)
#define SEARCHKEYNORMALIZER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x26AFBD0)

	inline static constexpr unsigned int SearchKeyNormalizer_TypeDefinitionIndex = 6889;

	class SearchKeyNormalizer : public Il2CppObject
	{
	public:
		SearchKeyNormalizer* Instance; // 0x0
		::System::Char HiraganaStart; // 0x0
		::System::Char HiraganaEnd; // 0x0
		::System::Int32 HiraganaToKatakanaOffset; // 0x0

		::System::String* Normalize(::System::String* str)
		{
			return ((::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SEARCHKEYNORMALIZER_NORMALIZE_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SEARCHKEYNORMALIZER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SEARCHKEYNORMALIZER_.CCTOR_OFFSET))(nullptr);
		}

	};

