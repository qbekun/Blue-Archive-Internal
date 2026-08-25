#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class UILabel;
class MXButton;

#define COMPLETEPOPUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x27610D0)

	inline static constexpr unsigned int CompletePopup_TypeDefinitionIndex = 7299;

	class CompletePopup : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* GameObject; // 0x10
		UILabel* CallnameLabel; // 0x18
		MXButton* SoundButton; // 0x20
		MXButton* OkButton; // 0x28
		MXButton* CloseButton; // 0x30

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COMPLETEPOPUP_.CTOR_OFFSET))(nullptr);
		}

	};

