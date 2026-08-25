#pragma once
#include "../../unitysdk.h"

#define MX_SAVEDATA_OPENEDCONDITION_ADDOPENED_OFFSET UNITYSDK_OFFSET(0x1CF2B60)
#define MX_SAVEDATA_OPENEDCONDITION_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1CF2C10)
#define MX_SAVEDATA_OPENEDCONDITION_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1CF2C60)
#define MX_SAVEDATA_OPENEDCONDITION_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CF2C70)
#define MX_SAVEDATA_OPENEDCONDITION_CLONE_OFFSET UNITYSDK_OFFSET(0x1CF2CF0)
#define MX_SAVEDATA_OPENEDCONDITION_REMOVE_OFFSET UNITYSDK_OFFSET(0x1CF2DA0)
#define MX_SAVEDATA_OPENEDCONDITION_SETDEFAULTDATA_OFFSET UNITYSDK_OFFSET(0x1CF2E10)

namespace MX::SaveData
{
	inline static constexpr unsigned int OpenedCondition_TypeDefinitionIndex = 19903;

	class OpenedCondition : public Il2CppObject
	{
	public:
		Il2CppObject* Opened; // 0x10

		::System::Void AddOpened(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_OPENEDCONDITION_ADDOPENED_OFFSET))(str, nullptr);
		}

		::System::Boolean Contains(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_OPENEDCONDITION_CONTAINS_OFFSET))(str, nullptr);
		}

		::System::Boolean Validate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_OPENEDCONDITION_VALIDATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_OPENEDCONDITION_.CTOR_OFFSET))(nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_OPENEDCONDITION_CLONE_OFFSET))(nullptr);
		}

		::System::Void Remove(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_OPENEDCONDITION_REMOVE_OFFSET))(str, nullptr);
		}

		::System::Void SetDefaultData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_OPENEDCONDITION_SETDEFAULTDATA_OFFSET))(nullptr);
		}

	};
}

