#pragma once
#include "../../unitysdk.h"

#define MX_DATA_DATABASEFORSQLITE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x180A8D0)
#define MX_DATA_DATABASEFORSQLITE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x180A8E0)
#define MX_DATA_DATABASEFORSQLITE_INITIALIZECOMMON_OFFSET UNITYSDK_OFFSET(0x180A920)
#define MX_DATA_DATABASEFORSQLITE_INITIALIZECLIENT_OFFSET UNITYSDK_OFFSET(0x180A930)
#define MX_DATA_DATABASEFORSQLITE_INITIALIZESERVER_OFFSET UNITYSDK_OFFSET(0x180A940)
#define MX_DATA_DATABASEFORSQLITE_INITIALIZEVALIDATOR_OFFSET UNITYSDK_OFFSET(0x180A950)
#define MX_DATA_DATABASEFORSQLITE_DATAPREPROCESSING_OFFSET UNITYSDK_OFFSET(0x180A960)
#define MX_DATA_DATABASEFORSQLITE_PREPROCESSCOMMON_OFFSET UNITYSDK_OFFSET(0x180A9A0)
#define MX_DATA_DATABASEFORSQLITE_PREPROCESSCLIENT_OFFSET UNITYSDK_OFFSET(0x180A9B0)
#define MX_DATA_DATABASEFORSQLITE_PREPROCESSSERVER_OFFSET UNITYSDK_OFFSET(0x180A9C0)
#define MX_DATA_DATABASEFORSQLITE_VALIDATEEXCEL_OFFSET UNITYSDK_OFFSET(0x180A9D0)
#define MX_DATA_DATABASEFORSQLITE_VALIDATE_OFFSET UNITYSDK_OFFSET(0x180A9F0)
#define MX_DATA_DATABASEFORSQLITE_LOAD_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_DATABASEFORSQLITE_ISLOADED_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_DATABASEFORSQLITE_REMOVE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_DATABASEFORSQLITE_GET_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_DATABASEFORSQLITE_MAKEKEY_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_DATABASEFORSQLITE_LOADOLD_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_DATABASEFORSQLITE_COMPARETOOLDTABLEALL_OFFSET UNITYSDK_OFFSET(0x180AA00)
#define MX_DATA_DATABASEFORSQLITE_COMPARETOOLDTABLE_OFFSET UNITYSDK_OFFSET(0x180AA50)
#define MX_DATA_DATABASEFORSQLITE_COMPARETOOLDTABLE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_DATABASEFORSQLITE_COMPARETOOLDFLATBUFFER_OFFSET UNITYSDK_OFFSET(0x180AA60)
#define MX_DATA_DATABASEFORSQLITE_COMPARETOOLDTABLE_OFFSET UNITYSDK_OFFSET(0x180B8A0)
#define MX_DATA_DATABASEFORSQLITE_COMPARETOOLDDATACLASS_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_DATABASEFORSQLITE_COMPARETOOLDOBJ_OFFSET UNITYSDK_OFFSET(0x180B9B0)
#define MX_DATA_DATABASEFORSQLITE_.CTOR_OFFSET UNITYSDK_OFFSET(0x18095D0)
#define MX_DATA_DATABASEFORSQLITE__COMPARETOOLDFLATBUFFER_G__CHECKVALID|24_0_OFFSET UNITYSDK_OFFSET(0x180B860)

namespace MX::Data
{
	inline static constexpr unsigned int DataBaseForSQLite_TypeDefinitionIndex = 15701;

