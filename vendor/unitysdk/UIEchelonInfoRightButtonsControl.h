#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class MXToggle;
class UIGrid;
class UIEchelonInfo;

#define UIECHELONINFORIGHTBUTTONSCONTROL_SETRIGHTBUTTONS_OFFSET UNITYSDK_OFFSET(0x24E8E60)
#define UIECHELONINFORIGHTBUTTONSCONTROL_AWAKE_OFFSET UNITYSDK_OFFSET(0x24F87A0)
#define UIECHELONINFORIGHTBUTTONSCONTROL_GET_ECHELONINFO_OFFSET UNITYSDK_OFFSET(0x24F8760)
#define UIECHELONINFORIGHTBUTTONSCONTROL_ONENABLE_OFFSET UNITYSDK_OFFSET(0x24F88F0)
#define UIECHELONINFORIGHTBUTTONSCONTROL_.CTOR_OFFSET UNITYSDK_OFFSET(0x24F8900)
#define UIECHELONINFORIGHTBUTTONSCONTROL_ONTOGGLECHANGED_OFFSET UNITYSDK_OFFSET(0x24F8920)

	inline static constexpr unsigned int UIEchelonInfoRightButtonsControl_TypeDefinitionIndex = 6054;

	class UIEchelonInfoRightButtonsControl : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* DefaultActionButtonRoot; // 0x18
		::UnityEngine::GameObject* ArenaActionButtonRoot; // 0x20
		MXToggle* ArenaSkipToggle; // 0x28
		UIGrid* RightButtonGrid; // 0x30
		::System::Int32 GridHeight_Default; // 0x38
		::System::Int32 GridHeight_Arena; // 0x3C
		::System::Int32 GridPos_Default; // 0x40
		::System::Int32 GridPos_Arena; // 0x44

		::System::Void SetRightButtons()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIECHELONINFORIGHTBUTTONSCONTROL_SETRIGHTBUTTONS_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIECHELONINFORIGHTBUTTONSCONTROL_AWAKE_OFFSET))(nullptr);
		}

		UIEchelonInfo* get_EchelonInfo()
		{
			return ((UIEchelonInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIECHELONINFORIGHTBUTTONSCONTROL_GET_ECHELONINFO_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIECHELONINFORIGHTBUTTONSCONTROL_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIECHELONINFORIGHTBUTTONSCONTROL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnToggleChanged(MXToggle* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(MXToggle*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIECHELONINFORIGHTBUTTONSCONTROL_ONTOGGLECHANGED_OFFSET))(arg, arg2, nullptr);
		}

	};

