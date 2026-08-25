#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }

#define UISTICKERBOOKINDICATORUNIT_.CTOR_OFFSET UNITYSDK_OFFSET(0xB33FB0)

	inline static constexpr unsigned int UIStickerBookIndicatorUnit_TypeDefinitionIndex = 8303;

	class UIStickerBookIndicatorUnit : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* On; // 0x18
		::UnityEngine::GameObject* Off; // 0x20
		::UnityEngine::GameObject* YellowDot; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTICKERBOOKINDICATORUNIT_.CTOR_OFFSET))(nullptr);
		}

	};

