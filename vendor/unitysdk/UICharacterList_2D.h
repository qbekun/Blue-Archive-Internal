#pragma once
#include "unitysdk.h"

namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define UICHARACTERLIST_2D_HANDLECHARACTERCARDSELECTEDMESSAGE_OFFSET UNITYSDK_OFFSET(0x231CDD0)
#define UICHARACTERLIST_2D_ONENABLE_OFFSET UNITYSDK_OFFSET(0x231CFB0)
#define UICHARACTERLIST_2D_.CTOR_OFFSET UNITYSDK_OFFSET(0x231D0B0)
#define UICHARACTERLIST_2D_GETDATALIST_OFFSET UNITYSDK_OFFSET(0x231D0F0)
#define UICHARACTERLIST_2D_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x231D2C0)

	inline static constexpr unsigned int UICharacterList_2D_TypeDefinitionIndex = 4908;

	class UICharacterList_2D : public ::UnityEngine::InputSystem::LowLevel::GamepadState
	{
	public:
		::System::Boolean HandleCharacterCardSelectedMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERLIST_2D_HANDLECHARACTERCARDSELECTEDMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERLIST_2D_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERLIST_2D_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* GetDataList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERLIST_2D_GETDATALIST_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERLIST_2D_ONDISABLE_OFFSET))(nullptr);
		}

	};

