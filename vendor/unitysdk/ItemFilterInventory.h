#pragma once
#include "unitysdk.h"

class ItemObject;

#define ITEMFILTERINVENTORY_INITALLLIST_OFFSET UNITYSDK_OFFSET(0x1FCD800)
#define ITEMFILTERINVENTORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1FCC350)
#define ITEMFILTERINVENTORY_CONTAINEDBYFILTER_OFFSET UNITYSDK_OFFSET(0x1FCD8D0)

	inline static constexpr unsigned int ItemFilterInventory_TypeDefinitionIndex = 2994;

	class ItemFilterInventory : public ::MX::Logic::Actions::IdleAction
	{
	public:
		::System::Void InitAllList(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + ITEMFILTERINVENTORY_INITALLLIST_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMFILTERINVENTORY_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean ContainedByFilter(ItemObject* arg)
		{
			return ((::System::Boolean(*)(ItemObject*, ::PVOID))((::PBYTE)hIl2Cpp + ITEMFILTERINVENTORY_CONTAINEDBYFILTER_OFFSET))(arg, nullptr);
		}

	};

