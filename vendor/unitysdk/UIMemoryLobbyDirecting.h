#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Animation; }
class MXButton;
class UILabel;

#define UIMEMORYLOBBYDIRECTING_ONENABLE_OFFSET UNITYSDK_OFFSET(0x26B2CA0)
#define UIMEMORYLOBBYDIRECTING_ADD_ONCLICKEVENT_OFFSET UNITYSDK_OFFSET(0x26B2E80)
#define UIMEMORYLOBBYDIRECTING_AWAKE_OFFSET UNITYSDK_OFFSET(0x26B2F20)
#define UIMEMORYLOBBYDIRECTING_SETDATA_OFFSET UNITYSDK_OFFSET(0x26B3090)
#define UIMEMORYLOBBYDIRECTING_.CTOR_OFFSET UNITYSDK_OFFSET(0x26B31A0)
#define UIMEMORYLOBBYDIRECTING_REMOVE_ONCLICKEVENT_OFFSET UNITYSDK_OFFSET(0x26B31B0)
#define UIMEMORYLOBBYDIRECTING__AWAKE_B__6_0_OFFSET UNITYSDK_OFFSET(0x26B3250)
#define UIMEMORYLOBBYDIRECTING_COWAITFORPLAYINGANIMATION_OFFSET UNITYSDK_OFFSET(0x26B2E00)

	inline static constexpr unsigned int UIMemoryLobbyDirecting_TypeDefinitionIndex = 6900;

	class UIMemoryLobbyDirecting : public Il2CppObject
	{
	public:
		::UnityEngine::Animation* myAnimation; // 0x18
		MXButton* closeButton; // 0x20
		UILabel* memoryLobbyGetLabel; // 0x28
		::System::Action* OnClickEvent; // 0x30

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMEMORYLOBBYDIRECTING_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void add_OnClickEvent(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIMEMORYLOBBYDIRECTING_ADD_ONCLICKEVENT_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMEMORYLOBBYDIRECTING_AWAKE_OFFSET))(nullptr);
		}

		::System::Void SetData(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIMEMORYLOBBYDIRECTING_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMEMORYLOBBYDIRECTING_.CTOR_OFFSET))(nullptr);
		}

		::System::Void remove_OnClickEvent(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIMEMORYLOBBYDIRECTING_REMOVE_ONCLICKEVENT_OFFSET))(arg, nullptr);
		}

		::System::Void _Awake_b__6_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMEMORYLOBBYDIRECTING__AWAKE_B__6_0_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoWaitForPlayingAnimation(::System::Single arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UIMEMORYLOBBYDIRECTING_COWAITFORPLAYINGANIMATION_OFFSET))(arg, nullptr);
		}

	};

