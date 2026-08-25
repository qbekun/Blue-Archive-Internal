#pragma once
#include "unitysdk.h"

namespace FlatData { class DamageAttribute; }
class Effect;
namespace UnityEngine { class Color; }
namespace UnityEngine { class Vector2; }

#define UICOLORDAMAGEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x2343BB0)

	inline static constexpr unsigned int UIColorDamageAttribute_TypeDefinitionIndex = 4984;

	class UIColorDamageAttribute : public Il2CppObject
	{
	public:
		::FlatData::DamageAttribute* DamageAttribute; // 0x10
		Effect* EffectStyle; // 0x14
		::UnityEngine::Color* EffectColor; // 0x18
		::UnityEngine::Vector2* EffectDistance; // 0x28
		::UnityEngine::Color* Color; // 0x30

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICOLORDAMAGEATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};

