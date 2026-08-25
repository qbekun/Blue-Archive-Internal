#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class FormationLocationExcel&; }
namespace MX::Data::Excel { class FormationLocationExcel; }

#define MX_DATA_FORMATIONDATA_PREPAREINITIALDATA_OFFSET UNITYSDK_OFFSET(0x18DC780)
#define MX_DATA_FORMATIONDATA_HASLOCATIONEXCEL_OFFSET UNITYSDK_OFFSET(0x18DCB30)
#define MX_DATA_FORMATIONDATA_INITIALIZECOMMON_OFFSET UNITYSDK_OFFSET(0x18DCB90)
#define MX_DATA_FORMATIONDATA_GETLOCATIONEXCEL_OFFSET UNITYSDK_OFFSET(0x18DCBF0)
#define MX_DATA_FORMATIONDATA_GETLOCATIONENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18DCCE0)
#define MX_DATA_FORMATIONDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x18DCD70)

namespace MX::Data
{
	inline static constexpr unsigned int FormationData_TypeDefinitionIndex = 16133;

	class FormationData : public Il2CppObject
	{
	public:
		Il2CppObject* locationDic; // 0x28

		::System::Void PrepareInitialData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_FORMATIONDATA_PREPAREINITIALDATA_OFFSET))(nullptr);
		}

		::System::Boolean HasLocationExcel(FormationLocationKey* arg, ::MX::Data::Excel::FormationLocationExcel&* arg)
		{
			return (return (::System::Boolean(*)(FormationLocationKey*, ::MX::Data::Excel::FormationLocationExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_FORMATIONDATA_HASLOCATIONEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void InitializeCommon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_FORMATIONDATA_INITIALIZECOMMON_OFFSET))(nullptr);
		}

		::MX::Data::Excel::FormationLocationExcel* GetLocationExcel(FormationLocationKey* arg)
		{
			return (return (::MX::Data::Excel::FormationLocationExcel*(*)(FormationLocationKey*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_FORMATIONDATA_GETLOCATIONEXCEL_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetLocationEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_FORMATIONDATA_GETLOCATIONENUMERATOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_FORMATIONDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

