#pragma once
#include "unitysdk.h"

class UITooltip;
namespace UnityEngine { class Camera; }
class UILabel;
namespace UnityEngine { class GameObject; }
class UISprite;
namespace UnityEngine { class Transform; }
namespace UnityEngine { class Vector3; }

#define UITOOLTIP_START_OFFSET UNITYSDK_OFFSET(0x2595BB0)
#define UITOOLTIP_GET_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0x2595CF0)
#define UITOOLTIP_AWAKE_OFFSET UNITYSDK_OFFSET(0x2595DA0)
#define UITOOLTIP_UPDATE_OFFSET UNITYSDK_OFFSET(0x2595DF0)
#define UITOOLTIP_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x2596140)
#define UITOOLTIP_SETALPHA_OFFSET UNITYSDK_OFFSET(0x2596190)
#define UITOOLTIP_SETTEXT_OFFSET UNITYSDK_OFFSET(0x2596230)
#define UITOOLTIP_SHOWTEXT_OFFSET UNITYSDK_OFFSET(0x2596B90)
#define UITOOLTIP_SHOW_OFFSET UNITYSDK_OFFSET(0x2596C40)
#define UITOOLTIP_.CTOR_OFFSET UNITYSDK_OFFSET(0x2596CF0)
#define UITOOLTIP_HIDE_OFFSET UNITYSDK_OFFSET(0x2596D50)

	inline static constexpr unsigned int UITooltip_TypeDefinitionIndex = 270;

	class UITooltip : public Il2CppObject
	{
	public:
		UITooltip* mInstance; // 0x0
		::UnityEngine::Camera* uiCamera; // 0x18
		UILabel* text; // 0x20
		::UnityEngine::GameObject* tooltipRoot; // 0x28
		UISprite* background; // 0x30
		::System::Single appearSpeed; // 0x38
		::System::Boolean scalingTransitions; // 0x3C
		::UnityEngine::GameObject* mTooltip; // 0x40
		::UnityEngine::Transform* mTrans; // 0x48
		::System::Single mTarget; // 0x50
		::System::Single mCurrent; // 0x54
		::UnityEngine::Vector3* mPos; // 0x58
		::UnityEngine::Vector3* mSize; // 0x64
		::Il2CppArray<::System::Object*>* mWidgets; // 0x70

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITOOLTIP_START_OFFSET))(nullptr);
		}

		::System::Boolean get_isVisible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UITOOLTIP_GET_ISVISIBLE_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITOOLTIP_AWAKE_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITOOLTIP_UPDATE_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITOOLTIP_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void SetAlpha(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UITOOLTIP_SETALPHA_OFFSET))(arg, nullptr);
		}

		::System::Void SetText(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UITOOLTIP_SETTEXT_OFFSET))(str, nullptr);
		}

		::System::Void ShowText(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UITOOLTIP_SHOWTEXT_OFFSET))(str, nullptr);
		}

		::System::Void Show(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UITOOLTIP_SHOW_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITOOLTIP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Hide()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITOOLTIP_HIDE_OFFSET))(nullptr);
		}

	};

