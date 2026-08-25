#pragma once
#include "../../unitysdk.h"

#define MX_SAVEDATA_OPENEDSCENARIOCONTENTCOLLECTION_SETDEFAULTDATA_OFFSET UNITYSDK_OFFSET(0x1CF3A80)
#define MX_SAVEDATA_OPENEDSCENARIOCONTENTCOLLECTION_CLONE_OFFSET UNITYSDK_OFFSET(0x1CF3A90)
#define MX_SAVEDATA_OPENEDSCENARIOCONTENTCOLLECTION_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1CF3BC0)
#define MX_SAVEDATA_OPENEDSCENARIOCONTENTCOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x1CF3C70)
#define MX_SAVEDATA_OPENEDSCENARIOCONTENTCOLLECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CF3B40)
#define MX_SAVEDATA_OPENEDSCENARIOCONTENTCOLLECTION_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1CF3E20)

namespace MX::SaveData
{
	inline static constexpr unsigned int OpenedScenarioContentCollection_TypeDefinitionIndex = 19908;

	class OpenedScenarioContentCollection : public Il2CppObject
	{
	public:
		Il2CppObject* OpenedScenarioContentCollectionIdDict; // 0x10

		::System::Void SetDefaultData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_OPENEDSCENARIOCONTENTCOLLECTION_SETDEFAULTDATA_OFFSET))(nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_OPENEDSCENARIOCONTENTCOLLECTION_CLONE_OFFSET))(nullptr);
		}

		::System::Boolean Contains(::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_OPENEDSCENARIOCONTENTCOLLECTION_CONTAINS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Add(::System::Int64 arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_OPENEDSCENARIOCONTENTCOLLECTION_ADD_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_OPENEDSCENARIOCONTENTCOLLECTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean Validate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_OPENEDSCENARIOCONTENTCOLLECTION_VALIDATE_OFFSET))(nullptr);
		}

	};
}

