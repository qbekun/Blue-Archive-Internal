#pragma once
#include "../../unitysdk.h"

#define MX_SAVEDATA_GUIDEMISSIONARCHIVESAVEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D02B50)
#define MX_SAVEDATA_GUIDEMISSIONARCHIVESAVEDATA_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1D02B60)
#define MX_SAVEDATA_GUIDEMISSIONARCHIVESAVEDATA_CLONE_OFFSET UNITYSDK_OFFSET(0x1D02B70)
#define MX_SAVEDATA_GUIDEMISSIONARCHIVESAVEDATA_SETDEFAULTDATA_OFFSET UNITYSDK_OFFSET(0x1D02BE0)

namespace MX::SaveData
{
	inline static constexpr unsigned int GuideMissionArchiveSaveData_TypeDefinitionIndex = 19980;

	class GuideMissionArchiveSaveData : public Il2CppObject
	{
	public:
		SortingRule* SortingRule; // 0x10
		SortingOrder* SortingOrder; // 0x14

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_GUIDEMISSIONARCHIVESAVEDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean Validate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_GUIDEMISSIONARCHIVESAVEDATA_VALIDATE_OFFSET))(nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_GUIDEMISSIONARCHIVESAVEDATA_CLONE_OFFSET))(nullptr);
		}

		::System::Void SetDefaultData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_GUIDEMISSIONARCHIVESAVEDATA_SETDEFAULTDATA_OFFSET))(nullptr);
		}

	};
}

