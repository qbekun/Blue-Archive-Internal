#pragma once
#include "unitysdk.h"

class UITexture;
namespace UnityEngine { class GameObject; }

#define UITBGCHARACTERINFO_REFRESH_OFFSET UNITYSDK_OFFSET(0xB540F0)
#define UITBGCHARACTERINFO_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xB53D00)
#define UITBGCHARACTERINFO_HIDE_OFFSET UNITYSDK_OFFSET(0xB53CB0)
#define UITBGCHARACTERINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0xB54170)

	inline static constexpr unsigned int UITBGCharacterInfo_TypeDefinitionIndex = 8379;

	class UITBGCharacterInfo : public Il2CppObject
	{
	public:
		UITexture* Portrait; // 0x10
		::UnityEngine::GameObject* LeaderIcon; // 0x18
		::UnityEngine::GameObject* DisableObject; // 0x20

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITBGCHARACTERINFO_REFRESH_OFFSET))(nullptr);
		}

		::System::Void Initialize(::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UITBGCHARACTERINFO_INITIALIZE_OFFSET))(str, arg, nullptr);
		}

		::System::Void Hide()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITBGCHARACTERINFO_HIDE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITBGCHARACTERINFO_.CTOR_OFFSET))(nullptr);
		}

	};

