#pragma once
#include "unitysdk.h"

namespace FlatData { class ContentType; }

#define UISTAGEMISSIONPOPUP_SETSTAGESTAR_OFFSET UNITYSDK_OFFSET(0xBC18B0)
#define UISTAGEMISSIONPOPUP_.CTOR_OFFSET UNITYSDK_OFFSET(0xBC2560)
#define UISTAGEMISSIONPOPUP_ONANDROIDBACKBUTTON_OFFSET UNITYSDK_OFFSET(0xBC2570)

	inline static constexpr unsigned int UIStageMissionPopup_TypeDefinitionIndex = 8625;

	class UIStageMissionPopup : public Il2CppObject
	{
	public:
		Il2CppObject* missionDisplays; // 0xD8

		::System::Void SetStageStar(::FlatData::ContentType* arg, ::System::Int64 arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::FlatData::ContentType*, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISTAGEMISSIONPOPUP_SETSTAGESTAR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTAGEMISSIONPOPUP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnAndroidBackButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTAGEMISSIONPOPUP_ONANDROIDBACKBUTTON_OFFSET))(nullptr);
		}

	};

