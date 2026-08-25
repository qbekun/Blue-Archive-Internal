#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }

#define UICHARACTERREDDOT_SETREDDOT_OFFSET UNITYSDK_OFFSET(0x26425E0)
#define UICHARACTERREDDOT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x2642660)
#define UICHARACTERREDDOT_.CTOR_OFFSET UNITYSDK_OFFSET(0x26426E0)

	inline static constexpr unsigned int UICharacterRedDot_TypeDefinitionIndex = 6609;

	class UICharacterRedDot : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* checkMark; // 0x18

		::System::Void SetRedDot()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERREDDOT_SETREDDOT_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERREDDOT_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERREDDOT_.CTOR_OFFSET))(nullptr);
		}

	};

