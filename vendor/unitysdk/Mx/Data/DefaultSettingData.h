#pragma once
#include "../../unitysdk.h"

namespace FlatData { class DefaultEchelonExcel; }
namespace MX::GameLogic::DBModel { class AccountCurrencyDB; }
namespace MX::GameLogic::DBModel { class EchelonDB; }
namespace FlatData { class DefaultEchelonExcel&; }

#define MX_DATA_DEFAULTSETTINGDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x18B5DC0)
#define MX_DATA_DEFAULTSETTINGDATA_BUILDSUPPORTIDS_OFFSET UNITYSDK_OFFSET(0x18B6020)
#define MX_DATA_DEFAULTSETTINGDATA_GETDEFAULTCURRENCY_OFFSET UNITYSDK_OFFSET(0x18B6280)
#define MX_DATA_DEFAULTSETTINGDATA_ISVALID_OFFSET UNITYSDK_OFFSET(0x18B64E0)
#define MX_DATA_DEFAULTSETTINGDATA_LOADDATAFROMTABLES_OFFSET UNITYSDK_OFFSET(0x18B6870)
#define MX_DATA_DEFAULTSETTINGDATA_LOADALLTABLESFROMFILE_OFFSET UNITYSDK_OFFSET(0x18B73B0)
#define MX_DATA_DEFAULTSETTINGDATA_BUILDMAINIDS_OFFSET UNITYSDK_OFFSET(0x18B73C0)
#define MX_DATA_DEFAULTSETTINGDATA_ECHELONFORMATIONCHECKBYIDS_OFFSET UNITYSDK_OFFSET(0x18B7620)
#define MX_DATA_DEFAULTSETTINGDATA_GET_DEFAULTCHARACTERS_OFFSET UNITYSDK_OFFSET(0x18B7680)
#define MX_DATA_DEFAULTSETTINGDATA_GET_DEFAULTECHELONS_OFFSET UNITYSDK_OFFSET(0x18B7690)
#define MX_DATA_DEFAULTSETTINGDATA_LOADALLTABLESFROMASSET_OFFSET UNITYSDK_OFFSET(0x18B76E0)
#define MX_DATA_DEFAULTSETTINGDATA_GETDEFAULTEMBLEMS_OFFSET UNITYSDK_OFFSET(0x18B7790)
#define MX_DATA_DEFAULTSETTINGDATA_DATAPREPROCESSING_OFFSET UNITYSDK_OFFSET(0x18B7920)
#define MX_DATA_DEFAULTSETTINGDATA_GETDEFAULTEQUIPMENTSANDITEMS_OFFSET UNITYSDK_OFFSET(0x18B7E00)
#define MX_DATA_DEFAULTSETTINGDATA_GETECHELON_OFFSET UNITYSDK_OFFSET(0x18B7FF0)
#define MX_DATA_DEFAULTSETTINGDATA_GETDEFAULTREPRESENTCHARACTERSERVERID_OFFSET UNITYSDK_OFFSET(0x18B80C0)
#define MX_DATA_DEFAULTSETTINGDATA_VALIDATEEXCEL_OFFSET UNITYSDK_OFFSET(0x18B81D0)
#define MX_DATA_DEFAULTSETTINGDATA_ECHELONDBCREATE_OFFSET UNITYSDK_OFFSET(0x18B91B0)
#define MX_DATA_DEFAULTSETTINGDATA_TRYGETECHELON_OFFSET UNITYSDK_OFFSET(0x18B8060)
#define MX_DATA_DEFAULTSETTINGDATA_VALIDATEDATA_OFFSET UNITYSDK_OFFSET(0x18B9580)
#define MX_DATA_DEFAULTSETTINGDATA_TRYGETDEFAULTMAILDBS_OFFSET UNITYSDK_OFFSET(0x18B9590)
#define MX_DATA_DEFAULTSETTINGDATA_GET_DEFAULTFURNITUREDBS_OFFSET UNITYSDK_OFFSET(0x18B96B0)

namespace MX::Data
{
	inline static constexpr unsigned int DefaultSettingData_TypeDefinitionIndex = 16054;

