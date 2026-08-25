#pragma once
#include "../../unitysdk.h"

#define MX_SAVEDATA_EVENTNOTIFYWATCHEDSAVEDATA_SETDEFAULTDATA_OFFSET UNITYSDK_OFFSET(0x1D22100)
#define MX_SAVEDATA_EVENTNOTIFYWATCHEDSAVEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D22160)
#define MX_SAVEDATA_EVENTNOTIFYWATCHEDSAVEDATA_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1D221C0)
#define MX_SAVEDATA_EVENTNOTIFYWATCHEDSAVEDATA_CLONE_OFFSET UNITYSDK_OFFSET(0x1D221D0)

namespace MX::SaveData
{
	inline static constexpr unsigned int EventNotifyWatchedSaveData_TypeDefinitionIndex = 19994;

	class EventNotifyWatchedSaveData : public Il2CppObject
	{
	public:
		::System::DateTime* CloseNotifyWatchedTime; // 0x10

		::System::Void SetDefaultData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_EVENTNOTIFYWATCHEDSAVEDATA_SETDEFAULTDATA_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_EVENTNOTIFYWATCHEDSAVEDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean Validate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_EVENTNOTIFYWATCHEDSAVEDATA_VALIDATE_OFFSET))(nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_EVENTNOTIFYWATCHEDSAVEDATA_CLONE_OFFSET))(nullptr);
		}

	};
}

