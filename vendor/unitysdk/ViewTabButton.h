#pragma once
#include "unitysdk.h"

class MXButton;
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }

#define VIEWTABBUTTON_.CTOR_OFFSET UNITYSDK_OFFSET(0x26280D0)

	inline static constexpr unsigned int ViewTabButton_TypeDefinitionIndex = 6538;

	class ViewTabButton : public Il2CppObject
	{
	public:
		MXButton* button; // 0x10
		::UnityEngine::Animation* animation; // 0x18
		::UnityEngine::GameObject* newLabel; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VIEWTABBUTTON_.CTOR_OFFSET))(nullptr);
		}

	};