	class DefaultSettingData : public Il2CppObject
	{
	public:
		Il2CppObject* defaultCharacters; // 0x18
		Il2CppObject* defaultEchelonTable; // 0x20
		Il2CppObject* defulatCharacterTable; // 0x28
		Il2CppObject* defaultMailTable; // 0x30
		Il2CppObject* defaultParcels; // 0x38
		Il2CppObject* defaultFurnitureDBs; // 0x40
		Il2CppObject* defaultMailInfos; // 0x48
		::System::Int64 defaultRepresentCharacterUniqueId; // 0x50

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DEFAULTSETTINGDATA_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* BuildSupportIds(::FlatData::DefaultEchelonExcel* arg, Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::DefaultEchelonExcel*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DEFAULTSETTINGDATA_BUILDSUPPORTIDS_OFFSET))(arg, arg, nullptr);
		}

		::MX::GameLogic::DBModel::AccountCurrencyDB* GetDefaultCurrency()
		{
			return (return (::MX::GameLogic::DBModel::AccountCurrencyDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DEFAULTSETTINGDATA_GETDEFAULTCURRENCY_OFFSET))(nullptr);
		}

		::System::Boolean IsValid(::FlatData::DefaultEchelonExcel* arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(::FlatData::DefaultEchelonExcel*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DEFAULTSETTINGDATA_ISVALID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void LoadDataFromTables()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DEFAULTSETTINGDATA_LOADDATAFROMTABLES_OFFSET))(nullptr);
		}

		::System::Void LoadAllTablesFromFile(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DEFAULTSETTINGDATA_LOADALLTABLESFROMFILE_OFFSET))(str, nullptr);
		}

		Il2CppObject* BuildMainIds(::FlatData::DefaultEchelonExcel* arg, Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::DefaultEchelonExcel*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DEFAULTSETTINGDATA_BUILDMAINIDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void EchelonFormationCheckByIds(::MX::GameLogic::DBModel::EchelonDB* arg, ::FlatData::DefaultEchelonExcel* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::EchelonDB*, ::FlatData::DefaultEchelonExcel*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DEFAULTSETTINGDATA_ECHELONFORMATIONCHECKBYIDS_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* get_DefaultCharacters()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DEFAULTSETTINGDATA_GET_DEFAULTCHARACTERS_OFFSET))(nullptr);
		}

		Il2CppObject* get_DefaultEchelons()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DEFAULTSETTINGDATA_GET_DEFAULTECHELONS_OFFSET))(nullptr);
		}

		::System::Void LoadAllTablesFromAsset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DEFAULTSETTINGDATA_LOADALLTABLESFROMASSET_OFFSET))(nullptr);
		}

		Il2CppObject* GetDefaultEmblems()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DEFAULTSETTINGDATA_GETDEFAULTEMBLEMS_OFFSET))(nullptr);
		}

		::System::Void DataPreprocessing()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DEFAULTSETTINGDATA_DATAPREPROCESSING_OFFSET))(nullptr);
		}

		Il2CppObject* GetDefaultEquipmentsAndItems()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DEFAULTSETTINGDATA_GETDEFAULTEQUIPMENTSANDITEMS_OFFSET))(nullptr);
		}

		::FlatData::DefaultEchelonExcel* GetEchelon(::System::Int64 arg)
		{
			return (return (::FlatData::DefaultEchelonExcel*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DEFAULTSETTINGDATA_GETECHELON_OFFSET))(arg, nullptr);
		}

		::System::Int64 GetDefaultRepresentCharacterServerId(Il2CppObject* arg)
		{
			return (return (::System::Int64(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DEFAULTSETTINGDATA_GETDEFAULTREPRESENTCHARACTERSERVERID_OFFSET))(arg, nullptr);
		}

		::System::Boolean ValidateExcel()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DEFAULTSETTINGDATA_VALIDATEEXCEL_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::EchelonDB* EchelonDBCreate(::System::Int32 arg, ::System::Int64 arg, Il2CppObject* arg)
		{
			return (return (::MX::GameLogic::DBModel::EchelonDB*(*)(::System::Int32, ::System::Int64, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DEFAULTSETTINGDATA_ECHELONDBCREATE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TryGetEchelon(::System::Int64 arg, ::FlatData::DefaultEchelonExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::FlatData::DefaultEchelonExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DEFAULTSETTINGDATA_TRYGETECHELON_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean ValidateData()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DEFAULTSETTINGDATA_VALIDATEDATA_OFFSET))(nullptr);
		}

		::System::Boolean TryGetDefaultMailDBs(::System::DateTime* arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::DateTime*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DEFAULTSETTINGDATA_TRYGETDEFAULTMAILDBS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* get_DefaultFurnitureDBs()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DEFAULTSETTINGDATA_GET_DEFAULTFURNITUREDBS_OFFSET))(nullptr);
		}

	};
}

