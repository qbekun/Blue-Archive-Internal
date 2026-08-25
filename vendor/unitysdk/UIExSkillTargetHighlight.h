#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class UITexture;
class CharacterVisual;
class UIPanel;
class HPWidgetBase;
namespace MX::Logic::BattleEntities { class O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4; }

#define UIEXSKILLTARGETHIGHLIGHT_SETDEPTH_OFFSET UNITYSDK_OFFSET(0x25FBC80)
#define UIEXSKILLTARGETHIGHLIGHT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x25FBF00)
#define UIEXSKILLTARGETHIGHLIGHT_SETDEPTHATFRAMEEND_OFFSET UNITYSDK_OFFSET(0x25FBF90)
#define UIEXSKILLTARGETHIGHLIGHT_AWAKE_OFFSET UNITYSDK_OFFSET(0x25FC020)
#define UIEXSKILLTARGETHIGHLIGHT_UPDATE_OFFSET UNITYSDK_OFFSET(0x25FC0A0)
#define UIEXSKILLTARGETHIGHLIGHT_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x25F3860)
#define UIEXSKILLTARGETHIGHLIGHT_DISPLAYHOW_OFFSET UNITYSDK_OFFSET(0x25FC0B0)
#define UIEXSKILLTARGETHIGHLIGHT_.CTOR_OFFSET UNITYSDK_OFFSET(0x25FC2D0)

	inline static constexpr unsigned int UIExSkillTargetHighlight_TypeDefinitionIndex = 6457;

	class UIExSkillTargetHighlight : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* rootMarker; // 0x18
		::UnityEngine::GameObject* rootThumbnail; // 0x20
		UITexture* characterThumbnail; // 0x28
		CharacterVisual* visual; // 0x30
		UIPanel* uiPanel; // 0x38
		HPWidgetBase* hpWidgetBase; // 0x40
		UIPanel* uiOperatorPanel; // 0x48

		::System::Void SetDepth()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEXSKILLTARGETHIGHLIGHT_SETDEPTH_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEXSKILLTARGETHIGHLIGHT_ONENABLE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* SetDepthAtFrameEnd()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEXSKILLTARGETHIGHLIGHT_SETDEPTHATFRAMEEND_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEXSKILLTARGETHIGHLIGHT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEXSKILLTARGETHIGHLIGHT_UPDATE_OFFSET))(nullptr);
		}

		::System::Void Initialize(CharacterVisual* arg)
		{
			((::System::Void(*)(CharacterVisual*, ::PVOID))((::PBYTE)hIl2Cpp + UIEXSKILLTARGETHIGHLIGHT_INITIALIZE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* DisplayHow(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg)
		{
			return ((Il2CppObject*(*)(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::PVOID))((::PBYTE)hIl2Cpp + UIEXSKILLTARGETHIGHLIGHT_DISPLAYHOW_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEXSKILLTARGETHIGHLIGHT_.CTOR_OFFSET))(nullptr);
		}

	};

