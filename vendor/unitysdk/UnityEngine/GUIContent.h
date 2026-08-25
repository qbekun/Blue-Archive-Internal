#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Texture; }
namespace UnityEngine { class GUIContent; }

#define UNITYENGINE_GUICONTENT_GET_TEXT_OFFSET UNITYSDK_OFFSET(0xA27CCB0)
#define UNITYENGINE_GUICONTENT_SET_TEXT_OFFSET UNITYSDK_OFFSET(0xA27CCC0)
#define UNITYENGINE_GUICONTENT_SET_IMAGE_OFFSET UNITYSDK_OFFSET(0xA27CCD0)
#define UNITYENGINE_GUICONTENT_GET_TOOLTIP_OFFSET UNITYSDK_OFFSET(0xA27B3F0)
#define UNITYENGINE_GUICONTENT_SET_TOOLTIP_OFFSET UNITYSDK_OFFSET(0xA27CCE0)
#define UNITYENGINE_GUICONTENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA27CCF0)
#define UNITYENGINE_GUICONTENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA27CD60)
#define UNITYENGINE_GUICONTENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA27CDC0)
#define UNITYENGINE_GUICONTENT_TEMP_OFFSET UNITYSDK_OFFSET(0xA2789F0)
#define UNITYENGINE_GUICONTENT_CLEARSTATICCACHE_OFFSET UNITYSDK_OFFSET(0xA27CE80)
#define UNITYENGINE_GUICONTENT_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA27D010)
#define UNITYENGINE_GUICONTENT_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA27D030)

namespace UnityEngine
{
	inline static constexpr unsigned int GUIContent_TypeDefinitionIndex = 36535;

	class GUIContent : public Il2CppObject
	{
	public:
		::System::String* m_Text; // 0x10
		::UnityEngine::Texture* m_Image; // 0x18
		::System::String* m_Tooltip; // 0x20
		::UnityEngine::GUIContent* s_Text; // 0x0
		::UnityEngine::GUIContent* s_Image; // 0x8
		::UnityEngine::GUIContent* s_TextImage; // 0x10
		::UnityEngine::GUIContent* none; // 0x18

		::System::String* get_text()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUICONTENT_GET_TEXT_OFFSET))(nullptr);
		}

		::System::Void set_text(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUICONTENT_SET_TEXT_OFFSET))(str, nullptr);
		}

		::System::Void set_image(::UnityEngine::Texture* arg)
		{
			((::System::Void(*)(::UnityEngine::Texture*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUICONTENT_SET_IMAGE_OFFSET))(arg, nullptr);
		}

		::System::String* get_tooltip()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUICONTENT_GET_TOOLTIP_OFFSET))(nullptr);
		}

		::System::Void set_tooltip(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUICONTENT_SET_TOOLTIP_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUICONTENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUICONTENT_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::UnityEngine::Texture* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::UnityEngine::Texture*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUICONTENT_.CTOR_OFFSET))(str, arg, str, nullptr);
		}

		::UnityEngine::GUIContent* Temp(::System::String* str)
		{
			return (return (::UnityEngine::GUIContent*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUICONTENT_TEMP_OFFSET))(str, nullptr);
		}

		::System::Void ClearStaticCache()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUICONTENT_CLEARSTATICCACHE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUICONTENT_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUICONTENT_.CCTOR_OFFSET))(nullptr);
		}

	};
}

