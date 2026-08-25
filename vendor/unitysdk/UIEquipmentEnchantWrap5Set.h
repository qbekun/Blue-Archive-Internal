#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Transform; }

#define UIEQUIPMENTENCHANTWRAP5SET_.CTOR_OFFSET UNITYSDK_OFFSET(0x241C130)
#define UIEQUIPMENTENCHANTWRAP5SET_UPDATEITEM_OFFSET UNITYSDK_OFFSET(0x241C140)

	inline static constexpr unsigned int UIEquipmentEnchantWrap5Set_TypeDefinitionIndex = 5489;

	class UIEquipmentEnchantWrap5Set : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* Cards; // 0x78

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTENCHANTWRAP5SET_.CTOR_OFFSET))(nullptr);
		}

		::System::Void UpdateItem(::UnityEngine::Transform* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTENCHANTWRAP5SET_UPDATEITEM_OFFSET))(arg, arg2, nullptr);
		}

	};

