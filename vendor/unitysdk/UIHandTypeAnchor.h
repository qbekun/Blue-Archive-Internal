#pragma once
#include "unitysdk.h"

class Pivot;
namespace UnityEngine { class Vector2; }

#define UIHANDTYPEANCHOR_SWITCH_OFFSET UNITYSDK_OFFSET(0x25FC3D0)
#define UIHANDTYPEANCHOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x25FC4D0)
#define UIHANDTYPEANCHOR_ONENABLE_OFFSET UNITYSDK_OFFSET(0x25FC4E0)

	inline static constexpr unsigned int UIHandTypeAnchor_TypeDefinitionIndex = 6458;

	class UIHandTypeAnchor : public Il2CppObject
	{
	public:
		Pivot* OtherPivot; // 0x18
		::UnityEngine::Vector2* OtherPosition; // 0x1C
		::System::Boolean IsLeftHand; // 0x24

		::System::Void Switch()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIHANDTYPEANCHOR_SWITCH_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIHANDTYPEANCHOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIHANDTYPEANCHOR_ONENABLE_OFFSET))(nullptr);
		}

	};

