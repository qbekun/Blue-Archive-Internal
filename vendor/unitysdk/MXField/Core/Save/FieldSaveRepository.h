#pragma once
#include "../../../unitysdk.h"

namespace MXField::Shared::Model { class FieldSnapshot; }
namespace MXField::Core::Save { class FieldSaveSO; }
namespace MXField::Shared::Data { class FieldCurtainCallFreeModeInfo; }

#define MXFIELD_CORE_SAVE_FIELDSAVEREPOSITORY_SET_PLAYABLEDATEID_EXTENSIONPERIOD_OFFSET UNITYSDK_OFFSET(0xEE0D80)
#define MXFIELD_CORE_SAVE_FIELDSAVEREPOSITORY_CLEAR_OFFSET UNITYSDK_OFFSET(0xEE0D90)
#define MXFIELD_CORE_SAVE_FIELDSAVEREPOSITORY_GET_SAVESO_OFFSET UNITYSDK_OFFSET(0xEE0EC0)
#define MXFIELD_CORE_SAVE_FIELDSAVEREPOSITORY_GET_HISTORYDATESAVES_OFFSET UNITYSDK_OFFSET(0xEE0ED0)
#define MXFIELD_CORE_SAVE_FIELDSAVEREPOSITORY_GETSAVESO_OFFSET UNITYSDK_OFFSET(0xEE0EE0)
#define MXFIELD_CORE_SAVE_FIELDSAVEREPOSITORY_GET_ISEXTENSIONPERIOD_OFFSET UNITYSDK_OFFSET(0xEE1090)
#define MXFIELD_CORE_SAVE_FIELDSAVEREPOSITORY_SET_SNAPSHOT_OFFSET UNITYSDK_OFFSET(0xEE10A0)
#define MXFIELD_CORE_SAVE_FIELDSAVEREPOSITORY_GET_PLAYABLEDATEID_EXTENSIONPERIOD_OFFSET UNITYSDK_OFFSET(0xEE10B0)
#define MXFIELD_CORE_SAVE_FIELDSAVEREPOSITORY_GETFREEMODESAVESO_OFFSET UNITYSDK_OFFSET(0xEE10C0)
#define MXFIELD_CORE_SAVE_FIELDSAVEREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0xEE1230)
#define MXFIELD_CORE_SAVE_FIELDSAVEREPOSITORY_GET_PLAYABLEDATES_OFFSET UNITYSDK_OFFSET(0xEE1300)
#define MXFIELD_CORE_SAVE_FIELDSAVEREPOSITORY_GET_SNAPSHOT_OFFSET UNITYSDK_OFFSET(0xEE1310)
#define MXFIELD_CORE_SAVE_FIELDSAVEREPOSITORY_SET_STAGEHISTORYDBS_OFFSET UNITYSDK_OFFSET(0xEE1320)
#define MXFIELD_CORE_SAVE_FIELDSAVEREPOSITORY_SET_ISEXTENSIONPERIOD_OFFSET UNITYSDK_OFFSET(0xEE1330)
#define MXFIELD_CORE_SAVE_FIELDSAVEREPOSITORY_REFRESH_OFFSET UNITYSDK_OFFSET(0xEE1340)
#define MXFIELD_CORE_SAVE_FIELDSAVEREPOSITORY_GET_STAGEHISTORYDBS_OFFSET UNITYSDK_OFFSET(0xEE1700)
#define MXFIELD_CORE_SAVE_FIELDSAVEREPOSITORY_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xEE1710)
#define MXFIELD_CORE_SAVE_FIELDSAVEREPOSITORY_SET_SAVESO_OFFSET UNITYSDK_OFFSET(0xEE1A90)
#define MXFIELD_CORE_SAVE_FIELDSAVEREPOSITORY_ISREPLAYDATE_OFFSET UNITYSDK_OFFSET(0xEE0FD0)

namespace MXField::Core::Save
{
	inline static constexpr unsigned int FieldSaveRepository_TypeDefinitionIndex = 10999;

	class FieldSaveRepository : public Il2CppObject
	{
	public:
		::MXField::Shared::Model::FieldSnapshot* _Snapshot_k__BackingField; // 0x18
		Il2CppObject* _StageHistoryDBs_k__BackingField; // 0x20
		::MXField::Core::Save::FieldSaveSO* _SaveSO_k__BackingField; // 0x28
		Il2CppObject* _HistoryDateSaves_k__BackingField; // 0x30
		Il2CppObject* _PlayableDates_k__BackingField; // 0x38
		::System::Boolean _isExtensionPeriod_k__BackingField; // 0x40
		::System::Int64 _PlayableDateId_ExtensionPeriod_k__BackingField; // 0x48

