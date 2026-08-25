#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class IVisualElementScheduledItem; }

#define UNITYENGINE_UIELEMENTS_IVISUALELEMENTSCHEDULEDITEM_RESUME_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_IVISUALELEMENTSCHEDULEDITEM_PAUSE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_IVISUALELEMENTSCHEDULEDITEM_EXECUTELATER_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_IVISUALELEMENTSCHEDULEDITEM_STARTINGIN_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_IVISUALELEMENTSCHEDULEDITEM_EVERY_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int IVisualElementScheduledItem_TypeDefinitionIndex = 30256;

	class IVisualElementScheduledItem : public Il2CppObject
	{
	public:
		::System::Void Resume()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IVISUALELEMENTSCHEDULEDITEM_RESUME_OFFSET))(nullptr);
		}

		::System::Void Pause()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IVISUALELEMENTSCHEDULEDITEM_PAUSE_OFFSET))(nullptr);
		}

		::System::Void ExecuteLater(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IVISUALELEMENTSCHEDULEDITEM_EXECUTELATER_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::IVisualElementScheduledItem* StartingIn(::System::Int64 arg)
		{
			return (return (::UnityEngine::UIElements::IVisualElementScheduledItem*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IVISUALELEMENTSCHEDULEDITEM_STARTINGIN_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::IVisualElementScheduledItem* Every(::System::Int64 arg)
		{
			return (return (::UnityEngine::UIElements::IVisualElementScheduledItem*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IVISUALELEMENTSCHEDULEDITEM_EVERY_OFFSET))(arg, nullptr);
		}

	};
}

