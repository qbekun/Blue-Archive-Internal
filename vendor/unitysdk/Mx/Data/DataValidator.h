#pragma once
#include "../../unitysdk.h"

namespace MX::Data { class DataBase; }
namespace FlatData { class ParcelType; }
namespace FlatData { class MissionCompleteConditionType; }

#define MX_DATA_DATAVALIDATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x197F550)
#define MX_DATA_DATAVALIDATOR_GET_RAWDATAPATH_OFFSET UNITYSDK_OFFSET(0x197F5B0)
#define MX_DATA_DATAVALIDATOR_SET_RAWDATAPATH_OFFSET UNITYSDK_OFFSET(0x197F600)
#define MX_DATA_DATAVALIDATOR_GET_TABLEBASEPATH_OFFSET UNITYSDK_OFFSET(0x197F670)
#define MX_DATA_DATAVALIDATOR_SET_TABLEBASEPATH_OFFSET UNITYSDK_OFFSET(0x197F6C0)
#define MX_DATA_DATAVALIDATOR_GET_ADDRESSABLEBASEPATH_OFFSET UNITYSDK_OFFSET(0x197F730)
#define MX_DATA_DATAVALIDATOR_SET_ADDRESSABLEBASEPATH_OFFSET UNITYSDK_OFFSET(0x197F780)
#define MX_DATA_DATAVALIDATOR_GET_MEDIARESOURCEBASEPATH_OFFSET UNITYSDK_OFFSET(0x197F7F0)
#define MX_DATA_DATAVALIDATOR_SET_MEDIARESOURCEBASEPATH_OFFSET UNITYSDK_OFFSET(0x197F840)
#define MX_DATA_DATAVALIDATOR_GET_RESOURCEBASEPATH_OFFSET UNITYSDK_OFFSET(0x197F8B0)
#define MX_DATA_DATAVALIDATOR_SET_RESOURCEBASEPATH_OFFSET UNITYSDK_OFFSET(0x197F900)
#define MX_DATA_DATAVALIDATOR_GET_UNITYSTREAMINGASSETPATH_OFFSET UNITYSDK_OFFSET(0x197F970)
#define MX_DATA_DATAVALIDATOR_SET_UNITYSTREAMINGASSETPATH_OFFSET UNITYSDK_OFFSET(0x197F9C0)
#define MX_DATA_DATAVALIDATOR_GET_DEVSTREAM_OFFSET UNITYSDK_OFFSET(0x197FA30)
#define MX_DATA_DATAVALIDATOR_SET_DEVSTREAM_OFFSET UNITYSDK_OFFSET(0x197FA80)
#define MX_DATA_DATAVALIDATOR_GET_STEP_OFFSET UNITYSDK_OFFSET(0x197FAD0)
#define MX_DATA_DATAVALIDATOR_SET_STEP_OFFSET UNITYSDK_OFFSET(0x197FB20)
#define MX_DATA_DATAVALIDATOR_GET_DATASEARCHMODE_OFFSET UNITYSDK_OFFSET(0x197FB90)
#define MX_DATA_DATAVALIDATOR_SET_DATASEARCHMODE_OFFSET UNITYSDK_OFFSET(0x197FBE0)
#define MX_DATA_DATAVALIDATOR_GET_LOCALIZEMODE_OFFSET UNITYSDK_OFFSET(0x197FC30)
#define MX_DATA_DATAVALIDATOR_SET_LOCALIZEMODE_OFFSET UNITYSDK_OFFSET(0x197FC80)
#define MX_DATA_DATAVALIDATOR_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x197FCD0)
#define MX_DATA_DATAVALIDATOR_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x197FD20)
#define MX_DATA_DATAVALIDATOR_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x197FD90)
#define MX_DATA_DATAVALIDATOR_GETVALIDATERESULT_OFFSET UNITYSDK_OFFSET(0x197FF30)
#define MX_DATA_DATAVALIDATOR_SETVALIDATERESULT_OFFSET UNITYSDK_OFFSET(0x197FF80)
#define MX_DATA_DATAVALIDATOR_SETDATASEARCHMODE_OFFSET UNITYSDK_OFFSET(0x1980060)
#define MX_DATA_DATAVALIDATOR_SETLOCALIZEMODE_OFFSET UNITYSDK_OFFSET(0x1980110)
#define MX_DATA_DATAVALIDATOR_VALIDATE_ADDUNIQUEID_OFFSET UNITYSDK_OFFSET(0x19801C0)
#define MX_DATA_DATAVALIDATOR_VALIDATE_RANGEVALUE_OFFSET UNITYSDK_OFFSET(0x19803F0)
#define MX_DATA_DATAVALIDATOR_VALIDATE_PATH_OFFSET UNITYSDK_OFFSET(0x19804A0)
#define MX_DATA_DATAVALIDATOR_SETTABLEBASEPATH_OFFSET UNITYSDK_OFFSET(0x1980520)
#define MX_DATA_DATAVALIDATOR_SETRAWDATAPATH_OFFSET UNITYSDK_OFFSET(0x19805F0)
#define MX_DATA_DATAVALIDATOR_SETADDRESSABLEBASEPATH_OFFSET UNITYSDK_OFFSET(0x19806C0)
#define MX_DATA_DATAVALIDATOR_SETMEDIARESOURCEBASEPATH_OFFSET UNITYSDK_OFFSET(0x1980790)
#define MX_DATA_DATAVALIDATOR_SETRESOURCEBASEPATH_OFFSET UNITYSDK_OFFSET(0x1980860)
#define MX_DATA_DATAVALIDATOR_SETUNITYSTREAMINGASSETPATH_OFFSET UNITYSDK_OFFSET(0x1980930)
#define MX_DATA_DATAVALIDATOR_SETDEVSTREAM_OFFSET UNITYSDK_OFFSET(0x1980A00)
#define MX_DATA_DATAVALIDATOR_SETSTEP_OFFSET UNITYSDK_OFFSET(0x1980AD0)
#define MX_DATA_DATAVALIDATOR_APPENDERRORLOG_OFFSET UNITYSDK_OFFSET(0x1980BA0)
#define MX_DATA_DATAVALIDATOR_WRITELOG_OFFSET UNITYSDK_OFFSET(0x1980D60)
#define MX_DATA_DATAVALIDATOR_WRITEERRORLOG_OFFSET UNITYSDK_OFFSET(0x19803E0)
#define MX_DATA_DATAVALIDATOR_VALIDATECHECKRELATION_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_DATAVALIDATOR_VALIDATECHECKRELATION_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_DATAVALIDATOR_VALIDATECHECKRELATION_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_DATAVALIDATOR_VALIDATEUNIQUEID_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_DATAVALIDATOR_VALIDATEUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1980D70)
#define MX_DATA_DATAVALIDATOR_VALIDATEASSET_OFFSET UNITYSDK_OFFSET(0x1980EB0)
#define MX_DATA_DATAVALIDATOR_VALIDATECHARACTERASSET_OFFSET UNITYSDK_OFFSET(0x1981020)
#define MX_DATA_DATAVALIDATOR_VALIDATEEQUALCOLUMNCOUNT_OFFSET UNITYSDK_OFFSET(0x1981240)
#define MX_DATA_DATAVALIDATOR_VALIDATEMEDIARESOURCE_OFFSET UNITYSDK_OFFSET(0x19812D0)
#define MX_DATA_DATAVALIDATOR_VALIDATEMEDIARESOURCE_OFFSET UNITYSDK_OFFSET(0x1981520)
#define MX_DATA_DATAVALIDATOR_VALIDATEPROB_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_DATAVALIDATOR_VALIDATEPARCELAMOUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_DATAVALIDATOR_VALIDATEPARCEL_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_DATAVALIDATOR_VALIDATEPARCEL_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_DATAVALIDATOR_VALIDATEPROHIBITEDCOMPLETECONDITIONTYPE_OFFSET UNITYSDK_OFFSET(0x19816E0)
#define MX_DATA_DATAVALIDATOR_VALIDATEVOICERESOURCEPATH_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_DATAVALIDATOR_VALIDATERESOURCEPATH_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_DATAVALIDATOR_VALIDATERESOURCEPATH_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_DATAVALIDATOR_VALIDATEEXISTFILEPATH_OFFSET UNITYSDK_OFFSET(0x19817D0)
#define MX_DATA_DATAVALIDATOR_VALIDATELOCALIZEIMAGERESOURCEPATH_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_DATAVALIDATOR_VALIDATEDATETIME_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_DATAVALIDATOR_VALIDATELOCALIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_DATAVALIDATOR_VALIDATELOCALIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_DATAVALIDATOR_VALIDATELOCALIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_DATAVALIDATOR_VALIDATELOCALIZEALLEQUAL_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_DATAVALIDATOR_VALIDATELOCALIZEALLEQUAL_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_DATAVALIDATOR_VALIDATE_ADDUNIQUEID_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_DATAVALIDATOR_VALIDATELOG_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_DATAVALIDATOR_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1981B50)
#define MX_DATA_DATAVALIDATOR__VALIDATELOCALIZEIMAGERESOURCEPATH_G__VALIDATELOCALIZERESOURCEPATH|87_0_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_DATAVALIDATOR__VALIDATELOCALIZE_G__ISALLEMPTY|91_0_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_DATAVALIDATOR__VALIDATELOCALIZE_G__CHECKSTRINGFORMATERROR|91_1_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::Data
{
	inline static constexpr unsigned int DataValidator_TypeDefinitionIndex = 16518;

	class DataValidator : public Il2CppObject
	{
	public:
		::System::String* _RawDataPath_k__BackingField; // 0x0
		::System::String* _TableBasePath_k__BackingField; // 0x8
		::System::String* _AddressableBasePath_k__BackingField; // 0x10
		::System::String* _MediaResourceBasePath_k__BackingField; // 0x18
		::System::String* _ResourceBasePath_k__BackingField; // 0x20
		::System::String* _UnityStreamingAssetPath_k__BackingField; // 0x28
		::System::Boolean _DevStream_k__BackingField; // 0x30
		::System::String* _Step_k__BackingField; // 0x38
		Il2CppObject* ErrorLogs; // 0x40
		::System::Boolean _validateResult; // 0x48
		::System::Boolean _DataSearchMode_k__BackingField; // 0x49
		::System::Boolean _LocalizeMode_k__BackingField; // 0x4A
		TablePosition* _Position_k__BackingField; // 0x50
		Il2CppObject* uniqueIds; // 0x58

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAVALIDATOR_.CTOR_OFFSET))(nullptr);
		}

		::System::String* get_RawDataPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAVALIDATOR_GET_RAWDATAPATH_OFFSET))(nullptr);
		}

		::System::Void set_RawDataPath(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAVALIDATOR_SET_RAWDATAPATH_OFFSET))(str, nullptr);
		}

		::System::String* get_TableBasePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAVALIDATOR_GET_TABLEBASEPATH_OFFSET))(nullptr);
		}

		::System::Void set_TableBasePath(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAVALIDATOR_SET_TABLEBASEPATH_OFFSET))(str, nullptr);
		}

		::System::String* get_AddressableBasePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAVALIDATOR_GET_ADDRESSABLEBASEPATH_OFFSET))(nullptr);
		}

		::System::Void set_AddressableBasePath(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAVALIDATOR_SET_ADDRESSABLEBASEPATH_OFFSET))(str, nullptr);
		}

		::System::String* get_MediaResourceBasePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAVALIDATOR_GET_MEDIARESOURCEBASEPATH_OFFSET))(nullptr);
		}

		::System::Void set_MediaResourceBasePath(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAVALIDATOR_SET_MEDIARESOURCEBASEPATH_OFFSET))(str, nullptr);
		}

		::System::String* get_ResourceBasePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAVALIDATOR_GET_RESOURCEBASEPATH_OFFSET))(nullptr);
		}

		::System::Void set_ResourceBasePath(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAVALIDATOR_SET_RESOURCEBASEPATH_OFFSET))(str, nullptr);
		}

		::System::String* get_UnityStreamingAssetPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAVALIDATOR_GET_UNITYSTREAMINGASSETPATH_OFFSET))(nullptr);
		}

		::System::Void set_UnityStreamingAssetPath(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAVALIDATOR_SET_UNITYSTREAMINGASSETPATH_OFFSET))(str, nullptr);
		}

		::System::Boolean get_DevStream()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAVALIDATOR_GET_DEVSTREAM_OFFSET))(nullptr);
		}

		::System::Void set_DevStream(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAVALIDATOR_SET_DEVSTREAM_OFFSET))(arg, nullptr);
		}

		::System::String* get_Step()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAVALIDATOR_GET_STEP_OFFSET))(nullptr);
		}

		::System::Void set_Step(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAVALIDATOR_SET_STEP_OFFSET))(str, nullptr);
		}

		::System::Boolean get_DataSearchMode()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAVALIDATOR_GET_DATASEARCHMODE_OFFSET))(nullptr);
		}

		::System::Void set_DataSearchMode(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAVALIDATOR_SET_DATASEARCHMODE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_LocalizeMode()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAVALIDATOR_GET_LOCALIZEMODE_OFFSET))(nullptr);
		}

		::System::Void set_LocalizeMode(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAVALIDATOR_SET_LOCALIZEMODE_OFFSET))(arg, nullptr);
		}

		TablePosition* get_Position()
		{
			return (return (TablePosition*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAVALIDATOR_GET_POSITION_OFFSET))(nullptr);
		}

		::System::Void set_Position(TablePosition* arg)
		{
			((::System::Void(*)(TablePosition*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAVALIDATOR_SET_POSITION_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAVALIDATOR_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Boolean GetValidateResult()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAVALIDATOR_GETVALIDATERESULT_OFFSET))(nullptr);
		}

		::System::Void SetValidateResult(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAVALIDATOR_SETVALIDATERESULT_OFFSET))(arg, nullptr);
		}

		::System::Void SetDataSearchMode(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAVALIDATOR_SETDATASEARCHMODE_OFFSET))(arg, nullptr);
		}

		::System::Void SetLocalizeMode(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAVALIDATOR_SETLOCALIZEMODE_OFFSET))(arg, nullptr);
		}

		::System::Void Validate_AddUniqueId(::MX::Data::DataBase* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::MX::Data::DataBase*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAVALIDATOR_VALIDATE_ADDUNIQUEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Validate_RangeValue(::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::System::Int64, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAVALIDATOR_VALIDATE_RANGEVALUE_OFFSET))(arg, arg, arg, str, nullptr);
		}

		::System::Boolean Validate_Path(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAVALIDATOR_VALIDATE_PATH_OFFSET))(str, nullptr);
		}

		::System::Void SetTableBasePath(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAVALIDATOR_SETTABLEBASEPATH_OFFSET))(str, nullptr);
		}

		::System::Void SetRawDataPath(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAVALIDATOR_SETRAWDATAPATH_OFFSET))(str, nullptr);
		}

		::System::Void SetAddressableBasePath(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAVALIDATOR_SETADDRESSABLEBASEPATH_OFFSET))(str, nullptr);
		}

		::System::Void SetMediaResourceBasePath(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAVALIDATOR_SETMEDIARESOURCEBASEPATH_OFFSET))(str, nullptr);
		}

		::System::Void SetResourceBasePath(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAVALIDATOR_SETRESOURCEBASEPATH_OFFSET))(str, nullptr);
		}

		::System::Void SetUnityStreamingAssetPath(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAVALIDATOR_SETUNITYSTREAMINGASSETPATH_OFFSET))(str, nullptr);
		}

		::System::Void SetDevStream(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAVALIDATOR_SETDEVSTREAM_OFFSET))(str, nullptr);
		}

		::System::Void SetStep(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAVALIDATOR_SETSTEP_OFFSET))(str, nullptr);
		}

		::System::Void AppendErrorLog(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAVALIDATOR_APPENDERRORLOG_OFFSET))(str, nullptr);
		}

		::System::Void WriteLog(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAVALIDATOR_WRITELOG_OFFSET))(str, nullptr);
		}

		::System::Void WriteErrorLog(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAVALIDATOR_WRITEERRORLOG_OFFSET))(str, nullptr);
		}

		::System::Boolean ValidateCheckRelation(Il2CppObject* arg, ::System::Int64 arg, ::System::String* str)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::System::Int64, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAVALIDATOR_VALIDATECHECKRELATION_OFFSET))(arg, arg, str, nullptr);
		}

		::System::Boolean ValidateCheckRelation(Il2CppObject* arg, ::System::Int64 arg, ::System::String* str, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::System::Int64, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAVALIDATOR_VALIDATECHECKRELATION_OFFSET))(arg, arg, str, arg, nullptr);
		}

		::System::Void ValidateCheckRelation(::System::String* str, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAVALIDATOR_VALIDATECHECKRELATION_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Boolean ValidateUniqueId(Il2CppObject* arg, Il2CppObject* arg, ::System::String* str)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, Il2CppObject*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAVALIDATOR_VALIDATEUNIQUEID_OFFSET))(arg, arg, str, nullptr);
		}

		::System::Boolean ValidateUniqueId(::System::String* str, ::System::String* str, ::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAVALIDATOR_VALIDATEUNIQUEID_OFFSET))(str, str, arg, nullptr);
		}

		::System::Boolean ValidateAsset(::System::String* str, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAVALIDATOR_VALIDATEASSET_OFFSET))(str, str, nullptr);
		}

		::System::Boolean ValidateCharacterAsset(::System::String* str, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAVALIDATOR_VALIDATECHARACTERASSET_OFFSET))(str, str, nullptr);
		}

		::System::Boolean ValidateEqualColumnCount(::System::Int32 arg, ::System::String* str, ::System::Int32 arg, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::String*, ::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAVALIDATOR_VALIDATEEQUALCOLUMNCOUNT_OFFSET))(arg, str, arg, str, nullptr);
		}

		::System::Boolean ValidateMediaResource(::System::Int32 arg, Il2CppObject* arg, ::System::String* str, ::System::Int32 arg, Il2CppObject* arg, ::System::String* str, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::Int32, Il2CppObject*, ::System::String*, ::System::Int32, Il2CppObject*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAVALIDATOR_VALIDATEMEDIARESOURCE_OFFSET))(arg, arg, str, arg, arg, str, str, nullptr);
		}

		::System::Boolean ValidateMediaResource(::System::String* str, ::System::String* str, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAVALIDATOR_VALIDATEMEDIARESOURCE_OFFSET))(str, str, str, nullptr);
		}

		::System::Boolean ValidateProb(::System::Int64 arg, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAVALIDATOR_VALIDATEPROB_OFFSET))(arg, str, nullptr);
		}

		::System::Void ValidateParcelAmount(::FlatData::ParcelType* arg, ::System::Int64 arg, ::System::String* str)
		{
			((::System::Void(*)(::FlatData::ParcelType*, ::System::Int64, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAVALIDATOR_VALIDATEPARCELAMOUNT_OFFSET))(arg, arg, str, nullptr);
		}

		::System::Boolean ValidateParcel(::FlatData::ParcelType* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::FlatData::ParcelType*, ::System::Int64, ::System::Int64, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAVALIDATOR_VALIDATEPARCEL_OFFSET))(arg, arg, arg, str, nullptr);
		}

		::System::Boolean ValidateParcel(::FlatData::ParcelType* arg, ::System::Int64 arg, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::FlatData::ParcelType*, ::System::Int64, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAVALIDATOR_VALIDATEPARCEL_OFFSET))(arg, arg, str, nullptr);
		}

		::System::Void ValidateProhibitedCompleteConditionType(::FlatData::MissionCompleteConditionType* arg)
		{
			((::System::Void(*)(::FlatData::MissionCompleteConditionType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAVALIDATOR_VALIDATEPROHIBITEDCOMPLETECONDITIONTYPE_OFFSET))(arg, nullptr);
		}

		::System::Boolean ValidateVoiceResourcePath(::System::String* str, ::System::String* str, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAVALIDATOR_VALIDATEVOICERESOURCEPATH_OFFSET))(str, str, arg, nullptr);
		}

		::System::Boolean ValidateResourcePath(::System::String* str, ::System::String* str, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAVALIDATOR_VALIDATERESOURCEPATH_OFFSET))(str, str, arg, nullptr);
		}

		::System::Boolean ValidateResourcePath(::System::String* str, ::System::String* str, ::System::String* str, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAVALIDATOR_VALIDATERESOURCEPATH_OFFSET))(str, str, str, arg, nullptr);
		}

		::System::Boolean ValidateExistFilePath(::System::String* str, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAVALIDATOR_VALIDATEEXISTFILEPATH_OFFSET))(str, str, nullptr);
		}

		::System::Boolean ValidateLocalizeImageResourcePath(::System::String* str, ::System::String* str, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAVALIDATOR_VALIDATELOCALIZEIMAGERESOURCEPATH_OFFSET))(str, str, arg, nullptr);
		}

		::System::Boolean ValidateDateTime(::System::String* str, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAVALIDATOR_VALIDATEDATETIME_OFFSET))(str, str, nullptr);
		}

		::System::Boolean ValidateLocalize(::System::UInt32 arg, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::UInt32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAVALIDATOR_VALIDATELOCALIZE_OFFSET))(arg, str, nullptr);
		}

		::System::Boolean ValidateLocalize(::System::String* str, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAVALIDATOR_VALIDATELOCALIZE_OFFSET))(str, str, nullptr);
		}

		::System::Boolean ValidateLocalize(::System::String* str, ::System::String* str, ::System::String* str, ::System::String* str, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAVALIDATOR_VALIDATELOCALIZE_OFFSET))(str, str, str, str, str, nullptr);
		}

		::System::Boolean ValidateLocalizeAllEqual(::System::String* str, ::System::String* str, ::System::String* str, ::System::String* str, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAVALIDATOR_VALIDATELOCALIZEALLEQUAL_OFFSET))(str, str, str, str, str, nullptr);
		}

		::System::Boolean ValidateLocalizeAllEqual(::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAVALIDATOR_VALIDATELOCALIZEALLEQUAL_OFFSET))(arg, arg, arg, arg, str, nullptr);
		}

		::System::Boolean Validate_AddUniqueId(::MX::Data::DataBase* arg, ::System::Int64 arg, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::MX::Data::DataBase*, ::System::Int64, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAVALIDATOR_VALIDATE_ADDUNIQUEID_OFFSET))(arg, arg, str, nullptr);
		}

		::System::Boolean ValidateLog(::System::Boolean arg, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::Boolean, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAVALIDATOR_VALIDATELOG_OFFSET))(arg, str, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAVALIDATOR_.CCTOR_OFFSET))(nullptr);
		}

		::System::Boolean _ValidateLocalizeImageResourcePath_g__ValidateLocalizeResourcePath|87_0(::System::String* str, ::System::String* str, ::System::String&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAVALIDATOR__VALIDATELOCALIZEIMAGERESOURCEPATH_G__VALIDATELOCALIZERESOURCEPATH|87_0_OFFSET))(str, str, arg, nullptr);
		}

		::System::Boolean _ValidateLocalize_g__IsAllEmpty|91_0(::System::String* str, ::System::String* str, ::System::String* str, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAVALIDATOR__VALIDATELOCALIZE_G__ISALLEMPTY|91_0_OFFSET))(str, str, str, str, nullptr);
		}

		::System::Boolean _ValidateLocalize_g__CheckStringFormatError|91_1(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAVALIDATOR__VALIDATELOCALIZE_G__CHECKSTRINGFORMATERROR|91_1_OFFSET))(str, nullptr);
		}

	};
}

