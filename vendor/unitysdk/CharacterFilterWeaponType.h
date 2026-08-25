#pragma once
#include "unitysdk.h"

class CharacterObject;
class CollectionUnitObjectBase;

#define CHARACTERFILTERWEAPONTYPE_INITALLLIST_OFFSET UNITYSDK_OFFSET(0x1FB8B00)
#define CHARACTERFILTERWEAPONTYPE_CONTAINEDBYFILTER_OFFSET UNITYSDK_OFFSET(0x1FB8D80)
#define CHARACTERFILTERWEAPONTYPE_CONTAINEDBYFILTER_OFFSET UNITYSDK_OFFSET(0x1FB8E10)
#define CHARACTERFILTERWEAPONTYPE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1FB4ED0)

	inline static constexpr unsigned int CharacterFilterWeaponType_TypeDefinitionIndex = 2935;

	class CharacterFilterWeaponType : public ::MX::Logic::Actions::PullingAction
	{
	public:
		::System::Void InitAllList(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERFILTERWEAPONTYPE_INITALLLIST_OFFSET))(arg, nullptr);
		}

		::System::Boolean ContainedByFilter(CharacterObject* arg)
		{
			return ((::System::Boolean(*)(CharacterObject*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERFILTERWEAPONTYPE_CONTAINEDBYFILTER_OFFSET))(arg, nullptr);
		}

		::System::Boolean ContainedByFilter(CollectionUnitObjectBase* arg)
		{
			return ((::System::Boolean(*)(CollectionUnitObjectBase*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERFILTERWEAPONTYPE_CONTAINEDBYFILTER_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERFILTERWEAPONTYPE_.CTOR_OFFSET))(nullptr);
		}

	};

