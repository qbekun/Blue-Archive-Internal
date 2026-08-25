#pragma once
#include "unitysdk.h"

class UIBase;
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define AUDIOUICONTROLLER_AWAKE_OFFSET UNITYSDK_OFFSET(0x20AB7E0)
#define AUDIOUICONTROLLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x20AB830)
#define AUDIOUICONTROLLER_ONUICLOSED_OFFSET UNITYSDK_OFFSET(0x20AB990)
#define AUDIOUICONTROLLER_GET_ISPLAYED_OFFSET UNITYSDK_OFFSET(0x20ABB50)
#define AUDIOUICONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x20ABB60)
#define AUDIOUICONTROLLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x20ABB70)

	inline static constexpr unsigned int AudioUIController_TypeDefinitionIndex = 3551;

	class AudioUIController : public Il2CppObject
	{
	public:
		UIBase* uiBase; // 0x18
		::System::Boolean isPlayed; // 0x20

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AUDIOUICONTROLLER_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AUDIOUICONTROLLER_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Boolean OnUIClosed(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + AUDIOUICONTROLLER_ONUICLOSED_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsPlayed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AUDIOUICONTROLLER_GET_ISPLAYED_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AUDIOUICONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AUDIOUICONTROLLER_ONENABLE_OFFSET))(nullptr);
		}

	};

