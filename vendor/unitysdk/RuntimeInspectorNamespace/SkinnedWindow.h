#pragma once
#include "../unitysdk.h"

namespace RuntimeInspectorNamespace { class UISkin; }

#define RUNTIMEINSPECTORNAMESPACE_SKINNEDWINDOW_.CTOR_OFFSET UNITYSDK_OFFSET(0x958ED90)
#define RUNTIMEINSPECTORNAMESPACE_SKINNEDWINDOW_SET_SKIN_OFFSET UNITYSDK_OFFSET(0x958EDA0)
#define RUNTIMEINSPECTORNAMESPACE_SKINNEDWINDOW_REFRESHSKIN_OFFSET UNITYSDK_OFFSET(0x000000)
#define RUNTIMEINSPECTORNAMESPACE_SKINNEDWINDOW_AWAKE_OFFSET UNITYSDK_OFFSET(0x958EE50)
#define RUNTIMEINSPECTORNAMESPACE_SKINNEDWINDOW_GET_SKIN_OFFSET UNITYSDK_OFFSET(0x958EF00)
#define RUNTIMEINSPECTORNAMESPACE_SKINNEDWINDOW_UPDATE_OFFSET UNITYSDK_OFFSET(0x958EF10)

namespace RuntimeInspectorNamespace
{
	inline static constexpr unsigned int SkinnedWindow_TypeDefinitionIndex = 35730;

	class SkinnedWindow : public Il2CppObject
	{
	public:
		::RuntimeInspectorNamespace::UISkin* m_skin; // 0x18
		::System::Int32 m_skinVersion; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_SKINNEDWINDOW_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_Skin(::RuntimeInspectorNamespace::UISkin* arg)
		{
			((::System::Void(*)(::RuntimeInspectorNamespace::UISkin*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_SKINNEDWINDOW_SET_SKIN_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshSkin()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_SKINNEDWINDOW_REFRESHSKIN_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_SKINNEDWINDOW_AWAKE_OFFSET))(nullptr);
		}

		::RuntimeInspectorNamespace::UISkin* get_Skin()
		{
			return (return (::RuntimeInspectorNamespace::UISkin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_SKINNEDWINDOW_GET_SKIN_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_SKINNEDWINDOW_UPDATE_OFFSET))(nullptr);
		}

	};
}

