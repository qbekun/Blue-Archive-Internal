#pragma once
#include "../../../unitysdk.h"

#define MXFIELD_SHARED_DATA_FIELDCURTAINCALLFREEMODEDATA_LOADDATAFROMTABLES_OFFSET UNITYSDK_OFFSET(0xE739D0)
#define MXFIELD_SHARED_DATA_FIELDCURTAINCALLFREEMODEDATA_TRYGETSEASONFREEMODEINFOS_OFFSET UNITYSDK_OFFSET(0xE73D10)
#define MXFIELD_SHARED_DATA_FIELDCURTAINCALLFREEMODEDATA_LOADALLTABLESFROMASSET_OFFSET UNITYSDK_OFFSET(0xE74430)
#define MXFIELD_SHARED_DATA_FIELDCURTAINCALLFREEMODEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0xE74470)
#define MXFIELD_SHARED_DATA_FIELDCURTAINCALLFREEMODEDATA_LOADALLTABLESFROMFILE_OFFSET UNITYSDK_OFFSET(0xE744F0)
#define MXFIELD_SHARED_DATA_FIELDCURTAINCALLFREEMODEDATA_VALIDATEEXCEL_OFFSET UNITYSDK_OFFSET(0xE74500)

namespace MXField::Shared::Data
{
	inline static constexpr unsigned int FieldCurtainCallFreeModeData_TypeDefinitionIndex = 10557;

	class FieldCurtainCallFreeModeData : public Il2CppObject
	{
	public:
		Il2CppObject* freeModeDict; // 0x18

		::System::Void LoadDataFromTables()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDCURTAINCALLFREEMODEDATA_LOADDATAFROMTABLES_OFFSET))(nullptr);
		}

		::System::Boolean TryGetSeasonFreeModeInfos(Il2CppObject* arg, ::System::Boolean arg2, ::System::Int64 arg3, Il2CppObject&* arg4)
		{
			return ((::System::Boolean(*)(Il2CppObject*, ::System::Boolean, ::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDCURTAINCALLFREEMODEDATA_TRYGETSEASONFREEMODEINFOS_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void LoadAllTablesFromAsset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDCURTAINCALLFREEMODEDATA_LOADALLTABLESFROMASSET_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDCURTAINCALLFREEMODEDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void LoadAllTablesFromFile(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDCURTAINCALLFREEMODEDATA_LOADALLTABLESFROMFILE_OFFSET))(str, nullptr);
		}

		::System::Boolean ValidateExcel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDCURTAINCALLFREEMODEDATA_VALIDATEEXCEL_OFFSET))(nullptr);
		}

	};
}

