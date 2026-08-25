#pragma once
#include "unitysdk.h"

class AssetObjectBase;

#define ITEMFILTERNORMALCRAFT_CONTAINEDBYFILTER_OFFSET UNITYSDK_OFFSET(0x1FCE0B0)
#define ITEMFILTERNORMALCRAFT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1FCC500)
#define ITEMFILTERNORMALCRAFT_INITALLLIST_OFFSET UNITYSDK_OFFSET(0x1FCE550)

	inline static constexpr unsigned int ItemFilterNormalCraft_TypeDefinitionIndex = 3000;

	class ItemFilterNormalCraft : public ::MX::Logic::Actions::FearedAction
	{
	public:
		::System::Boolean ContainedByFilter(AssetObjectBase* arg)
		{
			return ((::System::Boolean(*)(AssetObjectBase*, ::PVOID))((::PBYTE)hIl2Cpp + ITEMFILTERNORMALCRAFT_CONTAINEDBYFILTER_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMFILTERNORMALCRAFT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void InitAllList(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + ITEMFILTERNORMALCRAFT_INITALLLIST_OFFSET))(arg, nullptr);
		}

	};

