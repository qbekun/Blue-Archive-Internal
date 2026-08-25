#pragma once
#include "../unitysdk.h"

namespace TMPro { class FastAction; }
namespace UnityEngine { class Object; }
namespace TMPro { class Compute_DT_EventArgs; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class GameObject; }

#define TMPRO_TMPRO_EVENTMANAGER_ON_TMP_SETTINGS_CHANGED_OFFSET UNITYSDK_OFFSET(0xA11DD70)
#define TMPRO_TMPRO_EVENTMANAGER_ON_FONT_PROPERTY_CHANGED_OFFSET UNITYSDK_OFFSET(0xA11DDF0)
#define TMPRO_TMPRO_EVENTMANAGER_ON_COLOR_GRADIENT_PROPERTY_CHANGED_OFFSET UNITYSDK_OFFSET(0xA11DE90)
#define TMPRO_TMPRO_EVENTMANAGER_ON_TEXTMESHPRO_UGUI_PROPERTY_CHANGED_OFFSET UNITYSDK_OFFSET(0xA11DF30)
#define TMPRO_TMPRO_EVENTMANAGER_ON_TEXTMESHPRO_PROPERTY_CHANGED_OFFSET UNITYSDK_OFFSET(0xA11DFD0)
#define TMPRO_TMPRO_EVENTMANAGER_ON_COMPUTE_DT_EVENT_OFFSET UNITYSDK_OFFSET(0xA11E070)
#define TMPRO_TMPRO_EVENTMANAGER_ON_RESOURCES_LOADED_OFFSET UNITYSDK_OFFSET(0xA11E110)
#define TMPRO_TMPRO_EVENTMANAGER_ON_MATERIAL_PROPERTY_CHANGED_OFFSET UNITYSDK_OFFSET(0xA11E190)
#define TMPRO_TMPRO_EVENTMANAGER_ON_TEXT_CHANGED_OFFSET UNITYSDK_OFFSET(0xA11E230)
#define TMPRO_TMPRO_EVENTMANAGER_ON_SPRITE_ASSET_PROPERTY_CHANGED_OFFSET UNITYSDK_OFFSET(0xA11E2D0)
#define TMPRO_TMPRO_EVENTMANAGER_ON_DRAG_AND_DROP_MATERIAL_CHANGED_OFFSET UNITYSDK_OFFSET(0xA11E370)
#define TMPRO_TMPRO_EVENTMANAGER_ON_TEXT_STYLE_PROPERTY_CHANGED_OFFSET UNITYSDK_OFFSET(0xA11E420)
#define TMPRO_TMPRO_EVENTMANAGER_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA11E4C0)

namespace TMPro
{
	inline static constexpr unsigned int TMPro_EventManager_TypeDefinitionIndex = 33614;

	class TMPro_EventManager : public Il2CppObject
	{
	public:
		Il2CppObject* COMPUTE_DT_EVENT; // 0x0
		Il2CppObject* MATERIAL_PROPERTY_EVENT; // 0x8
		Il2CppObject* FONT_PROPERTY_EVENT; // 0x10
		Il2CppObject* SPRITE_ASSET_PROPERTY_EVENT; // 0x18
		Il2CppObject* TEXTMESHPRO_PROPERTY_EVENT; // 0x20
		Il2CppObject* DRAG_AND_DROP_MATERIAL_EVENT; // 0x28
		Il2CppObject* TEXT_STYLE_PROPERTY_EVENT; // 0x30
		Il2CppObject* COLOR_GRADIENT_PROPERTY_EVENT; // 0x38
		::TMPro::FastAction* TMP_SETTINGS_PROPERTY_EVENT; // 0x40
		::TMPro::FastAction* RESOURCE_LOAD_EVENT; // 0x48
		Il2CppObject* TEXTMESHPRO_UGUI_PROPERTY_EVENT; // 0x50
		Il2CppObject* TEXT_CHANGED_EVENT; // 0x58

		::System::Void ON_TMP_SETTINGS_CHANGED()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMPRO_EVENTMANAGER_ON_TMP_SETTINGS_CHANGED_OFFSET))(nullptr);
		}

		::System::Void ON_FONT_PROPERTY_CHANGED(::System::Boolean arg, ::UnityEngine::Object* arg)
		{
			((::System::Void(*)(::System::Boolean, ::UnityEngine::Object*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMPRO_EVENTMANAGER_ON_FONT_PROPERTY_CHANGED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ON_COLOR_GRADIENT_PROPERTY_CHANGED(::UnityEngine::Object* arg)
		{
			((::System::Void(*)(::UnityEngine::Object*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMPRO_EVENTMANAGER_ON_COLOR_GRADIENT_PROPERTY_CHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void ON_TEXTMESHPRO_UGUI_PROPERTY_CHANGED(::System::Boolean arg, ::UnityEngine::Object* arg)
		{
			((::System::Void(*)(::System::Boolean, ::UnityEngine::Object*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMPRO_EVENTMANAGER_ON_TEXTMESHPRO_UGUI_PROPERTY_CHANGED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ON_TEXTMESHPRO_PROPERTY_CHANGED(::System::Boolean arg, ::UnityEngine::Object* arg)
		{
			((::System::Void(*)(::System::Boolean, ::UnityEngine::Object*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMPRO_EVENTMANAGER_ON_TEXTMESHPRO_PROPERTY_CHANGED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ON_COMPUTE_DT_EVENT(::System::Object* arg, ::TMPro::Compute_DT_EventArgs* arg)
		{
			((::System::Void(*)(::System::Object*, ::TMPro::Compute_DT_EventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMPRO_EVENTMANAGER_ON_COMPUTE_DT_EVENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ON_RESOURCES_LOADED()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMPRO_EVENTMANAGER_ON_RESOURCES_LOADED_OFFSET))(nullptr);
		}

		::System::Void ON_MATERIAL_PROPERTY_CHANGED(::System::Boolean arg, ::UnityEngine::Material* arg)
		{
			((::System::Void(*)(::System::Boolean, ::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMPRO_EVENTMANAGER_ON_MATERIAL_PROPERTY_CHANGED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ON_TEXT_CHANGED(::UnityEngine::Object* arg)
		{
			((::System::Void(*)(::UnityEngine::Object*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMPRO_EVENTMANAGER_ON_TEXT_CHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void ON_SPRITE_ASSET_PROPERTY_CHANGED(::System::Boolean arg, ::UnityEngine::Object* arg)
		{
			((::System::Void(*)(::System::Boolean, ::UnityEngine::Object*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMPRO_EVENTMANAGER_ON_SPRITE_ASSET_PROPERTY_CHANGED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ON_DRAG_AND_DROP_MATERIAL_CHANGED(::UnityEngine::GameObject* arg, ::UnityEngine::Material* arg, ::UnityEngine::Material* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::UnityEngine::Material*, ::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMPRO_EVENTMANAGER_ON_DRAG_AND_DROP_MATERIAL_CHANGED_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ON_TEXT_STYLE_PROPERTY_CHANGED(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMPRO_EVENTMANAGER_ON_TEXT_STYLE_PROPERTY_CHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMPRO_EVENTMANAGER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

