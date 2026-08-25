#pragma once
#include "unitysdk.h"

class CharacterObject;
class CollectionUnitObjectBase;

#define CHARACTERFILTERTACTICRANGE_INITALLLIST_OFFSET UNITYSDK_OFFSET(0x1FB8280)
#define CHARACTERFILTERTACTICRANGE_CONTAINEDBYFILTER_OFFSET UNITYSDK_OFFSET(0x1FB8500)
#define CHARACTERFILTERTACTICRANGE_CONTAINEDBYFILTER_OFFSET UNITYSDK_OFFSET(0x1FB85A0)
#define CHARACTERFILTERTACTICRANGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1FB4E50)

	inline static constexpr unsigned int CharacterFilterTacticRange_TypeDefinitionIndex = 2931;

	class CharacterFilterTacticRange : public ::MX::Logic::Actions::MoveToWorldPositionAction
	{
	public:
		::System::Void InitAllList(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERFILTERTACTICRANGE_INITALLLIST_OFFSET))(arg, nullptr);
		}

		::System::Boolean ContainedByFilter(CharacterObject* arg)
		{
			return ((::System::Boolean(*)(CharacterObject*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERFILTERTACTICRANGE_CONTAINEDBYFILTER_OFFSET))(arg, nullptr);
		}

		::System::Boolean ContainedByFilter(CollectionUnitObjectBase* arg)
		{
			return ((::System::Boolean(*)(CollectionUnitObjectBase*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERFILTERTACTICRANGE_CONTAINEDBYFILTER_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERFILTERTACTICRANGE_.CTOR_OFFSET))(nullptr);
		}

	};

