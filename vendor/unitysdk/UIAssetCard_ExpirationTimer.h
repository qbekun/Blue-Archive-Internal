#pragma once
#include "unitysdk.h"

class UIWidget;
class UILabel;
namespace UnityEngine { class Color; }
namespace FlatData { class ParcelType; }

#define UIASSETCARD_EXPIRATIONTIMER_.CTOR_OFFSET UNITYSDK_OFFSET(0x2205D30)
#define UIASSETCARD_EXPIRATIONTIMER_SETDATA_OFFSET UNITYSDK_OFFSET(0x2205D50)
#define UIASSETCARD_EXPIRATIONTIMER_REFRESHWIDGET_OFFSET UNITYSDK_OFFSET(0x2205F90)

	inline static constexpr unsigned int UIAssetCard_ExpirationTimer_TypeDefinitionIndex = 4316;

	class UIAssetCard_ExpirationTimer : public Il2CppObject
	{
	public:
		UIWidget* backgroundImage; // 0x18
		UILabel* timeLabel; // 0x20
		::UnityEngine::Color* daysColor; // 0x28
		::UnityEngine::Color* hoursColor; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIASSETCARD_EXPIRATIONTIMER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetData(::FlatData::ParcelType* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatData::ParcelType*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIASSETCARD_EXPIRATIONTIMER_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RefreshWidget(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + UIASSETCARD_EXPIRATIONTIMER_REFRESHWIDGET_OFFSET))(arg, nullptr);
		}

	};

