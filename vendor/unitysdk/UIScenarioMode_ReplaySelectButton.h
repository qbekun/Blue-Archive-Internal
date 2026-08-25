#pragma once
#include "unitysdk.h"

namespace FlatData { class ScenarioModeReplayTypes; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Texture; }
class UIScenarioMode_Volume;

#define UISCENARIOMODE_REPLAYSELECTBUTTON_SETOBJECTS_OFFSET UNITYSDK_OFFSET(0x280F6B0)
#define UISCENARIOMODE_REPLAYSELECTBUTTON_GET_LOCKED_OFFSET UNITYSDK_OFFSET(0x280F9D0)
#define UISCENARIOMODE_REPLAYSELECTBUTTON_GET_OPEN_OFFSET UNITYSDK_OFFSET(0x280F920)
#define UISCENARIOMODE_REPLAYSELECTBUTTON_GET_TEXTURES_OFFSET UNITYSDK_OFFSET(0x280FBE0)
#define UISCENARIOMODE_REPLAYSELECTBUTTON_SETLABELS_OFFSET UNITYSDK_OFFSET(0x280FE30)
#define UISCENARIOMODE_REPLAYSELECTBUTTON__SETTEXTURES_B__28_0_OFFSET UNITYSDK_OFFSET(0x2810490)
#define UISCENARIOMODE_REPLAYSELECTBUTTON_SETTEXTURES_OFFSET UNITYSDK_OFFSET(0x2810690)
#define UISCENARIOMODE_REPLAYSELECTBUTTON_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x2810840)
#define UISCENARIOMODE_REPLAYSELECTBUTTON_GET_EMPTY_OFFSET UNITYSDK_OFFSET(0x280FB30)
#define UISCENARIOMODE_REPLAYSELECTBUTTON__ONCLICK_B__29_0_OFFSET UNITYSDK_OFFSET(0x2810850)
#define UISCENARIOMODE_REPLAYSELECTBUTTON_GET_TITLES_OFFSET UNITYSDK_OFFSET(0x28100F0)
#define UISCENARIOMODE_REPLAYSELECTBUTTON_GET_SUBTITLES_OFFSET UNITYSDK_OFFSET(0x28102C0)
#define UISCENARIOMODE_REPLAYSELECTBUTTON_GET_COMMING_OFFSET UNITYSDK_OFFSET(0x280FA80)
#define UISCENARIOMODE_REPLAYSELECTBUTTON_ONCLICK_OFFSET UNITYSDK_OFFSET(0x2810880)
#define UISCENARIOMODE_REPLAYSELECTBUTTON_.CTOR_OFFSET UNITYSDK_OFFSET(0x2810980)
#define UISCENARIOMODE_REPLAYSELECTBUTTON_SETDATA_OFFSET UNITYSDK_OFFSET(0x280F5E0)
#define UISCENARIOMODE_REPLAYSELECTBUTTON_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x2810990)

	inline static constexpr unsigned int UIScenarioMode_ReplaySelectButton_TypeDefinitionIndex = 7795;

	class UIScenarioMode_ReplaySelectButton : public Il2CppObject
	{
	public:
		::FlatData::ScenarioModeReplayTypes* _Type_k__BackingField; // 0x18
		::UnityEngine::GameObject* open; // 0x20
		::UnityEngine::GameObject* locked; // 0x28
		::UnityEngine::GameObject* empty; // 0x30
		::UnityEngine::GameObject* comming; // 0x38
		Il2CppObject* titles; // 0x40
		Il2CppObject* subTitles; // 0x48
		Il2CppObject* textures; // 0x50

		::System::Void SetObjects()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_REPLAYSELECTBUTTON_SETOBJECTS_OFFSET))(nullptr);
		}

		::UnityEngine::GameObject* get_Locked()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_REPLAYSELECTBUTTON_GET_LOCKED_OFFSET))(nullptr);
		}

		::UnityEngine::GameObject* get_Open()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_REPLAYSELECTBUTTON_GET_OPEN_OFFSET))(nullptr);
		}

		Il2CppObject* get_Textures()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_REPLAYSELECTBUTTON_GET_TEXTURES_OFFSET))(nullptr);
		}

		::System::Void SetLabels()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_REPLAYSELECTBUTTON_SETLABELS_OFFSET))(nullptr);
		}

		::System::Void _SetTextures_b__28_0(::UnityEngine::Texture* arg)
		{
			((::System::Void(*)(::UnityEngine::Texture*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_REPLAYSELECTBUTTON__SETTEXTURES_B__28_0_OFFSET))(arg, nullptr);
		}

		::System::Void SetTextures()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_REPLAYSELECTBUTTON_SETTEXTURES_OFFSET))(nullptr);
		}

		::FlatData::ScenarioModeReplayTypes* get_Type()
		{
			return ((::FlatData::ScenarioModeReplayTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_REPLAYSELECTBUTTON_GET_TYPE_OFFSET))(nullptr);
		}

		::UnityEngine::GameObject* get_Empty()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_REPLAYSELECTBUTTON_GET_EMPTY_OFFSET))(nullptr);
		}

		::System::Void _OnClick_b__29_0(UIScenarioMode_Volume* arg)
		{
			((::System::Void(*)(UIScenarioMode_Volume*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_REPLAYSELECTBUTTON__ONCLICK_B__29_0_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Titles()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_REPLAYSELECTBUTTON_GET_TITLES_OFFSET))(nullptr);
		}

		Il2CppObject* get_SubTitles()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_REPLAYSELECTBUTTON_GET_SUBTITLES_OFFSET))(nullptr);
		}

		::UnityEngine::GameObject* get_Comming()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_REPLAYSELECTBUTTON_GET_COMMING_OFFSET))(nullptr);
		}

		::System::Void OnClick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_REPLAYSELECTBUTTON_ONCLICK_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_REPLAYSELECTBUTTON_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetData(::FlatData::ScenarioModeReplayTypes* arg)
		{
			((::System::Void(*)(::FlatData::ScenarioModeReplayTypes*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_REPLAYSELECTBUTTON_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void set_Type(::FlatData::ScenarioModeReplayTypes* arg)
		{
			((::System::Void(*)(::FlatData::ScenarioModeReplayTypes*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_REPLAYSELECTBUTTON_SET_TYPE_OFFSET))(arg, nullptr);
		}

	};

