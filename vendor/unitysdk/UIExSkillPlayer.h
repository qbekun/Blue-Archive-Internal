#pragma once
#include "unitysdk.h"

class UIExSkillPortrait;
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
class EntityVisual;

#define UIEXSKILLPLAYER_HANDLEUIOPEN_OFFSET UNITYSDK_OFFSET(0x24D0720)
#define UIEXSKILLPLAYER_PLAY_OFFSET UNITYSDK_OFFSET(0x24D0820)
#define UIEXSKILLPLAYER_.CTOR_OFFSET UNITYSDK_OFFSET(0x24D0A80)
#define UIEXSKILLPLAYER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x24D0A90)
#define UIEXSKILLPLAYER_CO_LOADING_OFFSET UNITYSDK_OFFSET(0x24D0BF0)
#define UIEXSKILLPLAYER___N__0_OFFSET UNITYSDK_OFFSET(0x24D0C80)
#define UIEXSKILLPLAYER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x24D0C90)

	inline static constexpr unsigned int UIExSkillPlayer_TypeDefinitionIndex = 5945;

	class UIExSkillPlayer : public Il2CppObject
	{
	public:
		UIExSkillPortrait* playerPortrait; // 0xD8
		UIExSkillPortrait* enemyPortrait; // 0xE0

		::System::Boolean HandleUIOpen(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIEXSKILLPLAYER_HANDLEUIOPEN_OFFSET))(arg, nullptr);
		}

		::System::Void Play(EntityVisual* arg, ::System::String* str, ::System::Boolean arg2, ::System::Int32 arg3)
		{
			((::System::Void(*)(EntityVisual*, ::System::String*, ::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIEXSKILLPLAYER_PLAY_OFFSET))(arg, str, arg2, arg3, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEXSKILLPLAYER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEXSKILLPLAYER_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEXSKILLPLAYER_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEXSKILLPLAYER___N__0_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEXSKILLPLAYER_ONENABLE_OFFSET))(nullptr);
		}

	};

