#pragma once
#include "../../unitysdk.h"

#define MX_SAVEDATA_SNSPOSTWATCHEDSAVEDATA_SETDEFAULTDATA_OFFSET UNITYSDK_OFFSET(0x1D25A80)
#define MX_SAVEDATA_SNSPOSTWATCHEDSAVEDATA_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1D25B00)
#define MX_SAVEDATA_SNSPOSTWATCHEDSAVEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D25B10)
#define MX_SAVEDATA_SNSPOSTWATCHEDSAVEDATA_CLONE_OFFSET UNITYSDK_OFFSET(0x1D25B90)

namespace MX::SaveData
{
	inline static constexpr unsigned int SNSPostWatchedSaveData_TypeDefinitionIndex = 20008;

	class SNSPostWatchedSaveData : public Il2CppObject
	{
	public:
		Il2CppObject* SnsWatchedDictionary; // 0x10

		::System::Void SetDefaultData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_SNSPOSTWATCHEDSAVEDATA_SETDEFAULTDATA_OFFSET))(nullptr);
		}

		::System::Boolean Validate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_SNSPOSTWATCHEDSAVEDATA_VALIDATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_SNSPOSTWATCHEDSAVEDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_SNSPOSTWATCHEDSAVEDATA_CLONE_OFFSET))(nullptr);
		}

	};
}

