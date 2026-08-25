#pragma once
#include "unitysdk.h"

class UILabel;
namespace UnityEngine { class GameObject; }
class UISpecialOperationInfoScrollController;
namespace MX::Data { class EventContentStageInfo; }

#define UISPECIALOPERATIONINFOSCROLLELEMENT_SETDATA_OFFSET UNITYSDK_OFFSET(0x2460820)
#define UISPECIALOPERATIONINFOSCROLLELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x2460AD0)

	inline static constexpr unsigned int UISpecialOperationInfoScrollElement_TypeDefinitionIndex = 5600;

	class UISpecialOperationInfoScrollElement : public HashCodeOfStringDelegate
	{
	public:
		UILabel* stageNameLabel; // 0x28
		::UnityEngine::GameObject* completionObj; // 0x30
		UILabel* completionLabel; // 0x38
		::UnityEngine::GameObject* inCompleteObj; // 0x40
		UILabel* inCompleteLabel; // 0x48
		::UnityEngine::GameObject* lockObj; // 0x50
		UISpecialOperationInfoScrollController* uiSpecialOperationInfo; // 0x58

		::System::Void SetData(::MX::Data::EventContentStageInfo* arg)
		{
			((::System::Void(*)(::MX::Data::EventContentStageInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UISPECIALOPERATIONINFOSCROLLELEMENT_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPECIALOPERATIONINFOSCROLLELEMENT_.CTOR_OFFSET))(nullptr);
		}

	};

