#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class UITexture;
class UILabel;
class UISprite;

#define BUFFINFODATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x2420950)

	inline static constexpr unsigned int BuffInfoData_TypeDefinitionIndex = 5502;

	class BuffInfoData : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* iconPathObject; // 0x10
		UITexture* selectBuffIcon; // 0x18
		UILabel* buffName; // 0x20
		UILabel* buffDetail; // 0x28
		UISprite* buffIcon; // 0x30
		UISprite* dBuffPointIcon; // 0x38
		UILabel* dBuffPoint; // 0x40

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BUFFINFODATA_.CTOR_OFFSET))(nullptr);
		}

	};

