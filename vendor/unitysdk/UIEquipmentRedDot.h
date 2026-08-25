#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }

#define UIEQUIPMENTREDDOT_SETREDDOT_OFFSET UNITYSDK_OFFSET(0x26453D0)
#define UIEQUIPMENTREDDOT_.CTOR_OFFSET UNITYSDK_OFFSET(0x2645450)
#define UIEQUIPMENTREDDOT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x2645460)

	inline static constexpr unsigned int UIEquipmentRedDot_TypeDefinitionIndex = 6619;

	class UIEquipmentRedDot : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* checkMark; // 0x18

		::System::Void SetRedDot()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTREDDOT_SETREDDOT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTREDDOT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTREDDOT_ONENABLE_OFFSET))(nullptr);
		}

	};

