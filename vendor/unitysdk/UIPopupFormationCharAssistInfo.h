#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
namespace MX::GameLogic::DBModel { class AssistCharacterDB; }

#define UIPOPUPFORMATIONCHARASSISTINFO_SETDATA_OFFSET UNITYSDK_OFFSET(0x254D570)
#define UIPOPUPFORMATIONCHARASSISTINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x254D650)

	inline static constexpr unsigned int UIPopupFormationCharAssistInfo_TypeDefinitionIndex = 6088;

	class UIPopupFormationCharAssistInfo : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* friendIcon; // 0x18
		::UnityEngine::GameObject* clanIcon; // 0x20

		::System::Void SetData(::MX::GameLogic::DBModel::AssistCharacterDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::AssistCharacterDB*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPFORMATIONCHARASSISTINFO_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPFORMATIONCHARASSISTINFO_.CTOR_OFFSET))(nullptr);
		}

	};

