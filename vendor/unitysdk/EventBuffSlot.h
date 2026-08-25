#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class UISprite;
class UILabel;

#define EVENTBUFFSLOT_.CTOR_OFFSET UNITYSDK_OFFSET(0x254AC10)

	inline static constexpr unsigned int EventBuffSlot_TypeDefinitionIndex = 6073;

	class EventBuffSlot : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* Root; // 0x10
		::UnityEngine::GameObject* On; // 0x18
		::UnityEngine::GameObject* Off; // 0x20
		UISprite* OnSprite; // 0x28
		UISprite* OffSprite; // 0x30
		UILabel* OnLabel; // 0x38
		UILabel* OffLabel; // 0x40

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTBUFFSLOT_.CTOR_OFFSET))(nullptr);
		}

	};

