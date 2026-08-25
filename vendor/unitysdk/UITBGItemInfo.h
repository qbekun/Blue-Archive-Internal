#pragma once
#include "unitysdk.h"

#define UITBGITEMINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0xB55400)
#define UITBGITEMINFO_REFRESH_OFFSET UNITYSDK_OFFSET(0xB55480)
#define UITBGITEMINFO_ONENABLE_OFFSET UNITYSDK_OFFSET(0xB566F0)
#define UITBGITEMINFO_RESETCOLLIDER_OFFSET UNITYSDK_OFFSET(0xB56770)
#define UITBGITEMINFO_PLAYGETITEM_OFFSET UNITYSDK_OFFSET(0xB56560)
#define UITBGITEMINFO_COPLAYGETITEM_OFFSET UNITYSDK_OFFSET(0xB56880)

	inline static constexpr unsigned int UITBGItemInfo_TypeDefinitionIndex = 8390;

	class UITBGItemInfo : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* ItemSlots; // 0x18
		::Il2CppArray<::System::Object*>* BuffSlots; // 0x20
		::Il2CppArray<::System::Object*>* ItemGetFxs; // 0x28
		::System::Boolean isPlayingFx; // 0x30
		Il2CppObject* occupiedSlotCache; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITBGITEMINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Refresh(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UITBGITEMINFO_REFRESH_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITBGITEMINFO_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void ResetCollider()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITBGITEMINFO_RESETCOLLIDER_OFFSET))(nullptr);
		}

		::System::Void PlayGetItem(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UITBGITEMINFO_PLAYGETITEM_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CoPlayGetItem(::System::Int32 arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UITBGITEMINFO_COPLAYGETITEM_OFFSET))(arg, nullptr);
		}

	};

