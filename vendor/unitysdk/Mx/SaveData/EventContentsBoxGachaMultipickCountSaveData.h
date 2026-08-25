#pragma once
#include "../../unitysdk.h"

#define MX_SAVEDATA_EVENTCONTENTSBOXGACHAMULTIPICKCOUNTSAVEDATA_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1CFAE70)
#define MX_SAVEDATA_EVENTCONTENTSBOXGACHAMULTIPICKCOUNTSAVEDATA_CLONE_OFFSET UNITYSDK_OFFSET(0x1CFAE80)
#define MX_SAVEDATA_EVENTCONTENTSBOXGACHAMULTIPICKCOUNTSAVEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CFAEE0)
#define MX_SAVEDATA_EVENTCONTENTSBOXGACHAMULTIPICKCOUNTSAVEDATA_SETDEFAULTDATA_OFFSET UNITYSDK_OFFSET(0x1CFAEF0)

namespace MX::SaveData
{
	inline static constexpr unsigned int EventContentsBoxGachaMultipickCountSaveData_TypeDefinitionIndex = 19944;

	class EventContentsBoxGachaMultipickCountSaveData : public Il2CppObject
	{
	public:
		::System::Int32 MultipickCount; // 0x10

		::System::Boolean Validate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_EVENTCONTENTSBOXGACHAMULTIPICKCOUNTSAVEDATA_VALIDATE_OFFSET))(nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_EVENTCONTENTSBOXGACHAMULTIPICKCOUNTSAVEDATA_CLONE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_EVENTCONTENTSBOXGACHAMULTIPICKCOUNTSAVEDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetDefaultData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_EVENTCONTENTSBOXGACHAMULTIPICKCOUNTSAVEDATA_SETDEFAULTDATA_OFFSET))(nullptr);
		}

	};
}

