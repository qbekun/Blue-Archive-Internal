#pragma once
#include "unitysdk.h"

class UISprite;
namespace UnityEngine { class Animation; }
class ManageUIWidgets;
namespace MX::Logic::BattleEntities { class BarrierObstacle; }

#define BARRIEROBSTACLEHPGAUGE_CO_CLOSE_OFFSET UNITYSDK_OFFSET(0x25CF360)
#define BARRIEROBSTACLEHPGAUGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x25CF3F0)
#define BARRIEROBSTACLEHPGAUGE_SYNCOBSTACLE_OFFSET UNITYSDK_OFFSET(0x25CF400)
#define BARRIEROBSTACLEHPGAUGE_CLOSE_OFFSET UNITYSDK_OFFSET(0x25CF460)
#define BARRIEROBSTACLEHPGAUGE_INITIALIZEDEPTHMANAGEMENT_OFFSET UNITYSDK_OFFSET(0x25CF4F0)
#define BARRIEROBSTACLEHPGAUGE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x25CF530)
#define BARRIEROBSTACLEHPGAUGE_DESTROYANIMATIONENDSAMPLE_OFFSET UNITYSDK_OFFSET(0x25CF570)
#define BARRIEROBSTACLEHPGAUGE_OPEN_OFFSET UNITYSDK_OFFSET(0x25CF640)

	inline static constexpr unsigned int BarrierObstacleHPGauge_TypeDefinitionIndex = 6349;

	class BarrierObstacleHPGauge : public Il2CppObject
	{
	public:
		UISprite* GaugeMain; // 0x18
		UISprite* GaugeBackground; // 0x20
		::UnityEngine::Animation* DestroyAnimation; // 0x28
		::System::Int64 maxGaugeValue; // 0x30
		::System::Int64 gaugeValue; // 0x38
		ManageUIWidgets* addToWidgetList; // 0x40
		ManageUIWidgets* removeFromWidgetList; // 0x48

		::System::Collections::IEnumerator* Co_Close()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + BARRIEROBSTACLEHPGAUGE_CO_CLOSE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BARRIEROBSTACLEHPGAUGE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SyncObstacle(::MX::Logic::BattleEntities::BarrierObstacle* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BarrierObstacle*, ::PVOID))((::PBYTE)hIl2Cpp + BARRIEROBSTACLEHPGAUGE_SYNCOBSTACLE_OFFSET))(arg, nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BARRIEROBSTACLEHPGAUGE_CLOSE_OFFSET))(nullptr);
		}

		::System::Void InitializeDepthManagement(ManageUIWidgets* arg, ManageUIWidgets* arg2)
		{
			((::System::Void(*)(ManageUIWidgets*, ManageUIWidgets*, ::PVOID))((::PBYTE)hIl2Cpp + BARRIEROBSTACLEHPGAUGE_INITIALIZEDEPTHMANAGEMENT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BARRIEROBSTACLEHPGAUGE_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void DestroyAnimationEndSample()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BARRIEROBSTACLEHPGAUGE_DESTROYANIMATIONENDSAMPLE_OFFSET))(nullptr);
		}

		::System::Void Open()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BARRIEROBSTACLEHPGAUGE_OPEN_OFFSET))(nullptr);
		}

	};

