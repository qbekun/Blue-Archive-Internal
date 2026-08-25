#pragma once
#include "unitysdk.h"

class MXButton;
class UISpecialOperationInfoScrollController;
class UISlider;
class UILabel;
namespace UnityEngine { class Transform; }
namespace UnityEngine { class GameObject; }
namespace MX::Data { class EventContentStageInfo; }

#define UISPECIALOPERATIONINFOPOPUP_SETSPECIALOPERATIONINFO_OFFSET UNITYSDK_OFFSET(0x245FC10)
#define UISPECIALOPERATIONINFOPOPUP__SETSPECIALOPERATIONINFO_B__16_0_OFFSET UNITYSDK_OFFSET(0x2460450)
#define UISPECIALOPERATIONINFOPOPUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x2460480)
#define UISPECIALOPERATIONINFOPOPUP_AWAKE_OFFSET UNITYSDK_OFFSET(0x2460490)
#define UISPECIALOPERATIONINFOPOPUP_ONCLICKCLOSEBUTTON_OFFSET UNITYSDK_OFFSET(0x24606A0)
#define UISPECIALOPERATIONINFOPOPUP__SETSPECIALOPERATIONINFO_B__16_1_OFFSET UNITYSDK_OFFSET(0x2460730)
#define UISPECIALOPERATIONINFOPOPUP_ONOPENED_OFFSET UNITYSDK_OFFSET(0x2460760)
#define UISPECIALOPERATIONINFOPOPUP_SETDATA_OFFSET UNITYSDK_OFFSET(0x2460780)

	inline static constexpr unsigned int UISpecialOperationInfoPopup_TypeDefinitionIndex = 5598;

	class UISpecialOperationInfoPopup : public Il2CppObject
	{
	public:
		MXButton* closeButton; // 0xD8
		MXButton* confirmButton; // 0xE0
		UISpecialOperationInfoScrollController* specialOperationInfoScrollController; // 0xE8
		UISlider* specialOperationInfoPointSlider; // 0xF0
		UILabel* specialOperationStageCurrPointLabel; // 0xF8
		UILabel* specialOperationStageStartPointLabel; // 0x100
		UILabel* specialOperationStageMaxPointLabel; // 0x108
		UILabel* specialOperationStagePointLabel; // 0x110
		::UnityEngine::Transform* specialOperationStageOpenProgressTarget; // 0x118
		UILabel* nextTargetStageOpenLabel; // 0x120
		::UnityEngine::GameObject* tagetTotalPointComplete; // 0x128
		Il2CppObject* stageInfoList; // 0x130
		::System::Int64 eventCurrPoint; // 0x138
		::System::Int64 eventMaxPoint; // 0x140

		::System::Void SetSpecialOperationInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPECIALOPERATIONINFOPOPUP_SETSPECIALOPERATIONINFO_OFFSET))(nullptr);
		}

		::System::Boolean _SetSpecialOperationInfo_b__16_0(::MX::Data::EventContentStageInfo* arg)
		{
			return ((::System::Boolean(*)(::MX::Data::EventContentStageInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UISPECIALOPERATIONINFOPOPUP__SETSPECIALOPERATIONINFO_B__16_0_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPECIALOPERATIONINFOPOPUP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPECIALOPERATIONINFOPOPUP_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnClickCloseButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPECIALOPERATIONINFOPOPUP_ONCLICKCLOSEBUTTON_OFFSET))(nullptr);
		}

		::System::Boolean _SetSpecialOperationInfo_b__16_1(::MX::Data::EventContentStageInfo* arg)
		{
			return ((::System::Boolean(*)(::MX::Data::EventContentStageInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UISPECIALOPERATIONINFOPOPUP__SETSPECIALOPERATIONINFO_B__16_1_OFFSET))(arg, nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISPECIALOPERATIONINFOPOPUP_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(Il2CppObject* arg, ::System::Int64 arg2, ::System::Int64 arg3)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UISPECIALOPERATIONINFOPOPUP_SETDATA_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};

