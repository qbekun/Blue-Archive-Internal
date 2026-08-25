#pragma once
#include "../../unitysdk.h"

#define MX_DATA_TUTORIALNEWDATA_GETCOMPULSORYTUTORIALLIST_OFFSET UNITYSDK_OFFSET(0x1964670)
#define MX_DATA_TUTORIALNEWDATA_INITIALIZECLIENT_OFFSET UNITYSDK_OFFSET(0x19647E0)
#define MX_DATA_TUTORIALNEWDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1964820)
#define MX_DATA_TUTORIALNEWDATA_GETTUTORIALLIST_OFFSET UNITYSDK_OFFSET(0x1964830)

namespace MX::Data
{
	inline static constexpr unsigned int TutorialNewData_TypeDefinitionIndex = 16435;

	class TutorialNewData : public Il2CppObject
	{
	public:
		Il2CppObject* GetCompulsoryTutorialList()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TUTORIALNEWDATA_GETCOMPULSORYTUTORIALLIST_OFFSET))(nullptr);
		}

		::System::Void InitializeClient()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TUTORIALNEWDATA_INITIALIZECLIENT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TUTORIALNEWDATA_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* GetTutorialList()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TUTORIALNEWDATA_GETTUTORIALLIST_OFFSET))(nullptr);
		}

	};
}

