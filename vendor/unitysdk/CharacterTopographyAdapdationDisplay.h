#pragma once
#include "unitysdk.h"

namespace FlatData { class StageTopography; }
class UISprite;
namespace UnityEngine { class GameObject; }
namespace MX::Logic::BattleEntities { class O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4; }

#define CHARACTERTOPOGRAPHYADAPDATIONDISPLAY_SETDATA_OFFSET UNITYSDK_OFFSET(0x2582950)
#define CHARACTERTOPOGRAPHYADAPDATIONDISPLAY_.CTOR_OFFSET UNITYSDK_OFFSET(0x2582B20)
#define CHARACTERTOPOGRAPHYADAPDATIONDISPLAY_SETEMPTY_OFFSET UNITYSDK_OFFSET(0x2582B30)

	inline static constexpr unsigned int CharacterTopographyAdapdationDisplay_TypeDefinitionIndex = 6207;

	class CharacterTopographyAdapdationDisplay : public Il2CppObject
	{
	public:
		::FlatData::StageTopography* topography; // 0x10
		UISprite* topographySprite; // 0x18
		UISprite* adaptationSprite; // 0x20
		::UnityEngine::GameObject* empty; // 0x28

		::System::Void SetData(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERTOPOGRAPHYADAPDATIONDISPLAY_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERTOPOGRAPHYADAPDATIONDISPLAY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetEmpty()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERTOPOGRAPHYADAPDATIONDISPLAY_SETEMPTY_OFFSET))(nullptr);
		}

	};

