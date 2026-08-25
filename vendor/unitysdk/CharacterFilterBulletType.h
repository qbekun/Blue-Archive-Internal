#pragma once
#include "unitysdk.h"

class CharacterObject;
class CollectionUnitObjectBase;

#define CHARACTERFILTERBULLETTYPE_INITALLLIST_OFFSET UNITYSDK_OFFSET(0x1FB79E0)
#define CHARACTERFILTERBULLETTYPE_CONTAINEDBYFILTER_OFFSET UNITYSDK_OFFSET(0x1FB7C60)
#define CHARACTERFILTERBULLETTYPE_CONTAINEDBYFILTER_OFFSET UNITYSDK_OFFSET(0x1FB7CF0)
#define CHARACTERFILTERBULLETTYPE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1FB4D10)

	inline static constexpr unsigned int CharacterFilterBulletType_TypeDefinitionIndex = 2927;

	class CharacterFilterBulletType : public ::MX::Logic::Actions::EnterGroundAction
	{
	public:
		::System::Void InitAllList(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERFILTERBULLETTYPE_INITALLLIST_OFFSET))(arg, nullptr);
		}

		::System::Boolean ContainedByFilter(CharacterObject* arg)
		{
			return ((::System::Boolean(*)(CharacterObject*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERFILTERBULLETTYPE_CONTAINEDBYFILTER_OFFSET))(arg, nullptr);
		}

		::System::Boolean ContainedByFilter(CollectionUnitObjectBase* arg)
		{
			return ((::System::Boolean(*)(CollectionUnitObjectBase*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERFILTERBULLETTYPE_CONTAINEDBYFILTER_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERFILTERBULLETTYPE_.CTOR_OFFSET))(nullptr);
		}

	};

