#pragma once
#include "../../unitysdk.h"

namespace MX::Core::Crypto { class Of96167406e5b1a7e54c17b594689c644ed709d4c4a1ce152b962fbbc569d2e47; }
namespace MX::GameData::Repository { class IRepositoryGroup; }

#define MX_DATA_DATAMANAGER_GET_ISENABLEDGLOBALCACHEALL_OFFSET UNITYSDK_OFFSET(0x180C520)
#define MX_DATA_DATAMANAGER_SET_ISENABLEDGLOBALCACHEALL_OFFSET UNITYSDK_OFFSET(0x180C570)
#define MX_DATA_DATAMANAGER_SETSQLCIPHER_OFFSET UNITYSDK_OFFSET(0x180C5C0)
#define MX_DATA_DATAMANAGER_GET_REPOSITORY_OFFSET UNITYSDK_OFFSET(0x180C710)
#define MX_DATA_DATAMANAGER_SET_REPOSITORY_OFFSET UNITYSDK_OFFSET(0x180C760)
#define MX_DATA_DATAMANAGER_SETREPOSITORYGROUP_OFFSET UNITYSDK_OFFSET(0x1803D70)
#define MX_DATA_DATAMANAGER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1802F30)
#define MX_DATA_DATAMANAGER_CLEARFLATTABLEOBJECT_OFFSET UNITYSDK_OFFSET(0x1802040)
#define MX_DATA_DATAMANAGER_VALIDATEEXCEL_OFFSET UNITYSDK_OFFSET(0x1801CF0)
#define MX_DATA_DATAMANAGER_ADDTABLE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_DATAMANAGER_PARSEFLATDATA_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_DATAMANAGER_GETTABLE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_DATAMANAGER_GETTABLEASBYTES_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_DATAMANAGER_HASTABLE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_DATAMANAGER_ADD_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_DATAMANAGER_GET_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_DATAMANAGER_HAS_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_DATAMANAGER_LOADDATAFROMASSET_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_DATAMANAGER_REMOVE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_DATAMANAGER_LOADDATAFROMFILE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_DATAMANAGER_CLEARDATATABLES_OFFSET UNITYSDK_OFFSET(0x1803090)
#define MX_DATA_DATAMANAGER_GETLOADEDDATATABLES_OFFSET UNITYSDK_OFFSET(0x180C7D0)
#define MX_DATA_DATAMANAGER_LOADDATAFROMFILE_OFFSET UNITYSDK_OFFSET(0x180C880)
#define MX_DATA_DATAMANAGER_LOADDATAFROMFILEFORSQLITE_OFFSET UNITYSDK_OFFSET(0x180CC60)
#define MX_DATA_DATAMANAGER_DATAPREPROCESSING_OFFSET UNITYSDK_OFFSET(0x1801AD0)
#define MX_DATA_DATAMANAGER_LOAD_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_DATAMANAGER_COMPARETOOLDTABLEALL_OFFSET UNITYSDK_OFFSET(0x180D0B0)
#define MX_DATA_DATAMANAGER_LOADINBUILDJSON_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_DATAMANAGER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x180D2E0)

namespace MX::Data
{
	inline static constexpr unsigned int DataManager_TypeDefinitionIndex = 15703;

	class DataManager : public Il2CppObject
	{
	public:
		Il2CppObject* tableDic; // 0x0
		Il2CppObject* dataDic; // 0x8
		::System::Boolean _IsEnabledGlobalCacheAll_k__BackingField; // 0x10
		::MX::Core::Crypto::Of96167406e5b1a7e54c17b594689c644ed709d4c4a1ce152b962fbbc569d2e47* SQLKey; // 0x18
		::System::String* LicenseKey; // 0x20
		::MX::GameData::Repository::IRepositoryGroup* _Repository_k__BackingField; // 0x28

		::System::Boolean get_IsEnabledGlobalCacheAll()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAMANAGER_GET_ISENABLEDGLOBALCACHEALL_OFFSET))(nullptr);
		}

		::System::Void set_IsEnabledGlobalCacheAll(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAMANAGER_SET_ISENABLEDGLOBALCACHEALL_OFFSET))(arg, nullptr);
		}

		::System::Boolean SetSQLCipher(::System::String* str, ::System::String* str, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAMANAGER_SETSQLCIPHER_OFFSET))(str, str, arg, arg, nullptr);
		}

		::MX::GameData::Repository::IRepositoryGroup* get_Repository()
		{
			return (return (::MX::GameData::Repository::IRepositoryGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAMANAGER_GET_REPOSITORY_OFFSET))(nullptr);
		}

		::System::Void set_Repository(::MX::GameData::Repository::IRepositoryGroup* arg)
		{
			((::System::Void(*)(::MX::GameData::Repository::IRepositoryGroup*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAMANAGER_SET_REPOSITORY_OFFSET))(arg, nullptr);
		}

		::System::Void SetRepositoryGroup(::MX::GameData::Repository::IRepositoryGroup* arg)
		{
			((::System::Void(*)(::MX::GameData::Repository::IRepositoryGroup*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAMANAGER_SETREPOSITORYGROUP_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAMANAGER_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void ClearFlatTableObject()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAMANAGER_CLEARFLATTABLEOBJECT_OFFSET))(nullptr);
		}

		::System::Void ValidateExcel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAMANAGER_VALIDATEEXCEL_OFFSET))(nullptr);
		}

		Il2CppObject* AddTable(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (Il2CppObject*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAMANAGER_ADDTABLE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* ParseFlatData(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (Il2CppObject*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAMANAGER_PARSEFLATDATA_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetTable()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAMANAGER_GETTABLE_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetTableAsBytes()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAMANAGER_GETTABLEASBYTES_OFFSET))(nullptr);
		}

		::System::Boolean HasTable()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAMANAGER_HASTABLE_OFFSET))(nullptr);
		}

		::System::Void Add()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAMANAGER_ADD_OFFSET))(nullptr);
		}

		Il2CppObject* Get()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAMANAGER_GET_OFFSET))(nullptr);
		}

		::System::Boolean Has()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAMANAGER_HAS_OFFSET))(nullptr);
		}

		::System::Void LoadDataFromAsset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAMANAGER_LOADDATAFROMASSET_OFFSET))(nullptr);
		}

		::System::Boolean Remove()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAMANAGER_REMOVE_OFFSET))(nullptr);
		}

		::System::Void LoadDataFromFile(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAMANAGER_LOADDATAFROMFILE_OFFSET))(str, nullptr);
		}

		::System::Void ClearDataTables(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAMANAGER_CLEARDATATABLES_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetLoadedDataTables()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAMANAGER_GETLOADEDDATATABLES_OFFSET))(nullptr);
		}

		::System::Void LoadDataFromFile(::System::Type* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Type*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAMANAGER_LOADDATAFROMFILE_OFFSET))(arg, str, nullptr);
		}

		::System::Void LoadDataFromFileForSQLite(::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAMANAGER_LOADDATAFROMFILEFORSQLITE_OFFSET))(arg, nullptr);
		}

		::System::Void DataPreprocessing()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAMANAGER_DATAPREPROCESSING_OFFSET))(nullptr);
		}

		Il2CppObject* Load()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAMANAGER_LOAD_OFFSET))(nullptr);
		}

		::System::Void CompareToOldTableAll(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAMANAGER_COMPARETOOLDTABLEALL_OFFSET))(str, nullptr);
		}

		Il2CppObject* LoadInBuildJson()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAMANAGER_LOADINBUILDJSON_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAMANAGER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