	class DataBaseForSQLite : public Il2CppObject
	{
	public:
		::System::Boolean globalCacheAll; // 0x10
		Il2CppObject* repositoryDic; // 0x18
		Il2CppObject* excludePropertySet; // 0x20

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATABASEFORSQLITE_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void Initialize(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATABASEFORSQLITE_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void InitializeCommon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATABASEFORSQLITE_INITIALIZECOMMON_OFFSET))(nullptr);
		}

		::System::Void InitializeClient()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATABASEFORSQLITE_INITIALIZECLIENT_OFFSET))(nullptr);
		}

		::System::Void InitializeServer()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATABASEFORSQLITE_INITIALIZESERVER_OFFSET))(nullptr);
		}

		::System::Void InitializeValidator()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATABASEFORSQLITE_INITIALIZEVALIDATOR_OFFSET))(nullptr);
		}

		::System::Void DataPreprocessing()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATABASEFORSQLITE_DATAPREPROCESSING_OFFSET))(nullptr);
		}

		::System::Void PreprocessCommon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATABASEFORSQLITE_PREPROCESSCOMMON_OFFSET))(nullptr);
		}

		::System::Void PreprocessClient()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATABASEFORSQLITE_PREPROCESSCLIENT_OFFSET))(nullptr);
		}

		::System::Void PreprocessServer()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATABASEFORSQLITE_PREPROCESSSERVER_OFFSET))(nullptr);
		}

		::System::Boolean ValidateExcel()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATABASEFORSQLITE_VALIDATEEXCEL_OFFSET))(nullptr);
		}

		::System::Void Validate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATABASEFORSQLITE_VALIDATE_OFFSET))(nullptr);
		}

		::System::Void Load(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATABASEFORSQLITE_LOAD_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsLoaded()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATABASEFORSQLITE_ISLOADED_OFFSET))(nullptr);
		}

		::System::Void Remove()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATABASEFORSQLITE_REMOVE_OFFSET))(nullptr);
		}

		Il2CppObject* Get()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATABASEFORSQLITE_GET_OFFSET))(nullptr);
		}

		::System::Type* MakeKey()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATABASEFORSQLITE_MAKEKEY_OFFSET))(nullptr);
		}

		::System::Void LoadOld(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATABASEFORSQLITE_LOADOLD_OFFSET))(str, nullptr);
		}

		::System::Void CompareToOldTableAll(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATABASEFORSQLITE_COMPARETOOLDTABLEALL_OFFSET))(str, nullptr);
		}

		::System::Void CompareToOldTable(::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATABASEFORSQLITE_COMPARETOOLDTABLE_OFFSET))(str, arg, nullptr);
		}

		::System::Int32 CompareToOldTable(::System::String* str, ::System::Boolean arg, Il2CppObject* arg)
		{
			return (return (::System::Int32(*)(::System::String*, ::System::Boolean, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATABASEFORSQLITE_COMPARETOOLDTABLE_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Text::StringBuilder* CompareToOldFlatBuffer(::System::Object* arg, ::System::Object* arg, Il2CppObject* arg, ::System::String* str, ::System::String* str)
		{
			return (return (::System::Text::StringBuilder*(*)(::System::Object*, ::System::Object*, Il2CppObject*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATABASEFORSQLITE_COMPARETOOLDFLATBUFFER_OFFSET))(arg, arg, arg, str, str, nullptr);
		}

		::System::Boolean CompareToOldTable(::System::Object* arg, ::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATABASEFORSQLITE_COMPARETOOLDTABLE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void CompareToOldDataClass()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATABASEFORSQLITE_COMPARETOOLDDATACLASS_OFFSET))(nullptr);
		}

		::System::Void CompareToOldObj(::System::Object* arg, ::System::Object* arg, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::Object*, ::System::Object*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATABASEFORSQLITE_COMPARETOOLDOBJ_OFFSET))(arg, arg, str, str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATABASEFORSQLITE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _CompareToOldFlatBuffer_g__CheckValid|24_0(::System::Object* arg, ::System::Object* arg, ::System::String* str, <>c__DisplayClass24_0&* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Object*, ::System::String*, <>c__DisplayClass24_0&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATABASEFORSQLITE__COMPARETOOLDFLATBUFFER_G__CHECKVALID|24_0_OFFSET))(arg, arg, str, arg, nullptr);
		}

	};
}

