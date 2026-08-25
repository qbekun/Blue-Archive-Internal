#pragma once
#include "unitysdk.h"

class CharacterObject;
class CollectionUnitObjectBase;

#define CHARACTERFILTERSCHOOL_INITALLLIST_OFFSET UNITYSDK_OFFSET(0x1FB7E10)
#define CHARACTERFILTERSCHOOL_CONTAINEDBYFILTER_OFFSET UNITYSDK_OFFSET(0x1FB8090)
#define CHARACTERFILTERSCHOOL_CONTAINEDBYFILTER_OFFSET UNITYSDK_OFFSET(0x1FB8140)
#define CHARACTERFILTERSCHOOL_.CTOR_OFFSET UNITYSDK_OFFSET(0x1FB4E10)

	inline static constexpr unsigned int CharacterFilterSchool_TypeDefinitionIndex = 2929;

	class CharacterFilterSchool : public IncrementalReadState
	{
	public:
		::System::Void InitAllList(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERFILTERSCHOOL_INITALLLIST_OFFSET))(arg, nullptr);
		}

		::System::Boolean ContainedByFilter(CharacterObject* arg)
		{
			return ((::System::Boolean(*)(CharacterObject*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERFILTERSCHOOL_CONTAINEDBYFILTER_OFFSET))(arg, nullptr);
		}

		::System::Boolean ContainedByFilter(CollectionUnitObjectBase* arg)
		{
			return ((::System::Boolean(*)(CollectionUnitObjectBase*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERFILTERSCHOOL_CONTAINEDBYFILTER_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERFILTERSCHOOL_.CTOR_OFFSET))(nullptr);
		}

	};

