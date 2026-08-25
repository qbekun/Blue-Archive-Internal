#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
class UISmallParcelList;

#define UIPOPUP_ARENASKIPRESULT_ONOPENED_OFFSET UNITYSDK_OFFSET(0x2203260)
#define UIPOPUP_ARENASKIPRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x2203740)

	inline static constexpr unsigned int UIPopup_ArenaSkipResult_TypeDefinitionIndex = 4303;

	class UIPopup_ArenaSkipResult : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* WinRoot; // 0xD8
		::UnityEngine::GameObject* LoseRoot; // 0xE0
		Il2CppObject* MapTextures; // 0xE8
		::UnityEngine::Transform* RewardRootWidget; // 0xF0
		UISmallParcelList* RewardList; // 0xF8

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ARENASKIPRESULT_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ARENASKIPRESULT_.CTOR_OFFSET))(nullptr);
		}

	};