		::System::Void set_PlayableDateId_ExtensionPeriod(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_SAVE_FIELDSAVEREPOSITORY_SET_PLAYABLEDATEID_EXTENSIONPERIOD_OFFSET))(arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_SAVE_FIELDSAVEREPOSITORY_CLEAR_OFFSET))(nullptr);
		}

		::MXField::Core::Save::FieldSaveSO* get_SaveSO()
		{
			return ((::MXField::Core::Save::FieldSaveSO*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_SAVE_FIELDSAVEREPOSITORY_GET_SAVESO_OFFSET))(nullptr);
		}

		Il2CppObject* get_HistoryDateSaves()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_SAVE_FIELDSAVEREPOSITORY_GET_HISTORYDATESAVES_OFFSET))(nullptr);
		}

		::MXField::Core::Save::FieldSaveSO* GetSaveSO(::System::Int64 arg)
		{
			return ((::MXField::Core::Save::FieldSaveSO*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_SAVE_FIELDSAVEREPOSITORY_GETSAVESO_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_isExtensionPeriod()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_SAVE_FIELDSAVEREPOSITORY_GET_ISEXTENSIONPERIOD_OFFSET))(nullptr);
		}

		::System::Void set_Snapshot(::MXField::Shared::Model::FieldSnapshot* arg)
		{
			((::System::Void(*)(::MXField::Shared::Model::FieldSnapshot*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_SAVE_FIELDSAVEREPOSITORY_SET_SNAPSHOT_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_PlayableDateId_ExtensionPeriod()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_SAVE_FIELDSAVEREPOSITORY_GET_PLAYABLEDATEID_EXTENSIONPERIOD_OFFSET))(nullptr);
		}

		::MXField::Core::Save::FieldSaveSO* GetFreeModeSaveSO(::MXField::Shared::Data::FieldCurtainCallFreeModeInfo* arg)
		{
			return ((::MXField::Core::Save::FieldSaveSO*(*)(::MXField::Shared::Data::FieldCurtainCallFreeModeInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_SAVE_FIELDSAVEREPOSITORY_GETFREEMODESAVESO_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_SAVE_FIELDSAVEREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* get_PlayableDates()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_SAVE_FIELDSAVEREPOSITORY_GET_PLAYABLEDATES_OFFSET))(nullptr);
		}

		::MXField::Shared::Model::FieldSnapshot* get_Snapshot()
		{
			return ((::MXField::Shared::Model::FieldSnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_SAVE_FIELDSAVEREPOSITORY_GET_SNAPSHOT_OFFSET))(nullptr);
		}

		::System::Void set_StageHistoryDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_SAVE_FIELDSAVEREPOSITORY_SET_STAGEHISTORYDBS_OFFSET))(arg, nullptr);
		}

		::System::Void set_isExtensionPeriod(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_SAVE_FIELDSAVEREPOSITORY_SET_ISEXTENSIONPERIOD_OFFSET))(arg, nullptr);
		}

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_SAVE_FIELDSAVEREPOSITORY_REFRESH_OFFSET))(nullptr);
		}

		Il2CppObject* get_StageHistoryDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_SAVE_FIELDSAVEREPOSITORY_GET_STAGEHISTORYDBS_OFFSET))(nullptr);
		}

		::System::Void Initialize(::MXField::Shared::Model::FieldSnapshot* arg, Il2CppObject* arg2, ::System::Int64 arg3)
		{
			((::System::Void(*)(::MXField::Shared::Model::FieldSnapshot*, Il2CppObject*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_SAVE_FIELDSAVEREPOSITORY_INITIALIZE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void set_SaveSO(::MXField::Core::Save::FieldSaveSO* arg)
		{
			((::System::Void(*)(::MXField::Core::Save::FieldSaveSO*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_SAVE_FIELDSAVEREPOSITORY_SET_SAVESO_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsReplayDate(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_SAVE_FIELDSAVEREPOSITORY_ISREPLAYDATE_OFFSET))(arg, nullptr);
		}

	};
}

