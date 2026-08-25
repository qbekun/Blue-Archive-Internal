#pragma once
#include "unitysdk.h"

class MXToggle;
namespace UnityEngine { class GameObject; }
namespace FlatData { class OpenCondition; }
namespace MX::GameLogic::Service { class OpenConditionLockReason; }
class UIPopup_System;

#define TACTICSKIPTOGGLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x2299010)
#define TACTICSKIPTOGGLE__ONTOGGLE_B__9_0_OFFSET UNITYSDK_OFFSET(0x2299020)
#define TACTICSKIPTOGGLE_CHECK_OFFSET UNITYSDK_OFFSET(0x2299050)
#define TACTICSKIPTOGGLE_START_OFFSET UNITYSDK_OFFSET(0x2299310)
#define TACTICSKIPTOGGLE_ONTOGGLE_OFFSET UNITYSDK_OFFSET(0x2299400)
#define TACTICSKIPTOGGLE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x2299680)

	inline static constexpr unsigned int TacticSkipToggle_TypeDefinitionIndex = 4723;

	class TacticSkipToggle : public Il2CppObject
	{
	public:
		MXToggle* toggle; // 0x18
		::UnityEngine::GameObject* lockObject; // 0x20
		::FlatData::OpenCondition* condition; // 0x28
		::MX::GameLogic::Service::OpenConditionLockReason* reason; // 0x2C
		::System::String* lockMessage; // 0x30
		Il2CppObject* onToggle; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TACTICSKIPTOGGLE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _OnToggle_b__9_0(UIPopup_System* arg)
		{
			((::System::Void(*)(UIPopup_System*, ::PVOID))((::PBYTE)hIl2Cpp + TACTICSKIPTOGGLE__ONTOGGLE_B__9_0_OFFSET))(arg, nullptr);
		}

		::System::Void Check()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TACTICSKIPTOGGLE_CHECK_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TACTICSKIPTOGGLE_START_OFFSET))(nullptr);
		}

		::System::Void OnToggle(MXToggle* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(MXToggle*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TACTICSKIPTOGGLE_ONTOGGLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Initialize(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + TACTICSKIPTOGGLE_INITIALIZE_OFFSET))(arg, nullptr);
		}

	};

