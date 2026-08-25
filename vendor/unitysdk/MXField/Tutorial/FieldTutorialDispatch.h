#pragma once
#include "../../unitysdk.h"

namespace MXField::Shared::Data { class FieldTutorialInfo; }

#define MXFIELD_TUTORIAL_FIELDTUTORIALDISPATCH_.CTOR_OFFSET UNITYSDK_OFFSET(0xEB1340)
#define MXFIELD_TUTORIAL_FIELDTUTORIALDISPATCH_GET_TUTORIALINFO_OFFSET UNITYSDK_OFFSET(0xEB13C0)

namespace MXField::Tutorial
{
	inline static constexpr unsigned int FieldTutorialDispatch_TypeDefinitionIndex = 10799;

	class FieldTutorialDispatch : public Il2CppObject
	{
	public:
		::MXField::Shared::Data::FieldTutorialInfo* _TutorialInfo_k__BackingField; // 0x18

		::System::Void .ctor(::System::Object* arg, ::MXField::Shared::Data::FieldTutorialInfo* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MXField::Shared::Data::FieldTutorialInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TUTORIAL_FIELDTUTORIALDISPATCH_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::MXField::Shared::Data::FieldTutorialInfo* get_TutorialInfo()
		{
			return ((::MXField::Shared::Data::FieldTutorialInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TUTORIAL_FIELDTUTORIALDISPATCH_GET_TUTORIALINFO_OFFSET))(nullptr);
		}

	};
}

