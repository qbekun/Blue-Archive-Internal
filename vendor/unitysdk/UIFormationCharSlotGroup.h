#pragma once
#include "unitysdk.h"

class FormationCharEditInfo;

#define UIFORMATIONCHARSLOTGROUP_SETDATA_OFFSET UNITYSDK_OFFSET(0x2540860)
#define UIFORMATIONCHARSLOTGROUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x2542060)

	inline static constexpr unsigned int UIFormationCharSlotGroup_TypeDefinitionIndex = 6064;

	class UIFormationCharSlotGroup : public ::System::Xml::BinaryCompatibility
	{
	public:
		::Il2CppArray<::System::Object*>* Characters; // 0x28

		::System::Void SetData(FormationCharEditInfo* arg)
		{
			((::System::Void(*)(FormationCharEditInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIFORMATIONCHARSLOTGROUP_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORMATIONCHARSLOTGROUP_.CTOR_OFFSET))(nullptr);
		}

	};

