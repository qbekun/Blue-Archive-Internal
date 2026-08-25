#pragma once
#include "unitysdk.h"

namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define UICHARACTERLIST_1D_GETDATALIST_OFFSET UNITYSDK_OFFSET(0x231C860)
#define UICHARACTERLIST_1D_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x231C920)
#define UICHARACTERLIST_1D_.CTOR_OFFSET UNITYSDK_OFFSET(0x231CAA0)
#define UICHARACTERLIST_1D_HANDLECHARACTERCARDSELECTEDMESSAGE_OFFSET UNITYSDK_OFFSET(0x231CAE0)
#define UICHARACTERLIST_1D_ONENABLE_OFFSET UNITYSDK_OFFSET(0x231CCD0)

	inline static constexpr unsigned int UICharacterList_1D_TypeDefinitionIndex = 4906;

	class UICharacterList_1D : public ::UnityEngine::InputSystem::LowLevel::QueryUserIdCommand
	{
	public:
		Il2CppObject* GetDataList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERLIST_1D_GETDATALIST_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERLIST_1D_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERLIST_1D_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean HandleCharacterCardSelectedMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERLIST_1D_HANDLECHARACTERCARDSELECTEDMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERLIST_1D_ONENABLE_OFFSET))(nullptr);
		}

	};

