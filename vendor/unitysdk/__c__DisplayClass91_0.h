#pragma once
#include "unitysdk.h"

namespace UnityEngine::SceneManagement { class Scene; }
namespace MX::AssetBundles { class LoadedSceneHandle; }

#define <>C__DISPLAYCLASS91_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x147B7B0)
#define <>C__DISPLAYCLASS91_0__LOADSCENE_B__0_OFFSET UNITYSDK_OFFSET(0x147B7C0)

	inline static constexpr unsigned int <>c__DisplayClass91_0_TypeDefinitionIndex = 15156;

	class <>c__DisplayClass91_0 : public Il2CppObject
	{
	public:
		::System::Boolean sceneLoaded; // 0x10
		::UnityEngine::SceneManagement::Scene* result; // 0x14

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS91_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _LoadScene_b__0(::MX::AssetBundles::LoadedSceneHandle* arg)
		{
			((::System::Void(*)(::MX::AssetBundles::LoadedSceneHandle*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS91_0__LOADSCENE_B__0_OFFSET))(arg, nullptr);
		}

	};

