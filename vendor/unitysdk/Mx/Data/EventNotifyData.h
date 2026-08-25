#pragma once
#include "../../unitysdk.h"

#define MX_DATA_EVENTNOTIFYDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x18D81E0)
#define MX_DATA_EVENTNOTIFYDATA_GETEVENTNOTIFYINFOS_OFFSET UNITYSDK_OFFSET(0x18D81F0)
#define MX_DATA_EVENTNOTIFYDATA_INITIALIZECLIENT_OFFSET UNITYSDK_OFFSET(0x18D8360)

namespace MX::Data
{
	inline static constexpr unsigned int EventNotifyData_TypeDefinitionIndex = 16119;

	class EventNotifyData : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTNOTIFYDATA_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* GetEventNotifyInfos()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTNOTIFYDATA_GETEVENTNOTIFYINFOS_OFFSET))(nullptr);
		}

		::System::Void InitializeClient()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTNOTIFYDATA_INITIALIZECLIENT_OFFSET))(nullptr);
		}

	};
}

