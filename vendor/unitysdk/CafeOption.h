#pragma once
#include "unitysdk.h"

namespace MX::SaveData { class ToggleValue; }

#define CAFEOPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x19C67B0)
#define CAFEOPTION_VALIDATE_OFFSET UNITYSDK_OFFSET(0x19C67C0)
#define CAFEOPTION_SETDEFAULTDATA_OFFSET UNITYSDK_OFFSET(0x19C67D0)
#define CAFEOPTION_CLONE_OFFSET UNITYSDK_OFFSET(0x19C67E0)

	inline static constexpr unsigned int CafeOption_TypeDefinitionIndex = 1389;

	class CafeOption : public Il2CppObject
	{
	public:
		::MX::SaveData::ToggleValue* FurnitureBubble; // 0x10
		::System::Boolean IsNotFirst; // 0x14

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEOPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean Validate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEOPTION_VALIDATE_OFFSET))(nullptr);
		}

		::System::Void SetDefaultData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEOPTION_SETDEFAULTDATA_OFFSET))(nullptr);
		}

		::System::Object* Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEOPTION_CLONE_OFFSET))(nullptr);
		}

	};

