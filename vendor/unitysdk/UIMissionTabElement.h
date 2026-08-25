#pragma once
#include "unitysdk.h"

namespace FlatData { class MissionCategory; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Vector3; }

#define UIMISSIONTABELEMENT_SWITCHTAB_OFFSET UNITYSDK_OFFSET(0x269CCA0)
#define UIMISSIONTABELEMENT_REFRESHTABREDDOT_OFFSET UNITYSDK_OFFSET(0x269CF30)
#define UIMISSIONTABELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x269D030)

	inline static constexpr unsigned int UIMissionTabElement_TypeDefinitionIndex = 6824;

	class UIMissionTabElement : public Il2CppObject
	{
	public:
		::FlatData::MissionCategory* MyCategory; // 0x18
		::UnityEngine::GameObject* TabOn; // 0x20
		::UnityEngine::GameObject* TabOff; // 0x28
		::UnityEngine::GameObject* MissionTabRedDot; // 0x30
		::UnityEngine::Vector3* RedDotPos_On; // 0x38
		::UnityEngine::Vector3* RedDotPos_Off; // 0x44

		::System::Void SwitchTab(::FlatData::MissionCategory* arg)
		{
			((::System::Void(*)(::FlatData::MissionCategory*, ::PVOID))((::PBYTE)hIl2Cpp + UIMISSIONTABELEMENT_SWITCHTAB_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshTabRedDot()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMISSIONTABELEMENT_REFRESHTABREDDOT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMISSIONTABELEMENT_.CTOR_OFFSET))(nullptr);
		}

	};

