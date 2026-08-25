#pragma once
#include "unitysdk.h"

namespace UnityEngine::TextCore::Text { class Character; }
namespace UnityEngine::TextCore::Text { class FontAsset; }
namespace UnityEngine { class Material; }

#define SPECIALCHARACTER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2DC5F0)

	inline static constexpr unsigned int SpecialCharacter_TypeDefinitionIndex = 35592;

	class SpecialCharacter : public Il2CppObject
	{
	public:
		::UnityEngine::TextCore::Text::Character* character; // 0x10
		::UnityEngine::TextCore::Text::FontAsset* fontAsset; // 0x18
		::UnityEngine::Material* material; // 0x20
		::System::Int32 materialIndex; // 0x28

		::System::Void .ctor(::UnityEngine::TextCore::Text::Character* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::TextCore::Text::Character*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SPECIALCHARACTER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};

