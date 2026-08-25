#pragma once
#include "../../unitysdk.h"

class UIGrid;
namespace MXField::Core { class IFieldInteractable; }
namespace MXField::Interactable { class FieldProp; }

#define MXFIELD_UI_UIFIELDINTERACTION_GET_BLOCKPLAYERINPUT_OFFSET UNITYSDK_OFFSET(0xE9A000)
#define MXFIELD_UI_UIFIELDINTERACTION_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xE9A010)
#define MXFIELD_UI_UIFIELDINTERACTION_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xE9A570)
#define MXFIELD_UI_UIFIELDINTERACTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xE9A580)

namespace MXField::UI
{
	inline static constexpr unsigned int UIFieldInteraction_TypeDefinitionIndex = 10712;

	class UIFieldInteraction : public Il2CppObject
	{
	public:
		UIGrid* buttonGrid; // 0xE8
		::Il2CppArray<::System::Object*>* talkButtons; // 0xF0

		::System::Boolean get_BlockPlayerInput()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDINTERACTION_GET_BLOCKPLAYERINPUT_OFFSET))(nullptr);
		}

		::System::Void Initialize(::MXField::Core::IFieldInteractable* arg)
		{
			((::System::Void(*)(::MXField::Core::IFieldInteractable*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDINTERACTION_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize(::MXField::Interactable::FieldProp* arg)
		{
			((::System::Void(*)(::MXField::Interactable::FieldProp*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDINTERACTION_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDINTERACTION_.CTOR_OFFSET))(nullptr);
		}

	};
}

