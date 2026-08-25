#pragma once
#include "unitysdk.h"

class UILabel;
class UISprite;
class UITexture;
class UISlider;
class UIWidget;
namespace UnityEngine { class Color; }
namespace UnityEngine { class Texture; }

#define UIBATTLESUMMARYELEMENT_FILLWIDGET_OFFSET UNITYSDK_OFFSET(0x225A230)
#define UIBATTLESUMMARYELEMENT_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x2259630)
#define UIBATTLESUMMARYELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x225A5B0)
#define UIBATTLESUMMARYELEMENT_UPDATEGAUGEINTERNAL_OFFSET UNITYSDK_OFFSET(0x225A5D0)
#define UIBATTLESUMMARYELEMENT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x225A7E0)
#define UIBATTLESUMMARYELEMENT_AWAKE_OFFSET UNITYSDK_OFFSET(0x225A8D0)
#define UIBATTLESUMMARYELEMENT__FILLWIDGET_B__23_0_OFFSET UNITYSDK_OFFSET(0x225A930)
#define UIBATTLESUMMARYELEMENT_COUPDATEGAUGE_OFFSET UNITYSDK_OFFSET(0x225A860)

	inline static constexpr unsigned int UIBattleSummaryElement_TypeDefinitionIndex = 4553;

	class UIBattleSummaryElement : public Il2CppObject
	{
	public:
		::System::Single gaugeOffset; // 0x0
		UILabel* damageLabel; // 0x18
		UILabel* nameLabel; // 0x20
		UISprite* backgroundSprite; // 0x28
		UISprite* gaugeSprite; // 0x30
		UISprite* assistIcon; // 0x38
		UITexture* characterTexture; // 0x40
		UISlider* gaugeSlider; // 0x48
		UIWidget* damageWidget; // 0x50
		::System::Single gaugeFillDuration; // 0x58
		::UnityEngine::Color* mainEntityBackgroundColor; // 0x5C
		::UnityEngine::Color* supportEntityBackgroundColor; // 0x6C
		::UnityEngine::Color* tssEntityBackgroundColor; // 0x7C
		::UnityEngine::Color* mainEntityGaugeColor; // 0x8C
		::UnityEngine::Color* supportEntityGaugeColor; // 0x9C
		::UnityEngine::Color* tssEntityGaugeColor; // 0xAC
		::System::Int64 damage; // 0xC0
		::System::Single gaugeGoal; // 0xC8
		::System::Single damageLabelHeight; // 0xCC
		::System::Boolean playAnimation; // 0xD0

		::System::Void FillWidget(::System::Int64 arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLESUMMARYELEMENT_FILLWIDGET_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Initialize(::System::Int64 arg, ::System::Int64 arg2, ::System::Int64 arg3, ::System::Boolean arg4, ::System::Boolean arg5, ::System::Boolean arg6)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::System::Int64, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLESUMMARYELEMENT_INITIALIZE_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLESUMMARYELEMENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void UpdateGaugeInternal(::System::Single arg, ::System::Single arg2)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLESUMMARYELEMENT_UPDATEGAUGEINTERNAL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLESUMMARYELEMENT_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLESUMMARYELEMENT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void _FillWidget_b__23_0(::UnityEngine::Texture* arg)
		{
			((::System::Void(*)(::UnityEngine::Texture*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLESUMMARYELEMENT__FILLWIDGET_B__23_0_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CoUpdateGauge()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLESUMMARYELEMENT_COUPDATEGAUGE_OFFSET))(nullptr);
		}

	};

