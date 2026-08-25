#pragma once
#include "unitysdk.h"

class UISprite;
class UIGrid;
namespace UnityEngine { class GameObject; }
namespace MX::Logic::BattleEntities { class O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4; }

#define UICHARACTERSTATCHANGEINFOOVERLAY_.CTOR_OFFSET UNITYSDK_OFFSET(0x22D2A50)
#define UICHARACTERSTATCHANGEINFOOVERLAY_GET_UNITS_OFFSET UNITYSDK_OFFSET(0x22D2A70)
#define UICHARACTERSTATCHANGEINFOOVERLAY_SETDATA_OFFSET UNITYSDK_OFFSET(0x22D2B20)

	inline static constexpr unsigned int UICharacterStatChangeInfoOverlay_TypeDefinitionIndex = 4830;

	class UICharacterStatChangeInfoOverlay : public Il2CppObject
	{
	public:
		UISprite* bg; // 0x18
		UIGrid* grid; // 0x20
		::UnityEngine::GameObject* noStatDiff; // 0x28
		::System::Int32 bgDelta; // 0x30
		::System::Int32 bgOffset; // 0x34
		Il2CppObject* units; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERSTATCHANGEINFOOVERLAY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* get_Units()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERSTATCHANGEINFOOVERLAY_GET_UNITS_OFFSET))(nullptr);
		}

		::System::Void SetData(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg, ::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERSTATCHANGEINFOOVERLAY_SETDATA_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};

