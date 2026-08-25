#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Transform; }
class UISlider;
namespace UnityEngine { class Vector2; }
namespace UnityEngine { class Vector3; }
class Phase;
class UIUserInteractionParam;

#define UIUSERINTERACTIONSLIDESHORT_UPDATEPOINTERINPUT_OFFSET UNITYSDK_OFFSET(0xB85AB0)
#define UIUSERINTERACTIONSLIDESHORT_.CTOR_OFFSET UNITYSDK_OFFSET(0xB85DF0)
#define UIUSERINTERACTIONSLIDESHORT_SETUSERINTERACTION_OFFSET UNITYSDK_OFFSET(0xB85E50)
#define UIUSERINTERACTIONSLIDESHORT_ISNEARPOINT_OFFSET UNITYSDK_OFFSET(0xB85D10)
#define UIUSERINTERACTIONSLIDESHORT_SETGAUGE_OFFSET UNITYSDK_OFFSET(0xB85D40)
#define UIUSERINTERACTIONSLIDESHORT_SETUIPOSITION_OFFSET UNITYSDK_OFFSET(0xB85EB0)

	inline static constexpr unsigned int UIUserInteractionSlideShort_TypeDefinitionIndex = 8539;

	class UIUserInteractionSlideShort : public Il2CppObject
	{
	public:
		::System::Int32 HASH_GAUGE_OVER_ZERO; // 0x118
		::UnityEngine::Transform* rootStart; // 0x120
		::UnityEngine::Transform* rootEnd; // 0x128
		UISlider* slider; // 0x130
		::UnityEngine::Vector2* startPosPixel; // 0x138
		::UnityEngine::Vector2* endPosPixel; // 0x140
		::System::Single touchStartAccuracy; // 0x148
		::System::Single touchStartAccuracyPixel; // 0x14C
		::System::Int32 validTouchId; // 0x150
		::System::Single sliderWidth; // 0x154

		::System::Void UpdatePointerInput(::System::Int32 arg, ::UnityEngine::Vector3* arg2, Phase* arg3)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Vector3*, Phase*, ::PVOID))((::PBYTE)hIl2Cpp + UIUSERINTERACTIONSLIDESHORT_UPDATEPOINTERINPUT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIUSERINTERACTIONSLIDESHORT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetUserInteraction(UIUserInteractionParam* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(UIUserInteractionParam*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIUSERINTERACTIONSLIDESHORT_SETUSERINTERACTION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean IsNearPoint(::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg2, ::System::Single arg3)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UIUSERINTERACTIONSLIDESHORT_ISNEARPOINT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void SetGauge(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UIUSERINTERACTIONSLIDESHORT_SETGAUGE_OFFSET))(arg, nullptr);
		}

		::System::Void SetUIPosition()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIUSERINTERACTIONSLIDESHORT_SETUIPOSITION_OFFSET))(nullptr);
		}

	};

