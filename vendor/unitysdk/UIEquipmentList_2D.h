#pragma once
#include "unitysdk.h"

namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define UIEQUIPMENTLIST_2D_.CTOR_OFFSET UNITYSDK_OFFSET(0x2418860)
#define UIEQUIPMENTLIST_2D_GETDATALIST_OFFSET UNITYSDK_OFFSET(0x241B8B0)
#define UIEQUIPMENTLIST_2D_ONENABLE_OFFSET UNITYSDK_OFFSET(0x241B970)
#define UIEQUIPMENTLIST_2D_HANDLEEQUIPMENTCARDSELECTEDMESSAGE_OFFSET UNITYSDK_OFFSET(0x241BA70)
#define UIEQUIPMENTLIST_2D_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x241BC50)

	inline static constexpr unsigned int UIEquipmentList_2D_TypeDefinitionIndex = 5486;

	class UIEquipmentList_2D : public ::UnityEngine::InputSystem::LowLevel::GamepadButton
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTLIST_2D_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* GetDataList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTLIST_2D_GETDATALIST_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTLIST_2D_ONENABLE_OFFSET))(nullptr);
		}

		::System::Boolean HandleEquipmentCardSelectedMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTLIST_2D_HANDLEEQUIPMENTCARDSELECTEDMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTLIST_2D_ONDISABLE_OFFSET))(nullptr);
		}

	};

