#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
namespace FlatData { class Rarity; }

#define UIGACHARESULTCARD_.CTOR_OFFSET UNITYSDK_OFFSET(0x25BAAD0)
#define UIGACHARESULTCARD_CLEAR_OFFSET UNITYSDK_OFFSET(0x25B4790)
#define UIGACHARESULTCARD_SETRARITYCARD_OFFSET UNITYSDK_OFFSET(0x25BAAE0)

	inline static constexpr unsigned int UIGachaResultCard_TypeDefinitionIndex = 6274;

	class UIGachaResultCard : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* RCard; // 0x18
		::UnityEngine::GameObject* SRCard; // 0x20
		::UnityEngine::GameObject* SSRCard; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHARESULTCARD_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHARESULTCARD_CLEAR_OFFSET))(nullptr);
		}

		::System::Void SetRarityCard(::FlatData::Rarity* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::FlatData::Rarity*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIGACHARESULTCARD_SETRARITYCARD_OFFSET))(arg, arg2, nullptr);
		}

	};

