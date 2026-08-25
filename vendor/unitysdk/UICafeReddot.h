#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class UISprite;

#define UICAFEREDDOT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x26422F0)
#define UICAFEREDDOT_.CTOR_OFFSET UNITYSDK_OFFSET(0x2642420)
#define UICAFEREDDOT_COSETREDDOT_OFFSET UNITYSDK_OFFSET(0x26423B0)

	inline static constexpr unsigned int UICafeReddot_TypeDefinitionIndex = 6608;

	class UICafeReddot : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* checkMark; // 0x18
		UISprite* checkMarkSprite; // 0x20

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFEREDDOT_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFEREDDOT_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoSetReddot()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFEREDDOT_COSETREDDOT_OFFSET))(nullptr);
		}

	};

