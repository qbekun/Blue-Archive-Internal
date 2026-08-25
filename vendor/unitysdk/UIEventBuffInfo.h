#pragma once
#include "unitysdk.h"

class UIEventBuffInfoScrollController;
class MXButton;
namespace MX::GameLogic::DBModel { class EventContentMainStageSaveDB; }

#define UIEVENTBUFFINFO_ONCLICKCLOSE_OFFSET UNITYSDK_OFFSET(0x241C8E0)
#define UIEVENTBUFFINFO_CO_LOADING_OFFSET UNITYSDK_OFFSET(0x241C900)
#define UIEVENTBUFFINFO_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x241C990)
#define UIEVENTBUFFINFO_ONOPENED_OFFSET UNITYSDK_OFFSET(0x241C9B0)
#define UIEVENTBUFFINFO_AWAKE_OFFSET UNITYSDK_OFFSET(0x241CDE0)
#define UIEVENTBUFFINFO___N__0_OFFSET UNITYSDK_OFFSET(0x241CF10)
#define UIEVENTBUFFINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x241CF20)

	inline static constexpr unsigned int UIEventBuffInfo_TypeDefinitionIndex = 5495;

	class UIEventBuffInfo : public Il2CppObject
	{
	public:
		UIEventBuffInfoScrollController* controller; // 0xD8
		MXButton* closeButton; // 0xE0
		::MX::GameLogic::DBModel::EventContentMainStageSaveDB* eventSaveDB; // 0xE8
		Il2CppObject* buffDatas; // 0xF0

		::System::Void OnClickClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBUFFINFO_ONCLICKCLOSE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBUFFINFO_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Void Initialize(::MX::GameLogic::DBModel::EventContentMainStageSaveDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::EventContentMainStageSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBUFFINFO_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBUFFINFO_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBUFFINFO_AWAKE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBUFFINFO___N__0_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBUFFINFO_.CTOR_OFFSET))(nullptr);
		}

	};

