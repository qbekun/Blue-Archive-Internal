#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Transform; }
class UINonEquipmentCard;
class UIEquipmentCard;
class ParcelExchangeData;

#define UIPARCELEXCHANGELISTITEM_SETDATA_OFFSET UNITYSDK_OFFSET(0x27017F0)
#define UIPARCELEXCHANGELISTITEM_.CTOR_OFFSET UNITYSDK_OFFSET(0x2701AD0)

	inline static constexpr unsigned int UIParcelExchangeListItem_TypeDefinitionIndex = 7079;

	class UIParcelExchangeListItem : public Il2CppObject
	{
	public:
		::UnityEngine::Transform* nonEquipCardRoot; // 0x18
		::UnityEngine::Transform* equipCardRoot; // 0x20
		UINonEquipmentCard* exchangeNonEquipCard; // 0x28
		UINonEquipmentCard* resultNonEquipCard; // 0x30
		UIEquipmentCard* exchangeEquipCard; // 0x38
		UIEquipmentCard* resultEquipCard; // 0x40

		::System::Boolean SetData(ParcelExchangeData* arg)
		{
			return ((::System::Boolean(*)(ParcelExchangeData*, ::PVOID))((::PBYTE)hIl2Cpp + UIPARCELEXCHANGELISTITEM_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPARCELEXCHANGELISTITEM_.CTOR_OFFSET))(nullptr);
		}

	};

