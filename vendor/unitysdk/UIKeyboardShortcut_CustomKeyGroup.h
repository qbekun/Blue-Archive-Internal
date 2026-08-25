#pragma once
#include "unitysdk.h"

class UILabel;
class UITable;
namespace UnityEngine { class GameObject; }

#define UIKEYBOARDSHORTCUT_CUSTOMKEYGROUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x2193420)
#define UIKEYBOARDSHORTCUT_CUSTOMKEYGROUP_SET_OFFSET UNITYSDK_OFFSET(0x2193430)

	inline static constexpr unsigned int UIKeyboardShortcut_CustomKeyGroup_TypeDefinitionIndex = 4110;

	class UIKeyboardShortcut_CustomKeyGroup : public Il2CppObject
	{
	public:
		UILabel* _localizeLabel; // 0x18
		UITable* _table; // 0x20
		UILabel* _keycodeLabel; // 0x28
		UILabel* _addedKeycodeLabel; // 0x30
		::UnityEngine::GameObject* _addedKeycode; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIKEYBOARDSHORTCUT_CUSTOMKEYGROUP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Set(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIKEYBOARDSHORTCUT_CUSTOMKEYGROUP_SET_OFFSET))(str, arg, nullptr);
		}

	};

