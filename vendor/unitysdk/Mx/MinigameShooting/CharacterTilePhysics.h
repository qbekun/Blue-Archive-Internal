#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameShooting { class Character; }
namespace MX::MinigameShooting { class LogicEffectTile; }
namespace UnityEngine { class Collider; }

#define MX_MINIGAMESHOOTING_CHARACTERTILEPHYSICS__ONTRIGGERENTERORSTAY_G__PROCESSLOGICEFFECTTILE|4_0_OFFSET UNITYSDK_OFFSET(0x145C350)
#define MX_MINIGAMESHOOTING_CHARACTERTILEPHYSICS_.CTOR_OFFSET UNITYSDK_OFFSET(0x145C470)
#define MX_MINIGAMESHOOTING_CHARACTERTILEPHYSICS_ONTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0x145C480)
#define MX_MINIGAMESHOOTING_CHARACTERTILEPHYSICS_ONTRIGGERSTAY_OFFSET UNITYSDK_OFFSET(0x145C580)
#define MX_MINIGAMESHOOTING_CHARACTERTILEPHYSICS_ONTRIGGEREXIT_OFFSET UNITYSDK_OFFSET(0x145C590)
#define MX_MINIGAMESHOOTING_CHARACTERTILEPHYSICS_AWAKE_OFFSET UNITYSDK_OFFSET(0x145C5A0)
#define MX_MINIGAMESHOOTING_CHARACTERTILEPHYSICS_ONTRIGGERENTERORSTAY_OFFSET UNITYSDK_OFFSET(0x145C490)

namespace MX::MinigameShooting
{
	inline static constexpr unsigned int CharacterTilePhysics_TypeDefinitionIndex = 15041;

	class CharacterTilePhysics : public Il2CppObject
	{
	public:
		::MX::MinigameShooting::Character* character; // 0x18

		::System::Void _OnTriggerEnterOrStay_g__ProcessLogicEffectTile|4_0(::MX::MinigameShooting::LogicEffectTile* arg, <>c__DisplayClass4_0&* arg2)
		{
			((::System::Void(*)(::MX::MinigameShooting::LogicEffectTile*, <>c__DisplayClass4_0&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTERTILEPHYSICS__ONTRIGGERENTERORSTAY_G__PROCESSLOGICEFFECTTILE|4_0_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTERTILEPHYSICS_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnTriggerEnter(::UnityEngine::Collider* arg)
		{
			((::System::Void(*)(::UnityEngine::Collider*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTERTILEPHYSICS_ONTRIGGERENTER_OFFSET))(arg, nullptr);
		}

		::System::Void OnTriggerStay(::UnityEngine::Collider* arg)
		{
			((::System::Void(*)(::UnityEngine::Collider*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTERTILEPHYSICS_ONTRIGGERSTAY_OFFSET))(arg, nullptr);
		}

		::System::Void OnTriggerExit(::UnityEngine::Collider* arg)
		{
			((::System::Void(*)(::UnityEngine::Collider*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTERTILEPHYSICS_ONTRIGGEREXIT_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTERTILEPHYSICS_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnTriggerEnterOrStay(::UnityEngine::Collider* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::UnityEngine::Collider*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTERTILEPHYSICS_ONTRIGGERENTERORSTAY_OFFSET))(arg, arg2, nullptr);
		}

	};
}

