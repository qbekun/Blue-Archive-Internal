#pragma once
#include "unitysdk.h"

class MXButton;
namespace MX::GameLogic::DBModel { class ClearDeckKey; }

#define UIPOPUP_PERMANENTRAIDENTER_ONCLEARDECKBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0x26FB6B0)
#define UIPOPUP_PERMANENTRAIDENTER_INITIALIZECLEARDECKKEY_OFFSET UNITYSDK_OFFSET(0x26FA0A0)
#define UIPOPUP_PERMANENTRAIDENTER_AWAKE_OFFSET UNITYSDK_OFFSET(0x26FB730)
#define UIPOPUP_PERMANENTRAIDENTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x26FB860)

	inline static constexpr unsigned int UIPopup_PermanentRaidEnter_TypeDefinitionIndex = 7050;

	class UIPopup_PermanentRaidEnter : public Il2CppObject
	{
	public:
		MXButton* clearDeckButton; // 0x150
		::MX::GameLogic::DBModel::ClearDeckKey* _clearDeckKey; // 0x158

		::System::Void OnClearDeckButtonClick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_PERMANENTRAIDENTER_ONCLEARDECKBUTTONCLICK_OFFSET))(nullptr);
		}

		::System::Void InitializeClearDeckKey(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_PERMANENTRAIDENTER_INITIALIZECLEARDECKKEY_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_PERMANENTRAIDENTER_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_PERMANENTRAIDENTER_.CTOR_OFFSET))(nullptr);
		}

	};

