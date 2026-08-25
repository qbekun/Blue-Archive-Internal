#pragma once
#include "unitysdk.h"

class CharacterObject;
class CollectionUnitObjectBase;

#define CHARACTERFILTERWEAPONSTARGRADE_INITALLLIST_OFFSET UNITYSDK_OFFSET(0x1FB73B0)
#define CHARACTERFILTERWEAPONSTARGRADE_CONTAINEDBYFILTER_OFFSET UNITYSDK_OFFSET(0x1FB74A0)
#define CHARACTERFILTERWEAPONSTARGRADE_CONTAINEDBYFILTER_OFFSET UNITYSDK_OFFSET(0x1FB7530)
#define CHARACTERFILTERWEAPONSTARGRADE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1FB4D90)

	inline static constexpr unsigned int CharacterFilterWeaponStarGrade_TypeDefinitionIndex = 2923;

	class CharacterFilterWeaponStarGrade : public ::MX::Logic::Actions::GroggyAction
	{
	public:
		::System::Void InitAllList(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERFILTERWEAPONSTARGRADE_INITALLLIST_OFFSET))(arg, nullptr);
		}

		::System::Boolean ContainedByFilter(CharacterObject* arg)
		{
			return ((::System::Boolean(*)(CharacterObject*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERFILTERWEAPONSTARGRADE_CONTAINEDBYFILTER_OFFSET))(arg, nullptr);
		}

		::System::Boolean ContainedByFilter(CollectionUnitObjectBase* arg)
		{
			return ((::System::Boolean(*)(CollectionUnitObjectBase*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERFILTERWEAPONSTARGRADE_CONTAINEDBYFILTER_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERFILTERWEAPONSTARGRADE_.CTOR_OFFSET))(nullptr);
		}

	};

