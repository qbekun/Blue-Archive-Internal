#pragma once
#include "../../unitysdk.h"

namespace MXField::Core::Save { class FieldClientSaveData; }

#define MXFIELD_ACTIONS_FIELDLOCALSAVEACTION_COEXECUTE_OFFSET UNITYSDK_OFFSET(0xEED3B0)
#define MXFIELD_ACTIONS_FIELDLOCALSAVEACTION_GET_SAVEDATA_OFFSET UNITYSDK_OFFSET(0xEED440)
#define MXFIELD_ACTIONS_FIELDLOCALSAVEACTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xEED450)
#define MXFIELD_ACTIONS_FIELDLOCALSAVEACTION_CREATEDIRECTORY_OFFSET UNITYSDK_OFFSET(0xEED480)

namespace MXField::Actions
{
	inline static constexpr unsigned int FieldLocalSaveAction_TypeDefinitionIndex = 11067;

	class FieldLocalSaveAction : public Il2CppObject
	{
	public:
		::MXField::Core::Save::FieldClientSaveData* _SaveData_k__BackingField; // 0x40

		::System::Collections::IEnumerator* CoExecute()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_FIELDLOCALSAVEACTION_COEXECUTE_OFFSET))(nullptr);
		}

		::MXField::Core::Save::FieldClientSaveData* get_SaveData()
		{
			return ((::MXField::Core::Save::FieldClientSaveData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_FIELDLOCALSAVEACTION_GET_SAVEDATA_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MXField::Core::Save::FieldClientSaveData* arg)
		{
			((::System::Void(*)(::MXField::Core::Save::FieldClientSaveData*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_FIELDLOCALSAVEACTION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void CreateDirectory()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_FIELDLOCALSAVEACTION_CREATEDIRECTORY_OFFSET))(nullptr);
		}

	};
}

