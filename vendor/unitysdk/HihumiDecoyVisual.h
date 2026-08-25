#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
namespace MX::Logic::BattleEntities { class ActionChangedEventArgs; }

#define HIHUMIDECOYVISUAL_REGISTERWITHCAMERA_OFFSET UNITYSDK_OFFSET(0x13BD870)
#define HIHUMIDECOYVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x13BD880)
#define HIHUMIDECOYVISUAL_APPLYACTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x13BD890)

	inline static constexpr unsigned int HihumiDecoyVisual_TypeDefinitionIndex = 1022;

	class HihumiDecoyVisual : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* Decoy01; // 0x2A8
		::UnityEngine::GameObject* Decoy02; // 0x2B0
		::UnityEngine::GameObject* EndObject; // 0x2B8

		::System::Void RegisterWithCamera()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIHUMIDECOYVISUAL_REGISTERWITHCAMERA_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIHUMIDECOYVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void ApplyActionChanged(::MX::Logic::BattleEntities::ActionChangedEventArgs* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::ActionChangedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + HIHUMIDECOYVISUAL_APPLYACTIONCHANGED_OFFSET))(arg, nullptr);
		}

	};

