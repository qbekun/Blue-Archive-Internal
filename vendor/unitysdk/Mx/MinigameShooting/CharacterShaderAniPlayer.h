#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameShooting { class Character; }
namespace UnityEngine { class Coroutine; }

#define MX_MINIGAMESHOOTING_CHARACTERSHADERANIPLAYER__PLAYDEADSHADER_B__11_0_OFFSET UNITYSDK_OFFSET(0x145B980)
#define MX_MINIGAMESHOOTING_CHARACTERSHADERANIPLAYER_SET_RENDERERS_OFFSET UNITYSDK_OFFSET(0x145BA10)
#define MX_MINIGAMESHOOTING_CHARACTERSHADERANIPLAYER_PLAYDEADSHADER_OFFSET UNITYSDK_OFFSET(0x1458CE0)
#define MX_MINIGAMESHOOTING_CHARACTERSHADERANIPLAYER_.CTOR_OFFSET UNITYSDK_OFFSET(0x145BA20)
#define MX_MINIGAMESHOOTING_CHARACTERSHADERANIPLAYER_SETRENDERERSHADOWSOFF_OFFSET UNITYSDK_OFFSET(0x145C030)
#define MX_MINIGAMESHOOTING_CHARACTERSHADERANIPLAYER__PLAYDEADSHADER_B__11_1_OFFSET UNITYSDK_OFFSET(0x145C190)
#define MX_MINIGAMESHOOTING_CHARACTERSHADERANIPLAYER_PLAYHITSHADER_OFFSET UNITYSDK_OFFSET(0x145C200)
#define MX_MINIGAMESHOOTING_CHARACTERSHADERANIPLAYER_GETSHADERANIMATIONMATLIST_OFFSET UNITYSDK_OFFSET(0x145BD40)
#define MX_MINIGAMESHOOTING_CHARACTERSHADERANIPLAYER_GET_RENDERERS_OFFSET UNITYSDK_OFFSET(0x145C2E0)

namespace MX::MinigameShooting
{
	inline static constexpr unsigned int CharacterShaderAniPlayer_TypeDefinitionIndex = 15039;

	class CharacterShaderAniPlayer : public Il2CppObject
	{
	public:
		::MX::MinigameShooting::Character* character; // 0x10
		Il2CppObject* _Renderers_k__BackingField; // 0x18
		::UnityEngine::Coroutine* hitAnimationCoroutine; // 0x20
		::Il2CppArray<::System::Object*>* hitShaderAnimationMats; // 0x28
		::Il2CppArray<::System::Object*>* deadShaderAnimationMats; // 0x30

		::System::Void _PlayDeadShader_b__11_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTERSHADERANIPLAYER__PLAYDEADSHADER_B__11_0_OFFSET))(nullptr);
		}

		::System::Void set_Renderers(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTERSHADERANIPLAYER_SET_RENDERERS_OFFSET))(arg, nullptr);
		}

		::System::Void PlayDeadShader()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTERSHADERANIPLAYER_PLAYDEADSHADER_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::MinigameShooting::Character* arg)
		{
			((::System::Void(*)(::MX::MinigameShooting::Character*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTERSHADERANIPLAYER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void SetRendererShadowsOff()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTERSHADERANIPLAYER_SETRENDERERSHADOWSOFF_OFFSET))(nullptr);
		}

		::System::Void _PlayDeadShader_b__11_1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTERSHADERANIPLAYER__PLAYDEADSHADER_B__11_1_OFFSET))(nullptr);
		}

		::System::Void PlayHitShader()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTERSHADERANIPLAYER_PLAYHITSHADER_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetShaderAnimationMatList(Il2CppObject* arg)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTERSHADERANIPLAYER_GETSHADERANIMATIONMATLIST_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Renderers()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTERSHADERANIPLAYER_GET_RENDERERS_OFFSET))(nullptr);
		}

	};
}

