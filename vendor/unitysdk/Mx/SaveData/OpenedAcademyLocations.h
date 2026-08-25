#pragma once
#include "../../unitysdk.h"

#define MX_SAVEDATA_OPENEDACADEMYLOCATIONS_CLONE_OFFSET UNITYSDK_OFFSET(0x1CF3410)
#define MX_SAVEDATA_OPENEDACADEMYLOCATIONS_ADDOPENED_OFFSET UNITYSDK_OFFSET(0x1CF3540)
#define MX_SAVEDATA_OPENEDACADEMYLOCATIONS_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CF34C0)
#define MX_SAVEDATA_OPENEDACADEMYLOCATIONS_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1CF35F0)
#define MX_SAVEDATA_OPENEDACADEMYLOCATIONS_SETDEFAULTDATA_OFFSET UNITYSDK_OFFSET(0x1CF3640)
#define MX_SAVEDATA_OPENEDACADEMYLOCATIONS_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1CF36C0)

namespace MX::SaveData
{
	inline static constexpr unsigned int OpenedAcademyLocations_TypeDefinitionIndex = 19906;

	class OpenedAcademyLocations : public Il2CppObject
	{
	public:
		Il2CppObject* Opened; // 0x10

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_OPENEDACADEMYLOCATIONS_CLONE_OFFSET))(nullptr);
		}

		::System::Void AddOpened(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_OPENEDACADEMYLOCATIONS_ADDOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_OPENEDACADEMYLOCATIONS_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean Contains(::System::Int64 arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_OPENEDACADEMYLOCATIONS_CONTAINS_OFFSET))(arg, nullptr);
		}

		::System::Void SetDefaultData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_OPENEDACADEMYLOCATIONS_SETDEFAULTDATA_OFFSET))(nullptr);
		}

		::System::Boolean Validate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_OPENEDACADEMYLOCATIONS_VALIDATE_OFFSET))(nullptr);
		}

	};
}

