#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class MXButton;
class ArenaMapElement;

#define UIARENAMAPELEMENT_AWAKE_OFFSET UNITYSDK_OFFSET(0x21F5BF0)
#define UIARENAMAPELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x21F5E00)
#define UIARENAMAPELEMENT_ONCLICKLOCKED_OFFSET UNITYSDK_OFFSET(0x21F5E10)
#define UIARENAMAPELEMENT_SETDATA_OFFSET UNITYSDK_OFFSET(0x21F5940)
#define UIARENAMAPELEMENT_ONCLICKSELECT_OFFSET UNITYSDK_OFFSET(0x21F6260)

	inline static constexpr unsigned int UIArenaMapElement_TypeDefinitionIndex = 4265;

	class UIArenaMapElement : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* selectObject; // 0x18
		::UnityEngine::GameObject* readyObject; // 0x20
		::UnityEngine::GameObject* lockObject; // 0x28
		MXButton* selectButton; // 0x30
		MXButton* lockButton; // 0x38
		::Il2CppArray<::System::Object*>* mapNameLabels; // 0x40
		ArenaMapElement* element; // 0x48

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIARENAMAPELEMENT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIARENAMAPELEMENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClickLocked()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIARENAMAPELEMENT_ONCLICKLOCKED_OFFSET))(nullptr);
		}

		::System::Void SetData(ArenaMapElement* arg)
		{
			((::System::Void(*)(ArenaMapElement*, ::PVOID))((::PBYTE)hIl2Cpp + UIARENAMAPELEMENT_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickSelect()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIARENAMAPELEMENT_ONCLICKSELECT_OFFSET))(nullptr);
		}

	};

