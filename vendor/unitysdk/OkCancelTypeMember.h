#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class MXButton;
class UILabel;
class UISprite;

#define OKCANCELTYPEMEMBER_.CTOR_OFFSET UNITYSDK_OFFSET(0x277BF50)

	inline static constexpr unsigned int OkCancelTypeMember_TypeDefinitionIndex = 7364;

	class OkCancelTypeMember : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* ButtonRoot; // 0x10
		MXButton* OkButton; // 0x18
		UILabel* OkButtonLabel; // 0x20
		UISprite* OkButtonSpr; // 0x28
		MXButton* CancelButton; // 0x30
		UILabel* CancelButtonLabel; // 0x38
		UISprite* CancelButtonSpr; // 0x40

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKCANCELTYPEMEMBER_.CTOR_OFFSET))(nullptr);
		}

	};

