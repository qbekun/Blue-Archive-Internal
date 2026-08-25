#pragma once
#include "unitysdk.h"

#define STATESELECTOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define STATESELECTOR_ADD_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int StateSelector_TypeDefinitionIndex = 37781;

	class StateSelector : public ::System::Xml::Schema::Datatype_hexBinary
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATESELECTOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Add(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + STATESELECTOR_ADD_OFFSET))(arg, nullptr);
		}

	};

