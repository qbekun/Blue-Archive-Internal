#pragma once
#include "../../unitysdk.h"

#define MX_SAVEDATA_OPENEDACADEMYZONES_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1CF2E90)
#define MX_SAVEDATA_OPENEDACADEMYZONES_SETDEFAULTDATA_OFFSET UNITYSDK_OFFSET(0x1CF2EE0)
#define MX_SAVEDATA_OPENEDACADEMYZONES_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1CF2F60)
#define MX_SAVEDATA_OPENEDACADEMYZONES_ADDOPENED_OFFSET UNITYSDK_OFFSET(0x1CF2F70)
#define MX_SAVEDATA_OPENEDACADEMYZONES_CLONE_OFFSET UNITYSDK_OFFSET(0x1CF3020)
#define MX_SAVEDATA_OPENEDACADEMYZONES_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CF30D0)

namespace MX::SaveData
{
	inline static constexpr unsigned int OpenedAcademyZones_TypeDefinitionIndex = 19904;

	class OpenedAcademyZones : public Il2CppObject
	{
	public:
		Il2CppObject* Opened; // 0x10

		::System::Boolean Contains(::System::Int64 arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_OPENEDACADEMYZONES_CONTAINS_OFFSET))(arg, nullptr);
		}

		::System::Void SetDefaultData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_OPENEDACADEMYZONES_SETDEFAULTDATA_OFFSET))(nullptr);
		}

		::System::Boolean Validate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_OPENEDACADEMYZONES_VALIDATE_OFFSET))(nullptr);
		}

		::System::Void AddOpened(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_OPENEDACADEMYZONES_ADDOPENED_OFFSET))(arg, nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_OPENEDACADEMYZONES_CLONE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_OPENEDACADEMYZONES_.CTOR_OFFSET))(nullptr);
		}

	};
}

