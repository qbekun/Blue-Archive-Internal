#pragma once
#include "unitysdk.h"

namespace FlatData { class DialogType; }
namespace UnityEngine { class GameObject; }
class UILabel;
class UISprite;
class TweenAlpha;

#define DIALOGBOX_.CTOR_OFFSET UNITYSDK_OFFSET(0xB80CA0)

	inline static constexpr unsigned int DialogBox_TypeDefinitionIndex = 8514;

	class DialogBox : public Il2CppObject
	{
	public:
		::FlatData::DialogType* Type; // 0x10
		::UnityEngine::GameObject* GameObject; // 0x18
		UILabel* Text; // 0x20
		UISprite* Bg; // 0x28
		TweenAlpha* TextTween; // 0x30
		TweenAlpha* ImageTween; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIALOGBOX_.CTOR_OFFSET))(nullptr);
		}

	};

