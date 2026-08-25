#pragma once
#include "unitysdk.h"

class UIScenarioSelectionElement;
class UIGrid;
class ScenarioScriptInfo;

#define UISCENARIOSELECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x27E8180)
#define UISCENARIOSELECTION_INITSELECTION_OFFSET UNITYSDK_OFFSET(0x27E8200)
#define UISCENARIOSELECTION_INIT_OFFSET UNITYSDK_OFFSET(0x27E8230)
#define UISCENARIOSELECTION_CREATEELEMENTS_OFFSET UNITYSDK_OFFSET(0x27E86D0)
#define UISCENARIOSELECTION_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x27E8990)

	inline static constexpr unsigned int UIScenarioSelection_TypeDefinitionIndex = 7692;

	class UIScenarioSelection : public Il2CppObject
	{
	public:
		UIScenarioSelectionElement* selectionPrefab; // 0x18
		UIGrid* grid; // 0x20
		Il2CppObject* elements; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOSELECTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void InitSelection(ScenarioScriptInfo* arg)
		{
			((::System::Void(*)(ScenarioScriptInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOSELECTION_INITSELECTION_OFFSET))(arg, nullptr);
		}

		::System::Void Init(::System::Boolean arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::System::Boolean, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOSELECTION_INIT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void CreateElements(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOSELECTION_CREATEELEMENTS_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOSELECTION_INITIALIZE_OFFSET))(nullptr);
		}

	};

