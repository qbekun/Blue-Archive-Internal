#pragma once
#include "../../unitysdk.h"

#define MX_SAVEDATA_OPENEDEVENTCONTENTZONES_SETDEFAULTDATA_OFFSET UNITYSDK_OFFSET(0x1CF3150)
#define MX_SAVEDATA_OPENEDEVENTCONTENTZONES_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1CF31D0)
#define MX_SAVEDATA_OPENEDEVENTCONTENTZONES_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CF31E0)
#define MX_SAVEDATA_OPENEDEVENTCONTENTZONES_CLONE_OFFSET UNITYSDK_OFFSET(0x1CF3260)
#define MX_SAVEDATA_OPENEDEVENTCONTENTZONES_ADDOPENED_OFFSET UNITYSDK_OFFSET(0x1CF3310)
#define MX_SAVEDATA_OPENEDEVENTCONTENTZONES_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1CF33C0)

namespace MX::SaveData
{
	inline static constexpr unsigned int OpenedEventContentZones_TypeDefinitionIndex = 19905;

	class OpenedEventContentZones : public Il2CppObject
	{
	public:
		Il2CppObject* Opened; // 0x10

		::System::Void SetDefaultData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_OPENEDEVENTCONTENTZONES_SETDEFAULTDATA_OFFSET))(nullptr);
		}

		::System::Boolean Validate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_OPENEDEVENTCONTENTZONES_VALIDATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_OPENEDEVENTCONTENTZONES_.CTOR_OFFSET))(nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_OPENEDEVENTCONTENTZONES_CLONE_OFFSET))(nullptr);
		}

		::System::Void AddOpened(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_OPENEDEVENTCONTENTZONES_ADDOPENED_OFFSET))(arg, nullptr);
		}

		::System::Boolean Contains(::System::Int64 arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_OPENEDEVENTCONTENTZONES_CONTAINS_OFFSET))(arg, nullptr);
		}

	};
}

