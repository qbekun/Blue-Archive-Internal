#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class UILabel;
namespace UnityEngine { class Color; }
namespace UnityEngine { class Animation; }

#define OBJECTANIMKEYPAIR_GETANIMATIONDROPDOWNITEMS_OFFSET UNITYSDK_OFFSET(0x262D160)
#define OBJECTANIMKEYPAIR_.CTOR_OFFSET UNITYSDK_OFFSET(0x262D530)

	inline static constexpr unsigned int ObjectAnimKeyPair_TypeDefinitionIndex = 6557;

	class ObjectAnimKeyPair : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* targetObject; // 0x10
		::UnityEngine::GameObject* waitingObject; // 0x18
		::UnityEngine::GameObject* nonWaitingObject; // 0x20
		UILabel* targetDayLabel; // 0x28
		::UnityEngine::Color* targetDayHighlightColor; // 0x30
		::UnityEngine::Animation* targetAnimation; // 0x40
		::System::String* openAnimationKey; // 0x48
		::System::String* closeAnimationKey; // 0x50

		Il2CppObject* GetAnimationDropdownItems()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJECTANIMKEYPAIR_GETANIMATIONDROPDOWNITEMS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJECTANIMKEYPAIR_.CTOR_OFFSET))(nullptr);
		}

	};

