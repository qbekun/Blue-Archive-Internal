#pragma once
#include "../../unitysdk.h"

#define MX_SAVEDATA_EVENTCONTENTSTAGEPROGRESSSAVEDATA_ADD_OFFSET UNITYSDK_OFFSET(0x1CF16F0)
#define MX_SAVEDATA_EVENTCONTENTSTAGEPROGRESSSAVEDATA_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1CF18A0)
#define MX_SAVEDATA_EVENTCONTENTSTAGEPROGRESSSAVEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CF1950)
#define MX_SAVEDATA_EVENTCONTENTSTAGEPROGRESSSAVEDATA_CLONE_OFFSET UNITYSDK_OFFSET(0x1CF19D0)
#define MX_SAVEDATA_EVENTCONTENTSTAGEPROGRESSSAVEDATA_SETDEFAULTDATA_OFFSET UNITYSDK_OFFSET(0x1CF1A80)
#define MX_SAVEDATA_EVENTCONTENTSTAGEPROGRESSSAVEDATA_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1CF1A90)

namespace MX::SaveData
{
	inline static constexpr unsigned int EventContentStageProgressSaveData_TypeDefinitionIndex = 19894;

	class EventContentStageProgressSaveData : public Il2CppObject
	{
	public:
		Il2CppObject* ClearedEventContentStageIds; // 0x10

		::System::Void Add(::System::Int64 arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_EVENTCONTENTSTAGEPROGRESSSAVEDATA_ADD_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Contains(::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_EVENTCONTENTSTAGEPROGRESSSAVEDATA_CONTAINS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_EVENTCONTENTSTAGEPROGRESSSAVEDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_EVENTCONTENTSTAGEPROGRESSSAVEDATA_CLONE_OFFSET))(nullptr);
		}

		::System::Void SetDefaultData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_EVENTCONTENTSTAGEPROGRESSSAVEDATA_SETDEFAULTDATA_OFFSET))(nullptr);
		}

		::System::Boolean Validate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_EVENTCONTENTSTAGEPROGRESSSAVEDATA_VALIDATE_OFFSET))(nullptr);
		}

	};
}

