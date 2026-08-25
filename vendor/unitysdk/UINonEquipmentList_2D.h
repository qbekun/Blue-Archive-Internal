#pragma once
#include "unitysdk.h"

namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define UINONEQUIPMENTLIST_2D_HANDLENONEQUIPMENTCARDSELECTEDMESSAGE_OFFSET UNITYSDK_OFFSET(0x26B94F0)
#define UINONEQUIPMENTLIST_2D_ONENABLE_OFFSET UNITYSDK_OFFSET(0x26B96D0)
#define UINONEQUIPMENTLIST_2D_.CTOR_OFFSET UNITYSDK_OFFSET(0x26B97D0)
#define UINONEQUIPMENTLIST_2D_SETUI_OFFSET UNITYSDK_OFFSET(0x26B9810)
#define UINONEQUIPMENTLIST_2D_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x26B98F0)
#define UINONEQUIPMENTLIST_2D_GETDATALIST_OFFSET UNITYSDK_OFFSET(0x26B9A70)

	inline static constexpr unsigned int UINonEquipmentList_2D_TypeDefinitionIndex = 6911;

	class UINonEquipmentList_2D : public ::UnityEngine::InputSystem::LowLevel::ICustomDeviceReset
	{
	public:
		::System::Boolean HandleNonEquipmentCardSelectedMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UINONEQUIPMENTLIST_2D_HANDLENONEQUIPMENTCARDSELECTEDMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UINONEQUIPMENTLIST_2D_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UINONEQUIPMENTLIST_2D_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UINONEQUIPMENTLIST_2D_SETUI_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UINONEQUIPMENTLIST_2D_ONDISABLE_OFFSET))(nullptr);
		}

		Il2CppObject* GetDataList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UINONEQUIPMENTLIST_2D_GETDATALIST_OFFSET))(nullptr);
		}

	};

