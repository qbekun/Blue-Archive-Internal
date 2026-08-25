#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }

#define UILOBBYBANNERINDICATORTOGGLE_SETTOGGLE_OFFSET UNITYSDK_OFFSET(0x266B3A0)
#define UILOBBYBANNERINDICATORTOGGLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x266B4D0)
#define UILOBBYBANNERINDICATORTOGGLE_AWAKE_OFFSET UNITYSDK_OFFSET(0x266B4E0)

	inline static constexpr unsigned int UILobbyBannerIndicatorToggle_TypeDefinitionIndex = 6686;

	class UILobbyBannerIndicatorToggle : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* onObject; // 0x18
		::UnityEngine::GameObject* offObject; // 0x20

		::System::Void SetToggle(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UILOBBYBANNERINDICATORTOGGLE_SETTOGGLE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYBANNERINDICATORTOGGLE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYBANNERINDICATORTOGGLE_AWAKE_OFFSET))(nullptr);
		}

	};

