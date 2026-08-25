#pragma once
#include "../../unitysdk.h"

namespace MXField::UI { class FieldDialogElement; }
namespace FlatData { class FieldDialogType; }

#define MXFIELD_ACTIONS_FIELDEMOJIACTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xEEB520)
#define MXFIELD_ACTIONS_FIELDEMOJIACTION_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xEED0A0)
#define MXFIELD_ACTIONS_FIELDEMOJIACTION_EXECUTE_OFFSET UNITYSDK_OFFSET(0xEED0B0)

namespace MXField::Actions
{
	inline static constexpr unsigned int FieldEmojiAction_TypeDefinitionIndex = 11063;

	class FieldEmojiAction : public Il2CppObject
	{
	public:
		::MXField::UI::FieldDialogElement* _element; // 0x30
		::FlatData::FieldDialogType* _Type_k__BackingField; // 0x38

		::System::Void .ctor(::FlatData::FieldDialogType* arg, ::System::Single arg2, ::System::Single arg3)
		{
			((::System::Void(*)(::FlatData::FieldDialogType*, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_FIELDEMOJIACTION_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::FlatData::FieldDialogType* get_Type()
		{
			return ((::FlatData::FieldDialogType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_FIELDEMOJIACTION_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Void Execute()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_FIELDEMOJIACTION_EXECUTE_OFFSET))(nullptr);
		}

	};
}

