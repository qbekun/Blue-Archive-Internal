#pragma once
#include "../../unitysdk.h"

#define MX_SAVEDATA_OPENEDEVENTCONTENTCOLLECTION_CLONE_OFFSET UNITYSDK_OFFSET(0x1CF36D0)
#define MX_SAVEDATA_OPENEDEVENTCONTENTCOLLECTION_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1CF3800)
#define MX_SAVEDATA_OPENEDEVENTCONTENTCOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x1CF3810)
#define MX_SAVEDATA_OPENEDEVENTCONTENTCOLLECTION_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1CF39C0)
#define MX_SAVEDATA_OPENEDEVENTCONTENTCOLLECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CF3780)
#define MX_SAVEDATA_OPENEDEVENTCONTENTCOLLECTION_SETDEFAULTDATA_OFFSET UNITYSDK_OFFSET(0x1CF3A70)

namespace MX::SaveData
{
	inline static constexpr unsigned int OpenedEventContentCollection_TypeDefinitionIndex = 19907;

	class OpenedEventContentCollection : public Il2CppObject
	{
	public:
		Il2CppObject* OpenedEventContentCollectionIdDict; // 0x10

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_OPENEDEVENTCONTENTCOLLECTION_CLONE_OFFSET))(nullptr);
		}

		::System::Boolean Validate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_OPENEDEVENTCONTENTCOLLECTION_VALIDATE_OFFSET))(nullptr);
		}

		::System::Void Add(::System::Int64 arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_OPENEDEVENTCONTENTCOLLECTION_ADD_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Contains(::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_OPENEDEVENTCONTENTCOLLECTION_CONTAINS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_OPENEDEVENTCONTENTCOLLECTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetDefaultData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_OPENEDEVENTCONTENTCOLLECTION_SETDEFAULTDATA_OFFSET))(nullptr);
		}

	};
}

