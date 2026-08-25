#pragma once
#include "unitysdk.h"

class CharacterObject;
class CollectionUnitObjectBase;

#define CHARACTERFILTERTACTICROLE_INITALLLIST_OFFSET UNITYSDK_OFFSET(0x1FB86C0)
#define CHARACTERFILTERTACTICROLE_CONTAINEDBYFILTER_OFFSET UNITYSDK_OFFSET(0x1FB8940)
#define CHARACTERFILTERTACTICROLE_CONTAINEDBYFILTER_OFFSET UNITYSDK_OFFSET(0x1FB89E0)
#define CHARACTERFILTERTACTICROLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1FB4E90)

	inline static constexpr unsigned int CharacterFilterTacticRole_TypeDefinitionIndex = 2933;

	class CharacterFilterTacticRole : public ::MX::Logic::Actions::NormalAttackAnimationFrameKey
	{
	public:
		::System::Void InitAllList(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERFILTERTACTICROLE_INITALLLIST_OFFSET))(arg, nullptr);
		}

		::System::Boolean ContainedByFilter(CharacterObject* arg)
		{
			return ((::System::Boolean(*)(CharacterObject*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERFILTERTACTICROLE_CONTAINEDBYFILTER_OFFSET))(arg, nullptr);
		}

		::System::Boolean ContainedByFilter(CollectionUnitObjectBase* arg)
		{
			return ((::System::Boolean(*)(CollectionUnitObjectBase*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERFILTERTACTICROLE_CONTAINEDBYFILTER_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERFILTERTACTICROLE_.CTOR_OFFSET))(nullptr);
		}

	};

