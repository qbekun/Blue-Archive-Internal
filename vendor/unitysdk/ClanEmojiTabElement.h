#pragma once
#include "unitysdk.h"

class UITexture;

#define CLANEMOJITABELEMENT_SETEMOJITABDATA_OFFSET UNITYSDK_OFFSET(0x232FA50)
#define CLANEMOJITABELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x23319A0)

	inline static constexpr unsigned int ClanEmojiTabElement_TypeDefinitionIndex = 4948;

	class ClanEmojiTabElement : public Il2CppObject
	{
	public:
		UITexture* tabTexture; // 0x18
		::Il2CppArray<::System::Object*>* tabTextures; // 0x20

		::System::Void SetEmojiTabData(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CLANEMOJITABELEMENT_SETEMOJITABDATA_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANEMOJITABELEMENT_.CTOR_OFFSET))(nullptr);
		}

	};

